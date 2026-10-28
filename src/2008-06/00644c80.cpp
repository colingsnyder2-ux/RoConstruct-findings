// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
template<class T> inline T roc_val(T v) { return v; }
#include <math.h>
#include <stddef.h>
#include <string>
namespace G3D {
struct Vector2;struct Rect2D;struct AABox;struct Sphere;
template<class T>struct ReferenceCountedPointer {T*pointer;};
struct Vector3 {
 float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 Vector3 operator+(const Vector3&v)const{return Vector3(x+v.x,y+v.y,z+v.z);}Vector3 operator-(const Vector3&v)const{return Vector3(x-v.x,y-v.y,z-v.z);}Vector3 operator*(float f)const{return Vector3(x*f,y*f,z*f);}
 float squaredMagnitude()const{return x*x+y*y+z*z;}float magnitude()const{return(float)sqrt(squaredMagnitude());}
 static const Vector3&zero(){static Vector3 v(0,0,0);return v;}
};
struct Matrix3 {float elt[3][3];Matrix3(){}Matrix3(const Matrix3&m){*this=m;}Matrix3&operator=(const Matrix3&);Vector3 getColumn(int)const;static const Matrix3&identity();};
struct CoordinateFrame {Matrix3 rotation;Vector3 translation;CoordinateFrame():rotation(Matrix3::identity()),translation(Vector3::zero()){}CoordinateFrame(const Vector3&v):rotation(Matrix3::identity()),translation(v){}static const float zLookDirection;__declspec(noinline) Vector3 lookVector()const{return rotation.getColumn(2)*zLookDirection;}};
struct Color3 {float r,g,b;Color3(const Color3&c):r(c.r),g(c.g),b(c.b){}Color3&operator=(const Color3&c){r=c.r;g=c.g;b=c.b;return *this;}static const Color3&orange();static const Color3&green();static const Color3&red();static const Color3&purple();};
struct Color4 {float r,g,b,a;Color4(const Color3&c,float alpha=1):r(c.r),g(c.g),b(c.b),a(alpha){}};
struct Ray {Vector3 origin,direction;Ray():origin(Vector3::zero()),direction(Vector3::zero()){}virtual ~Ray(){}};
// Factory name below is a codegen label for the observed cdecl hidden-result ABI.
struct LineSegment {Vector3 point,direction;virtual ~LineSegment(){}static LineSegment fromOriginAndDirection(const Vector3&,const Vector3&);};
}
namespace RBX {
struct TextureProxyBase;
struct Adorn {
 enum Spacing {PROPORTIONAL_SPACING,FIXED_SPACING};enum XAlign{XALIGN_RIGHT,XALIGN_LEFT,XALIGN_CENTER};enum YAlign{YALIGN_TOP,YALIGN_BASELINE,YALIGN_CENTER,YALIGN_BOTTOM};
 virtual ~Adorn();
 virtual G3D::ReferenceCountedPointer<TextureProxyBase>createTextureProxy(const std::string&)=0;
 virtual void prepareRenderPass()=0;virtual void finishRenderPass()=0;virtual G3D::Rect2D getViewport()const=0;virtual int getWidth()const=0;virtual int getHeight()const=0;
 virtual void setTexture(int,G3D::ReferenceCountedPointer<TextureProxyBase>)=0;virtual G3D::Rect2D getTextureSize(G3D::ReferenceCountedPointer<TextureProxyBase>)const=0;
 virtual void line2d(const G3D::Vector2&,const G3D::Vector2&,const G3D::Color4&)const=0;virtual void outlineRect2d(const G3D::Rect2D&,float,const G3D::Color4&)const=0;virtual void rect2d(const G3D::Rect2D&,const G3D::Color4&)const=0;
 virtual G3D::Vector2 get2DStringBounds(const std::string&,double,Spacing)const=0;virtual G3D::Vector2 drawFont2D(const std::string&,const G3D::Vector2&,double,const G3D::Color4&,const G3D::Color4&,XAlign,YAlign,Spacing)const=0;
 virtual void setObjectToWorldMatrix(const G3D::CoordinateFrame&)=0;virtual void setColor(const G3D::Color4&)=0;
 virtual void box(const G3D::AABox&,const G3D::Color4&,const G3D::Color4&)=0;virtual void sphere(const G3D::Sphere&,const G3D::Color4&,const G3D::Color4&)=0;virtual void explosion(const G3D::Sphere&,const G3D::Color4&,const G3D::Color4&)=0;
 virtual void cylinderAlongX(float,float,const G3D::Color4&,const G3D::Color4&)=0;virtual void ray(const G3D::Ray&,const G3D::Color4&,float)=0;virtual void lineSegment(const G3D::LineSegment&,const G3D::Color4&,float)=0;
 virtual void axes(const G3D::Color4&,const G3D::Color4&,const G3D::Color4&,float)=0;virtual void quad(const G3D::Vector3&,const G3D::Vector3&,const G3D::Vector3&,const G3D::Vector3&,const G3D::Color4&)=0;
};
struct Instance {virtual ~Instance();char opaque[0x104-4];Instance*parent;};
struct Body {char opaque[0x94];G3D::CoordinateFrame frame;void updatePV()const;const G3D::CoordinateFrame&getCoordinateFrame()const{updatePV();return frame;}};
struct Humanoid:Instance {Body*getTorsoBody();};
struct RayQuery {G3D::Vector3 raycast(Instance*,G3D::Ray);};
RayQuery* __cdecl findRayQuery(Instance*);
struct DrawAdorn {static void cylinder(Adorn*,const G3D::CoordinateFrame&,int,float,float,const G3D::Color3&);};
struct Name;struct Primitive;
struct INamed {virtual const Name&getName()const=0;};
struct HitTestFilter {enum Result{STOP_TEST,IGNORE_PRIM,INCLUDE_PRIM};virtual Result filterResult(const Primitive*)const=0;};
namespace HUMAN {
struct HumanoidState:INamed,HitTestFilter {Humanoid*humanoid;bool checkNearObstruction(Adorn*);bool detectClimb(Adorn*);};
bool HumanoidState::detectClimb(Adorn*adorn){
 Body*torso=humanoid->getTorsoBody();if(!torso)return false;
 if(!checkNearObstruction(adorn))return false;
 const G3D::CoordinateFrame&frame=torso->getCoordinateFrame();
 G3D::Vector3 look=frame.lookVector();
 RayQuery*query=findRayQuery(humanoid);
 float firstHeight=0,span=0;bool first=true,inContact=false;
 G3D::Color3 color=G3D::Color3::orange();
 G3D::Vector3 direction=look*2.0f;
 for(int i=1;i<18;++i){
  float height=(float)i*0.1428571492433548f;
  G3D::Vector3 verticalOffset(0,height-2.7f,0);
  G3D::Ray ray;
  G3D::Vector3 origin=frame.translation+verticalOffset;
  ray.origin=origin;ray.direction=direction;
  G3D::Vector3 hit=query->raycast(roc_val(humanoid->parent),ray);
  if((hit-origin).magnitude()<0.7f){if(first){first=false;firstHeight=height;inContact=true;color=G3D::Color3::green();}}
  else{if(inContact){inContact=false;span=height-firstHeight;color=G3D::Color3::red();}}
  if(adorn){
   adorn->setObjectToWorldMatrix(G3D::CoordinateFrame(frame.translation));
   G3D::LineSegment segment=G3D::LineSegment::fromOriginAndDirection(origin-frame.translation,hit-origin);
   adorn->lineSegment(segment,G3D::Color4(color),1);
  }
 }
 if(firstHeight<2.45f&&span>0&&span<2.45f){
  if(adorn)DrawAdorn::cylinder(adorn,G3D::CoordinateFrame(frame.translation+G3D::Vector3(0,5,0)),1,.2f,1,G3D::Color3::purple());
  return true;
 }
 return false;
}
}
}
typedef char ray_size[sizeof(G3D::Ray)==28?1:-1];
typedef char segment_size[sizeof(G3D::LineSegment)==28?1:-1];
typedef char frame_size[sizeof(G3D::CoordinateFrame)==48?1:-1];
typedef char color_size[sizeof(G3D::Color4)==16?1:-1];
typedef char torso_frame_offset[offsetof(RBX::Body,frame)==0x94?1:-1];
typedef char parent_offset[offsetof(RBX::Instance,parent)==0x104?1:-1];

typedef char humanoid_offset[offsetof(RBX::HUMAN::HumanoidState,humanoid)==8?1:-1];
typedef char ray_origin_offset[offsetof(G3D::Ray,origin)==4?1:-1];
typedef char ray_direction_offset[offsetof(G3D::Ray,direction)==0x10?1:-1];
typedef char segment_point_offset[offsetof(G3D::LineSegment,point)==4?1:-1];
