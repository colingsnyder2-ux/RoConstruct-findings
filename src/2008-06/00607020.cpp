// from server: 98% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Oi /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_king_originala_ball_block_sdk_8740aeb81eee6a44.cpp

// Candidate translation unit (score above; library headers required).
#include <G3D/CoordinateFrame.h>
#include <G3D/Vector3int16.h>
#include "util/Extents.h"
#include "util/PV.h"
#include "v8world/Block.h"
#include "v8world/Ball.h"
namespace NativeContactABI {
struct Body { char prefix[0x94]; RBX::PV pv; };
struct Primitive { char prefix[0x80]; RBX::Extents fuzzyExtents; int fuzzyExtentsState; RBX::Geometry* geometry; Body* body; };
struct BallBlockContact {
 char prefix[12]; Primitive* primitive0; Primitive* primitive1;
 bool computeIsColliding(int& onBorder,G3D::Vector3int16& clip,G3D::Vector3& projection,float overlapIgnored);
};
bool BallBlockContact::computeIsColliding(int& onBorder,G3D::Vector3int16& clip,G3D::Vector3& projection,float overlapIgnored) {
 Primitive* p0=primitive0; Primitive* p1=primitive1;
 if(p0->fuzzyExtents.overlapsOrTouches(p1->fuzzyExtents)) {
  const RBX::PV& pv0=p0->body->pv; const RBX::PV& pv1=p1->body->pv;
  G3D::Vector3 delta=pv0.position.translation-pv1.position.translation;
  projection=pv1.position.rotation.transpose()*delta;
  static_cast<RBX::Block*>(primitive1->geometry)->projectToFace(projection,clip,onBorder);
  G3D::Vector3 world=pv1.position.pointToWorldSpace(projection);
  G3D::Vector3 difference=world-pv0.position.translation;
  return difference.magnitude() < (static_cast<RBX::Ball*>(primitive0->geometry)->getRadius()-overlapIgnored);
 }
 return false;
}
}
