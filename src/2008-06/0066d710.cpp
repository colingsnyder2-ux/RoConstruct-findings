// from server: 78% by king_originala_sol_native
// from server: 69% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
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

struct Vector3 {
 float x,y,z;
 Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 float&operator[](int i){return (&x)[i];}const float&operator[](int i)const{return (&x)[i];}
 Vector3 operator-(const Vector3&v)const{return Vector3(x-v.x,y-v.y,z-v.z);}
 Vector3 operator+(const Vector3&v)const{return Vector3(x+v.x,y+v.y,z+v.z);}
 Vector3&operator+=(const Vector3&v){x+=v.x;y+=v.y;z+=v.z;return *this;}
 bool operator==(const Vector3&v)const{return x==v.x&&y==v.y&&z==v.z;}
};
struct Matrix3 {
 float cells[3][3];Matrix3(const Matrix3&v){*this=v;}Matrix3&operator=(const Matrix3&);
 Vector3 operator*(const Vector3&v)const{Vector3 result;for(int r=0;r<3;++r)result[r]=cells[r][0]*v[0]+cells[r][1]*v[1]+cells[r][2]*v[2];return result;}
};
inline Vector3 operator*(const Vector3&v,const Matrix3&m){Vector3 result;for(int r=0;r<3;++r)result[r]=v[0]*m.cells[0][r]+v[1]*m.cells[1][r]+v[2]*m.cells[2][r];return result;}
struct Frame {Matrix3 rotation;Vector3 translation;Frame(const Frame&v):rotation(v.rotation),translation(v.translation){}
 Frame(const Matrix3& r,const Vector3& t):rotation(r),translation(t){}
 Vector3 pointToWorldSpace(const Vector3&v)const{return Vector3(rotation.cells[0][0]*v[0]+rotation.cells[0][1]*v[1]+rotation.cells[0][2]*v[2]+translation[0],rotation.cells[1][0]*v[0]+rotation.cells[1][1]*v[1]+rotation.cells[1][2]*v[2]+translation[1],rotation.cells[2][0]*v[0]+rotation.cells[2][1]*v[1]+rotation.cells[2][2]*v[2]+translation[2]);}
 Vector3 pointToObjectSpace(const Vector3&v)const{float p[3];p[0]=v[0]-translation[0];p[1]=v[1]-translation[1];p[2]=v[2]-translation[2];return Vector3(rotation.cells[0][0]*p[0]+rotation.cells[1][0]*p[1]+rotation.cells[2][0]*p[2],rotation.cells[0][1]*p[0]+rotation.cells[1][1]*p[1]+rotation.cells[2][1]*p[2],rotation.cells[0][2]*p[0]+rotation.cells[1][2]*p[1]+rotation.cells[2][2]*p[2]);}
};
struct Face {Vector3 corner[4];const Vector3&operator[](int)const;};
struct Primitive {Face getFaceInWorld(int);const Frame&getCoordinateFrame()const;};
Vector3 __cdecl iRoundVector3(const Vector3&);
struct PartInstance {void setCoordinateFrame(const Frame&);};
struct WeakPart {char storage[8];boost::shared_ptr<PartInstance>lock()const;};
struct DragSnap {
 WeakPart mousePart;char prefix[0x14-8];Primitive*currentPrimitive;char reserved18[0x24-0x18];Primitive*previousPrimitive;int previousFace;
 char reserved2c[0x38-0x2c];Vector3 lastHit;char reserved44[0x60-0x44];int currentFace;
 bool update();
};
bool DragSnap::update(){
 Face previous=previousPrimitive->getFaceInWorld(previousFace);
 Face current=currentPrimitive->getFaceInWorld(currentFace);
 Vector3 oldPoint=previous[0];
 Vector3 newPoint=current[0];
 Frame gridFrame(previousPrimitive->getCoordinateFrame().rotation,oldPoint);
 Vector3 snapped=iRoundVector3(gridFrame.pointToObjectSpace(newPoint));
 Vector3 delta=gridFrame.pointToWorldSpace(snapped)-newPoint;

 Frame goal=currentPrimitive->getCoordinateFrame();
 goal.translation+=delta;
 mousePart.lock()->setCoordinateFrame(goal);
 if(!(lastHit==snapped)){lastHit=snapped;return true;}
 return false;
}
