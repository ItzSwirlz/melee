#include <platform.h>
#include "ft/forward.h"

#include "ftCo_CliffEscape.h"

#include "ftCo_CliffClimb.h"

#include "ft/fighter.h"
#include "ft/ft_08A4.h"
#include "ft/ftcommon.h"

/// @todo Shared code with #ftCo_8009AEA4.
void ftCo_8009B040(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    FtMotionId msid = (float) fp->dmg.x1830_percent < p_ftCommonData->x488
                          ? ftCo_MS_CliffEscapeQuick
                          : ftCo_MS_CliffEscapeSlow;
    Fighter_ChangeMotionState(gobj, msid, Ft_MF_None, 0, 1, 0, NULL);
    ftAnim_8006EBA4(gobj);
    ftCommon_8007E2F4(fp, 32);
    fp->x221D_b7 = true;
    fp->x221D_b5 = true;
    ftCo_CliffCatch_Phys(gobj);
}

void ftCo_CliffEscape_Anim(ftCo_GObj* gobj)
{
    ftCo_CliffClimb_Anim(gobj);
}

void ftCo_CliffEscape_IASA(ftCo_GObj* gobj) {}

void ftCo_CliffEscape_Phys(ftCo_GObj* gobj)
{
    ftCo_CliffClimb_Phys(gobj);
}

void ftCo_CliffEscape_Coll(ftCo_GObj* gobj)
{
    ftCo_CliffClimb_Coll(gobj);
}
