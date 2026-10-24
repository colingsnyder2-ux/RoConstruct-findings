// from server: 47% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <cstddef>
namespace G3D {
class Vector2 {public:float x,y;
 Vector2():x(0.0f),y(0.0f){}Vector2(float a,float b):x(a),y(b){}
 Vector2(const Vector2&v){x=v.x;y=v.y;}
 Vector2&operator=(const Vector2&v){x=v.x;y=v.y;return *this;}
 Vector2 operator-(const Vector2&v)const{return Vector2(x-v.x,y-v.y);}
 Vector2 operator*(float scalar)const{return Vector2(scalar*x,scalar*y);}
 Vector2 operator/(const Vector2&v)const{return Vector2(x/v.x,y/v.y);}
};
class Vector3 {public:float x,y,z;
 Vector3():x(0.0f),y(0.0f),z(0.0f){}Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 Vector2 xy()const;
};

class AtomicInt32 {volatile long _value;};
class _WeakPtrLinkedList;
class ReferenceCountedObject {public:AtomicInt32 ReferenceCountedObject_refCount;_WeakPtrLinkedList*ReferenceCountedObject_weakPointer;virtual ~ReferenceCountedObject();};
template<class T>class ReferenceCountedPointer {T*m_pointer;public:ReferenceCountedPointer();ReferenceCountedPointer(const ReferenceCountedPointer&);ReferenceCountedPointer&operator=(const ReferenceCountedPointer&);T*operator->()const{return m_pointer;}T*getPointer()const{return m_pointer;}~ReferenceCountedPointer();};
// Actual Array data prefix and existing four-item append boundary004dc6a0.
template<class T>class Array {T*data;int num,numAllocated;public:Array();Array(const Array&);~Array();Array&operator=(const Array&);void append(const T&,const T&,const T&,const T&);};
}
namespace RBX {
enum NormalId {NORM_X=0,NORM_Y=1,NORM_Z=2,NORM_X_NEG=3,NORM_Y_NEG=4,NORM_Z_NEG=5,NORM_UNDEFINED=6};
template<NormalId id>G3D::Vector3 uvwToObject(const G3D::Vector3&);
namespace Render {class Mesh:public G3D::ReferenceCountedObject {public:
 // Observed native Level prefix; no local Level creation/RTTI or complete-size claim.
 class Level:public G3D::ReferenceCountedObject {public:G3D::Array<unsigned>indexArray;virtual ~Level();};
 static unsigned allocVertex(const G3D::Vector3&,const G3D::Vector3&,const G3D::Vector2&,bool);
};}
}
static inline float faceMinimum(float x,float y){return x>y?y:x;}
extern bool buildingShadowMesh;
extern const G3D::Vector2 flatTextureOrigin;
template<RBX::NormalId id>
void recoveredMeshFace(const G3D::Vector3& size,float inset,unsigned surfaces,float color,
                      G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>& level,unsigned* corners) {
    using namespace G3D;
    unsigned surface=(surfaces>>(3*id))&7;
    const Vector3&mapped=RBX::uvwToObject<id>(size);
    Vector3 half;
    half=Vector3(fabs(mapped.x)-inset,fabs(mapped.y)-inset,fabs(mapped.z));
    Vector2 step(0,0),origin(0,0);
    switch(surface) {
    case 0: origin=flatTextureOrigin;step=half.xy()*2.0f;break;
    case 1: step=Vector2(2,4);break;
    case 2: step=Vector2(2,4);origin.y=1.0f/3.0f;break;
    case 3: step=Vector2(2,2);origin.y=2.0f/3.0f;break;
    case 4: step=Vector2(2,2);origin.y=5.0f/6.0f;break;
    }
    origin.x+=color*(1.0f/32.0f);
    static Vector2 first(0,0);
    static Vector2 last(0,0);
    if(!buildingShadowMesh) {
        first.x=rand()*(0.1f/32767)-0.05f;
        first.y=rand()*(0.1f/32767)-0.05f;
        last.x=rand()*(1.0f/32767)>0.5f?first.x:-first.x;
        last.y=rand()*(1.0f/32767)>0.5f?first.y:-first.y;
    }
    const Vector2 faceFirst(first),faceLast(last);
    if(surface==0) {
        unsigned a=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(-half.x,-half.y,half.z)),RBX::uvwToObject<id>(Vector3(faceFirst.x,faceFirst.y,1)),origin,true);
        unsigned b=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(half.x,-half.y,half.z)),RBX::uvwToObject<id>(Vector3(faceLast.x,faceFirst.y,1)),origin,true);
        unsigned c=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(half.x,half.y,half.z)),RBX::uvwToObject<id>(Vector3(faceLast.x,faceLast.y,1)),origin,true);
        unsigned d=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(-half.x,half.y,half.z)),RBX::uvwToObject<id>(Vector3(faceFirst.x,faceLast.y,1)),origin,true);
        level->indexArray.append(a,b,c,d);
        corners[0]=a;corners[1]=b;corners[2]=c;corners[3]=d;
        return;
    }
    Vector2 delta=(faceLast-faceFirst)*0.5f/half.xy();
    static std::vector<unsigned> indices;
    indices.erase(indices.begin(),indices.end());
    unsigned rows=0,columns=0;
    float normalX=faceFirst.x;
    for(float x=-half.x;x<half.x;++rows) {
        float right=faceMinimum(x+step.x,half.x);
        float nextNormalX=normalX+delta.x;
        float normalY=faceFirst.y;
        columns=0;
        for(float y=-half.y;y<half.y;++columns) {
            float top=faceMinimum(y+step.y,half.y);
            float nextNormalY=normalY+delta.y;
            float textureRight=origin.x+(right-x)*(1.0f/64.0f)-1.0f/1024.0f;
            float textureTop=origin.y+(top-y)*(1.0f/12.0f);
            float textureLeft=origin.x+1.0f/1024.0f;
            unsigned a=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(x,y,half.z)),RBX::uvwToObject<id>(Vector3(normalX,normalY,1)),Vector2(textureLeft,textureTop),true);
            unsigned b=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(right,y,half.z)),RBX::uvwToObject<id>(Vector3(nextNormalX,normalY,1)),Vector2(textureRight,textureTop),true);
            unsigned c=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(right,top,half.z)),RBX::uvwToObject<id>(Vector3(nextNormalX,nextNormalY,1)),Vector2(textureRight,origin.y),true);
            unsigned d=RBX::Render::Mesh::allocVertex(RBX::uvwToObject<id>(Vector3(x,top,half.z)),RBX::uvwToObject<id>(Vector3(normalX,nextNormalY,1)),Vector2(textureLeft,origin.y),true);
            indices.push_back(a);indices.push_back(b);indices.push_back(c);indices.push_back(d);
            level->indexArray.append(a,b,c,d);
            y=top;normalY=nextNormalY;
        }
        x=right;normalX=nextNormalX;
    }
    corners[0]=indices[0];
    corners[1]=indices[(rows-1)*columns*4+1];
    corners[2]=indices[rows*columns*4-2];
    corners[3]=indices[columns*4-1];
}
template void recoveredMeshFace<RBX::NORM_Y>(const G3D::Vector3&,float,unsigned,float,G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>&,unsigned*);

typedef char native_face_vector2[sizeof(G3D::Vector2)==8?1:-1];
typedef char native_face_vector3[sizeof(G3D::Vector3)==12?1:-1];
typedef char native_face_atomic[sizeof(G3D::AtomicInt32)==4?1:-1];
typedef char native_face_counted[sizeof(G3D::ReferenceCountedObject)==12?1:-1];
typedef char native_face_handle[sizeof(G3D::ReferenceCountedPointer<RBX::Render::Mesh::Level>)==4?1:-1];
typedef char native_face_array[sizeof(G3D::Array<unsigned>)==12?1:-1];
typedef char native_face_index_offset[offsetof(RBX::Render::Mesh::Level,indexArray)==12?1:-1];
