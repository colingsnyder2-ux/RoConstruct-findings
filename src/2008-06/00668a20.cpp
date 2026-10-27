// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_trial_7f3fe1bc7dd49cb8.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off,push)
#include "util/RunningAverage.h"
namespace RBX {
void RunningAverageState::update(const G3D::CoordinateFrame& cofm, float radius)
{
	const float weightNew = 1.0f - 0.75f;
	position = 0.75f * position + weightNew * cofm.translation;
	angles = (angles * 0.75f) + (Quaternion(cofm.rotation) * (weightNew * radius));
}
}
