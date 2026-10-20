// from server: 90% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_landedcomponents818345bc7caa7a0c.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off,push)
#include "G3D/Vector3.h"
struct Humanoid { G3D::Vector3 updateWalkDirection(); };
struct S { char prefix[8]; Humanoid* humanoid; char gap[44]; float current,previous; void f(G3D::Vector3&); };
void S::f(G3D::Vector3& result) { const G3D::Vector3& direction=humanoid->updateWalkDirection(); result.x=direction.x*16.f; result.y=direction.y*16.f; result.z=direction.z*16.f; previous=current; current=result.length(); }
