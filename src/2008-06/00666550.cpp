// from server: 83% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <stddef.h>
#include <algorithm>
namespace G3D {
inline float clamp(float,float,float);
struct Vector3 {
 float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 Vector3 operator-()const{return Vector3(-x,-y,-z);}Vector3 operator-(const Vector3&v)const{return Vector3(x-v.x,y-v.y,z-v.z);}Vector3 operator*(float f)const{return Vector3(x*f,y*f,z*f);}Vector3 operator/(float)const;
 Vector3 clamp(const Vector3&low,const Vector3&high)const{return Vector3(G3D::clamp(x,low.x,high.x),G3D::clamp(y,low.y,high.y),G3D::clamp(z,low.z,high.z));}
 static const Vector3&zero(){static Vector3 v(0,0,0);return v;}
};
struct Matrix3 {float elt[3][3];};
struct CoordinateFrame {Matrix3 rotation;Vector3 translation;};
inline float clamp(float v,float low,float high){if(v<=low)return low;else if(v>=high)return high;else return v;}
inline const float&min(const float&a,const float&b){return a<b?a:b;}
}
namespace RBX {
struct Velocity {G3D::Vector3 linear,rotational;__declspec(noinline) Velocity():linear(G3D::Vector3::zero()),rotational(G3D::Vector3::zero()){}static const Velocity&zero(){static Velocity v;return v;}};
struct PV {G3D::CoordinateFrame position;Velocity velocity;};
struct SimBody {char opaque[12];PV pv;void accumulateForce(const G3D::Vector3&,const G3D::Vector3&);};
struct Cofm {float getMass()const;};
struct Body {
 char opaque[0x10];Body*root;char opaque14[0x28-0x14];Cofm*cofm;SimBody*simBody;char opaque30[0x8c-0x30];float mass;char opaque90[4];G3D::CoordinateFrame frame;Velocity velocity;
 void updatePV()const;const G3D::CoordinateFrame&getCoordinateFrame()const{updatePV();return frame;}const Velocity&getVelocity()const{updatePV();return velocity;}
 G3D::Vector3 getBranchIBodyV3()const;const G3D::Vector3&getBranchTorque()const;const G3D::Vector3&getBranchForce()const;
 float getBranchMass()const{return cofm?cofm->getMass():mass;}
 void accumulateTorque(const G3D::Vector3&);void accumulateForceAtBranchCofm(const G3D::Vector3&);
 void accumulateForce(const G3D::Vector3&f,const G3D::Vector3&p){SimBody*s=root->simBody;if(s)s->accumulateForce(f,p);}
 Body*getRoot()const{return root;}
};
struct Primitive {char opaque[0xa0];Body*body;char opaquea4[12];float friction;Body*getBody()const{return body;}float getFriction()const{return friction;}};
struct Humanoid {char opaque[0x1b0];float walkRotationalVelocity;float getWalkRotationalVelocity()const{return walkRotationalVelocity;}Body*getTorsoBody();Body*getRootBody();};
namespace HUMAN {
G3D::Vector3 maxMoveAcceleration();G3D::Vector3 minMoveAcceleration();
struct HumanoidState {char opaque[0x2c];G3D::Vector3 floorTouchInWorld;char opaque38[0xa0-0x38];Humanoid*getHumanoid()const;Primitive*getFloorPrimitive()const;};
struct Balancing:HumanoidState {float kP,kD;void onComputeForce(float);};
struct RunningBase:Balancing {G3D::Vector3 floorVelocity;float floorRotationalVelocity;G3D::Vector3 desiredVelocity;float desiredYRotationalVelocity,desiredAltitude;void onComputeForce(float);};
void RunningBase::onComputeForce(float dt){
 Balancing::onComputeForce(dt);
 Body*torso=getHumanoid()->getTorsoBody();if(!torso)return;
 Body*root=getHumanoid()->getRootBody();if(!root)return;
 const Velocity&vel=root->getVelocity();
 float walkRotation=getHumanoid()->getWalkRotationalVelocity();
 float turnTorque=(walkRotation*4.0f+desiredYRotationalVelocity+floorRotationalVelocity-vel.rotational.y)*root->getBranchIBodyV3().y*7500.0f;
 turnTorque-=root->getBranchTorque().y;
 float maxTorque=root->getBranchIBodyV3().y*160000.0f;
 root->accumulateTorque(G3D::Vector3(0,G3D::clamp(turnTorque,-maxTorque,maxTorque),0));
 Primitive*floor=getFloorPrimitive();
 float moveMass;
 if(!floor)moveMass=root->getBranchMass();
 else{float floorMass=floor->getBody()->getRoot()->getBranchMass();moveMass=G3D::min(floorMass,root->getBranchMass());
 if(desiredAltitude!=0.0f){
  const G3D::CoordinateFrame&torsoFrame=torso->getCoordinateFrame();
  const Velocity&rootVelocity=root->getVelocity();
  float altitudeAcceleration=(desiredAltitude-torsoFrame.translation.y)*10000.0f-rootVelocity.linear.y*1250.0f;
  if(altitudeAcceleration>0.0f){
   const G3D::Vector3&branchForce=root->getBranchForce();
   float currentAcceleration=branchForce.y/root->getBranchMass();
   if(currentAcceleration<altitudeAcceleration){
    float upwardForce=std::min(altitudeAcceleration-currentAcceleration,maxMoveAcceleration().y)*moveMass;
    root->accumulateForceAtBranchCofm(G3D::Vector3(0,upwardForce,0));
    floor->getBody()->accumulateForce(G3D::Vector3(0,-upwardForce,0),floorTouchInWorld);
   }
  }
 }
 }
 float desiredX=desiredVelocity.x+floorVelocity.x;
 float desiredZ=desiredVelocity.z+floorVelocity.z;
 const Velocity&branchVelocity=root->root->simBody?root->root->simBody->pv.velocity:Velocity::zero();
 G3D::Vector3 currentAcceleration=root->getBranchForce()/root->getBranchMass();
 G3D::Vector3 deltaAcceleration;
 deltaAcceleration.x=(desiredX-branchVelocity.linear.x)*1250.0f-currentAcceleration.x;
 deltaAcceleration.y=(desiredVelocity.y>0.0f?(desiredVelocity.y-branchVelocity.linear.y)*1250.0f:currentAcceleration.y)-currentAcceleration.y;
 deltaAcceleration.z=(desiredZ-branchVelocity.linear.z)*1250.0f-currentAcceleration.z;
 G3D::Vector3 limitedAcceleration=deltaAcceleration.clamp(minMoveAcceleration(),maxMoveAcceleration());
 G3D::Vector3 force=limitedAcceleration*moveMass;
 if(floor){float friction=floor->getFriction();if(friction<0.3f){float scale=friction*friction;force.x*=scale;force.z*=scale;}}
 root->accumulateForceAtBranchCofm(force);
 if(floor)floor->getBody()->accumulateForce(-force,floorTouchInWorld);
}
}
}
typedef char velocity_size[sizeof(RBX::Velocity)==24?1:-1];
typedef char body_frame[offsetof(RBX::Body,frame)==0x94?1:-1];
typedef char body_mass[offsetof(RBX::Body,mass)==0x8c?1:-1];
typedef char sim_velocity[offsetof(RBX::SimBody,pv)+offsetof(RBX::PV,velocity)==0x3c?1:-1];
typedef char floor_body[offsetof(RBX::Primitive,body)==0xa0?1:-1];
typedef char floor_friction[offsetof(RBX::Primitive,friction)==0xb0?1:-1];
typedef char contact_offset[offsetof(RBX::HUMAN::RunningBase,floorTouchInWorld)==0x2c?1:-1];
typedef char floor_velocity_offset[offsetof(RBX::HUMAN::RunningBase,floorVelocity)==0xa8?1:-1];
typedef char floor_rotation_offset[offsetof(RBX::HUMAN::RunningBase,floorRotationalVelocity)==0xb4?1:-1];
typedef char desired_velocity_offset[offsetof(RBX::HUMAN::RunningBase,desiredVelocity)==0xb8?1:-1];
typedef char desired_rotation_offset[offsetof(RBX::HUMAN::RunningBase,desiredYRotationalVelocity)==0xc4?1:-1];
typedef char desired_altitude_offset[offsetof(RBX::HUMAN::RunningBase,desiredAltitude)==0xc8?1:-1];
