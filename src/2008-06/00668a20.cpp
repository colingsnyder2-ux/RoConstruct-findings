// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_runningaveragescaleordera5d430b783ce174b.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off,push)
#include "util/RunningAverage.h"
namespace RBX {inline Quaternion scaled(const Quaternion& q,float s){return Quaternion(s*q.x,s*q.y,s*q.z,s*q.w);}void RunningAverageState::update(const G3D::CoordinateFrame& cofm,float radius){position=position*0.75f+cofm.translation*0.25f;angles=angles*0.75f+scaled(Quaternion(cofm.rotation),radius*0.25f);}}
