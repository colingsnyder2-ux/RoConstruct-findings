// from server: 98% by colin
// from server: 97% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// Full native Rocket::computeForce; target-observed Instance/Connector/Listener and Body layouts.
#include <math.h>
#include <stddef.h>
#include <intrin.h>
#include <utility>
namespace boost {
namespace detail {
struct sp_counted_base {
    virtual ~sp_counted_base() {}
    virtual void dispose()=0;
    virtual void destroy(){delete this;}
    long use_count_,weak_count_;
    void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
    void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
struct shared_count {
    sp_counted_base* pi_;
    shared_count():pi_(0){}
    shared_count& operator=(const shared_count& r){sp_counted_base* tmp=r.pi_;if(tmp!=pi_){if(tmp)_InterlockedIncrement(&tmp->use_count_);if(pi_)pi_->release();pi_=tmp;}return *this;}
    void swap(shared_count& r){sp_counted_base* tmp=r.pi_;r.pi_=pi_;pi_=tmp;}
    shared_count(const shared_count& r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
    ~shared_count(){if(pi_)pi_->release();}
};
}
template<class T> class shared_ptr {
public:
    T* px; detail::shared_count pn;
    shared_ptr():px(0),pn(){}
    shared_ptr& operator=(const shared_ptr& r){px=r.px;pn=r.pn;return *this;}
    void swap(shared_ptr& r){std::swap(px,r.px);pn.swap(r.pn);}
    void reset(){shared_ptr().swap(*this);}
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
    shared_ptr(const shared_ptr& r):px(r.px),pn(r.pn){}
    template<class Y> shared_ptr(const shared_ptr<Y>& r):px(r.px),pn(r.pn){}
    T* get()const{return px;}
    T* operator->()const{return px;}
};
template<class T,class U> bool operator==(const shared_ptr<T>& a,const shared_ptr<U>& b){return a.get()==b.get();}
}

namespace boost {
template<class T>struct weak_ptr {T*px;void*pn;shared_ptr<T>lock()const;};
}

namespace G3D {
struct Vector3 {
 float x,y,z;
 Vector3():x(0),y(0),z(0){}
 Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 float&operator[](int i){return ((float*)this)[i];}
 const float&operator[](int i)const{return ((const float*)this)[i];}
 float squaredMagnitude()const{return x*x+y*y+z*z;}
 float dot(const Vector3&v)const{double p0=x*v.x;double p1=y*v.y;double p2=z*v.z;return static_cast<float>((p2+p1)+p0);}
 Vector3 direction()const{float n=squaredMagnitude();float inv=1.0f/sqrtf(n);return Vector3(x*inv,y*inv,z*inv);}
 Vector3 fastDirection()const{float n=x*x+y*y+z*z;float inv=1.0f/sqrtf(n);return Vector3(x*inv,y*inv,z*inv);}
 Vector3 operator*(float f)const{return Vector3(x*f,y*f,z*f);}
 Vector3 operator/(float)const;
 Vector3 operator+(const Vector3&v)const{return Vector3(x+v.x,y+v.y,z+v.z);}
 Vector3&operator-=(const Vector3&v){x-=v.x;y-=v.y;z-=v.z;return *this;}
 Vector3 clamp(const Vector3&,const Vector3&)const;
 Vector3 operator-(const Vector3&v)const{return Vector3(x-v.x,y-v.y,z-v.z);}
 Vector3&operator+=(const Vector3&v){x+=v.x;y+=v.y;z+=v.z;return *this;}
 static const Vector3&zero(){static Vector3 v(0,0,0);return v;}
};
struct Matrix3 {
 float elt[3][3];
 Matrix3(){}Matrix3(const Matrix3&);
 Matrix3 transpose()const;
 Vector3 operator*(const Vector3&v)const{
  Vector3 kProd;
  for(int r=0;r<3;++r)kProd[r]=elt[r][0]*v[0]+elt[r][1]*v[1]+elt[r][2]*v[2];
  return kProd;
 }
};
struct CoordinateFrame {
 Matrix3 rotation;Vector3 translation;
 Vector3 pointToWorldSpace(const Vector3&)const;
 Vector3 vectorToObjectSpace(const Vector3&v)const{return rotation.transpose()*v;}
 Vector3 vectorToWorldSpace(const Vector3&v)const{return rotation*v;}
};
}
inline G3D::Vector3 operator*(float f,const G3D::Vector3&v){return v*f;}
namespace RBX {
struct Velocity {G3D::Vector3 linear,rotational;};
struct PV {G3D::CoordinateFrame position;Velocity velocity;};
struct Math {static G3D::Vector3 toDiagonal(const G3D::Matrix3&);static bool fixDenorm(G3D::Vector3&);};
struct Cofm {const G3D::Matrix3&getMoment()const;float getMass()const;};
struct Body;
struct SimBody {
 Body*body;float dt;bool dirty;char unused[0x84-9];G3D::Vector3 force,torque;
 void update();
 void accumulateTorque(const G3D::Vector3&v){if(dirty)update();torque+=v;}
};
struct Body {
 char prefix[0x10];Body*root;
 char unused[0x28-0x14];Cofm*cofm;SimBody*simBody;
 char unused2[0x68-0x30];G3D::Matrix3 moment;float mass;int stateIndex;PV pv;
 void updatePV()const;
 Body*getRoot(){return root;}
 float getBranchMass()const{return cofm?cofm->getMass():mass;}
 const G3D::Vector3&getBranchForce()const{return root->simBody?root->simBody->force:G3D::Vector3::zero();}
 void accumulateForceAtBranchCofm(const G3D::Vector3&);
 const G3D::CoordinateFrame&getCoordinateFrame()const{updatePV();return pv.position;}
 const Velocity&getVelocity()const{updatePV();return pv.velocity;}
 const G3D::Vector3&getBranchTorque()const{return root->simBody?root->simBody->torque:G3D::Vector3::zero();}
 G3D::Matrix3 getBranchIBody()const{return cofm?cofm->getMoment():moment;}
 G3D::Vector3 getBranchIBodyV3()const{return Math::toDiagonal(getBranchIBody());}
 void accumulateTorque(const G3D::Vector3&v){if(root->simBody)root->simBody->accumulateTorque(v);}
};

// The target directly loads the Body link from the locked PartInstance at2c8.
struct PartInstance {char unobserved[0x2c8];Body*body;const G3D::CoordinateFrame&getCoordinateFrame()const;};
struct Instance {virtual ~Instance();char unobserved[0x130-4];};
struct KernelIndex {int kernelIndex;};
struct Connector:KernelIndex {
 virtual ~Connector();virtual void computeForce(float,bool)=0;
 virtual bool canThrottle()const;virtual bool getBroken();virtual float potentialEnergy();
};
struct RunService;struct Stepped {float time,step;};
template<class C,class E>struct Listener {virtual void onEvent(const C*,E)=0;virtual ~Listener();};
struct World;
struct BodyMover:Instance,Connector,Listener<RunService,Stepped> {World*world;boost::weak_ptr<PartInstance>part;};
struct Rocket:BodyMover {
 bool active;boost::shared_ptr<PartInstance>target;G3D::Vector3 targetOffset;float targetRadius;bool firedEvent;
 float maxThrust,kThrustP,kThrustD,maxSpeed,kTurnP,kTurnD;G3D::Vector3 maxTorque;float cartoonFactor;
 virtual void computeForce(float,bool);
 G3D::Vector3 turn(Body*,const G3D::Vector3&);
};
void Rocket::computeForce(const float dt, bool throttling)
	{
		if (!active)
			return;

		Body* body = part.lock()->body;
		

		G3D::Vector3 targetPos = target.get() ? target->getCoordinateFrame().pointToWorldSpace(targetOffset) : targetOffset;
		G3D::Vector3 targetDelta = targetPos - body->getCoordinateFrame().translation; // fabricated name, may change
		G3D::Vector3 targetDir = targetDelta.direction();
		G3D::Vector3 pAccel = targetDelta * kThrustP;
		Body* root = body->getRoot();

		G3D::Vector3 force = pAccel * root->getBranchMass();

		if (root->getVelocity().linear.squaredMagnitude() > maxSpeed * maxSpeed)
		{
			G3D::Vector3 dir = root->getVelocity().linear.direction();
			float dotProduct = dir.dot(force);
			if (dotProduct > 0.0f)
			{
				force = force - (dir * dotProduct);
				force -= root->getBranchMass() * (root->getVelocity().linear - maxSpeed * dir) / dt;
			}
		}

		G3D::Vector3 adjustedVelocity = (root->getBranchMass() * kThrustD) * root->getVelocity().linear; // fabricated name, may change
		force -= adjustedVelocity;

		force -= body->getBranchForce();

		Math::fixDenorm(force);

		force=force.clamp(G3D::Vector3(-maxThrust,-maxThrust,-maxThrust),G3D::Vector3(maxThrust,maxThrust,maxThrust));

		root->accumulateForceAtBranchCofm(force);

		G3D::Vector3 unitForce = force.squaredMagnitude() > 0.000001f ? force.fastDirection() : G3D::Vector3::zero(); // fabricated name, may change
		G3D::Vector3 forceCartoon = unitForce * (1.0f - cartoonFactor); // fabricated name, may change
		G3D::Vector3 newDirection = forceCartoon + (targetDir * cartoonFactor); // fabricated name, may change
		turn(body, newDirection.direction());
	}

	
}
typedef char body_pv_offset[offsetof(RBX::Body,pv)==0x94?1:-1];
typedef char bodymover_size[sizeof(RBX::BodyMover)==0x148?1:-1];
typedef char rocket_active_offset[offsetof(RBX::Rocket,active)==0x148?1:-1];
typedef char rocket_target_offset[offsetof(RBX::Rocket,target)==0x14c?1:-1];
typedef char rocket_gain_offset[offsetof(RBX::Rocket,kTurnP)==0x178?1:-1];
typedef char rocket_cartoon_offset[offsetof(RBX::Rocket,cartoonFactor)==0x18c?1:-1];
