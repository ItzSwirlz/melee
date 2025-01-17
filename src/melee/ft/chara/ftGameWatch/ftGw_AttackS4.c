#include "forward.h"
#include "ft/forward.h"

#include "ftGw_AttackS4.h"

#include "ftGw_Init.h"

#include "ft/ft_081B.h"
#include "ft/ft_0877.h"
#include "ft/ft_08A4.h"
#include "ft/inlines.h"
#include "it/it_27CF.h"
#include "lb/lb_00B0.h"

#include <dolphin/mtx/types.h>

// 0x8014A848
// https://decomp.me/scratch/hi2oZ // Spawn Fire Attack Torch and set up
// callbacks
void ftGw_ItemTorchSetup(HSD_GObj* gobj)
{
    Vec3 sp10;
    Fighter* fp;

    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[4];
#endif

    fp = getFighter(gobj);
    lb_8000B1CC(fp->parts[FtPart_LHandNb].joint, NULL, &sp10);
    fp->fv.gw.x2254_fireGObj =
        it_802C68F8(gobj, &sp10, FtPart_LHandNb, fp->facing_dir);
    if (fp->fv.gw.x2254_fireGObj != NULL) {
        if (fp->cb.x21E4_callback_OnDeath2 == NULL) {
            fp->cb.x21E4_callback_OnDeath2 = ftGw_Init_OnDamage;
        }
        if (fp->cb.x21DC_callback_OnTakeDamage == NULL) {
            fp->cb.x21DC_callback_OnTakeDamage = ftGw_Init_OnDamage;
        }
    }
    fp->cb.x21D4_callback_EnterHitlag = ftGw_AttackS4_ItemTorchEnterHitlag;
    fp->cb.x21D8_callback_ExitHitlag = ftGw_AttackS4_ItemTorchExitHitlag;
    fp->cb.x21BC_callback_Accessory4 = NULL;
}

// 0x8014A904
// https://decomp.me/scratch/rtVt4 // Set flags on Mr. Game & Watch's Torch
void ftGw_AttackS4_ItemTorchSetFlag(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    ftGw_AttackS4_ItemTorchExitHitlag(gobj);
    fp->fv.gw.x2254_fireGObj = NULL;
}

// 0x8014A938
// https://decomp.me/scratch/mIWB3 // Remove Mr. Game & Watch's Torch
void ftGw_AttackS4_ItemTorchOnDamage(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[4];
#endif

    if (fp->fv.gw.x2254_fireGObj != NULL) {
        it_802C6A2C(fp->fv.gw.x2254_fireGObj);
        ftGw_AttackS4_ItemTorchSetFlag(gobj);
    }
}

// 0x8014A990
// https://decomp.me/scratch/Y9bAE // Apply hitlag to Mr. Game & Watch's item
void ftGw_AttackS4_ItemTorchEnterHitlag(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    if (fp->fv.gw.x2254_fireGObj != NULL) {
        it_802C6A78(fp->fv.gw.x2254_fireGObj);
    }
}

// 0x8014A9C0
// https://decomp.me/scratch/OGia3 // End hitlag for Mr. Game & Watch's item
void ftGw_AttackS4_ItemTorchExitHitlag(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    if (fp->fv.gw.x2254_fireGObj != NULL) {
        it_802C6A98(fp->fv.gw.x2254_fireGObj);
    }
}

// 0x8014A9F0
// https://decomp.me/scratch/cYfwo // Check if Mr. Game & Watch is performing
// Forward Smash
bool ftGw_AttackS4_ItemCheckTorchRemove(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    if (fp->motion_id == ftGw_MS_AttackS4) {
        return false;
    }

    return true;
}

// 0x8014AA10
// https://decomp.me/scratch/GDWNx // Mr. Game & Watch's Forward Smash Action
// State handler
void ftGw_AttackS4_Enter(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[4];
#endif

    fp->allow_interrupt = 0;
    fp->cmd_vars[0] = 0;
    Fighter_ChangeMotionState(gobj, ftGw_MS_AttackS4, 0, 0.0f, 1.0f, 0.0f,
                              NULL);
    ftAnim_8006EBA4(gobj);
    fp->cb.x21BC_callback_Accessory4 = ftGw_ItemTorchSetup;
}

// 0x8014AA88
// https://decomp.me/scratch/41MqW // Mr. Game & Watch's Forward Smash
// Animation callback
void ftGw_AttackS4_Anim(HSD_GObj* gobj)
{
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ft_8008A2BC(gobj);
    }
}

// 0x8014AAC4
// https://decomp.me/scratch/njlQ8 // Mr. Game & Watch's Forward Smash IASA
// callback
void ftGw_AttackS4_IASA(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    if (fp->allow_interrupt != false) {
        ftCo_Wait_IASA(gobj);
    }
}

// 0x8014AAF4
// https://decomp.me/scratch/hNIyC // Mr. Game & Watch's Forward Smash Physics
// callback
void ftGw_AttackS4_Phys(HSD_GObj* gobj)
{
    ft_80084FA8(gobj);
}

// 0x8014AB14
// https://decomp.me/scratch/OHANe
// Mr. Game & Watch's Forward Smash Collision callback
void ftGw_AttackS4_Coll(HSD_GObj* gobj)
{
    ft_80084104(gobj);
    ftGw_Init_8014A538(gobj);
}
