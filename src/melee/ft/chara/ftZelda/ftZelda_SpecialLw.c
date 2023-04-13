#include "ftzelda.h"
#include "ftzelda4.h"

#include "ef/eflib.h"
#include "ef/efsync.h"
#include "ft/code_80081B38.h"
#include "ft/fighter.h"
#include "ft/ft_unknown_006.h"
#include "ft/ftcommon.h"
#include "ftSeak/ftSeak_SpecialLw.h"
#include "it/code_8027CF30.h"
#include "lb/lbunknown_001.h"
#include "lb/lbunknown_003.h"

#include <Runtime/platform.h>

// 8013ADB4 - 8013AE30 (0x7C bytes)
// https://decomp.me/scratch/LbMVE
void ftZelda_8013ADB4(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    if (!fp->x2219_flag.bits.b0) {
        efSync_Spawn(0x4FC, fighter_gobj, fp->x5E8_fighterBones[0x68].x0_jobj);
        fp->x2219_flag.bits.b0 = 1;
    }

    fp->cb.x21D4_callback_EnterHitlag = efLib_PauseAll;
    fp->cb.x21D8_callback_ExitHitlag = efLib_ResumeAll;
    fp->cb.x21BC_callback_Accessory4 = 0;
}

// 8013AE30 - 8013AEAC (0x7C bytes)
// https://decomp.me/scratch/iojLO
void ftZelda_8013AE30(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    if (!fp->x2219_flag.bits.b0) {
        efSync_Spawn(0x4FD, fighter_gobj, fp->x5E8_fighterBones[4].x0_jobj);
        fp->x2219_flag.bits.b0 = 1;
    }

    fp->cb.x21D4_callback_EnterHitlag = efLib_PauseAll;
    fp->cb.x21D8_callback_ExitHitlag = efLib_ResumeAll;
    fp->cb.x21BC_callback_Accessory4 = 0;
}

// Zelda_TransformToSubcharacter
// 8013AEAC - 8013AEE0 (0x34 bytes)
// https://decomp.me/scratch/iINH1
void ftZelda_8013AEAC(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    fp->cb.x21BC_callback_Accessory4 = 0;

    ftCommon_8007EFC8(fighter_gobj, ftSeak_80114758);
}

// Helper function for both ftZelda_SpecialLw_StartMotion /
// ftZelda_SpecialAirLw_StartMotion
void ftZelda_SpecialLw_StartAction_Helper(HSD_GObj* fighter_gobj)
{
    Vec3 sp20;
    Fighter* fp;                   // r31
    ftZeldaAttributes* attributes; // r3

    fp = getFighterPlus(fighter_gobj);
    attributes = getFtSpecialAttrs(fp);

    fp->x2200_ftcmd_var0 = 0;
    fp->x80_self_vel.x = fp->x80_self_vel.x / attributes->x70;
    fp->x80_self_vel.y = fp->x80_self_vel.y / attributes->x74;
    fp->xEC_ground_vel = fp->xEC_ground_vel / attributes->x70;

    lb_8000B1CC(fp->x5E8_fighterBones[0].x0_jobj, NULL, &sp20);
    lb_800119DC(&sp20, 0x78, 0.4, 0.003, 60 * M_PI / 180);

    fp->cb.x21BC_callback_Accessory4 = &ftZelda_8013ADB4;
}

// Zelda_AS_355_Transform_Grounded
// 8013AEE0 - 8013AFA4 (0xC4 bytes)
// https://decomp.me/scratch/jZJgg (with helper)
// https://decomp.me/scratch/Lw6fO (single function)
void ftZelda_SpecialLw_StartMotion(HSD_GObj* fighter_gobj)
{
    Fighter_ChangeMotionState(fighter_gobj, 0x163, 0, NULL, 0.0f, 1.0, 0.0f);

    ftAnim_8006EBA4(fighter_gobj);

    ftZelda_SpecialLw_StartAction_Helper(fighter_gobj);
}

// Zelda_AS_357_Transform_Aerial
// 8013AFA4 - 8013B068 (0xC4 bytes)
// For a scratch using helper function, see the above function.
// https://decomp.me/scratch/8W7ZF (single function)
void ftZelda_SpecialAirLw_StartMotion(HSD_GObj* fighter_gobj)
{
    Fighter_ChangeMotionState(fighter_gobj, 0x165, 0, NULL, 0.0f, 1.0, 0.0f);

    ftAnim_8006EBA4(fighter_gobj);

    ftZelda_SpecialLw_StartAction_Helper(fighter_gobj);
}

// 8013B068 - 8013B0A8 (0x40 bytes)
// https://decomp.me/scratch/DrRr5
void ftZelda_8013B068(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    if (!ftAnim_IsFramesRemaining(fighter_gobj)) {
        fp->cb.x21BC_callback_Accessory4 = &ftZelda_8013AEAC;
    }
}

// 8013B0A8 - 8013B0E8 (0x40 bytes)
// https://decomp.me/scratch/DrRr5
void ftZelda_8013B0A8(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    if (!ftAnim_IsFramesRemaining(fighter_gobj)) {
        fp->cb.x21BC_callback_Accessory4 = &ftZelda_8013AEAC;
    }
}

void ftZelda_8013B0E8(HSD_GObj* fighter_gobj)
{
    return;
}
void ftZelda_8013B0EC(HSD_GObj* fighter_gobj)
{
    return;
}

// 8013B0F0 - 8013B110 (0x20 bytes)
void ftZelda_8013B0F0(HSD_GObj* fighter_gobj)
{
    ft_80084F3C(fighter_gobj);
}

// 8013B110 - 8013B154 (0x44 bytes)
// https://decomp.me/scratch/Nm958
void ftZelda_8013B110(HSD_GObj* fighter_gobj)
{
    Fighter* fp;
    ftZeldaAttributes* attributes;

    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[4];
#endif

    fp = GET_FIGHTER(fighter_gobj);
    attributes = fp->x2D4_specialAttributes;

    ftCommon_8007D494(fp, attributes->x78, attributes->x7C);
    ftCommon_8007CEF4(fp);
}

// 8013B154 - 8013B190 (0x3C bytes)
// https://decomp.me/scratch/8ceOO
void ftZelda_8013B154(HSD_GObj* fighter_gobj)
{
    if (ft_80082708(fighter_gobj) == 0) {
        ftZelda_8013B1CC(fighter_gobj);
    }
}

// 8013B190 - 8013B1CC (0x3C bytes)
// https://decomp.me/scratch/8ceOO
void ftZelda_8013B190(HSD_GObj* fighter_gobj)
{
    if (ft_80081D0C(fighter_gobj) != 0) {
        ftZelda_8013B238(fighter_gobj);
    }
}

// 8013B1CC - 8013B238 (0x6C bytes)
// https://decomp.me/scratch/w04qW
void ftZelda_8013B1CC(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    ftCommon_8007D5D4(fp);
    Fighter_ChangeMotionState(fighter_gobj, 0x165, 0x0C4C508E, NULL,
                              fp->x894_currentAnimFrame, 1.0, 0);
    fp->cb.x21BC_callback_Accessory4 = &ftZelda_8013ADB4;
}

// 8013B238 - 8013B2A4 (0x6C bytes)
void ftZelda_8013B238(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    ftCommon_8007D7FC(fp);
    Fighter_ChangeMotionState(fighter_gobj, 0x163, 0x0C4C508E, NULL,
                              fp->x894_currentAnimFrame, 1.0, 0);
    fp->cb.x21BC_callback_Accessory4 = &ftZelda_8013ADB4;
}

// 8013B2A4 - 8013B2E0 (0x3C bytes)
void ftZelda_8013B2A4(HSD_GObj* fighter_gobj)
{
    if (!ftAnim_IsFramesRemaining(fighter_gobj)) {
        ft_8008A2BC(fighter_gobj);
    }
}

// 8013B2E0 - 8013B31C (0x3C bytes)
void ftZelda_8013B2E0(HSD_GObj* fighter_gobj)
{
    if (!ftAnim_IsFramesRemaining(fighter_gobj)) {
        ft_800CC730(fighter_gobj);
    }
}

void ftZelda_8013B31C(HSD_GObj* fighter_gobj)
{
    return;
}
void ftZelda_8013B320(HSD_GObj* fighter_gobj)
{
    return;
}

// 8013B324 - 8013B344 (0x20 bytes)
void ftZelda_8013B324(HSD_GObj* fighter_gobj)
{
    ft_80084F3C(fighter_gobj);
}

// 8013B344 - 8013B388 (0x44 bytes)
// https://decomp.me/scratch/r3T6y
void ftZelda_8013B344(HSD_GObj* fighter_gobj)
{
    Fighter* fp;
    ftZeldaAttributes* attributes;

    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[4];
#endif

    fp = GET_FIGHTER(fighter_gobj);
    attributes = fp->x2D4_specialAttributes;

    ftCommon_8007D494(fp, attributes->x78, attributes->x7C);
    ftCommon_8007CEF4(fp);
}

// 8013B388 - 8013B3C4 (0x3C bytes)
// https://decomp.me/scratch/t8hrY
void ftZelda_8013B388(HSD_GObj* fighter_gobj)
{
    if (ft_80082708(fighter_gobj) == 0) {
        ftZelda_8013B400(fighter_gobj);
    }
}

// 8013B3C4 - 8013B400 (0x3C bytes)
// https://decomp.me/scratch/t8hrY
void ftZelda_8013B3C4(HSD_GObj* fighter_gobj)
{
    if (ft_80081D0C(fighter_gobj) != 0) {
        ftZelda_8013B46C(fighter_gobj);
    }
}

// 8013B400 - 8013B46C (0x6C bytes)
// https://decomp.me/scratch/EZlpO
void ftZelda_8013B400(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    ftCommon_8007D5D4(fp);
    Fighter_ChangeMotionState(fighter_gobj, 0x166, 0x0C4C508E, NULL,
                              fp->x894_currentAnimFrame, 1.0, 0);
    fp->cb.x21BC_callback_Accessory4 = &ftZelda_8013AE30;
}

// 8013B46C - 8013B4D8 (0x6C bytes)
// https://decomp.me/scratch/EZlpO
void ftZelda_8013B46C(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    ftCommon_8007D7FC(fp);
    Fighter_ChangeMotionState(fighter_gobj, 0x164, 0x0C4C508E, NULL,
                              fp->x894_currentAnimFrame, 1.0, 0);
    fp->cb.x21BC_callback_Accessory4 = &ftZelda_8013AE30;
}

// AS_ZeldaFinishTransformation
// 8013B4D8 - 8013B540 (0x68 bytes)
// https://decomp.me/scratch/wpEbJ
void ftZelda_8013B4D8(HSD_GObj* fighter_gobj)
{
    Fighter* fp = GET_FIGHTER(fighter_gobj);
    ftZeldaAttributes* sa = fp->x2D4_specialAttributes;

    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[4];
#endif

    {
        enum_t asid;
        if (fp->xE0_ground_or_air == 0) {
            asid = 0x164;
        } else {
            asid = 0x166;
        }

        Fighter_ChangeMotionState(fighter_gobj, asid, 0, NULL, sa->x80, 1.0,
                                  0);
    }
    fp->cb.x21BC_callback_Accessory4 = &ftZelda_8013AE30;
}

// 8013B540 - 8013B574 (0x34 bytes)
// https://decomp.me/scratch/L6UUI
s32 ftZelda_8013B540(HSD_GObj* fighter_gobj)
{
    s32 actionStateIndex;
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    actionStateIndex = fp->action_id;

    if (((actionStateIndex == 0x158) || (actionStateIndex == 0x15B)) &&
        (fp->ev.zd.x222C != 0U))
    {
        return 1;
    }
    return 0;
}

// 8013B574 - 8013B5C4 (0x50 bytes)
// https://decomp.me/scratch/tgIRc (fork of below)
// https://decomp.me/scratch/pTAiQ
bool ftZelda_8013B574(HSD_GObj* fighter_gobj)
{
    Fighter* fp = GET_FIGHTER(fighter_gobj);

    if (fp->ev.zd.x222C != 0) {
        switch (fp->action_id) {
        case 0x15C:
        case 0x159:
            if (fp->x2204_ftcmd_var1 == 1) {
                fp->x2204_ftcmd_var1 = 0;
                return true;
            }
            break;
        }
    }

    return false;
}

// 8013B5C4 - 8013B5EC ( bytes)
// https://decomp.me/scratch/VdBYJ
void ftZelda_8013B5C4(HSD_GObj* fighter_gobj)
{
    Fighter* fp;

    fp = GET_FIGHTER(fighter_gobj);
    if (fp->ev.zd.x222C != 0) {
        fp->ev.zd.x222C = 0;
    }

    fp->cb.x21E4_callback_OnDeath2 = 0;
    fp->cb.x21DC_callback_OnTakeDamage = 0;
}

// 8013B5EC - 8013B638 (0x4C bytes)
// https://decomp.me/scratch/8QoCa
void ftZelda_8013B5EC(HSD_GObj* fighter_gobj)
{
    Fighter* fp = GET_FIGHTER(fighter_gobj);

    if (fp->ev.zd.x222C != NULL) {
        it_802C3D44(fp->ev.zd.x222C);
        fp->ev.zd.x222C = NULL;
    }

    fp->cb.x21E4_callback_OnDeath2 = 0;
    fp->cb.x21DC_callback_OnTakeDamage = 0;
}