#include <platform.h>
#include "ft/forward.h"
#include "ftCommon/forward.h"

#include "ftCo_AttackDash.h"

#include "ftCo_08A6.h"
#include "ftCo_ItemThrow.h"
#include "ftCo_Shouldered.h"

#include "ft/fighter.h"
#include "ft/ft_081B.h"
#include "ft/ft_0877.h"
#include "ft/ft_08A4.h"
#include "ftKirby/ftKb_Init.h"

#include <placeholder.h>

/* 08B498 */ static void decideFighter(ftCo_GObj* gobj);
/* 08B4D4 */ static void doEnter(ftCo_GObj* gobj);

bool ftCo_AttackDash_CheckInput(HSD_GObj* gobj)
{
    ftCo_Fighter* fp = GET_FIGHTER(gobj);
    if (fp->input.x668 & HSD_PAD_A) {
        if (fp->item_gobj != NULL) {
            if (fp->input.held_inputs & HSD_PAD_LR ||
                it_8026B30C(fp->item_gobj) == 0)
            {
                ftCo_800957F4(gobj, ftCo_MS_LightThrowDash);
                return true;
            }
            switch (it_8026B30C(fp->item_gobj)) {
            case 2:
                ftCo_Attack_800CCF58(gobj, 4);
                return true;
            }
        }
        decideFighter(gobj);
        return true;
    }
    return false;
}

static void decideFighter(ftCo_GObj* gobj)
{
    switch (GET_FIGHTER(gobj)->kind) {
    case FTKIND_KIRBY:
        ftKb_SpecialN_800F1F68(gobj);
        return;
    default:
        doEnter(gobj);
        return;
    }
}

static void doEnter(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = GET_FIGHTER(gobj);
    fp->allow_interrupt = false;
    Fighter_ChangeMotionState(gobj, ftCo_MS_AttackDash, Ft_MF_None, 0, 1, 0,
                              NULL);
    ftAnim_8006EBA4(gobj);
    fp->mv.co.attackdash.x0 = 0;
}

void ftCo_AttackDash_Anim(ftCo_GObj* gobj)
{
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ft_8008A2BC(gobj);
    }
}

void ftCo_AttackDash_SetMv0(HSD_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[4] = { 0 };
#endif
    GET_FIGHTER(gobj)->mv.co.attackdash.x0 = p_ftCommonData->x68;
}

void ftCo_AttackDash_IASA(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = GET_FIGHTER(gobj);
    if (!ftCo_800D8AE0() && fp->allow_interrupt) {
        ftCo_Wait_IASA(gobj);
    }
}

void ftCo_AttackDash_Phys(HSD_GObj* gobj)
{
    ftCo_Fighter* fp = GET_FIGHTER(gobj);
    ft_80085030(gobj, p_ftCommonData->x50 * fp->co_attrs.gr_friction,
                fp->facing_dir);
}

void ftCo_AttackDash_Coll(ftCo_GObj* gobj)
{
    ft_80084104(gobj);
}
