#ifndef _stage_h_
#define _stage_h_

#include <global.h>

#include <dolphin/types.h>
#include <dolphin/mtx/mtxtypes.h>

typedef Vec Vec3;

// This struct is based in part on the datasheet
// however the info there is likely incorrect as this doesn't quite match grGroundParam
typedef struct _StageCameraInfo {
    f32 cam_bounds_left; // 0x0
    f32 cam_bounds_right; // 0x4
    f32 cam_bounds_top; // 0x8
    f32 cam_bounds_bottom; // 0xC
    f32 cam_x_offset; // 0x10
    f32 cam_y_offset; // 0x14
    f32 cam_vertical_tilt; // 0x18
    f32 cam_pan_degrees; // 0x1C
    f32 x20; // 0x20
    f32 x24; // 0x24
    f32 cam_track_ratio; // 0x28
    f32 cam_fixed_zoom; // 0x2C
    f32 cam_track_smooth; // 0x30
    f32 cam_zoom_rate; // 0x34
    f32 cam_max_depth; // 0x38
    f32 x3C; // 0x3C
    f32 pausecam_zpos_min; // 0x40
    f32 pausecam_zpos_init; // 0x44
    f32 pausecam_zpos_max; // 0x48
    f32 cam_angle_up; // 0x4C
    f32 cam_angle_down; // 0x50
    f32 cam_angle_left; // 0x54
    f32 cam_angle_right; // 0x58
    Vec fixed_cam_pos; // 0x5C - 0x64
    f32 fixed_cam_fov; // 0x68
    f32 fixed_cam_vert_angle; // 0x6C
    f32 fixed_cam_horz_angle; // 0x70
} StageCameraInfo;

typedef struct _StageBlastZone {
    f32 left; // 0x74
    f32 right; // 0x78
    f32 top; // 0x7C
    f32 bottom; // 0x80
} StageBlastZone;

typedef struct _StageInfo {
    StageCameraInfo cam_info; // 0x00 - 0x70
    StageBlastZone blast_zone; // 0x74 - 0x80

    u32 x84; // 0x84

    u32 internal_stage_id; // 0x88

    struct {
        u8 b0 : 1;
        u8 b1 : 1;
        u8 b2 : 1;
        u8 b3 : 1;
        u8 b4 : 1;
        u8 b5 : 1;
        u8 b6 : 1;
        u8 b7 : 1;
    } unk8C;

    u8 data[0x6EB];
} StageInfo;

typedef struct {
    void (*callback0)(struct _HSD_GObj*);
    s32 (*callback1)();
    void (*callback2)();
    void (*callback3)();
    u32 flags;
} StageCallbacks;

typedef struct _StageData {
    u32 flags1;
    StageCallbacks* callbacks;
    const char* data1;
    void (*callback0)();
    void (*callback1)();
    void (*callback2)();
    void (*callback3)();
    s32 (*callback4)();
    s32 (*callback5)();
    s32 (*callback6)();
    u32 flags2;
    u32 unused[2];
} StageData;

typedef struct _Map {
    int x0;                 // 0x0
    struct _HSD_GObj* gobj; // 0x4
    int x8;                 // 0x8
    int xC;                 // 0xC
    struct {
        u8 b0 : 1;
        u8 b1 : 1;
        u8 b2 : 1;
        u8 b3 : 1;
        u8 b4 : 1;
        u8 b5 : 1;
        u8 b6 : 1;
        u8 b7 : 1;
    } x10_flags;
    struct {
        u8 b012 : 3;
        u8 b3 : 1;
        u8 b4 : 1;
        u8 b5 : 1;
        u8 b6 : 1;
        u8 b7 : 1;
    } x11_flags;

    int map_id; // 0x14
    int x18;    // 0x18
    void* x1C_callback;
    u8 x20_pad[0xC4 - 0x20];
    s8 xC4;
    s8 xC5;
    s16 xC6;
    s32 xC8;
    u8 xCC_pad[0x218 - 0xCC];
} Map;

f32 Stage_GetCamBoundsLeftOffset();
f32 Stage_GetCamBoundsRightOffset();
f32 Stage_GetCamBoundsTopOffset();
f32 Stage_GetCamBoundsBottomOffset();
f32 Stage_GetCamPanAngleRadians();
f32 Stage_GetCamMaxDepth();
f32 Stage_GetCamZoomRate();
f32 Stage_GetCamInfoX20();
f32 Stage_GetCamInfoX24();
f32 Stage_GetCamFixedZoom();
f32 Stage_GetCamTrackRatio();
f32 Stage_GetCamTrackSmooth();
f32 Stage_GetBlastZoneRightOffset();
f32 Stage_GetBlastZoneLeftOffset();
f32 Stage_GetBlastZoneTopOffset();
f32 Stage_GetBlastZoneBottomOffset();
f32 Stage_CalcUnkCamY();
f32 Stage_CalcUnkCamYBounds();
void Stage_UnkSetVec3TCam_Offset(Vec* vec3);
f32 Stage_GetPauseCamZPosMin();
f32 Stage_GetPauseCamZPosInit();
f32 Stage_GetPauseCamZPosMax();
f32 Stage_GetCamAngleRadiansUp();
f32 Stage_GetCamAngleRadiansDown();
f32 Stage_GetCamAngleRadiansLeft();
f32 Stage_GetCamAngleRadiansRight();
void Stage_80224CAC(Vec* arg0);
void Stage_SetVecToFixedCamPos(Vec* arg0);
f32 Stage_GetCamFixedFov();
BOOL Stage_80224DC8(s32 arg);
void Stage_80224E38(Vec* arg0, s32 arg1);
void Stage_80224E64(s32 arg0, Vec* arg_vec);
s32 Stage_80224FDC(Vec* arg0);
s32 Stage_80225074(s32 arg0);
s32 Stage_80225194();
s32 Stage_8022519C(s32 idx);
s32 Stage_802251B4(s32 idx, s32 arg1);
void Stage_802251E8(s32 idx, s32* unused);
void Stage_8022524C();
void Stage_80225298();
void Stage_802252E4(s32 idx, s32 unused);
void Stage_8022532C(s32 idx, s32 arg1);

#endif
