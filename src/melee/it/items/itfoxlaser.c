#include "itfoxlaser.h"

#include <melee/db/db_2253.h>
#include <melee/it/it_266F.h>
#include <melee/it/it_26B1.h>
#include <melee/it/item.h>
#include <melee/lb/lbrefract.h>
#include <melee/lb/lbvector.h>
#include <MSL/math.h>

ItemStateTable it_803F67D0[] = {
    {
        0,
        it_8029C6F4,
        it_8029C9CC,
        it_8029C9EC,
    },
    {
        1,
        it_8029C6F4,
        it_8029C9CC,
        it_8029C9EC,
    }
};

bool it_8029C4D4(Item_GObj* item_gobj)
{
    Item* item = item_gobj->user_data;
    return it_8026E9A4(item_gobj, &item->xDD4_itemVar.foxlaser.xDE0,
                       &item->pos, 0);
}

static inline void normalizeAngle(f32* angle)
{
    while (*angle < 0.0F) {
        *angle += 2 * M_PI;
    }
    while (*angle > 2 * M_PI) {
        *angle -= 2 * M_PI;
    }
}

void it_8029C504(HSD_GObj* parent, Vec3* pos, enum_t msid, int kind, f32 angle,
                 f32 arg9)
{
    SpawnItem spawn;
    u32 unused[1];
    Item_GObj* item_gobj;
    bool right_facing;

    normalizeAngle(&angle);
    spawn.kind = kind;
    spawn.prev_pos = *pos;
    spawn.prev_pos.z = 0.0F;
    it_8026BB68(parent, &spawn.pos);
    right_facing = true;
    if (!(angle < M_PI / 2) && !(angle > M_PI * 3 / 2)) {
        right_facing = false;
    }
    spawn.facing_dir = right_facing ? +1.0F : -1.0F;
    spawn.x3C_damage = 0;
    spawn.vel.x = spawn.vel.y = spawn.vel.z = 0.0F;
    spawn.x0_parent_gobj = parent;
    spawn.x4_parent_gobj2 = spawn.x0_parent_gobj;
    spawn.x44_flag.bits.b0 = true;
    spawn.x40 = 0;
    item_gobj = Item_80268B18(&spawn);
    if (item_gobj != NULL) {
        Item* item = item_gobj->user_data;
        FoxLaserVars* attr = item->xC4_article_data->x4_specialAttributes;
        Item_80268E5C(item_gobj, msid, ITEM_ANIM_UPDATE);
        it_80275158(item_gobj, attr->xDD4);
        item->xDD4_itemVar.foxlaser.xDD4 = 0.0F;
        item->xDD4_itemVar.foxlaser.xDD8 = angle;
        item->xDD4_itemVar.foxlaser.xDDC = arg9;
        item->xDD4_itemVar.foxlaser.xDE0 = spawn.pos;
        db_80225DD8(item_gobj, parent);
    }
}

void it_8029C6A4(f32 angle, f32 vel, HSD_GObj* parent, Vec3* vec, int kind)
{
    it_8029C504(parent, vec, 0, kind, angle, vel);
}

void it_8029C6CC(f32 angle, f32 vel, HSD_GObj* parent, Vec3* vec, int kind)
{
    it_8029C504(parent, vec, 1, kind, angle, vel);
}

static inline f32 fabsf(f32 x)
{
    return (x < 0) ? -x : x;
}

bool it_8029C6F4(Item_GObj* item_gobj)
{
    Article* article;
    Item* item;
    FoxLaserVars* attr;
    HSD_JObj* jobj;
    f32 dir;
    f32 vel_x;

    item = item_gobj->user_data;
    jobj = item_gobj->hsd_obj;
    article = item->xC4_article_data;
    attr = article->x4_specialAttributes;
    item->x40_vel.x = item->xDD4_itemVar.foxlaser.xDDC *
                      cosf(item->xDD4_itemVar.foxlaser.xDD8);
    item->x40_vel.y = item->xDD4_itemVar.foxlaser.xDDC *
                      sinf(item->xDD4_itemVar.foxlaser.xDD8);
    item->x40_vel.z = 0.0F;
    if (item->x40_vel.x > 0.0F) {
        dir = +1.0F;
    } else {
        dir = -1.0F;
    }
    item->facing_dir = dir;
    HSD_JObjSetRotationY(jobj, (M_PI / 2) * item->facing_dir);
    if (item->facing_dir == 1.0F) {
        vel_x = -item->x40_vel.x;
    } else {
        vel_x = +item->x40_vel.x;
    }
    HSD_JObjSetRotationX(jobj, M_PI + atan2f(item->x40_vel.y, vel_x));
    item->xDD4_itemVar.foxlaser.xDD4 +=
        fabsf(item->xDD4_itemVar.foxlaser.xDDC) / 11.25F;
    if (item->xDD4_itemVar.foxlaser.xDD4 > attr->xDD8) {
        item->xDD4_itemVar.foxlaser.xDD4 = attr->xDD8;
    }
    if (item->xDD4_itemVar.foxlaser.xDD4 < 1e-5F) {
        item->xDD4_itemVar.foxlaser.xDD4 = 1e-3;
    }
    HSD_JObjSetScaleZ(jobj, item->xDD4_itemVar.foxlaser.xDD4);
    return it_80273130(item_gobj);
}

void it_8029C9CC(Item_GObj* item_gobj)
{
    Item* item = item_gobj->user_data;
    item->xDD4_itemVar.foxlaser.xDE0 = item->pos;
}

bool it_8029C9EC(Item_GObj* item_gobj)
{
    Item* item = item_gobj->user_data;
    Vec3 sp18 = item->pos;
    Vec3 unused;
    if (it_8029C4D4(item_gobj)) {
        it_80275158(item_gobj, 1.0F);
        item->pos = sp18;
    }
    return false;
}

bool it_8029CA78(Item_GObj*)
{
    return true;
}

bool it_8029CA80(Item_GObj* item_gobj)
{
    u32 unused[2];

    Item* item = item_gobj->user_data;
    HSD_JObj* jobj = item_gobj->hsd_obj;
    if (item->facing_dir != item->xC68) {
        item->facing_dir = item->xC68;
        HSD_JObjSetRotationY(jobj, (M_PI / 2) * item->facing_dir);
    }
    HSD_JObjSetScaleZ(jobj, item->xDD4_itemVar.foxlaser.xDD4 = 1e-3);
    item->xDD4_itemVar.foxlaser.xDD8 += M_PI;
    normalizeAngle(&item->xDD4_itemVar.foxlaser.xDD8);
    return false;
}

bool it_8029CC4C(Item_GObj*)
{
    return true;
}

bool it_8029CC54(Item_GObj* item_gobj)
{
    Item* item = item_gobj->user_data;
    u32 unused[2];
    lbVector_Mirror(&item->x40_vel, &item->xC58);
    item->xDD4_itemVar.foxlaser.xDD4 = 1e-3;
    item->xDD4_itemVar.foxlaser.xDD8 =
        atan2f(item->x40_vel.y, item->x40_vel.x);
    normalizeAngle(&item->xDD4_itemVar.foxlaser.xDD8);
    return false;
}

bool it_8029CCF0(Item_GObj*)
{
    return true;
}

void it_8029CCF8(Item_GObj* item_gobj, HSD_GObj* ref)
{
    it_8026B894(item_gobj, ref);
}
