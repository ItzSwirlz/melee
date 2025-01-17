#include "ftDr_AppealS.h"

#include "ftDr_Init.h"

#include "ft/ft_081B.h"
#include "ft/ft_0877.h"
#include "ft/ft_08A4.h"
#include "ftMario/ftMr_SpecialN.h"
#include "it/it_27CF.h"
#include "lb/lb_00B0.h"

#include <dolphin/mtx/types.h>

void ftDr_AppealS_Anim(HSD_GObj* gobj)
{
    Vec3 sp18;
    Fighter* fp;
    u32 tmp;

    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[12];
#endif

    fp = gobj->user_data;
    if (fp->cmd_vars[0] == 1 && fp->fv.mr.x2240 == 0U) {
        lb_8000B1CC(fp->parts->joint, 0, &sp18);
        tmp = ftMr_SpecialN_VitaminRandom(gobj);
        tmp = it_802C0850(gobj, &sp18, tmp, 0x31, fp->facing_dir);
        fp->fv.mr.x2240 = tmp;
        if (tmp != 0) {
            fp->cb.x21E4_callback_OnDeath2 = ftDr_Init_80149540;
            fp->cb.x21DC_callback_OnTakeDamage = ftDr_Init_80149540;
        }
    } else if (fp->cmd_vars[0] == 2) {
        ftDr_Init_801497CC(gobj);
    }
    if (!ftAnim_IsFramesRemaining(gobj)) {
        if (gobj != NULL) {
            fp = gobj->user_data;
            if (fp != NULL && fp->fv.mr.x2240 != 0) {
                it_802C0DBC(fp->fv.mr.x2240);
                fp->fv.mr.x2240 = 0;
            }
        }
        if (gobj != NULL) {
            fp = gobj->user_data;
            if (fp != NULL) {
                fp->cb.x21DC_callback_OnTakeDamage = 0;
                fp->cb.x21E4_callback_OnDeath2 = 0;
            }
        }
        ft_8008A2BC(gobj);
    }
}

void ftDr_AppealS_IASA(HSD_GObj* gobj)
{
    ftCo_AppealS_IASA(gobj);
}

void ftDr_AppealS_Phys(HSD_GObj* gobj)
{
    ft_80084F3C(gobj);
}

void ftDr_AppealS_Coll(HSD_GObj* gobj)
{
    ft_80084280(gobj);
}
