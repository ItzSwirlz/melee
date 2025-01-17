#ifndef MELEE_SC_SCENE_H
#define MELEE_SC_SCENE_H

#include <baselib/forward.h>

/// Model with a single animation or no animation
struct StaticModelDesc {
    HSD_Joint* joint;
    HSD_AnimJoint* animjoint;
    HSD_MatAnimJoint* matanim_joint;
    HSD_ShapeAnimJoint* shapeanim_joint;
};

/// Model with multiple animations
struct DynamicModelDesc {
    HSD_Joint* joint;
    HSD_AnimJoint** anims;
    HSD_MatAnimJoint** matanims;
    HSD_ShapeAnimJoint** shapeanims;
};

// The basis of a rendered scene, like a stage, menu, or HUD overlay
struct SceneDesc {
    DynamicModelDesc** models;
    HSD_CObjDesc** cameras;
    HSD_LightDesc** lights;
    HSD_FogDesc** fogs;
};

#endif
