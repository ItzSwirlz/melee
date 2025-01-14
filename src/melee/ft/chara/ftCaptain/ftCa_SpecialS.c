#include "ftCa_SpecialS.h"

#include "ftCa_Init.h"
#include "types.h"

#include "ef/eflib.h"
#include "ef/efsync.h"
#include "ft/ft_081B.h"
#include "ft/ft_0877.h"
#include "ft/ft_08A4.h"
#include "ft/ftcommon.h"
#include "ft/ftlib.h"
#include "ft/inlines.h"
#include "ft/types.h"
#include "ftCommon/ftCo_FallSpecial.h"

#include <dolphin/mtx/types.h>

void ftCa_SpecialS_RemoveGFX(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    efLib_DestroyAll(gobj);
    fp->fv.ca.during_specials = false;
    fp->fv.ca.during_specials_start = false;
}

static void setCallbacks(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    fp->cb.x21DC_callback_OnTakeDamage = ftCa_Init_800E28C8;
    fp->cb.x21E4_callback_OnDeath2 = ftCa_Init_800E28C8;
}

static void resetCmdVarsGround(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    u32* vars = (u32*) &fp->cmd_vars[0];
    vars[0] = vars[1] = vars[2] = vars[3] = 0;
    ftCommon_8007D7FC(fp);
}

static inline void resetVel(Fighter* fp)
{
    Vec3* vel = &fp->self_vel;
    vel->x = vel->y = vel->z = 0;
}

void ftCa_SpecialS_Enter(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    resetCmdVarsGround(gobj);
    Fighter_ChangeMotionState(gobj, ftCa_MS_SpecialSStart, 0, 0, 1, 0, NULL);
    setCallbacks(gobj);
    ftAnim_8006EBA4(gobj);
    switch (ftLib_800872A4(gobj)) {
    case FTKIND_CAPTAIN: {
        efSync_Spawn(1169, gobj, fp->parts[FtPart_HeadN].joint);
        fp->fv.ca.during_specials_start = true;
        break;
    }
    case FTKIND_GANON:
        efSync_Spawn(1293, gobj, fp->parts[FtPart_L2ndNb].joint);
        fp->fv.ca.during_specials_start = true;
        break;
    }
    fp->fv.ca.during_specials = false;
    fp->cb.x21D4_callback_EnterHitlag = efLib_PauseAll;
    fp->cb.x21D8_callback_ExitHitlag = efLib_ResumeAll;
    fp->cb.x21F4_callback = ftCa_SpecialS_OnDetect;

    resetVel(fp);

    fp->gr_vel = 0;
}

static inline void setupAirStart(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    {
        u32* vars = &fp->cmd_vars[0];
        vars[0] = vars[1] = vars[2] = vars[3] = 0;
    }
    Fighter_ChangeMotionState(gobj, ftCa_MS_SpecialAirSStart, 0, 0, 1, 0,
                              NULL);
    setCallbacks(gobj);
    ftAnim_8006EBA4(gobj);
    switch (ftLib_800872A4(gobj)) {
    case FTKIND_CAPTAIN: {
        efSync_Spawn(1169, gobj, fp->parts[FtPart_HeadN].joint);
        fp->fv.ca.during_specials_start = true;
        break;
    }
    case FTKIND_GANON: {
        efSync_Spawn(1293, gobj, fp->parts[FtPart_L2ndNb].joint);
        fp->fv.ca.during_specials_start = true;
        break;
    }
    }
    fp->fv.ca.during_specials = false;
    fp->cb.x21D4_callback_EnterHitlag = efLib_PauseAll;
    fp->cb.x21D8_callback_ExitHitlag = efLib_ResumeAll;
    fp->cb.x21F4_callback = ftCa_SpecialS_OnDetect;
    {
        /// @todo Too much stack for #resetVel.
        Vec3* vel = &fp->self_vel;
        vel->x = vel->y = vel->z = 0;
    }
}

void ftCa_SpecialAirS_Enter(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    setupAirStart(gobj);
    fp->mv.ca.specials.grav = 0;
    ftCommon_8007D60C(fp);
}

static u32 const transition_flags =
    Ft_MF_KeepGfx | Ft_MF_SkipMatAnim | Ft_MF_UpdateCmd | Ft_MF_SkipColAnim |
    Ft_MF_SkipItemVis | Ft_MF_Unk19 | Ft_MF_SkipModelPartVis |
    Ft_MF_SkipModelFlags | Ft_MF_Unk27;

static void onDetectGround(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    ftCaptain_DatAttrs* sa = getFtSpecialAttrsD(fp);
    ftCommon_8007D7FC(fp);
    Fighter_ChangeMotionState(gobj, ftCa_MS_SpecialS, transition_flags, 0, 1,
                              0, NULL);
    setCallbacks(gobj);
    {
        Vec3* vel = &fp->self_vel;
        vel->y = vel->z = 0;
    }
    fp->gr_vel *= sa->specials_gr_vel_x;
}

static void onDetectAir(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    Fighter_ChangeMotionState(gobj, ftCa_MS_SpecialAirS, transition_flags, 0,
                              1, 0, NULL);
    setCallbacks(gobj);
    fp->self_vel.z = 0;
}

void ftCa_SpecialS_OnDetect(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    if (fp->cmd_vars[0] != 0) {
        HSD_GObj* detected_gobj = fp->unk_gobj;
        if (fp->unk_gobj->classifier == HSD_GOBJ_CLASS_FIGHTER) {
            /// @todo It might be possible to merge this with the below branch.
            switch (fp->motion_id) {
            case ftCa_MS_SpecialSStart: {
                onDetectGround(gobj);
                break;
            }
            case ftCa_MS_SpecialAirSStart: {
                onDetectAir(gobj);
                break;
            }
            }
        } else if (fp->unk_gobj->classifier == HSD_GOBJ_CLASS_ITEM) {
            if (itGetKind(detected_gobj) < It_Kind_BombHei) {
                switch (fp->motion_id) {
                case ftCa_MS_SpecialSStart: {
                    onDetectGround(gobj);
                    break;
                }
                case ftCa_MS_SpecialAirSStart: {
                    onDetectAir(gobj);
                    break;
                }
                }
            } else if ((itGetKind(detected_gobj) >= It_Kind_Kuriboh &&
                        itGetKind(detected_gobj) < It_Kind_Octarock_Stone) ||
                       (itGetKind(detected_gobj) >= It_Kind_Old_Kuri &&
                        itGetKind(detected_gobj) < It_Kind_Arwing_Laser) ||
                       itGetKind(detected_gobj) == Pokemon_Random)
            {
                switch (fp->motion_id) {
                case ftCa_MS_SpecialSStart: {
                    onDetectGround(gobj);
                    break;
                }
                case ftCa_MS_SpecialAirSStart: {
                    onDetectAir(gobj);
                    break;
                }
                }
            }
        }
    }
}

void ftCa_SpecialSStart_Anim(HSD_GObj* gobj)
{
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ft_8008A2BC(gobj);
    }
}

void ftCa_SpecialS_Anim(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    if (!fp->fv.ca.during_specials) {
        switch (ftLib_800872A4(gobj)) {
        case FTKIND_CAPTAIN: {
            efSync_Spawn(1170, gobj, fp->parts[FtPart_TransN].joint,
                         &fp->facing_dir);
            fp->fv.ca.during_specials = true;
            break;
        }
        case FTKIND_GANON:
            efSync_Spawn(1294, gobj, fp->parts[FtPart_TransN].joint,
                         &fp->facing_dir);
            fp->fv.ca.during_specials = true;
            break;
        }
        fp->cb.x21D4_callback_EnterHitlag = efLib_PauseAll;
        fp->cb.x21D8_callback_ExitHitlag = efLib_ResumeAll;
    }
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ft_8008A2BC(gobj);
    }
}

void ftCa_SpecialAirSStart_Anim(HSD_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif
    Fighter* fp = GET_FIGHTER(gobj);
    ftCaptain_DatAttrs* da = fp->dat_attrs;
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ftCommon_8007D60C(fp);
        if (da->specials_miss_landing_lag == 0) {
            ftCo_800CC730(gobj);
        } else {
            ftCo_80096900(gobj, 1, 1, 0, 1, da->specials_miss_landing_lag);
        }
    }
}

void ftCa_SpecialAirS_Anim(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    ftCaptain_DatAttrs* captainAttrs = fp->dat_attrs;
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif
    if (!fp->fv.ca.during_specials) {
        switch (ftLib_800872A4(gobj)) {
        case FTKIND_CAPTAIN: {
            efSync_Spawn(1171, gobj, fp->parts[FtPart_TransN].joint,
                         &fp->facing_dir);
            fp->fv.ca.during_specials = true;
            break;
        }
        case FTKIND_GANON: {
            efSync_Spawn(1295, gobj, fp->parts[FtPart_TransN].joint,
                         &fp->facing_dir);
            fp->fv.ca.during_specials = true;
            break;
        }
        }
        fp->cb.x21D4_callback_EnterHitlag = efLib_PauseAll;
        fp->cb.x21D8_callback_ExitHitlag = efLib_ResumeAll;
    }
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ftCommon_8007D60C(fp);
        if (captainAttrs->specials_hit_landing_lag == 0) {
            ftCo_800CC730(gobj);
        } else {
            ftCo_80096900(gobj, 1, 1, 0, 1,
                          captainAttrs->specials_hit_landing_lag);
        }
    }
}

void ftCa_SpecialSStart_IASA(HSD_GObj* gobj) {}

void ftCa_SpecialS_IASA(HSD_GObj* gobj) {}

void ftCa_SpecialAirSStart_IASA(HSD_GObj* gobj) {}

void ftCa_SpecialAirS_IASA(HSD_GObj* gobj) {}

void ftCa_SpecialSStart_Phys(HSD_GObj* gobj)
{
    ft_80084FA8(gobj);
}

void ftCa_SpecialS_Phys(HSD_GObj* gobj)
{
    ft_80084FA8(gobj);
}

void ftCa_SpecialAirSStart_Phys(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    ftCaptain_DatAttrs* captainAttrs = fp->dat_attrs;
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif
    ft_80085134(gobj);
    if (fp->cmd_vars[1] == 1) {
        fp->mv.ca.specials.grav -= captainAttrs->specials_grav;
        if (fp->mv.ca.specials.grav < -captainAttrs->specials_terminal_vel) {
            fp->mv.ca.specials.grav = -captainAttrs->specials_terminal_vel;
        }
        fp->self_vel.y = fp->mv.ca.specials.grav;
    }
}

void ftCa_SpecialAirS_Phys(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    ftCaptain_DatAttrs* da = fp->dat_attrs;
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif
    ft_80085134(gobj);
    fp->mv.ca.specials.grav -= da->specials_grav;
    if (fp->mv.ca.specials.grav < -da->specials_terminal_vel) {
        fp->mv.ca.specials.grav = -da->specials_terminal_vel;
    }
    fp->self_vel.y = fp->mv.ca.specials.grav;
}

/// Captain Falcon & Ganondorf's grounded
/// Raptor Boost / Gerudo Dragon Start Collision callback
void ftCa_SpecialSStart_Coll(HSD_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 unused[8];
#endif
    Fighter* fp = GET_FIGHTER(gobj);
    ftCaptain_DatAttrs* da = fp->dat_attrs;
    if (fp->cmd_vars[2] == 0) {
        ft_80084104(gobj);
        return;
    }
    if (ft_80082708(gobj) == false) {
        efLib_DestroyAll(gobj);
        ftCommon_8007D60C(fp);
        if (da->specials_miss_landing_lag == 0) {
            ftCo_800CC730(gobj);
            return;
        }
        ftCommon_8007D468(fp);
        ftCo_80096900(gobj, 1, 1, 0, 1, da->specials_miss_landing_lag);
        return;
    }
    if (fp->cmd_vars[0] == 1) {
        /// @todo Unused assignment.
#ifdef MUST_MATCH
        f32 _ = fp->facing_dir;
#endif
        if ((fp->facing_dir == +1 &&
             (fp->coll_data.env_flags & MPCOLL_RIGHTWALL)) ||
            (fp->facing_dir == -1 &&
             fp->coll_data.env_flags & MPCOLL_LEFTWALL))
        {
            efLib_DestroyAll(gobj);
            ft_8008A2BC(gobj);
        }
    }
}

void ftCa_SpecialS_Coll(HSD_GObj* gobj)
{
    Fighter* fp0 = GET_FIGHTER(gobj);

    {
        Fighter* fp1;
        ftCaptain_DatAttrs* da = fp0->dat_attrs;
        /// @todo Unused stack.
#ifdef MUST_MATCH
        u8 _[8];
#endif
        fp1 = fp0;
        if (!ft_80082708(gobj)) {
            efLib_DestroyAll(gobj);
            ftCommon_8007D60C(fp1);
            if (da->specials_hit_landing_lag == 0) {
                ftCo_800CC730(gobj);
                return;
            } else {
                ftCommon_8007D468(fp1);
                ftCo_80096900(gobj, 1, 1, 0, 1, da->specials_hit_landing_lag);
            }
        }
    }
}

void ftCa_SpecialAirSStart_Coll(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    ftCaptain_DatAttrs* da = fp->dat_attrs;
    if (ft_80081D0C(gobj) == true) {
        efLib_DestroyAll(gobj);
        ftCo_800D5CB0(gobj, 0, da->specials_miss_landing_lag);
    }
}

/// Captain Falcon & Ganondorf's aerial Raptor Boost / Gerudo Dragon Hit
/// Collision callback
void ftCa_SpecialAirS_Coll(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    ftCaptain_DatAttrs* da = fp->dat_attrs;
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif
    if (ft_80081D0C(gobj) == true) {
        fp->gr_vel = fp->self_vel.x;
        efLib_DestroyAll(gobj);
        ftCo_800D5CB0(gobj, 0, da->specials_hit_landing_lag);
    }
}
