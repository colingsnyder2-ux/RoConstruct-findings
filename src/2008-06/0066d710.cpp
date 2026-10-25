// from server: 78% by king_originala_sol_native
// roc 2008-06 0066d710  unit: RBX::GroupDragTool  size: 723 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066d710
//
// 0066d710  6aff                 push -1
// 0066d712  68ab977d00           push 0x7d97ab
// 0066d717  64a100000000         mov eax, dword ptr fs:[0]
// 0066d71d  50                   push eax
// 0066d71e  64892500000000       mov dword ptr fs:[0], esp
// 0066d725  81ec04010000         sub esp, 0x104
// 0066d72b  56                   push esi
// 0066d72c  8bf1                 mov esi, ecx
// 0066d72e  8b4628               mov eax, dword ptr [esi + 0x28]
// 0066d731  57                   push edi
// 0066d732  50                   push eax
// 0066d733  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 0066d73a  51                   push ecx
// 0066d73b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0066d73e  e86daaf7ff           call 0x5e81b0
// 0066d743  8b5660               mov edx, dword ptr [esi + 0x60]
// 0066d746  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0066d749  52                   push edx
// 0066d74a  8d8424e0000000       lea eax, [esp + 0xe0]
// 0066d751  50                   push eax
// 0066d752  e859aaf7ff           call 0x5e81b0
// 0066d757  6a00                 push 0
// 0066d759  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 0066d760  e80b8ee0ff           call 0x476570
// 0066d765  d900                 fld dword ptr [eax]
// 0066d767  d95c2450             fstp dword ptr [esp + 0x50]
// 0066d76b  6a00                 push 0
// 0066d76d  d94004               fld dword ptr [eax + 4]
// 0066d770  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 0066d777  d95c2458             fstp dword ptr [esp + 0x58]
// 0066d77b  d94008               fld dword ptr [eax + 8]
// 0066d77e  d95c245c             fstp dword ptr [esp + 0x5c]
// 0066d782  e8e98de0ff           call 0x476570
// 0066d787  d900                 fld dword ptr [eax]
// 0066d789  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0066d78c  d95c2408             fstp dword ptr [esp + 8]
// 0066d790  d94004               fld dword ptr [eax + 4]
// 0066d793  d95c240c             fstp dword ptr [esp + 0xc]
// 0066d797  d94008               fld dword ptr [eax + 8]
// 0066d79a  d95c2410             fstp dword ptr [esp + 0x10]
// 0066d79e  e81dabf7ff           call 0x5e82c0
// 0066d7a3  50                   push eax
// 0066d7a4  8d4c2424             lea ecx, [esp + 0x24]
// 0066d7a8  e8735aeaff           call 0x513220
// 0066d7ad  d9442450             fld dword ptr [esp + 0x50]
// 0066d7b1  d9542444             fst dword ptr [esp + 0x44]
// 0066d7b5  8d4c2468             lea ecx, [esp + 0x68]
// 0066d7b9  d9442454             fld dword ptr [esp + 0x54]
// 0066d7bd  51                   push ecx
// 0066d7be  d954244c             fst dword ptr [esp + 0x4c]
// 0066d7c2  d944245c             fld dword ptr [esp + 0x5c]
// 0066d7c6  d9542450             fst dword ptr [esp + 0x50]
// 0066d7ca  d944240c             fld dword ptr [esp + 0xc]
// 0066d7ce  dee3                 fsubrp st(3)
// 0066d7d0  d9442410             fld dword ptr [esp + 0x10]
// 0066d7d4  dee2                 fsubrp st(2)
// 0066d7d6  d86c2414             fsubr dword ptr [esp + 0x14]
// 0066d7da  d944243c             fld dword ptr [esp + 0x3c]
// 0066d7de  d8c9                 fmul st(1)
// 0066d7e0  d9442430             fld dword ptr [esp + 0x30]
// 0066d7e4  d8cb                 fmul st(3)
// 0066d7e6  dec1                 faddp st(1)
// 0066d7e8  d9442424             fld dword ptr [esp + 0x24]
// 0066d7ec  d8cc                 fmul st(4)
// 0066d7ee  dec1                 faddp st(1)
// 0066d7f0  d9442440             fld dword ptr [esp + 0x40]
// 0066d7f4  d8ca                 fmul st(2)
// 0066d7f6  d9442434             fld dword ptr [esp + 0x34]
// 0066d7fa  d8cc                 fmul st(4)
// 0066d7fc  dec1                 faddp st(1)
// 0066d7fe  d9442428             fld dword ptr [esp + 0x28]
// 0066d802  d8cd                 fmul st(5)
// 0066d804  dec1                 faddp st(1)
// 0066d806  d9442444             fld dword ptr [esp + 0x44]
// 0066d80a  decb                 fmulp st(3)
// 0066d80c  d9442438             fld dword ptr [esp + 0x38]
// 0066d810  decc                 fmulp st(4)
// 0066d812  d9ca                 fxch st(2)
// 0066d814  dec3                 faddp st(3)
// 0066d816  d944242c             fld dword ptr [esp + 0x2c]
// 0066d81a  decc                 fmulp st(4)
// 0066d81c  d9ca                 fxch st(2)
// 0066d81e  dec3                 faddp st(3)
// 0066d820  d9c9                 fxch st(1)
// 0066d822  d95c246c             fstp dword ptr [esp + 0x6c]
// 0066d826  d95c2470             fstp dword ptr [esp + 0x70]
// 0066d82a  d95c2474             fstp dword ptr [esp + 0x74]
// 0066d82e  8d542418             lea edx, [esp + 0x18]
// 0066d832  52                   push edx
// 0066d833  e85808f7ff           call 0x5de090
// 0066d838  d9442430             fld dword ptr [esp + 0x30]
// 0066d83c  d9442424             fld dword ptr [esp + 0x24]
// 0066d840  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0066d843  dcc9                 fmul st(1), st(0)
// 0066d845  83c408               add esp, 8
// 0066d848  d9442424             fld dword ptr [esp + 0x24]
// 0066d84c  d9442418             fld dword ptr [esp + 0x18]
// 0066d850  dcc9                 fmul st(1), st(0)
// 0066d852  d9cb                 fxch st(3)
// 0066d854  dec1                 faddp st(1)
// 0066d856  d9442420             fld dword ptr [esp + 0x20]
// 0066d85a  d9442414             fld dword ptr [esp + 0x14]
// 0066d85e  dcc9                 fmul st(1), st(0)
// 0066d860  d9ca                 fxch st(2)
// 0066d862  dec1                 faddp st(1)
// 0066d864  d8442444             fadd dword ptr [esp + 0x44]
// 0066d868  d9442434             fld dword ptr [esp + 0x34]
// 0066d86c  d8cb                 fmul st(3)
// 0066d86e  d9442430             fld dword ptr [esp + 0x30]
// 0066d872  d8cd                 fmul st(5)
// 0066d874  dec1                 faddp st(1)
// 0066d876  d944242c             fld dword ptr [esp + 0x2c]
// 0066d87a  d8cb                 fmul st(3)
// 0066d87c  dec1                 faddp st(1)
// 0066d87e  d8442448             fadd dword ptr [esp + 0x48]
// 0066d882  d9442440             fld dword ptr [esp + 0x40]
// 0066d886  decc                 fmulp st(4)
// 0066d888  d944243c             fld dword ptr [esp + 0x3c]
// 0066d88c  decd                 fmulp st(5)
// 0066d88e  d9cb                 fxch st(3)
// 0066d890  dec4                 faddp st(4)
// 0066d892  d9442438             fld dword ptr [esp + 0x38]
// 0066d896  deca                 fmulp st(2)
// 0066d898  d9cb                 fxch st(3)
// 0066d89a  dec1                 faddp st(1)
// 0066d89c  d844244c             fadd dword ptr [esp + 0x4c]
// 0066d8a0  d9ca                 fxch st(2)
// 0066d8a2  d8642408             fsub dword ptr [esp + 8]
// 0066d8a6  d95c245c             fstp dword ptr [esp + 0x5c]
// 0066d8aa  d864240c             fsub dword ptr [esp + 0xc]
// 0066d8ae  d95c2460             fstp dword ptr [esp + 0x60]
// 0066d8b2  d8642410             fsub dword ptr [esp + 0x10]
// 0066d8b6  d95c2464             fstp dword ptr [esp + 0x64]
// 0066d8ba  e801aaf7ff           call 0x5e82c0
// 0066d8bf  8bf8                 mov edi, eax
// 0066d8c1  57                   push edi
// 0066d8c2  8d8c2480000000       lea ecx, [esp + 0x80]
// 0066d8c9  e85259eaff           call 0x513220
// 0066d8ce  d94724               fld dword ptr [edi + 0x24]
// 0066d8d1  d99424a0000000       fst dword ptr [esp + 0xa0]
// 0066d8d8  8d442474             lea eax, [esp + 0x74]
// 0066d8dc  d94728               fld dword ptr [edi + 0x28]
// 0066d8df  50                   push eax
// 0066d8e0  d99424a8000000       fst dword ptr [esp + 0xa8]
// 0066d8e7  8bce                 mov ecx, esi
// 0066d8e9  d9472c               fld dword ptr [edi + 0x2c]
// 0066d8ec  d9ca                 fxch st(2)
// 0066d8ee  d8442460             fadd dword ptr [esp + 0x60]
// 0066d8f2  d99c24a4000000       fstp dword ptr [esp + 0xa4]
// 0066d8f9  d8442464             fadd dword ptr [esp + 0x64]
// 0066d8fd  d99c24a8000000       fstp dword ptr [esp + 0xa8]
// 0066d904  d8442468             fadd dword ptr [esp + 0x68]
// 0066d908  d99c24ac000000       fstp dword ptr [esp + 0xac]
// 0066d90f  e8ecd1f5ff           call 0x5cab00
// 0066d914  8b00                 mov eax, dword ptr [eax]
// 0066d916  8d4c247c             lea ecx, [esp + 0x7c]
// 0066d91a  51                   push ecx
// 0066d91b  8bc8                 mov ecx, eax
// 0066d91d  c784241801000000000000 mov dword ptr [esp + 0x118], 0
// 0066d928  e873fff2ff           call 0x59d8a0
// 0066d92d  8b442478             mov eax, dword ptr [esp + 0x78]
// 0066d931  c7842414010000ffffffff mov dword ptr [esp + 0x114], 0xffffffff
// 0066d93c  85c0                 test eax, eax
// 0066d93e  742c                 je 0x66d96c
// 0066d940  8bf8                 mov edi, eax
// 0066d942  83c004               add eax, 4
// 0066d945  83caff               or edx, 0xffffffff
// 0066d948  f00fc110             lock xadd dword ptr [eax], edx
// 0066d94c  751e                 jne 0x66d96c
// 0066d94e  8b07                 mov eax, dword ptr [edi]
// 0066d950  8b5004               mov edx, dword ptr [eax + 4]
// 0066d953  8bcf                 mov ecx, edi
// 0066d955  ffd2                 call edx
// 0066d957  8d4708               lea eax, [edi + 8]
// 0066d95a  83c9ff               or ecx, 0xffffffff
// 0066d95d  f00fc108             lock xadd dword ptr [eax], ecx
// 0066d961  7509                 jne 0x66d96c
// 0066d963  8b17                 mov edx, dword ptr [edi]
// 0066d965  8b4208               mov eax, dword ptr [edx + 8]
// 0066d968  8bcf                 mov ecx, edi
// 0066d96a  ffd0                 call eax
// 0066d96c  d94638               fld dword ptr [esi + 0x38]
// 0066d96f  d9442414             fld dword ptr [esp + 0x14]
// 0066d973  dde1                 fucom st(1)
// 0066d975  dfe0                 fnstsw ax
// 0066d977  ddd9                 fstp st(1)
// 0066d979  d944241c             fld dword ptr [esp + 0x1c]
// 0066d97d  d9442418             fld dword ptr [esp + 0x18]
// 0066d981  f6c444               test ah, 0x44
// 0066d984  7a18                 jp 0x66d99e
// 0066d986  d9463c               fld dword ptr [esi + 0x3c]
// 0066d989  dde9                 fucomp st(1)
// 0066d98b  dfe0                 fnstsw ax
// 0066d98d  f6c444               test ah, 0x44
// 0066d990  7a0c                 jp 0x66d99e
// 0066d992  d94640               fld dword ptr [esi + 0x40]
// 0066d995  ddea                 fucomp st(2)
// 0066d997  dfe0                 fnstsw ax
// 0066d999  f6c444               test ah, 0x44
// 0066d99c  7b26                 jnp 0x66d9c4
// 0066d99e  d9ca                 fxch st(2)
// 0066d9a0  5f                   pop edi
// 0066d9a1  d95e38               fstp dword ptr [esi + 0x38]
// 0066d9a4  b001                 mov al, 1
// 0066d9a6  d9c9                 fxch st(1)
// 0066d9a8  d95e3c               fstp dword ptr [esi + 0x3c]
// 0066d9ab  d95e40               fstp dword ptr [esi + 0x40]
// 0066d9ae  5e                   pop esi
// 0066d9af  8b8c2404010000       mov ecx, dword ptr [esp + 0x104]
// 0066d9b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0066d9bd  81c410010000         add esp, 0x110
// 0066d9c3  c3                   ret 
// 0066d9c4  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 0066d9cb  ddda                 fstp st(2)
// 0066d9cd  ddd8                 fstp st(0)
// 0066d9cf  5f                   pop edi
// 0066d9d0  ddd8                 fstp st(0)
// 0066d9d2  32c0                 xor al, al
// 0066d9d4  5e                   pop esi
// 0066d9d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0066d9dc  81c410010000         add esp, 0x110
// 0066d9e2  c3                   ret 

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
