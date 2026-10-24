// from server: 97% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <math.h>
namespace G3D {
struct Matrix3;
struct Vector3 {
 float x,y,z;
 Vector3():x(0),y(0),z(0){}
 Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&a):x(a.x),y(a.y),z(a.z){}
 Vector3& operator=(const Vector3&a){x=a.x;y=a.y;z=a.z;return *this;}
 Vector3 operator*(float f)const{return Vector3(x*f,y*f,z*f);}
 Vector3 operator+(const Vector3&v)const{return Vector3(x+v.x,y+v.y,z+v.z);}
 Vector3&operator+=(const Vector3&v){x+=v.x;y+=v.y;z+=v.z;return *this;}
 Vector3&operator*=(float f){x*=f;y*=f;z*=f;return *this;}
 static const Vector3& zero(){static Vector3 v(0,0,0);return v;}
};
struct Matrix3 {
 float data[3][3];
 Matrix3(){}
 Matrix3(const Matrix3&);
};
struct CoordinateFrame {Matrix3 rotation;Vector3 translation;};
inline Vector3 operator*(const Vector3&v,const Matrix3&m){
 return Vector3(v.x*m.data[0][0]+v.z*m.data[2][0]+v.y*m.data[1][0],
 v.x*m.data[0][1]+v.z*m.data[2][1]+v.y*m.data[1][1],
 v.x*m.data[0][2]+v.z*m.data[2][2]+v.y*m.data[1][2]);
}
}
namespace RBX {
struct Velocity {G3D::Vector3 linear,rotational;};
struct PV {
 G3D::CoordinateFrame position;Velocity velocity;
 PV pvAtLocalOffset(const G3D::Vector3&)const;
};
struct Quaternion {
 float x,y,z,w;
 Quaternion(const G3D::Matrix3&);
 Quaternion(const G3D::Vector3&v,float f):x(v.x),y(v.y),z(v.z),w(f){}
 Quaternion(float a,float b,float c,float d):x(a),y(b),z(c),w(d){}
 Quaternion operator*(const Quaternion&)const;
 Quaternion operator*(float f)const{return Quaternion(x*f,y*f,z*f,w*f);}
 Quaternion&operator+=(const Quaternion&q){x+=q.x;y+=q.y;z+=q.z;w+=q.w;return *this;}
 void toRotationMatrix(G3D::Matrix3&)const;
 Quaternion& operator=(const Quaternion&);
 float magnitude()const{return sqrtf(x*x+y*y+z*z+w*w);}
 Quaternion& operator*=(float f){x=f*x;y=f*y;z=f*z;w=f*w;return *this;}
};

struct Body;
struct SimBody {
 Body*body;float dt;bool dirty;char padding[3];
 PV pv;Quaternion qOrientation;
 G3D::Vector3 angMomentum,momentRecip;
 float massRecip,constantForceY;
 G3D::Vector3 force,torque,impulse,angularImpulse;
 void update();void updateIfDirty(){if(dirty)update();}
 const PV&getPV()const{return pv;}
 void step();
};
G3D::Vector3 __cdecl computeRotVel(const G3D::Matrix3&,const G3D::Vector3&,const G3D::Vector3&);
void SimBody::step(){
 static G3D::Vector3 denormFix(9.9999997e-21f,9.9999997e-21f,9.9999997e-21f);
 updateIfDirty();
 angMomentum*=0.99980003f;
 angMomentum+=torque*dt+angularImpulse;
 pv.velocity.rotational=computeRotVel(getPV().position.rotation,momentRecip,angMomentum)+denormFix;
 qOrientation+=(Quaternion(getPV().velocity.rotational,0)*qOrientation)*0.5f*dt;
 qOrientation*=1.0f/qOrientation.magnitude();
 qOrientation.toRotationMatrix(pv.position.rotation);
 pv.velocity.linear=pv.velocity.linear+(force*dt+impulse)*massRecip;
 pv.position.translation+=getPV().velocity.linear*dt;
 force=G3D::Vector3(0,constantForceY,0);
 torque=G3D::Vector3(0,0,0);impulse=G3D::Vector3(0,0,0);angularImpulse=G3D::Vector3(0,0,0);
 angMomentum+=denormFix;
 pv.velocity.linear+=denormFix;
}
}
