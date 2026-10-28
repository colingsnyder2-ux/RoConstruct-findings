// from server: 99% by coldek
// claude-opus-5-5 claudeSub28c: codegen analog; 2 unused float locals set the /fp:fast x87 frame-local count (lookVector operand order), not original declarations
// from server: 76% by coldek
// roc 2008-06 0063e430  unit: RBX::SlingshotTool  size: 652 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063e430
//

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <math.h>
namespace G3D {
struct Vector3 {
 float x,y,z;
 Vector3():x(0),y(0),z(0){}
 Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 Vector3 operator+(const Vector3&v)const{return Vector3(x+v.x,y+v.y,z+v.z);}
 Vector3 operator-(const Vector3&v)const{return Vector3(x-v.x,y-v.y,z-v.z);}
 Vector3&operator*=(float f){x*=f;y*=f;z*=f;return *this;}
 Vector3 operator*(float f)const{return Vector3(x*f,y*f,z*f);}
 Vector3 direction()const{float lenSquared=x*x+y*y+z*z;float inv=1.0f/sqrtf(lenSquared);return Vector3(x*inv,y*inv,z*inv);}
 float unitize(float);
 static const Vector3&zero(){static Vector3 v(0,0,0);return v;}
};
struct Matrix3 {
 float data[9];Matrix3(const Matrix3&r){*this=r;}
 Matrix3&operator=(const Matrix3&);Vector3 getColumn(int)const;static const Matrix3&identity();
};
struct Frame {
 Matrix3 rotation;Vector3 translation;
 Frame(const Vector3&t):rotation(Matrix3::identity()),translation(t){}
 static const float zLookDirection;
 Vector3 lookVector()const{return rotation.getColumn(2)*zLookDirection;}
};
}
namespace RBX {
struct UIEvent;struct HitTestFilter;struct PartInstance;
struct MouseCommand {PartInstance*getPart(const UIEvent&,const HitTestFilter*,G3D::Vector3&);};
struct Velocity {G3D::Vector3 linear,rotational;Velocity(const G3D::Vector3&l,const G3D::Vector3&r):linear(l),rotational(r){}};
struct PV {G3D::Frame position;Velocity velocity;PV(const G3D::Frame&,const Velocity&);};
struct Constants {static const G3D::Vector3&getKmsGravity(){static G3D::Vector3 v(0,-9.8100004f,0);return v;}};
struct Units {static G3D::Vector3 kmsAccelerationToRbx(const G3D::Vector3&);};
float __cdecl ballisticAngle(float,float,float,float);
struct SlingshotTool:MouseCommand {PV launch(const UIEvent&,const G3D::Frame&);};
static __forceinline float launchAngle(float distance,float height){return ballisticAngle(85.0f,distance,height,Units::kmsAccelerationToRbx(Constants::getKmsGravity()).y);}
static __forceinline PV launchPV(const G3D::Vector3&position,const G3D::Vector3&direction){G3D::Frame launchFrame(position);return PV(launchFrame,Velocity(direction*85.0f,G3D::Vector3::zero()));}
PV SlingshotTool::launch(const UIEvent&event,const G3D::Frame&frame){ float roc_dd0 = 0; float roc_dd1 = 0;
 G3D::Vector3 hit;
 PartInstance*part=getPart(event,0,hit);
 G3D::Vector3 direction=part?(hit-frame.translation).direction():frame.lookVector();
 G3D::Vector3 position=frame.translation+direction*3.0f;
 if(!part){
  return launchPV(position,direction);
 } else {
  G3D::Vector3 delta=hit-position;
  float height=delta.y;delta.y=0;
  float angle=launchAngle(delta.unitize(0.000001f),height);
  delta.y=sinf(angle);
  float c=cosf(angle);
  delta.x*=c;delta.z*=c;
  return launchPV(position,delta);
 }
}
}
