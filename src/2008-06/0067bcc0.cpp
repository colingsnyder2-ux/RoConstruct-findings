// from server: 100% by coldek
// roc 2008-06 0067bcc0  unit: Ogre::RbxSceneManagerFactory  size: 864 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067bcc0
//
// 0067bcc0  6aff                 push -1
// 0067bcc2  68f6d67d00           push 0x7dd6f6
// 0067bcc7  64a100000000         mov eax, dword ptr fs:[0]
// 0067bccd  50                   push eax
// 0067bcce  64892500000000       mov dword ptr fs:[0], esp
// 0067bcd5  83ec60               sub esp, 0x60
// 0067bcd8  53                   push ebx
// 0067bcd9  55                   push ebp
// 0067bcda  56                   push esi
// 0067bcdb  57                   push edi
// 0067bcdc  33f6                 xor esi, esi
// 0067bcde  6884399700           push 0x973984
// 0067bce3  6860ab5400           push 0x54ab60
// 0067bce8  8bd9                 mov ebx, ecx
// 0067bcea  89b42480000000       mov dword ptr [esp + 0x80], esi
// 0067bcf1  89742418             mov dword ptr [esp + 0x18], esi
// 0067bcf5  e836b6edff           call 0x557330
// 0067bcfa  8b0d44db9700         mov ecx, dword ptr [0x97db44]
// 0067bd00  83c124               add ecx, 0x24
// 0067bd03  83c408               add esp, 8
// 0067bd06  894c2414             mov dword ptr [esp + 0x14], ecx
// 0067bd0a  e88173eeff           call 0x563090
// 0067bd0f  c644241801           mov byte ptr [esp + 0x18], 1
// 0067bd14  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0067bd1b  bf01000000           mov edi, 1
// 0067bd20  50                   push eax
// 0067bd21  8d4c2454             lea ecx, [esp + 0x54]
// 0067bd25  897c247c             mov dword ptr [esp + 0x7c], edi
// 0067bd29  ff1558248000         call dword ptr [0x802458]
// 0067bd2f  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0067bd36  51                   push ecx
// 0067bd37  8d4c2438             lea ecx, [esp + 0x38]
// 0067bd3b  c644247c02           mov byte ptr [esp + 0x7c], 2
// 0067bd40  ff1558248000         call dword ptr [0x802458]
// 0067bd46  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 0067bd4d  56                   push esi
// 0067bd4e  8d542454             lea edx, [esp + 0x54]
// 0067bd52  52                   push edx
// 0067bd53  8d44243c             lea eax, [esp + 0x3c]
// 0067bd57  50                   push eax
// 0067bd58  55                   push ebp
// 0067bd59  c684248800000003     mov byte ptr [esp + 0x88], 3
// 0067bd61  ff15fc428000         call dword ptr [0x8042fc]
// 0067bd67  8bc8                 mov ecx, eax
// 0067bd69  ff153c448000         call dword ptr [0x80443c]
// 0067bd6f  8d4c2434             lea ecx, [esp + 0x34]
// 0067bd73  897c2410             mov dword ptr [esp + 0x10], edi
// 0067bd77  c644247802           mov byte ptr [esp + 0x78], 2
// 0067bd7c  ff1568248000         call dword ptr [0x802468]
// 0067bd82  8d4c2450             lea ecx, [esp + 0x50]
// 0067bd86  c644247801           mov byte ptr [esp + 0x78], 1
// 0067bd8b  ff1568248000         call dword ptr [0x802468]
// 0067bd91  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 0067bd98  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 0067bd9f  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0067bda6  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0067bdad  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0067bdb4  57                   push edi
// 0067bdb5  56                   push esi
// 0067bdb6  51                   push ecx
// 0067bdb7  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0067bdbe  52                   push edx
// 0067bdbf  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0067bdc6  50                   push eax
// 0067bdc7  51                   push ecx
// 0067bdc8  52                   push edx
// 0067bdc9  55                   push ebp
// 0067bdca  8bcb                 mov ecx, ebx
// 0067bdcc  e89fe0ffff           call 0x679e70
// 0067bdd1  33db                 xor ebx, ebx
// 0067bdd3  3bf3                 cmp esi, ebx
// 0067bdd5  0f848e000000         je 0x67be69
// 0067bddb  3bfb                 cmp edi, ebx
// 0067bddd  0f8486000000         je 0x67be69
// 0067bde3  d906                 fld dword ptr [esi]
// 0067bde5  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0067bde9  d94604               fld dword ptr [esi + 4]
// 0067bdec  c744246801000000     mov dword ptr [esp + 0x68], 1
// 0067bdf4  d94608               fld dword ptr [esi + 8]
// 0067bdf7  d907                 fld dword ptr [edi]
// 0067bdf9  d94704               fld dword ptr [edi + 4]
// 0067bdfc  d94708               fld dword ptr [edi + 8]
// 0067bdff  d9cd                 fxch st(5)
// 0067be01  d95c2450             fstp dword ptr [esp + 0x50]
// 0067be05  d9cb                 fxch st(3)
// 0067be07  d95c2454             fstp dword ptr [esp + 0x54]
// 0067be0b  d9c9                 fxch st(1)
// 0067be0d  d95c2458             fstp dword ptr [esp + 0x58]
// 0067be11  d95c245c             fstp dword ptr [esp + 0x5c]
// 0067be15  d95c2460             fstp dword ptr [esp + 0x60]
// 0067be19  d95c2464             fstp dword ptr [esp + 0x64]
// 0067be1d  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0067be20  6a01                 push 1
// 0067be22  8d442454             lea eax, [esp + 0x54]
// 0067be26  50                   push eax
// 0067be27  c684248000000004     mov byte ptr [esp + 0x80], 4
// 0067be2f  ff15f0438000         call dword ptr [0x8043f0]
// 0067be35  8d4c2450             lea ecx, [esp + 0x50]
// 0067be39  c644247801           mov byte ptr [esp + 0x78], 1
// 0067be3e  ff15ec438000         call dword ptr [0x8043ec]
// 0067be44  d94708               fld dword ptr [edi + 8]
// 0067be47  d86608               fsub dword ptr [esi + 8]
// 0067be4a  d94704               fld dword ptr [edi + 4]
// 0067be4d  d86604               fsub dword ptr [esi + 4]
// 0067be50  d907                 fld dword ptr [edi]
// 0067be52  d826                 fsub dword ptr [esi]
// 0067be54  dcc8                 fmul st(0), st(0)
// 0067be56  d9c1                 fld st(1)
// 0067be58  deca                 fmulp st(2)
// 0067be5a  dec1                 faddp st(1)
// 0067be5c  d9c1                 fld st(1)
// 0067be5e  deca                 fmulp st(2)
// 0067be60  dec1                 faddp st(1)
// 0067be62  d9fa                 fsqrt 
// 0067be64  e974010000           jmp 0x67bfdd
// 0067be69  d90530d08200         fld dword ptr [0x82d030]
// 0067be6f  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0067be76  d9c0                 fld st(0)
// 0067be78  8d0440               lea eax, [eax + eax*2]
// 0067be7b  d9542428             fst dword ptr [esp + 0x28]
// 0067be7f  d9c1                 fld st(1)
// 0067be81  d954242c             fst dword ptr [esp + 0x2c]
// 0067be85  d9ca                 fxch st(2)
// 0067be87  d9542430             fst dword ptr [esp + 0x30]
// 0067be8b  d9052cd08200         fld dword ptr [0x82d02c]
// 0067be91  d9c0                 fld st(0)
// 0067be93  d954241c             fst dword ptr [esp + 0x1c]
// 0067be97  d9c1                 fld st(1)
// 0067be99  d9542420             fst dword ptr [esp + 0x20]
// 0067be9d  d9ca                 fxch st(2)
// 0067be9f  d9542424             fst dword ptr [esp + 0x24]
// 0067bea3  3bc3                 cmp eax, ebx
// 0067bea5  0f86b5000000         jbe 0x67bf60
// 0067beab  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0067beb2  8d50ff               lea edx, [eax - 1]
// 0067beb5  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0067beba  f7e2                 mul edx
// 0067bebc  d1ea                 shr edx, 1
// 0067bebe  83c108               add ecx, 8
// 0067bec1  42                   inc edx
// 0067bec2  d941f8               fld dword ptr [ecx - 8]
// 0067bec5  d8dd                 fcomp st(5)
// 0067bec7  dfe0                 fnstsw ax
// 0067bec9  f6c405               test ah, 5
// 0067becc  7a07                 jp 0x67bed5
// 0067bece  dddc                 fstp st(4)
// 0067bed0  d941f8               fld dword ptr [ecx - 8]
// 0067bed3  d9cc                 fxch st(4)
// 0067bed5  d941fc               fld dword ptr [ecx - 4]
// 0067bed8  d8de                 fcomp st(6)
// 0067beda  dfe0                 fnstsw ax
// 0067bedc  f6c405               test ah, 5
// 0067bedf  7a07                 jp 0x67bee8
// 0067bee1  dddd                 fstp st(5)
// 0067bee3  d941fc               fld dword ptr [ecx - 4]
// 0067bee6  d9cd                 fxch st(5)
// 0067bee8  d901                 fld dword ptr [ecx]
// 0067beea  d8dc                 fcomp st(4)
// 0067beec  dfe0                 fnstsw ax
// 0067beee  f6c405               test ah, 5
// 0067bef1  7a06                 jp 0x67bef9
// 0067bef3  dddb                 fstp st(3)
// 0067bef5  d901                 fld dword ptr [ecx]
// 0067bef7  d9cb                 fxch st(3)
// 0067bef9  d941f8               fld dword ptr [ecx - 8]
// 0067befc  d8da                 fcomp st(2)
// 0067befe  dfe0                 fnstsw ax
// 0067bf00  f6c441               test ah, 0x41
// 0067bf03  7507                 jne 0x67bf0c
// 0067bf05  ddd9                 fstp st(1)
// 0067bf07  d941f8               fld dword ptr [ecx - 8]
// 0067bf0a  d9c9                 fxch st(1)
// 0067bf0c  d941fc               fld dword ptr [ecx - 4]
// 0067bf0f  d8db                 fcomp st(3)
// 0067bf11  dfe0                 fnstsw ax
// 0067bf13  f6c441               test ah, 0x41
// 0067bf16  7507                 jne 0x67bf1f
// 0067bf18  ddda                 fstp st(2)
// 0067bf1a  d941fc               fld dword ptr [ecx - 4]
// 0067bf1d  d9ca                 fxch st(2)
// 0067bf1f  d811                 fcom dword ptr [ecx]
// 0067bf21  dfe0                 fnstsw ax
// 0067bf23  f6c405               test ah, 5
// 0067bf26  7a04                 jp 0x67bf2c
// 0067bf28  ddd8                 fstp st(0)
// 0067bf2a  d901                 fld dword ptr [ecx]
// 0067bf2c  83c10c               add ecx, 0xc
// 0067bf2f  83ea01               sub edx, 1
// 0067bf32  758e                 jne 0x67bec2
// 0067bf34  d9542424             fst dword ptr [esp + 0x24]
// 0067bf38  d9ca                 fxch st(2)
// 0067bf3a  d9542420             fst dword ptr [esp + 0x20]
// 0067bf3e  d9c9                 fxch st(1)
// 0067bf40  d954241c             fst dword ptr [esp + 0x1c]
// 0067bf44  d9cb                 fxch st(3)
// 0067bf46  d9542430             fst dword ptr [esp + 0x30]
// 0067bf4a  d9cd                 fxch st(5)
// 0067bf4c  d954242c             fst dword ptr [esp + 0x2c]
// 0067bf50  d9cc                 fxch st(4)
// 0067bf52  d9542428             fst dword ptr [esp + 0x28]
// 0067bf56  d9cc                 fxch st(4)
// 0067bf58  d9cd                 fxch st(5)
// 0067bf5a  d9cb                 fxch st(3)
// 0067bf5c  d9c9                 fxch st(1)
// 0067bf5e  d9ca                 fxch st(2)
// 0067bf60  d9cc                 fxch st(4)
// 0067bf62  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0067bf66  d95c2450             fstp dword ptr [esp + 0x50]
// 0067bf6a  c744246801000000     mov dword ptr [esp + 0x68], 1
// 0067bf72  d9cc                 fxch st(4)
// 0067bf74  d95c2454             fstp dword ptr [esp + 0x54]
// 0067bf78  d9c9                 fxch st(1)
// 0067bf7a  d95c2458             fstp dword ptr [esp + 0x58]
// 0067bf7e  d9ca                 fxch st(2)
// 0067bf80  d95c245c             fstp dword ptr [esp + 0x5c]
// 0067bf84  d9c9                 fxch st(1)
// 0067bf86  d95c2460             fstp dword ptr [esp + 0x60]
// 0067bf8a  d95c2464             fstp dword ptr [esp + 0x64]
// 0067bf8e  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0067bf91  6a01                 push 1
// 0067bf93  8d442454             lea eax, [esp + 0x54]
// 0067bf97  50                   push eax
// 0067bf98  c684248000000005     mov byte ptr [esp + 0x80], 5
// 0067bfa0  ff15f0438000         call dword ptr [0x8043f0]
// 0067bfa6  8d4c2450             lea ecx, [esp + 0x50]
// 0067bfaa  c644247801           mov byte ptr [esp + 0x78], 1
// 0067bfaf  ff15ec438000         call dword ptr [0x8043ec]
// 0067bfb5  d9442424             fld dword ptr [esp + 0x24]
// 0067bfb9  d8642430             fsub dword ptr [esp + 0x30]
// 0067bfbd  d9442420             fld dword ptr [esp + 0x20]
// 0067bfc1  d864242c             fsub dword ptr [esp + 0x2c]
// 0067bfc5  d944241c             fld dword ptr [esp + 0x1c]
// 0067bfc9  d8642428             fsub dword ptr [esp + 0x28]
// 0067bfcd  dcc8                 fmul st(0), st(0)
// 0067bfcf  d9c1                 fld st(1)
// 0067bfd1  deca                 fmulp st(2)
// 0067bfd3  dec1                 faddp st(1)
// 0067bfd5  d9c1                 fld st(1)
// 0067bfd7  deca                 fmulp st(2)
// 0067bfd9  dec1                 faddp st(1)
// 0067bfdb  d9fa                 fsqrt 
// 0067bfdd  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0067bfe0  d80dac9b8100         fmul dword ptr [0x819bac]
// 0067bfe6  51                   push ecx
// 0067bfe7  d91c24               fstp dword ptr [esp]
// 0067bfea  ff15e8438000         call dword ptr [0x8043e8]
// 0067bff0  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0067bff3  8b11                 mov edx, dword ptr [ecx]
// 0067bff5  8b4234               mov eax, dword ptr [edx + 0x34]
// 0067bff8  53                   push ebx
// 0067bff9  ffd0                 call eax
// 0067bffb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067bfff  c644247800           mov byte ptr [esp + 0x78], 0
// 0067c004  e8d770eeff           call 0x5630e0
// 0067c009  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0067c00d  5f                   pop edi
// 0067c00e  5e                   pop esi
// 0067c00f  8bc5                 mov eax, ebp
// 0067c011  5d                   pop ebp
// 0067c012  5b                   pop ebx
// 0067c013  64890d00000000       mov dword ptr fs:[0], ecx
// 0067c01a  83c46c               add esp, 0x6c
// 0067c01d  c22800               ret 0x28

// from server: 95% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// Native Ogre DLL exports/vtable establish StringInterface/Resource load slot34 and MeshPtr12.
// Mesh allocation, bounds and ownership preserve the full target behavior.
#include <string>
#include <map>
#include <math.h>
#include <stddef.h>
#include <exception>
namespace boost {
typedef long once_flag;void call_once(void(__cdecl*)(),once_flag&);
class thread_exception:public std::exception {int m_sys_err;protected:thread_exception();thread_exception(int);public:~thread_exception()throw();};
class lock_error:public thread_exception {public:lock_error();lock_error(int);~lock_error()throw();virtual const char*what()const throw();};
struct mutex {
 void*m_mutex;bool m_critical_section;void do_lock();void do_unlock();
 struct scoped_lock {
  mutex&m_mutex;bool m_locked;
  explicit scoped_lock(mutex&m):m_mutex(m),m_locked(false){lock();}
  ~scoped_lock(){if(m_locked)unlock();}
  void lock(){if(m_locked)throw lock_error();m_mutex.do_lock();m_locked=true;}
  void unlock(){if(!m_locked)throw lock_error();m_mutex.do_unlock();m_locked=false;}
 };
};
}
struct MeshContext {char unused[0x24];boost::mutex mutex;};
extern MeshContext*meshContext;extern boost::once_flag meshOnce;
void __cdecl initializeMeshContext();
namespace Ogre {
struct Math {static inline float Sqrt(float value){return static_cast<float>(sqrt(value));}};
struct Vector3 {
 float x,y,z;
 Vector3(){}Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3 operator-(const Vector3&v)const{Vector3 result;result.z=z-v.z;result.y=y-v.y;result.x=x-v.x;return result;}
 float length()const{float xx=x*x;return Math::Sqrt((xx+y*y)+z*z);}
 float squaredLength()const{float xx=x*x;return (xx+y*y)+z*z;}
};
struct AxisAlignedBox {
 Vector3 minimum,maximum;unsigned extent;void*corners;
 AxisAlignedBox(float ax,float ay,float az,float bx,float by,float bz):corners(0){setExtents(ax,ay,az,bx,by,bz);}
 void setExtents(float ax,float ay,float az,float bx,float by,float bz){extent=1;minimum.x=ax;minimum.y=ay;minimum.z=az;maximum.x=bx;maximum.y=by;maximum.z=bz;}
 __declspec(dllimport) ~AxisAlignedBox()throw();
};
typedef std::map<std::string,std::string>NameValuePairList;
struct StringInterface {
 virtual ~StringInterface();
 virtual bool setParameter(const std::string&,const std::string&);
 virtual void setParameterList(const NameValuePairList&);
 virtual std::string getParameter(const std::string&)const;
 virtual void copyParametersTo(StringInterface*)const;
};
struct Resource:StringInterface {
 virtual ~Resource();
 virtual void preLoadImpl();virtual void postLoadImpl();virtual void preUnloadImpl();virtual void postUnloadImpl();
 virtual void loadImpl()=0;virtual void unloadImpl()=0;virtual unsigned calculateSize()const=0;
 virtual void queueFireBackgroundLoadingComplete();virtual void load(bool);virtual void reload();virtual void unload();virtual void touch();
};
struct Mesh:Resource {
 __declspec(dllimport) void _setBounds(const AxisAlignedBox&,bool);
 __declspec(dllimport) void _setBoundingSphereRadius(float);
};
struct __declspec(dllimport) MeshPtr {
 virtual ~MeshPtr()throw();virtual void destroy();virtual void swap(MeshPtr&);
 Mesh*pointer;unsigned*useCount;
 MeshPtr(const MeshPtr&);Mesh*operator->()const{return pointer;}
};
struct ManualResourceLoader;
struct MeshManager {
 __declspec(dllimport) static MeshManager&getSingleton();
 __declspec(dllimport) MeshPtr createManual(const std::string&,const std::string&,ManualResourceLoader*);
};
struct GeometryBuilder {
 void update(MeshPtr&,const float*,unsigned,const float*,const float*,const float*,const Vector3*,const Vector3*);
 MeshPtr create(const char*,const char*,const float*,unsigned,const float*,const float*,const float*,const Vector3*,const Vector3*);
};
MeshPtr GeometryBuilder::create(const char*name,const char*group,const float*vertices,unsigned vertexCount,const float*normals,const float*colours,const float*texCoords,const Vector3*minimum,const Vector3*maximum){
 boost::call_once(initializeMeshContext,meshOnce);
 boost::mutex::scoped_lock lock(meshContext->mutex);
 MeshPtr mesh=MeshManager::getSingleton().createManual(name,group,0);
 update(mesh,vertices,vertexCount,normals,colours,texCoords,minimum,maximum);
 float radius;
 if(minimum&&maximum){
  mesh->_setBounds(AxisAlignedBox(minimum->x,minimum->y,minimum->z,maximum->x,maximum->y,maximum->z),true);
  double r=sqrt(static_cast<double>((*maximum-*minimum).squaredLength()));
  radius=static_cast<float>(r);
 }else{
  Vector3 low(1.0e9f,1.0e9f,1.0e9f),high(-1.0e9f,-1.0e9f,-1.0e9f);
  for(unsigned i=0;i<3*vertexCount;i+=3){
   if(low.x>vertices[i])low.x=vertices[i];if(low.y>vertices[i+1])low.y=vertices[i+1];if(low.z>vertices[i+2])low.z=vertices[i+2];
   if(high.x<vertices[i])high.x=vertices[i];if(high.y<vertices[i+1])high.y=vertices[i+1];if(high.z<vertices[i+2])high.z=vertices[i+2];
  }
  mesh->_setBounds(AxisAlignedBox(low.x,low.y,low.z,high.x,high.y,high.z),true);
  radius=(high-low).length();
 }
 mesh->_setBoundingSphereRadius(radius*0.5f);
 mesh->load(false);
 return mesh;
}
}
typedef char mesh_ptr_size[sizeof(Ogre::MeshPtr)==12?1:-1];
typedef char mesh_payload[offsetof(Ogre::MeshPtr,pointer)==4?1:-1];
typedef char bounds_size[sizeof(Ogre::AxisAlignedBox)==32?1:-1];
typedef char mutex_offset[offsetof(MeshContext,mutex)==0x24?1:-1];
