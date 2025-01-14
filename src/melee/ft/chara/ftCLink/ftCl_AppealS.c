#include "ftCl_AppealS.h"

#include "ftCl_Init.h"
#include "inlines.h"

#include "ft/ft_081B.h"
#include "ft/ft_0877.h"
#include "ft/ft_08A4.h"
#include "ft/ftanim.h"
#include "ft/ftparts.h"
#include "ftLink/ftLk_Init.h"
#include "it/it_27CF.h"

void ftCl_AppealS_Anim(HSD_GObj* gobj)
{
    /// @todo There might be only one @c Fighter* here.
    Fighter* fp0;
    Fighter* fp1;

    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[16];
#endif

    fp0 = fp1 = gobj->user_data;

    if (fp0->cmd_vars[1] == 1 && fp1->fv.lk.x18 == NULL) {
        HSD_GObj* item_gobj = it_802C8B28(
            gobj, &fp0->cur_pos, ftParts_8007500C(fp1, FtPart_LThumbNb),
            fp0->facing_dir);
        fp0->fv.lk.x18 = item_gobj;
        if (item_gobj != NULL) {
            fp0->cb.x21E4_callback_OnDeath2 = ftLk_800EAF58;
            fp0->cb.x21DC_callback_OnTakeDamage = ftLk_800EAF58;
        }
    } else if (fp1->cmd_vars[1] == 2) {
        ftCl_Init_80149268(gobj);
    }
    if (!ftAnim_IsFramesRemaining(gobj)) {
        checkFighter2244(gobj);
        ft_8008A2BC(gobj);
    }
}

void ftCl_AppealS_IASA(HSD_GObj* gobj)
{
    ftCo_AppealS_IASA(gobj);
}

void ftCl_AppealS_Phys(HSD_GObj* gobj)
{
    ft_80084F3C(gobj);
}

void ftCl_AppealS_Coll(HSD_GObj* gobj)
{
    ft_80084280(gobj);
}
