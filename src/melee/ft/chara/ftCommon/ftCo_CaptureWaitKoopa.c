#include <platform.h>
#include "ft/forward.h"

#include "ftCo_CaptureWaitKoopa.h"

#include "ftCo_CaptureKoopa.h"

#include "ft/fighter.h"
#include "ft/ft_08A4.h"
#include "ft/ftcommon.h"

void ftCo_800BCC20(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = GET_FIGHTER(gobj);
    Fighter_ChangeMotionState(gobj, ftCo_MS_CaptureWaitKoopa, Ft_MF_None, 0, 1,
                              0, NULL);
    fp->cb.x21B0_callback_Accessory1 = ftCo_800DB464;
    ftCommon_8007E2F4(fp, 0x1FF);
}

void ftCo_CaptureWaitKoopa_Anim(ftCo_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8] = { 0 };
#endif
    ftCo_Fighter* fp = GET_FIGHTER(gobj);
    ftCo_800BC458(gobj);
    if (fp->x1A4C <= 0) {
        ftCo_800DA698(fp->victim_gobj, 0);
        fp->facing_dir = -fp->facing_dir;
        ftCo_800DC750(gobj);
    } else {
        ftCo_800BC4A8(gobj);
    }
}

void ftCo_CaptureWaitKoopa_IASA(ftCo_GObj* gobj) {}

void ftCo_CaptureWaitKoopa_Phys(ftCo_GObj* gobj) {}

void ftCo_CaptureWaitKoopa_Coll(ftCo_GObj* gobj) {}

void ftCo_800BCD00(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = GET_FIGHTER(gobj);
    Fighter_ChangeMotionState(gobj, ftCo_MS_CaptureWaitKoopaAir, Ft_MF_None, 0,
                              1, 0, NULL);
    fp->cb.x21B0_callback_Accessory1 = ftCo_800DB464;
    ftCommon_8007E2F4(fp, 0x1FF);
}

void ftCo_CaptureWaitKoopaAir_Anim(ftCo_GObj* gobj)
{
    ftCo_CaptureWaitKoopa_Anim(gobj);
}

void ftCo_CaptureWaitKoopaAir_IASA(ftCo_GObj* gobj) {}

void ftCo_CaptureWaitKoopaAir_Phys(ftCo_GObj* gobj) {}

void ftCo_CaptureWaitKoopaAir_Coll(ftCo_GObj* gobj) {}
