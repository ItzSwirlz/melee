#include "ftCrazyHand/forward.h"
#include "ftMasterHand/forward.h"

#include "ftCh_Init.h"

#include "types.h"

#include "ft/fighter.h"
#include "ft/ft_0877.h"
#include "ft/ftbosslib.h"
#include "ft/ftcamera.h"
#include "ft/inlines.h"
#include "ft/types.h"

MotionState ftCh_Init_MotionStateTable[ftCh_MS_SelfCount] = {
    {
        // ftMh_MS_Wait1_0 = 341
        ftMh_SM_Wait1_0,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Wait1_0_Anim,
        ftCh_Wait1_0_IASA,
        ftCh_Wait1_0_Phys,
        ftCh_Wait1_0_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Wait2_0 = 342
        ftMh_SM_Wait2_0,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Wait1_0_Anim,
        ftCh_Wait1_0_IASA,
        ftCh_Wait1_0_Phys,
        ftCh_Wait1_0_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Entry = 343
        ftMh_SM_Entry,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Entry_Anim,
        ftCh_Entry_IASA,
        ftCh_Entry_Phys,
        ftCh_Entry_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Damage = 344
        ftMh_SM_Damage,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Damage_Anim,
        ftCh_Damage_IASA,
        ftCh_Damage_Phys,
        ftCh_Damage_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Damage2 = 345
        ftMh_SM_Damage2,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Damage2_Anim,
        ftCh_Damage2_IASA,
        ftCh_Damage2_Phys,
        ftCh_Damage2_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_WaitSweep = 346
        ftMh_SM_WaitSweep,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_WaitSweep_Anim,
        ftCh_WaitSweep_IASA,
        ftCh_WaitSweep_Phys,
        ftCh_WaitSweep_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_SweepLoop = 347
        ftMh_SM_SweepLoop,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_SweepLoop_Anim,
        ftCh_SweepLoop_IASA,
        ftCh_SweepLoop_Phys,
        ftCh_SweepLoop_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_SweepWait = 348
        ftMh_SM_SweepWait,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_SweepWait_Anim,
        ftCh_SweepWait_IASA,
        ftCh_SweepWait_Phys,
        ftCh_SweepWait_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Slap = 349
        ftMh_SM_Slap,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Slap_Anim,
        ftCh_Slap_IASA,
        ftCh_Slap_Phys,
        ftCh_Slap_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Walk2 = 350
        ftMh_SM_Walk2,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Walk2_Anim,
        ftCh_Walk2_IASA,
        ftCh_Walk2_Phys,
        ftCh_Slap_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_WalkLoop = 351
        ftMh_SM_WalkLoop,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_WalkLoop_Anim,
        ftCh_WalkLoop_IASA,
        ftCh_WalkLoop_Phys,
        ftCh_WalkLoop_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_WalkWait = 352
        ftMh_SM_WalkWait,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_WalkWait_Anim,
        ftCh_WalkWait_IASA,
        ftCh_WalkWait_Phys,
        ftCh_WalkWait_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_WalkShoot = 353
        ftMh_SM_WalkShoot,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_WalkShoot_Anim,
        ftCh_WalkShoot_IASA,
        ftCh_WalkShoot_Phys,
        ftCh_WalkShoot_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Drill = 354
        ftMh_SM_Drill,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Drill_Anim,
        ftCh_Drill_IASA,
        ftCh_Drill_Phys,
        ftCh_Drill_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_RockCrushUp = 355
        ftMh_SM_RockCrushUp,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_RockCrushUp_Anim,
        ftCh_RockCrushUp_IASA,
        ftCh_RockCrushUp_Phys,
        ftCh_RockCrushUp_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_RockCrushWait = 356
        ftMh_SM_RockCrushWait,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_RockCrushWait_Anim,
        ftCh_RockCrushUp_IASA,
        ftCh_RockCrushUp_Phys,
        ftCh_RockCrushUp_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_RockCrushDown = 357
        ftMh_SM_RockCrushDown,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_RockCrushDown_Anim,
        ftCh_RockCrushDown_IASA,
        ftCh_RockCrushDown_Phys,
        ftCh_RockCrushDown_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_PaperCrush = 358
        ftMh_SM_PaperCrush,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_PaperCrush_Anim,
        ftCh_PaperCrush_IASA,
        ftCh_PaperCrush_Phys,
        ftCh_PaperCrush_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Poke1 = 359
        ftMh_SM_Poke1,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Poke1_Anim,
        ftCh_Poke1_IASA,
        ftCh_Poke1_Phys,
        ftCh_Poke1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Poke2 = 360
        ftMh_SM_Poke2,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Poke2_Anim,
        ftCh_Poke2_IASA,
        ftCh_Poke2_Phys,
        ftCh_Poke2_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_FingerBeamStart = 361
        ftMh_SM_FingerBeamStart,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_FingerBeamStart_Anim,
        ftCh_FingerBeamStart_IASA,
        ftCh_FingerBeamStart_Phys,
        ftCh_FingerBeamStart_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_FingerBeamLoop = 362
        ftMh_SM_FingerBeamLoop,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_FingerBeamLoop_Anim,
        ftCh_FingerBeamLoop_IASA,
        ftCh_FingerBeamLoop_Phys,
        ftCh_FingerBeamLoop_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_FingerBeamEnd = 363
        ftMh_SM_FingerBeamEnd,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_FingerBeamEnd_Anim,
        ftCh_FingerBeamEnd_IASA,
        ftCh_FingerBeamEnd_Phys,
        ftCh_FingerBeamEnd_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_FingerGun1 = 364
        ftMh_SM_FingerGun1,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_FingerGun1_Anim,
        ftCh_FingerGun1_IASA,
        ftCh_FingerGun1_Phys,
        ftCh_FingerGun1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_FingerGun2 = 365
        ftMh_SM_FingerGun2,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_FingerGun2_Anim,
        ftCh_FingerGun2_IASA,
        ftCh_FingerGun2_Phys,
        ftCh_FingerGun2_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_FingerGun3 = 366
        ftMh_SM_FingerGun3,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_FingerGun2_Anim,
        ftCh_FingerGun2_IASA,
        ftCh_FingerGun2_Phys,
        ftCh_FingerGun2_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_BackAirplane1 = 367
        ftMh_SM_BackAirplane1,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_BackAirplane1_Anim,
        ftCh_BackAirplane1_IASA,
        ftCh_BackAirplane1_Phys,
        ftCh_BackAirplane1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_BackAirplane2 = 368
        ftMh_SM_BackAirplane2,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_BackAirplane2_Anim,
        ftCh_BackAirplane2_IASA,
        ftCh_BackAirplane2_Phys,
        ftCh_BackAirplane2_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_BackAirplane3 = 369
        ftMh_SM_BackAirplane3,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_BackAirplane3_Anim,
        ftCh_BackAirplane3_IASA,
        ftCh_BackAirplane3_Phys,
        ftCh_BackAirplane3_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_BackPunch = 370
        ftMh_SM_BackPunch,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_BackPunch_Anim,
        ftCh_BackPunch_IASA,
        ftCh_BackPunch_Phys,
        ftCh_BackPunch_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_BackCrush = 371
        ftMh_SM_BackCrush,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_BackCrush_Anim,
        ftCh_BackCrush_IASA,
        ftCh_BackCrush_Phys,
        ftCh_BackCrush_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_BackDisappear = 372
        ftMh_SM_BackDisappear,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_BackDisappear_Anim,
        ftCh_BackDisappear_IASA,
        ftCh_BackDisappear_Phys,
        ftCh_BackDisappear_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Wait1_1 = 373
        ftMh_SM_Wait1_1,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Wait1_1_Anim,
        ftCh_Wait1_1_IASA,
        ftCh_Wait1_1_Phys,
        ftCh_Wait1_1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Grab = 374
        ftMh_SM_Grab,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Grab_Anim,
        ftCh_Grab_IASA,
        ftCh_Grab_Phys,
        ftCh_Grab_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Cancel = 375
        ftMh_SM_Cancel,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Cancel_Anim,
        ftCh_Cancel_IASA,
        ftCh_Cancel_Phys,
        ftCh_Cancel_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Squeezing0 = 376
        ftMh_SM_Squeezing0,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Squeezing0_Anim,
        ftCh_Squeezing0_IASA,
        ftCh_Squeezing0_Phys,
        ftCh_Squeezing0_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Squeezing1 = 377
        ftMh_SM_Squeezing1,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Squeezing1_Anim,
        ftCh_Squeezing1_IASA,
        ftCh_Squeezing1_Phys,
        ftCh_Squeezing1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Squeeze = 378
        ftMh_SM_Squeeze,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Squeeze_Anim,
        ftCh_Squeeze_IASA,
        ftCh_Squeeze_Phys,
        ftCh_Squeeze_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Throw = 379
        ftMh_SM_Throw,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Throw_Anim,
        ftCh_Throw_IASA,
        ftCh_Throw_Phys,
        ftCh_Throw_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Slam = 380
        ftMh_SM_Slam,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Slam_Anim,
        ftCh_Slam_IASA,
        ftCh_Slam_Phys,
        ftCh_Slam_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Fail = 381
        ftMh_SM_Fail,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_Fail_Anim,
        ftCh_Fail_IASA,
        ftCh_Fail_Phys,
        ftCh_Fail_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_TagCrush = 382
        ftMh_SM_TagCrush,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_TagCrush_Anim,
        ftCh_TagCrush_IASA,
        ftCh_TagCrush_Phys,
        ftCh_TagCrush_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_TagApplaud = 383
        ftMh_SM_TagApplaud,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_TagApplaud_Anim,
        ftCh_TagApplaud_IASA,
        ftCh_TagApplaud_Phys,
        ftCh_TagApplaud_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_TagRockPaper = 384
        ftMh_SM_TagRockPaper,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_TagRockPaper_Anim,
        ftCh_TagRockPaper_IASA,
        ftCh_TagRockPaper_Phys,
        ftCh_TagRockPaper_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_TagGrab = 385
        ftMh_SM_TagGrab,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_TagGrab_Anim,
        ftCh_TagGrab_IASA,
        ftCh_TagGrab_Phys,
        ftCh_TagGrab_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_TagSqueeze = 386
        ftMh_SM_TagSqueeze,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_TagSqueeze_Anim,
        ftCh_TagGrab_IASA,
        ftCh_TagGrab_Phys,
        ftCh_TagGrab_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_TagFail = 387
        ftMh_SM_TagFail,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_TagFail_Anim,
        ftCh_TagFail_IASA,
        ftCh_TagFail_Phys,
        ftCh_TagFail_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_TagCancel = 388
        ftMh_SM_TagCancel,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_TagCancel_Anim,
        NULL,
        ftCh_TagCancel_Phys,
        ftCh_TagCancel_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftMh_MS_Wait1_2 = 389
        ftMh_SM_Wait1_2,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCh_TagCancel_Anim,
        NULL,
        ftCh_TagCancel_Phys,
        ftCh_TagCancel_Coll,
        ftCamera_UpdateCameraBox,
    },
};

char ftCh_Init_DatFilename[] = "PlCh.dat";
char ftCh_Init_DataName[] = "ftDataCrazyhand";
char ftCh_Init_803D4834[] = "PlChNr.dat";
char ftCh_Init_803D4840[] = "PlyCrazyhand_Share_joint";
char ftCh_Init_AnimDatFilename[] = "PlChAJ.dat";

Fighter_CostumeStrings ftCh_Init_CostumeStrings[] = {
    { ftCh_Init_803D4834, ftCh_Init_803D4840, NULL },
};

void ftCh_Init_OnDeath(HSD_GObj* gobj) {}

void ftCh_Init_OnLoad(HSD_GObj* gobj)
{
    ftData* ftdata;
    ftCrazyHandAttributes* ftData_attr;
    void** items;
    Fighter* fp;

    fp = GET_FIGHTER(gobj);
    ftdata = fp->ft_data;
    ftData_attr = ftdata->ext_attr;
    items = ftdata->x48_items;

    PUSH_ATTRS(fp, ftCrazyHandAttributes);

    ftBossLib_8015BDB4(gobj);
    it_8026B3F8(items[0], 127);
    it_8026B3F8(items[1], 128);
    it_8026B3F8(items[2], 129);
    fp->x2229_b5_no_normal_motion = 1;
    fp->x2229_b6 = 1;
    fp->x2229_b7 = 1;
    fp->x222A_flag.bits.b0 = 1;
    fp->x222A_flag.bits.b1 = 1;
    fp->x2229_b3 = 1;
    fp->cur_pos.x = ftData_attr->x18;
    fp->cur_pos.y = ftData_attr->x1C;
    fp->cur_pos.z = 0.0f;
    fp->mv.mh.unk0.x28 = 0;
    fp->mv.mh.unk0.x2C = 0;
    fp->mv.mh.unk0.x30 = 0;
    fp->mv.mh.unk0.x34 = 0;
    fp->mv.mh.unk0.x38 = -1;
    fp->mv.mh.unk0.x3C = -1;
    fp->mv.mh.unk0.x40 = -1;
    fp->mv.mh.unk0.x1C = 0.0f;
    fp->mv.mh.unk0.x20 = 0;
    fp->fv.mh.x222C = ftBossLib_8015C244(gobj, &fp->cur_pos);
    fp->fv.mh.x2238 = 1.0f;
    fp->fv.mh.x224C = 0;
    fp->fv.mh.x2250 = ftMh_MS_Damage2;
    fp->fv.mh.x2254 = 0;
    fp->x1A98 = 1;
    ftBossLib_8015BD24(fp->x1A98, &fp->fv.mh.x223C, fp->fv.ch.x2238,
                       ftData_attr->x0, ftData_attr->x8, ftData_attr->x4);
}

void ftCh_Init_LoadSpecialAttrs(HSD_GObj* gobj)
{
    COPY_ATTRS(gobj, ftCrazyHandAttributes);
}
