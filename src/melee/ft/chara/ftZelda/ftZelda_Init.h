#ifndef MELEE_FT_CHARA_FTZELDA_FTZELDA_H
#define MELEE_FT_CHARA_FTZELDA_FTZELDA_H

#include <platform.h>
#include <baselib/forward.h>

#include "ft/types.h"

extern ActionState ftZelda_MotionStateTable[];
extern char lbl_803CFC98[];
extern char lbl_803CFCA4[];
extern Fighter_CostumeStrings lbl_803CFEB0[];
extern char lbl_803CFE24[];
extern Fighter_DemoStrings lbl_803CFEA0;

// ftzelda 1
void ftZelda_OnDeath(HSD_GObj* gobj);
void ftZelda_OnLoad(HSD_GObj* gobj);
void ftZelda_801393AC(HSD_GObj* gobj);
void ftZelda_OnItemPickup(HSD_GObj* gobj, bool bool);
void ftZelda_OnItemInvisible(HSD_GObj* gobj);
void ftZelda_OnItemVisible(HSD_GObj* gobj);
void ftZelda_OnItemDrop(HSD_GObj* gobj, bool bool1);
void ftZelda_LoadSpecialAttrs(HSD_GObj* gobj);
void ftZelda_801395C8(HSD_GObj* gobj);
void ftZelda_OnKnockbackEnter(HSD_GObj* gobj);
void ftZelda_OnKnockbackExit(HSD_GObj* gobj);

// ftzelda 2
void ftZelda_801396AC(HSD_GObj* gobj);
void ftZelda_801396E0(HSD_GObj* gobj);
void ftZelda_8013979C(HSD_GObj* gobj);
void ftZelda_SpecialHi_StartMotion(HSD_GObj* gobj);
void ftZelda_SpecialAirHi_StartMotion(HSD_GObj* gobj);
void ftZelda_801399B4(HSD_GObj* arg0);
void ftZelda_801399F0(HSD_GObj* arg0);
void ftZelda_80139A2C(HSD_GObj* arg0);
void ftZelda_80139A30(HSD_GObj* arg0);
void ftZelda_80139A34(HSD_GObj* arg0);
void ftZelda_80139A54(HSD_GObj* gobj);
void ftZelda_80139A98(HSD_GObj* arg0);
void ftZelda_80139AD4(HSD_GObj* gobj);
void ftZelda_80139B44(HSD_GObj* gobj);
void ftZelda_80139BB0(HSD_GObj* gobj);
void ftZelda_80139C1C(HSD_GObj* gobj);
void ftZelda_80139C58(HSD_GObj* gobj);
void ftZelda_80139C94(HSD_GObj* arg0);
void ftZelda_80139C98(HSD_GObj* arg0);
void ftZelda_80139C9C(HSD_GObj* arg0);
void ftZelda_80139CBC(HSD_GObj* arg0);
void ftZelda_80139CC0(HSD_GObj* gobj);
void ftZelda_80139D60(HSD_GObj* gobj);
void ftZelda_80139F6C(HSD_GObj* gobj);
void ftZelda_80139FE8(HSD_GObj* gobj);
void ftZelda_8013A058(HSD_GObj* gobj);
void ftZelda_8013A244(HSD_GObj* gobj);
void ftZelda_8013A448(HSD_GObj* gobj);
void ftZelda_8013A484(HSD_GObj* gobj);
void ftZelda_8013A4E4(HSD_GObj* arg0);
void ftZelda_8013A4E8(HSD_GObj* arg0);
void ftZelda_8013A4EC(HSD_GObj* arg0);
void ftZelda_8013A50C(HSD_GObj* gobj);
void ftZelda_8013A588(HSD_GObj* arg0);
void ftZelda_8013A5C4(HSD_GObj* gobj);
void ftZelda_8013A648(HSD_GObj* gobj);
void ftZelda_8013A6A8(HSD_GObj* gobj);
void ftZelda_8013A764(HSD_GObj* gobj);

// ftzelda 3
void ftZelda_8013A830(HSD_GObj* gobj);
void ftZelda_8013A8AC(HSD_GObj* gobj);
void ftZelda_SpecialN_StartMotion(HSD_GObj* gobj);
void ftZelda_SpecialAirN_StartMotion(HSD_GObj* gobj);
void ftZelda_8013AA38(HSD_GObj* gobj);
void ftZelda_8013AACC(HSD_GObj* gobj);
void ftZelda_8013AB60(HSD_GObj* gobj);
void ftZelda_8013AB64(HSD_GObj* gobj);
void ftZelda_8013AB68(HSD_GObj* arg0);
void ftZelda_8013AB9C(HSD_GObj* gobj);
void ftZelda_8013AC10(HSD_GObj* gobj);
void ftZelda_8013AC4C(HSD_GObj* gobj);
void ftZelda_8013AC88(HSD_GObj* gobj);
void ftZelda_8013AD1C(HSD_GObj* gobj);
void ftZelda_8013ADB0(HSD_GObj* gobj);

// ftzelda 4
void ftZelda_8013ADB4(HSD_GObj* gobj);
void ftZelda_8013AE30(HSD_GObj* gobj);
void ftZelda_8013AEAC(HSD_GObj* gobj);
void ftZelda_SpecialLw_StartMotion(HSD_GObj* gobj);
void ftZelda_SpecialAirLw_StartMotion(HSD_GObj* gobj);
void ftZelda_8013B068(HSD_GObj* gobj);
void ftZelda_8013B0A8(HSD_GObj* gobj);
void ftZelda_8013B0E8(HSD_GObj* arg0);
void ftZelda_8013B0EC(HSD_GObj* arg0);
void ftZelda_8013B0F0(HSD_GObj* arg0);
void ftZelda_8013B110(HSD_GObj* gobj);
void ftZelda_8013B154(HSD_GObj* gobj);
void ftZelda_8013B190(HSD_GObj* gobj);
void ftZelda_8013B1CC(HSD_GObj* gobj);
void ftZelda_8013B238(HSD_GObj* gobj);
void ftZelda_8013B2A4(HSD_GObj* arg0);
void ftZelda_8013B2E0(HSD_GObj* arg0);
void ftZelda_8013B31C(HSD_GObj* arg0);
void ftZelda_8013B320(HSD_GObj* arg0);
void ftZelda_8013B324(HSD_GObj* arg0);
void ftZelda_8013B344(HSD_GObj* gobj);
void ftZelda_8013B388(HSD_GObj* gobj);
void ftZelda_8013B3C4(HSD_GObj* gobj);
void ftZelda_8013B400(HSD_GObj* gobj);
void ftZelda_8013B46C(HSD_GObj* gobj);
void ftZelda_8013B4D8(HSD_GObj* gobj);
s32 ftZelda_8013B540(HSD_GObj* gobj);
bool ftZelda_8013B574(HSD_GObj* gobj);
void ftZelda_8013B5C4(HSD_GObj* gobj);
void ftZelda_8013B5EC(HSD_GObj* gobj);

// ftzelda 5
void ftZelda_SpecialS_StartMotion(HSD_GObj* gobj);
void ftZelda_SpecialAirS_StartMotion(HSD_GObj* gobj);
void ftZelda_8013B780(HSD_GObj* gobj);
void ftZelda_8013B89C(HSD_GObj* gobj);
void ftZelda_8013BA04(HSD_GObj* gobj);
void ftZelda_8013BA8C(HSD_GObj* gobj);
void ftZelda_8013BBA8(HSD_GObj* gobj);
void ftZelda_8013BD10(HSD_GObj* gobj);
void ftZelda_8013BDD0(HSD_GObj* gobj);
void ftZelda_8013BDD4(HSD_GObj* gobj);
void ftZelda_8013BE50(HSD_GObj* gobj);
void ftZelda_8013BE54(HSD_GObj* gobj);
void ftZelda_8013BE58(HSD_GObj* gobj);
void ftZelda_8013BED4(HSD_GObj* gobj);
void ftZelda_8013BF10(HSD_GObj* arg0);
void ftZelda_8013BF30(HSD_GObj* arg0);
void ftZelda_8013BF50(HSD_GObj* gobj);
void ftZelda_8013BFB0(HSD_GObj* gobj);
void ftZelda_8013C010(HSD_GObj* gobj);
void ftZelda_8013C070(HSD_GObj* arg0);
void ftZelda_8013C0DC(HSD_GObj* arg0);
void ftZelda_8013C148(HSD_GObj* arg0);
void ftZelda_8013C1B4(HSD_GObj* arg0);
void ftZelda_8013C220(HSD_GObj* arg0);
void ftZelda_8013C28C(HSD_GObj* arg0);

void ftZelda_8013AA38(HSD_GObj*);
void ftZelda_8013AB60(HSD_GObj*);
void ftZelda_8013AB68(HSD_GObj*);
void ftZelda_8013AC10(HSD_GObj*);
void ftZelda_8013AACC(HSD_GObj*);
void ftZelda_8013AB64(HSD_GObj*);
void ftZelda_8013AB9C(HSD_GObj*);
void ftZelda_8013AC4C(HSD_GObj*);
void ftZelda_8013B780(HSD_GObj*);
void ftZelda_8013BDD0(HSD_GObj*);
void ftZelda_8013BED8(HSD_GObj*);
void ftZelda_8013C070(HSD_GObj*);
void ftZelda_8013B89C(HSD_GObj*);
void ftZelda_8013BDD4(HSD_GObj*);
void ftZelda_8013BF10(HSD_GObj*);
void ftZelda_8013C0DC(HSD_GObj*);
void ftZelda_8013BA04(HSD_GObj*);
void ftZelda_8013BE50(HSD_GObj*);
void ftZelda_8013BF30(HSD_GObj*);
void ftZelda_8013C148(HSD_GObj*);
void ftZelda_8013BA8C(HSD_GObj*);
void ftZelda_8013BE54(HSD_GObj*);
void ftZelda_8013BF50(HSD_GObj*);
void ftZelda_8013C1B4(HSD_GObj*);
void ftZelda_8013BBA8(HSD_GObj*);
void ftZelda_8013BE58(HSD_GObj*);
void ftZelda_8013BFB0(HSD_GObj*);
void ftZelda_8013C220(HSD_GObj*);
void ftZelda_8013BD10(HSD_GObj*);
void ftZelda_8013BED4(HSD_GObj*);
void ftZelda_8013C010(HSD_GObj*);
void ftZelda_8013C28C(HSD_GObj*);
void ftZelda_801399B4(HSD_GObj*);
void ftZelda_80139A2C(HSD_GObj*);
void ftZelda_80139A34(HSD_GObj*);
void ftZelda_80139A98(HSD_GObj*);
void ftZelda_80139C1C(HSD_GObj*);
void ftZelda_80139C94(HSD_GObj*);
void ftZelda_80139C9C(HSD_GObj*);
void ftZelda_80139CC0(HSD_GObj*);
void ftZelda_8013A448(HSD_GObj*);
void ftZelda_8013A4E4(HSD_GObj*);
void ftZelda_8013A4EC(HSD_GObj*);
void ftZelda_8013A588(HSD_GObj*);
void ftZelda_801399F0(HSD_GObj*);
void ftZelda_80139A30(HSD_GObj*);
void ftZelda_80139A54(HSD_GObj*);
void ftZelda_80139AD4(HSD_GObj*);
void ftZelda_80139C58(HSD_GObj*);
void ftZelda_80139C98(HSD_GObj*);
void ftZelda_80139CBC(HSD_GObj*);
void ftZelda_80139D60(HSD_GObj*);
void ftZelda_8013A484(HSD_GObj*);
void ftZelda_8013A4E8(HSD_GObj*);
void ftZelda_8013A50C(HSD_GObj*);
void ftZelda_8013A5C4(HSD_GObj*);
void ftZelda_8013B068(HSD_GObj*);
void ftZelda_8013B0E8(HSD_GObj*);
void ftZelda_8013B0F0(HSD_GObj*);
void ftZelda_8013B154(HSD_GObj*);
void ftZelda_8013B2A4(HSD_GObj*);
void ftZelda_8013B31C(HSD_GObj*);
void ftZelda_8013B324(HSD_GObj*);
void ftZelda_8013B388(HSD_GObj*);
void ftZelda_8013B0A8(HSD_GObj*);
void ftZelda_8013B0EC(HSD_GObj*);
void ftZelda_8013B110(HSD_GObj*);
void ftZelda_8013B190(HSD_GObj*);
void ftZelda_8013B2E0(HSD_GObj*);
void ftZelda_8013B320(HSD_GObj*);
void ftZelda_8013B344(HSD_GObj*);
void ftZelda_8013B3C4(HSD_GObj*);

#endif