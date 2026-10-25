// from server: 87% by king_originala_sol_native
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast /QIfist
// roc-lib: rbxgs-dll roc_sol_resize_nativeiround_0cd291886e1e8370.cpp

// Candidate translation unit (score above; library headers required).
#include <G3D/g3dmath.h>
#pragma include_alias("v8tree/Instance.h", "roc_espeon_nativeinstanceguidportablea1682bda32c99cd2.cpp")
#include "v8datamodel/PartInstance.h"
#include "util/Math.h"
#include <boost/weak_ptr.hpp>
#include <cmath>
namespace RBX {
// Offsets proven in 0063ee20: weak20, face2c, origin30, accumulated40.
// 00518830 is verified G3D Ray::fromOriginAndDirection, cdecl value return.
G3D::Ray makeResizeAxis(const G3D::Vector3&,const G3D::Vector3&);
class ResizeToolRecovery {
 char prefix[0x20]; boost::weak_ptr<PartInstance> part;
 int reserved28; int face; G3D::Vector3 start; int reserved3c; int accumulated;
 G3D::Ray getUnitMouseRay(const void*) const;
 void capturedDrag(int);
public: void drag(const void*);
};
void ResizeToolRecovery::drag(const void* event){
 if(part.expired()) return;
 G3D::Vector3 direction=Math::getWorldNormal((NormalId)face,part.lock()->getLocation());
 G3D::Ray axis=makeResizeAxis(start,direction);
 G3D::Ray mouse=getUnitMouseRay(event);
 G3D::Vector3 hit=Math::closestPointOnRay(axis,mouse);
 float delta=(hit-start).dot(axis.direction)-accumulated;
 if(delta>1.0f){int steps=G3D::iRound((float)std::floor(delta));accumulated+=steps;capturedDrag(steps);}
 if(delta<-1.0f){int steps=-G3D::iRound((float)std::floor(-delta));accumulated+=steps;capturedDrag(steps);}
}
}
