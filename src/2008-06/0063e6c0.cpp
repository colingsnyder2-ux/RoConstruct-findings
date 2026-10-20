// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_rocketnormorder49eb25ae998c6cfb.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off)
#include "util/PV.h"
inline G3D::Vector3 direction(const G3D::Vector3&v){float inv=1.0f/sqrtf(v.z*v.z+v.y*v.y+v.x*v.x);return G3D::Vector3(v.x*inv,v.y*inv,v.z*inv);}
struct RocketTool{void* intersect(void*,int,G3D::Vector3&);RBX::PV makeResult(void*,const G3D::CoordinateFrame&);};
RBX::PV RocketTool::makeResult(void* event,const G3D::CoordinateFrame& frame){G3D::Vector3 hit;G3D::Vector3 forward=intersect(event,0,hit)?direction(hit-frame.translation):frame.lookVector();G3D::CoordinateFrame result;result.lookAt(forward);result.translation=forward*5.0f+frame.translation;return RBX::PV(result,RBX::Velocity::zero());}
