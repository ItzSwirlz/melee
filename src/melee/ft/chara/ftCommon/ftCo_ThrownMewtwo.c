#include <platform.h>
#include "ft/forward.h"
#include "ftCommon/forward.h"

#include "ftCo_ThrownMewtwo.h"

#include "inlines.h"

#include "ft/fighter.h"
#include "ft/ft_08A4.h"
#include "ft/ftanim.h"
#include "ft/ftcommon.h"

void ftCo_800BD0E8(ftCo_GObj* gobj, FtMotionId msid)
{
    ftCo_Fighter* fp = GET_FIGHTER(gobj);
/// @todo #SOLUTION 0
#define SOLUTION 1
#if SOLUTION == 0
    ftCo_Thrown_Enter(gobj, msid,
                      fp->x2222_b6 ? Ft_MF_None : Ft_MF_FreezeState, 0);
#elif SOLUTION == 1
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8] = { 0 };
#endif
    fp->facing_dir = GET_FIGHTER(fp->victim_gobj)->facing_dir;
    fp->mv.co.capturekoopa.x0 = false;
    Fighter_ChangeMotionState(gobj, msid,
                              fp->x2222_b6 ? Ft_MF_FreezeState : Ft_MF_None, 0,
                              1, 0, fp->victim_gobj);
    fp->cb.x21B0_callback_Accessory1 = (HSD_GObjEvent) ftCo_800DE508;
    ftCommon_8007E2F4(fp, 0x1FF);
    ftAnim_8006EBA4(gobj);
#endif
#undef SOLUTION
}

void ftCo_ThrownMewtwo_Anim(ftCo_GObj* gobj) {}

void ftCo_ThrownMewtwo_IASA(ftCo_GObj* gobj) {}

void ftCo_ThrownMewtwo_Phys(ftCo_GObj* gobj) {}

void ftCo_ThrownMewtwo_Coll(ftCo_GObj* gobj) {}

void ftCo_ThrownMewtwoAir_Anim(ftCo_GObj* gobj) {}

void ftCo_ThrownMewtwoAir_IASA(ftCo_GObj* gobj) {}

void ftCo_ThrownMewtwoAir_Phys(ftCo_GObj* gobj) {}

void ftCo_ThrownMewtwoAir_Coll(ftCo_GObj* gobj) {}
