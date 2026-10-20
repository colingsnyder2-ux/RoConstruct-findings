// from server: 90% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_connectordotorderdc234d0394c55405.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off,push)
#include "G3D/CoordinateFrame.h"
struct Body{char prefix[0x94];G3D::CoordinateFrame frame;};
struct Result{G3D::Vector3 direction;float distance;G3D::Vector3 point;};
struct Connector{char prefix[8];G3D::Vector3*local;Body*first;Body*second;char gap[4];float length;void compute(Result&);};
void Connector::compute(Result&result){const G3D::Vector3& origin=first->frame.translation;const G3D::CoordinateFrame& f=second->frame;const G3D::Vector3& p=*local;
result.point=G3D::Vector3(f.rotation[0][2]*p.z+f.rotation[0][1]*p.y+f.rotation[0][0]*p.x+f.translation.x,f.rotation[1][2]*p.z+f.rotation[1][1]*p.y+f.rotation[1][0]*p.x+f.translation.y,f.rotation[2][2]*p.z+f.rotation[2][1]*p.y+f.rotation[2][0]*p.x+f.translation.z);result.direction=result.point-origin;result.distance=result.direction.unitize(1e-6f)-length;}
