// from server: 100% by nuck16
// roc 2008-06 004f6a80  unit: RBX::ViewNew::PBBBuilder  size: 931 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f6a80
//
// 004f6a80  6aff                 push -1
// 004f6a82  68e8af7c00           push 0x7cafe8
// 004f6a87  64a100000000         mov eax, dword ptr fs:[0]
// 004f6a8d  50                   push eax
// 004f6a8e  64892500000000       mov dword ptr fs:[0], esp
// 004f6a95  83ec6c               sub esp, 0x6c
// 004f6a98  53                   push ebx
// 004f6a99  55                   push ebp
// 004f6a9a  56                   push esi
// 004f6a9b  8be9                 mov ebp, ecx
// 004f6a9d  57                   push edi
// 004f6a9e  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f6aa2  8d4504               lea eax, [ebp + 4]
// 004f6aa5  50                   push eax
// 004f6aa6  8d4c2474             lea ecx, [esp + 0x74]
// 004f6aaa  33db                 xor ebx, ebx
// 004f6aac  51                   push ecx
// 004f6aad  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 004f6ab4  e847570f00           call 0x5ec200
// 004f6ab9  0fbf8424e0000000     movsx eax, word ptr [esp + 0xe0]
// 004f6ac1  89442424             mov dword ptr [esp + 0x24], eax
// 004f6ac5  0fbf8c24e2000000     movsx ecx, word ptr [esp + 0xe2]
// 004f6acd  db442424             fild dword ptr [esp + 0x24]
// 004f6ad1  d98424c0000000       fld dword ptr [esp + 0xc0]
// 004f6ad8  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f6adc  d8a424b8000000       fsub dword ptr [esp + 0xb8]
// 004f6ae3  41                   inc ecx
// 004f6ae4  40                   inc eax
// 004f6ae5  0fafc8               imul ecx, eax
// 004f6ae8  d8f1                 fdiv st(1)
// 004f6aea  33c0                 xor eax, eax
// 004f6aec  8bc1                 mov eax, ecx
// 004f6aee  ba04000000           mov edx, 4
// 004f6af3  894c2440             mov dword ptr [esp + 0x40], ecx
// 004f6af7  8bcb                 mov ecx, ebx
// 004f6af9  d95c2438             fstp dword ptr [esp + 0x38]
// 004f6afd  f7e2                 mul edx
// 004f6aff  db442424             fild dword ptr [esp + 0x24]
// 004f6b03  d98424c4000000       fld dword ptr [esp + 0xc4]
// 004f6b0a  d8a424bc000000       fsub dword ptr [esp + 0xbc]
// 004f6b11  d8f1                 fdiv st(1)
// 004f6b13  0f90c1               seto cl
// 004f6b16  f7d9                 neg ecx
// 004f6b18  0bc8                 or ecx, eax
// 004f6b1a  51                   push ecx
// 004f6b1b  d95c2430             fstp dword ptr [esp + 0x30]
// 004f6b1f  d98424d8000000       fld dword ptr [esp + 0xd8]
// 004f6b26  def2                 fdivrp st(2)
// 004f6b28  d9c9                 fxch st(1)
// 004f6b2a  d95c2440             fstp dword ptr [esp + 0x40]
// 004f6b2e  d8bc24dc000000       fdivr dword ptr [esp + 0xdc]
// 004f6b35  d95c2434             fstp dword ptr [esp + 0x34]
// 004f6b39  e8189e1a00           call 0x6a0956
// 004f6b3e  d98424bc000000       fld dword ptr [esp + 0xbc]
// 004f6b45  8b9424e4000000       mov edx, dword ptr [esp + 0xe4]
// 004f6b4c  d954241c             fst dword ptr [esp + 0x1c]
// 004f6b50  d98424d0000000       fld dword ptr [esp + 0xd0]
// 004f6b57  8bf0                 mov esi, eax
// 004f6b59  33c0                 xor eax, eax
// 004f6b5b  d95c2420             fstp dword ptr [esp + 0x20]
// 004f6b5f  83c40c               add esp, 0xc
// 004f6b62  663bc2               cmp ax, dx
// 004f6b65  668b8424da000000     mov ax, word ptr [esp + 0xda]
// 004f6b6d  0f8fc1010000         jg 0x4f6d34
// 004f6b73  d9ee                 fldz 
// 004f6b75  eb02                 jmp 0x4f6b79
// 004f6b77  d9c9                 fxch st(1)
// 004f6b79  d98424b4000000       fld dword ptr [esp + 0xb4]
// 004f6b80  33c9                 xor ecx, ecx
// 004f6b82  d9542418             fst dword ptr [esp + 0x18]
// 004f6b86  33ff                 xor edi, edi
// 004f6b88  663bc8               cmp cx, ax
// 004f6b8b  d98424c8000000       fld dword ptr [esp + 0xc8]
// 004f6b92  d954241c             fst dword ptr [esp + 0x1c]
// 004f6b96  0f8f6e010000         jg 0x4f6d0a
// 004f6b9c  8b8424d4000000       mov eax, dword ptr [esp + 0xd4]
// 004f6ba3  03c0                 add eax, eax
// 004f6ba5  03c0                 add eax, eax
// 004f6ba7  8d6c2440             lea ebp, [esp + 0x40]
// 004f6bab  8d54043c             lea edx, [esp + eax + 0x3c]
// 004f6baf  2be8                 sub ebp, eax
// 004f6bb1  89542420             mov dword ptr [esp + 0x20], edx
// 004f6bb5  eb0c                 jmp 0x4f6bc3
// 004f6bb7  d9ee                 fldz 
// 004f6bb9  d9442410             fld dword ptr [esp + 0x10]
// 004f6bbd  d9cb                 fxch st(3)
// 004f6bbf  d9c9                 fxch st(1)
// 004f6bc1  d9ca                 fxch st(2)
// 004f6bc3  d98424c0000000       fld dword ptr [esp + 0xc0]
// 004f6bca  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f6bce  d95c2454             fstp dword ptr [esp + 0x54]
// 004f6bd2  d9ca                 fxch st(2)
// 004f6bd4  d954243c             fst dword ptr [esp + 0x3c]
// 004f6bd8  d9542440             fst dword ptr [esp + 0x40]
// 004f6bdc  d9442414             fld dword ptr [esp + 0x14]
// 004f6be0  d95d00               fstp dword ptr [ebp]
// 004f6be3  d9ca                 fxch st(2)
// 004f6be5  d918                 fstp dword ptr [eax]
// 004f6be7  d9c9                 fxch st(1)
// 004f6be9  d9542458             fst dword ptr [esp + 0x58]
// 004f6bed  d954245c             fst dword ptr [esp + 0x5c]
// 004f6bf1  d9e8                 fld1 
// 004f6bf3  d95c2460             fstp dword ptr [esp + 0x60]
// 004f6bf7  d8d2                 fcom st(2)
// 004f6bf9  dfe0                 fnstsw ax
// 004f6bfb  d98424ac000000       fld dword ptr [esp + 0xac]
// 004f6c02  f6c405               test ah, 5
// 004f6c05  7a04                 jp 0x4f6c0b
// 004f6c07  dceb                 fsub st(3), st(0)
// 004f6c09  eb04                 jmp 0x4f6c0f
// 004f6c0b  d9c0                 fld st(0)
// 004f6c0d  dec4                 faddp st(4)
// 004f6c0f  d9cb                 fxch st(3)
// 004f6c11  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f6c15  d8d9                 fcomp st(1)
// 004f6c17  dfe0                 fnstsw ax
// 004f6c19  f6c405               test ah, 5
// 004f6c1c  7a04                 jp 0x4f6c22
// 004f6c1e  dee1                 fsubrp st(1)
// 004f6c20  eb02                 jmp 0x4f6c24
// 004f6c22  dec1                 faddp st(1)
// 004f6c24  d95c2450             fstp dword ptr [esp + 0x50]
// 004f6c28  e8732f0100           call 0x509ba0
// 004f6c2d  8bc8                 mov ecx, eax
// 004f6c2f  d901                 fld dword ptr [ecx]
// 004f6c31  d89c24cc000000       fcomp dword ptr [esp + 0xcc]
// 004f6c38  dfe0                 fnstsw ax
// 004f6c3a  f6c444               test ah, 0x44
// 004f6c3d  7a21                 jp 0x4f6c60
// 004f6c3f  d94104               fld dword ptr [ecx + 4]
// 004f6c42  d89c24d0000000       fcomp dword ptr [esp + 0xd0]
// 004f6c49  dfe0                 fnstsw ax
// 004f6c4b  f6c444               test ah, 0x44
// 004f6c4e  7a10                 jp 0x4f6c60
// 004f6c50  d98424c4000000       fld dword ptr [esp + 0xc4]
// 004f6c57  d98424c8000000       fld dword ptr [esp + 0xc8]
// 004f6c5e  eb08                 jmp 0x4f6c68
// 004f6c60  d944243c             fld dword ptr [esp + 0x3c]
// 004f6c64  d9442440             fld dword ptr [esp + 0x40]
// 004f6c68  d905ac9b8100         fld dword ptr [0x819bac]
// 004f6c6e  8d4c2458             lea ecx, [esp + 0x58]
// 004f6c72  dcca                 fmul st(2), st(0)
// 004f6c74  51                   push ecx
// 004f6c75  dec9                 fmulp st(1)
// 004f6c77  8d542468             lea edx, [esp + 0x68]
// 004f6c7b  d9c9                 fxch st(1)
// 004f6c7d  52                   push edx
// 004f6c7e  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f6c82  d95c2450             fstp dword ptr [esp + 0x50]
// 004f6c86  e875550f00           call 0x5ec200
// 004f6c8b  8d442454             lea eax, [esp + 0x54]
// 004f6c8f  50                   push eax
// 004f6c90  8d4c247c             lea ecx, [esp + 0x7c]
// 004f6c94  51                   push ecx
// 004f6c95  e866550f00           call 0x5ec200
// 004f6c9a  6a01                 push 1
// 004f6c9c  8d542458             lea edx, [esp + 0x58]
// 004f6ca0  52                   push edx
// 004f6ca1  8d44247c             lea eax, [esp + 0x7c]
// 004f6ca5  50                   push eax
// 004f6ca6  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004f6cad  51                   push ecx
// 004f6cae  e84d130500           call 0x548000
// 004f6cb3  d9442444             fld dword ptr [esp + 0x44]
// 004f6cb7  0fbf9424fa000000     movsx edx, word ptr [esp + 0xfa]
// 004f6cbf  d8442438             fadd dword ptr [esp + 0x38]
// 004f6cc3  42                   inc edx
// 004f6cc4  0fafd3               imul edx, ebx
// 004f6cc7  d9542438             fst dword ptr [esp + 0x38]
// 004f6ccb  d9442448             fld dword ptr [esp + 0x48]
// 004f6ccf  d844243c             fadd dword ptr [esp + 0x3c]
// 004f6cd3  d954243c             fst dword ptr [esp + 0x3c]
// 004f6cd7  03d7                 add edx, edi
// 004f6cd9  890496               mov dword ptr [esi + edx*4], eax
// 004f6cdc  668b8424fa000000     mov ax, word ptr [esp + 0xfa]
// 004f6ce4  0fbfc8               movsx ecx, ax
// 004f6ce7  47                   inc edi
// 004f6ce8  83c420               add esp, 0x20
// 004f6ceb  3bf9                 cmp edi, ecx
// 004f6ced  0f8ec4feffff         jle 0x4f6bb7
// 004f6cf3  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 004f6cfa  ddd8                 fstp st(0)
// 004f6cfc  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004f6d00  ddd8                 fstp st(0)
// 004f6d02  d9442410             fld dword ptr [esp + 0x10]
// 004f6d06  d9ee                 fldz 
// 004f6d08  eb04                 jmp 0x4f6d0e
// 004f6d0a  ddd8                 fstp st(0)
// 004f6d0c  ddd8                 fstp st(0)
// 004f6d0e  d9442430             fld dword ptr [esp + 0x30]
// 004f6d12  0fbfca               movsx ecx, dx
// 004f6d15  dec2                 faddp st(2)
// 004f6d17  43                   inc ebx
// 004f6d18  3bd9                 cmp ebx, ecx
// 004f6d1a  d9c9                 fxch st(1)
// 004f6d1c  d9542410             fst dword ptr [esp + 0x10]
// 004f6d20  d9442434             fld dword ptr [esp + 0x34]
// 004f6d24  d8442414             fadd dword ptr [esp + 0x14]
// 004f6d28  d95c2414             fstp dword ptr [esp + 0x14]
// 004f6d2c  0f8e45feffff         jle 0x4f6b77
// 004f6d32  ddd9                 fstp st(1)
// 004f6d34  33c9                 xor ecx, ecx
// 004f6d36  ddd8                 fstp st(0)
// 004f6d38  33db                 xor ebx, ebx
// 004f6d3a  663bca               cmp cx, dx
// 004f6d3d  7d49                 jge 0x4f6d88
// 004f6d3f  0fbfc8               movsx ecx, ax
// 004f6d42  33ff                 xor edi, edi
// 004f6d44  85c9                 test ecx, ecx
// 004f6d46  7e38                 jle 0x4f6d80
// 004f6d48  8d4101               lea eax, [ecx + 1]
// 004f6d4b  0fafc3               imul eax, ebx
// 004f6d4e  03c7                 add eax, edi
// 004f6d50  03c8                 add ecx, eax
// 004f6d52  8b548e08             mov edx, dword ptr [esi + ecx*4 + 8]
// 004f6d56  8b4c8e04             mov ecx, dword ptr [esi + ecx*4 + 4]
// 004f6d5a  52                   push edx
// 004f6d5b  8b1486               mov edx, dword ptr [esi + eax*4]
// 004f6d5e  8b448604             mov eax, dword ptr [esi + eax*4 + 4]
// 004f6d62  51                   push ecx
// 004f6d63  52                   push edx
// 004f6d64  50                   push eax
// 004f6d65  8bcd                 mov ecx, ebp
// 004f6d67  e844a10000           call 0x500eb0
// 004f6d6c  0fbf8c24da000000     movsx ecx, word ptr [esp + 0xda]
// 004f6d74  47                   inc edi
// 004f6d75  3bf9                 cmp edi, ecx
// 004f6d77  7ccf                 jl 0x4f6d48
// 004f6d79  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 004f6d80  0fbfc2               movsx eax, dx
// 004f6d83  43                   inc ebx
// 004f6d84  3bd8                 cmp ebx, eax
// 004f6d86  7cba                 jl 0x4f6d42
// 004f6d88  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004f6d8c  33ff                 xor edi, edi
// 004f6d8e  85db                 test ebx, ebx
// 004f6d90  7611                 jbe 0x4f6da3
// 004f6d92  8b0cbe               mov ecx, dword ptr [esi + edi*4]
// 004f6d95  51                   push ecx
// 004f6d96  e8a5180500           call 0x548640
// 004f6d9b  47                   inc edi
// 004f6d9c  83c404               add esp, 4
// 004f6d9f  3bfb                 cmp edi, ebx
// 004f6da1  72ef                 jb 0x4f6d92
// 004f6da3  56                   push esi
// 004f6da4  e8a19b1a00           call 0x6a094a
// 004f6da9  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 004f6db0  83c404               add esp, 4
// 004f6db3  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 004f6dbe  85c0                 test eax, eax
// 004f6dc0  744c                 je 0x4f6e0e
// 004f6dc2  83c004               add eax, 4
// 004f6dc5  50                   push eax
// 004f6dc6  ff15ac218000         call dword ptr [0x8021ac]
// 004f6dcc  85c0                 test eax, eax
// 004f6dce  753e                 jne 0x4f6e0e
// 004f6dd0  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 004f6dd7  8b7108               mov esi, dword ptr [ecx + 8]
// 004f6dda  85f6                 test esi, esi
// 004f6ddc  7424                 je 0x4f6e02
// 004f6dde  8bff                 mov edi, edi
// 004f6de0  8b0e                 mov ecx, dword ptr [esi]
// 004f6de2  8b11                 mov edx, dword ptr [ecx]
// 004f6de4  8b4204               mov eax, dword ptr [edx + 4]
// 004f6de7  ffd0                 call eax
// 004f6de9  8bc6                 mov eax, esi
// 004f6deb  8b7604               mov esi, dword ptr [esi + 4]
// 004f6dee  50                   push eax
// 004f6def  e886981a00           call 0x6a067a
// 004f6df4  83c404               add esp, 4
// 004f6df7  85f6                 test esi, esi
// 004f6df9  75e5                 jne 0x4f6de0
// 004f6dfb  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 004f6e02  85c9                 test ecx, ecx
// 004f6e04  7408                 je 0x4f6e0e
// 004f6e06  8b11                 mov edx, dword ptr [ecx]
// 004f6e08  8b02                 mov eax, dword ptr [edx]
// 004f6e0a  6a01                 push 1
// 004f6e0c  ffd0                 call eax
// 004f6e0e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 004f6e12  5f                   pop edi
// 004f6e13  5e                   pop esi
// 004f6e14  5d                   pop ebp
// 004f6e15  5b                   pop ebx
// 004f6e16  64890d00000000       mov dword ptr fs:[0], ecx
// 004f6e1d  83c478               add esp, 0x78
// 004f6e20  c25000               ret 0x50

// from server: 97% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// Complete 931-byte owned-builder grid emitter; RTTI proves ViewNew WedgeBuilder/BevelMesh::Builder/LevelBuilder.
// Native G3D ReferenceCount and the 36-byte by-value builder explain parameter cleanup.
// RTTI tables8270c8/827088/8270a8 prove the native three-level hierarchy.
// Native AtomicInt32 imports and weak-list invalidation account for every cleanup call.
// Remaining local storage/FP differences are retained as partial, not exact.
#include <stddef.h>
#include <math.h>
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
namespace G3D {
struct AtomicInt32 {volatile long value;void increment(){InterlockedIncrement(&value);}unsigned decrement(){return InterlockedDecrement(&value)!=0;}};
struct ReferenceCountedObject;
struct _WeakPtr {virtual ~_WeakPtr(){}protected:friend struct ReferenceCountedObject;virtual void objectCollected()=0;};
struct _WeakPtrLinkedList {_WeakPtr*weakPtr;_WeakPtrLinkedList*next;};
struct ReferenceCountedObject {
 AtomicInt32 ReferenceCountedObject_refCount;_WeakPtrLinkedList*ReferenceCountedObject_weakPointer;
 virtual ~ReferenceCountedObject(){}
 void ReferenceCountedObject_zeroWeakPointers(){_WeakPtrLinkedList*node=ReferenceCountedObject_weakPointer;while(node){node->weakPtr->objectCollected();_WeakPtrLinkedList*tmp=node;node=node->next;delete tmp;}}
};
template<class T>class ReferenceCountedPointer {
 T*m_pointer;
 void zeroPointer(){if(m_pointer){if(m_pointer->ReferenceCountedObject_refCount.decrement()==0){m_pointer->ReferenceCountedObject_zeroWeakPointers();delete m_pointer;}m_pointer=0;}}
 void setPointer(T*x){if(x!=m_pointer){zeroPointer();if(x){m_pointer=x;m_pointer->ReferenceCountedObject_refCount.increment();}}}
public:
 ReferenceCountedPointer():m_pointer(0){}ReferenceCountedPointer(const ReferenceCountedPointer&p):m_pointer(0){setPointer(p.m_pointer);}~ReferenceCountedPointer(){zeroPointer();}
};

struct Vector2 {float x,y;Vector2():x(0),y(0){}Vector2(float a,float b):x(a),y(b){}Vector2(const Vector2&v):x(v.x),y(v.y){}Vector2 operator*(float f)const{return Vector2(x*f,y*f);}Vector2&operator=(const Vector2&v){x=v.x;y=v.y;return *this;}float&operator[](int i){return (&x)[i];}const float&operator[](int i)const{return (&x)[i];}};
struct Vector3 {float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}Vector3 abs()const{return Vector3((float)fabs(x),(float)fabs(y),(float)fabs(z));}};
struct Vector2int16 {short x,y;Vector2int16(short a,short b):x(a),y(b){}};
struct Rect2D {Vector2 min,max;};
}
namespace RBX {namespace ViewNew {
using G3D::Vector2;using G3D::Vector3;using G3D::Rect2D;using G3D::Vector2int16;
class WedgeBuilder;
Vector3 __cdecl mapFace(const Vector3&);
const Vector2&__cdecl zeroVector2();
unsigned __cdecl allocVertex(const Vector3&,const Vector3&,const Vector2&,bool);
void __cdecl freeVertex(unsigned);
struct Level:G3D::ReferenceCountedObject {virtual ~Level();};
class LevelBuilder {
public:
 enum Purpose{Surface,Decal,Shadow};
 virtual void build(Purpose);virtual void buildTop(Purpose)=0;virtual void buildBottom(Purpose)=0;virtual void buildLeft(Purpose)=0;virtual void buildRight(Purpose)=0;virtual void buildFront(Purpose)=0;virtual void buildBack(Purpose)=0;
 const Vector3 halfSize;unsigned surfaceTypes;const G3D::ReferenceCountedPointer<Level>level;Vector2 textureScale;
 void appendQuadFromVertexIndices(unsigned,unsigned,unsigned,unsigned);
 void emit(WedgeBuilder,Rect2D,float,Vector2,Vector2,int,Vector2int16);
};
struct BevelMesh {class Builder:public LevelBuilder {
public:
 const float bevel;virtual void build(Purpose);
 void operator()(Vector3&vertex,Vector3&,Vector2&,const Vector3&,const Vector2int16&){
  if(vertex.x>0)vertex.x-=bevel;else vertex.x+=bevel;
  if(vertex.y>0)vertex.y-=bevel;else vertex.y+=bevel;
 }
};};
class WedgeBuilder:public BevelMesh::Builder {
public:virtual void buildTop(Purpose);virtual void buildBottom(Purpose);virtual void buildLeft(Purpose);virtual void buildRight(Purpose);virtual void buildFront(Purpose);virtual void buildBack(Purpose);
};
void LevelBuilder::emit(WedgeBuilder function,Rect2D rect,float depth,Vector2 origin,Vector2 extent,int axis,Vector2int16 grid){
 Vector3 size=mapFace(halfSize).abs();
 float pointX=0,uvX=0,pointY=0,uvY=0;
 float stepX=(rect.max.x-rect.min.x)/grid.x;float stepY=(rect.max.y-rect.min.y)/grid.y;
 float textureStepX=extent.x/grid.x;float textureStepY=extent.y/grid.y;
 unsigned count=(grid.x+1)*(grid.y+1);
 unsigned*indices=new unsigned[count];
 pointX=rect.min.x;
 uvX=origin.x;
 for(int j=0;j<=grid.x;++j){
  pointY=rect.min.y;uvY=origin.y;
  for(int i=0;i<=grid.y;++i){
   Vector3 vertex(pointX,pointY,depth);
   Vector2 texture;texture[1-axis]=uvX;texture[axis]=uvY;
   Vector3 normal(0,0,1);
   function(vertex,normal,texture,size,Vector2int16(j,i));
   const Vector2&zero=zeroVector2();
   float texU,texV;
   if(extent.x==zero.x&&extent.y==zero.y){texU=origin.x;texV=origin.y;}else{texU=texture.x;texV=texture.y;}
   Vector2 tex=Vector2(texU,texV)*.5f;
   Vector3 mappedNormal=mapFace(normal);Vector3 mappedVertex=mapFace(vertex);
   indices[(grid.y+1)*j+i]=allocVertex(mappedVertex,mappedNormal,tex,true);
   pointY+=stepY;uvY+=textureStepY;
  }
  pointX+=stepX;uvX+=textureStepX;
 }
 for(int j=0;j<grid.x;++j)for(int i=0;i<grid.y;++i){int k=(grid.y+1)*j+i;appendQuadFromVertexIndices(indices[k+1],indices[k],indices[k+grid.y+1],indices[k+grid.y+2]);}
 for(unsigned k=0;k<count;++k)freeVertex(indices[k]);
 delete[]indices;
}
}}
typedef char deformation_extent[sizeof(RBX::ViewNew::WedgeBuilder)==36?1:-1];
typedef char rectangle_extent[sizeof(G3D::Rect2D)==16?1:-1];
typedef char builder_extent[sizeof(RBX::ViewNew::LevelBuilder)==32?1:-1];
typedef char size_offset[offsetof(RBX::ViewNew::LevelBuilder,halfSize)==4?1:-1];

typedef char reference_extent[sizeof(G3D::ReferenceCountedPointer<RBX::ViewNew::Level>)==4?1:-1];
typedef char object_extent[sizeof(G3D::ReferenceCountedObject)==12?1:-1];
typedef char bevel_offset[offsetof(RBX::ViewNew::BevelMesh::Builder,bevel)==0x20?1:-1];
