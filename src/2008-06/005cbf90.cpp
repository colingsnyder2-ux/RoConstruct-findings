// from server: 88% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_camerazoomnormfast337d371815ceb49b.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off,push)
#include <G3D/Vector3.h>
struct Camera{char prefix[0x198];G3D::Vector3 position;char gap[0x24];G3D::Vector3 focus;int canZoom(int);};


int Camera::canZoom(int direction){G3D::Vector3 v=position-focus;float distance=sqrtf(v.z*v.z+v.y*v.y+v.x*v.x);if(direction>0){if(!(distance>.5f))return 0;}else if(!(distance<1000.0f))return 0;return 1;}
