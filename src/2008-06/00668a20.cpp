// from server: 98% by coldek
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_runningavg_scale_b5b05875022ab99e.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off,push)
#include "util/RunningAverage.h"
namespace RBX {inline Quaternion scaled(const Quaternion& q,volatile float s){float scale=s;return Quaternion(scale*q.x,scale*q.y,scale*q.z,scale*q.w);}void RunningAverageState::update(const G3D::CoordinateFrame& cofm,float radius){position=position*0.75f+cofm.translation*0.25f;angles=angles*0.75f+scaled(Quaternion(cofm.rotation),radius*0.25f);}}
