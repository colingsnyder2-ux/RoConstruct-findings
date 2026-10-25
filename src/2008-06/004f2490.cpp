// from server: 100% by king_originala_sol_native
// roc 2008-06 004f2490  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 884 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f2490
//
// 004f2490  83ec78               sub esp, 0x78
// 004f2493  53                   push ebx
// 004f2494  55                   push ebp
// 004f2495  8be9                 mov ebp, ecx
// 004f2497  56                   push esi
// 004f2498  57                   push edi
// 004f2499  8d4504               lea eax, [ebp + 4]
// 004f249c  50                   push eax
// 004f249d  8d4c245c             lea ecx, [esp + 0x5c]
// 004f24a1  51                   push ecx
// 004f24a2  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f24a6  e8559d0f00           call 0x5ec200
// 004f24ab  d9442460             fld dword ptr [esp + 0x60]
// 004f24af  0fbf8424c8000000     movsx eax, word ptr [esp + 0xc8]
// 004f24b7  d9e1                 fabs 
// 004f24b9  d95c246c             fstp dword ptr [esp + 0x6c]
// 004f24bd  89442424             mov dword ptr [esp + 0x24], eax
// 004f24c1  d9442464             fld dword ptr [esp + 0x64]
// 004f24c5  0fbf8c24ca000000     movsx ecx, word ptr [esp + 0xca]
// 004f24cd  d9e1                 fabs 
// 004f24cf  d95c2470             fstp dword ptr [esp + 0x70]
// 004f24d3  d9442468             fld dword ptr [esp + 0x68]
// 004f24d7  40                   inc eax
// 004f24d8  d9e1                 fabs 
// 004f24da  33db                 xor ebx, ebx
// 004f24dc  d95c2474             fstp dword ptr [esp + 0x74]
// 004f24e0  ba04000000           mov edx, 4
// 004f24e5  db442424             fild dword ptr [esp + 0x24]
// 004f24e9  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f24ed  d98424a8000000       fld dword ptr [esp + 0xa8]
// 004f24f4  41                   inc ecx
// 004f24f5  d8a424a0000000       fsub dword ptr [esp + 0xa0]
// 004f24fc  0fafc8               imul ecx, eax
// 004f24ff  d8f1                 fdiv st(1)
// 004f2501  8bc1                 mov eax, ecx
// 004f2503  894c2430             mov dword ptr [esp + 0x30], ecx
// 004f2507  d95c243c             fstp dword ptr [esp + 0x3c]
// 004f250b  f7e2                 mul edx
// 004f250d  db442424             fild dword ptr [esp + 0x24]
// 004f2511  d98424ac000000       fld dword ptr [esp + 0xac]
// 004f2518  d8a424a4000000       fsub dword ptr [esp + 0xa4]
// 004f251f  d8f1                 fdiv st(1)
// 004f2521  0f90c3               seto bl
// 004f2524  f7db                 neg ebx
// 004f2526  0bd8                 or ebx, eax
// 004f2528  53                   push ebx
// 004f2529  d95c2444             fstp dword ptr [esp + 0x44]
// 004f252d  d98424c0000000       fld dword ptr [esp + 0xc0]
// 004f2534  def2                 fdivrp st(2)
// 004f2536  d9c9                 fxch st(1)
// 004f2538  d95c2448             fstp dword ptr [esp + 0x48]
// 004f253c  d8bc24c4000000       fdivr dword ptr [esp + 0xc4]
// 004f2543  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f2547  e80ae41a00           call 0x6a0956
// 004f254c  d98424a4000000       fld dword ptr [esp + 0xa4]
// 004f2553  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 004f255a  d954241c             fst dword ptr [esp + 0x1c]
// 004f255e  d98424b8000000       fld dword ptr [esp + 0xb8]
// 004f2565  8bf8                 mov edi, eax
// 004f2567  33c0                 xor eax, eax
// 004f2569  d95c2420             fstp dword ptr [esp + 0x20]
// 004f256d  83c40c               add esp, 0xc
// 004f2570  33db                 xor ebx, ebx
// 004f2572  663bc2               cmp ax, dx
// 004f2575  668b8424c2000000     mov ax, word ptr [esp + 0xc2]
// 004f257d  0f8ffb010000         jg 0x4f277e
// 004f2583  d9ee                 fldz 
// 004f2585  eb02                 jmp 0x4f2589
// 004f2587  d9c9                 fxch st(1)
// 004f2589  d984249c000000       fld dword ptr [esp + 0x9c]
// 004f2590  33c9                 xor ecx, ecx
// 004f2592  d9542418             fst dword ptr [esp + 0x18]
// 004f2596  33f6                 xor esi, esi
// 004f2598  663bc8               cmp cx, ax
// 004f259b  d98424b0000000       fld dword ptr [esp + 0xb0]
// 004f25a2  d954241c             fst dword ptr [esp + 0x1c]
// 004f25a6  0f8fa8010000         jg 0x4f2754
// 004f25ac  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 004f25b3  03c0                 add eax, eax
// 004f25b5  03c0                 add eax, eax
// 004f25b7  8d6c2430             lea ebp, [esp + 0x30]
// 004f25bb  8d54042c             lea edx, [esp + eax + 0x2c]
// 004f25bf  2be8                 sub ebp, eax
// 004f25c1  89542420             mov dword ptr [esp + 0x20], edx
// 004f25c5  eb0c                 jmp 0x4f25d3
// 004f25c7  d9ee                 fldz 
// 004f25c9  d9442410             fld dword ptr [esp + 0x10]
// 004f25cd  d9cb                 fxch st(3)
// 004f25cf  d9c9                 fxch st(1)
// 004f25d1  d9ca                 fxch st(2)
// 004f25d3  d98424a8000000       fld dword ptr [esp + 0xa8]
// 004f25da  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f25de  d95c2454             fstp dword ptr [esp + 0x54]
// 004f25e2  d9ca                 fxch st(2)
// 004f25e4  d954242c             fst dword ptr [esp + 0x2c]
// 004f25e8  d9542430             fst dword ptr [esp + 0x30]
// 004f25ec  d9442414             fld dword ptr [esp + 0x14]
// 004f25f0  d95d00               fstp dword ptr [ebp]
// 004f25f3  d9ca                 fxch st(2)
// 004f25f5  d918                 fstp dword ptr [eax]
// 004f25f7  d9c9                 fxch st(1)
// 004f25f9  d9542458             fst dword ptr [esp + 0x58]
// 004f25fd  d954245c             fst dword ptr [esp + 0x5c]
// 004f2601  d9e8                 fld1 
// 004f2603  d95c2460             fstp dword ptr [esp + 0x60]
// 004f2607  d8d2                 fcom st(2)
// 004f2609  dfe0                 fnstsw ax
// 004f260b  d905386e8200         fld dword ptr [0x826e38]
// 004f2611  f6c405               test ah, 5
// 004f2614  7a04                 jp 0x4f261a
// 004f2616  dceb                 fsub st(3), st(0)
// 004f2618  eb04                 jmp 0x4f261e
// 004f261a  d9c0                 fld st(0)
// 004f261c  dec4                 faddp st(4)
// 004f261e  d9cb                 fxch st(3)
// 004f2620  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f2624  d8d9                 fcomp st(1)
// 004f2626  dfe0                 fnstsw ax
// 004f2628  f6c405               test ah, 5
// 004f262b  7a04                 jp 0x4f2631
// 004f262d  dee1                 fsubrp st(1)
// 004f262f  eb02                 jmp 0x4f2633
// 004f2631  dec1                 faddp st(1)
// 004f2633  d95c2450             fstp dword ptr [esp + 0x50]
// 004f2637  33c0                 xor eax, eax
// 004f2639  8da42400000000       lea esp, [esp]
// 004f2640  80bc049400000000     cmp byte ptr [esp + eax + 0x94], 0
// 004f2648  7411                 je 0x4f265b
// 004f264a  d944844c             fld dword ptr [esp + eax*4 + 0x4c]
// 004f264e  d8748464             fdiv dword ptr [esp + eax*4 + 0x64]
// 004f2652  d88c848c000000       fmul dword ptr [esp + eax*4 + 0x8c]
// 004f2659  eb07                 jmp 0x4f2662
// 004f265b  d984848c000000       fld dword ptr [esp + eax*4 + 0x8c]
// 004f2662  d95c8458             fstp dword ptr [esp + eax*4 + 0x58]
// 004f2666  40                   inc eax
// 004f2667  83f802               cmp eax, 2
// 004f266a  7cd4                 jl 0x4f2640
// 004f266c  e82f750100           call 0x509ba0
// 004f2671  8bc8                 mov ecx, eax
// 004f2673  d901                 fld dword ptr [ecx]
// 004f2675  d89c24b4000000       fcomp dword ptr [esp + 0xb4]
// 004f267c  dfe0                 fnstsw ax
// 004f267e  f6c444               test ah, 0x44
// 004f2681  7a21                 jp 0x4f26a4
// 004f2683  d94104               fld dword ptr [ecx + 4]
// 004f2686  d89c24b8000000       fcomp dword ptr [esp + 0xb8]
// 004f268d  dfe0                 fnstsw ax
// 004f268f  f6c444               test ah, 0x44
// 004f2692  7a10                 jp 0x4f26a4
// 004f2694  d98424ac000000       fld dword ptr [esp + 0xac]
// 004f269b  d98424b0000000       fld dword ptr [esp + 0xb0]
// 004f26a2  eb08                 jmp 0x4f26ac
// 004f26a4  d944242c             fld dword ptr [esp + 0x2c]
// 004f26a8  d9442430             fld dword ptr [esp + 0x30]
// 004f26ac  d905ac9b8100         fld dword ptr [0x819bac]
// 004f26b2  8d4c2458             lea ecx, [esp + 0x58]
// 004f26b6  dcca                 fmul st(2), st(0)
// 004f26b8  51                   push ecx
// 004f26b9  d9ca                 fxch st(2)
// 004f26bb  8d542474             lea edx, [esp + 0x74]
// 004f26bf  52                   push edx
// 004f26c0  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f26c4  dec9                 fmulp st(1)
// 004f26c6  d95c2450             fstp dword ptr [esp + 0x50]
// 004f26ca  e8319b0f00           call 0x5ec200
// 004f26cf  8d442454             lea eax, [esp + 0x54]
// 004f26d3  50                   push eax
// 004f26d4  8d8c2488000000       lea ecx, [esp + 0x88]
// 004f26db  51                   push ecx
// 004f26dc  e81f9b0f00           call 0x5ec200
// 004f26e1  6a01                 push 1
// 004f26e3  8d542458             lea edx, [esp + 0x58]
// 004f26e7  52                   push edx
// 004f26e8  8d842488000000       lea eax, [esp + 0x88]
// 004f26ef  50                   push eax
// 004f26f0  8d8c2498000000       lea ecx, [esp + 0x98]
// 004f26f7  51                   push ecx
// 004f26f8  e803590500           call 0x548000
// 004f26fd  d9442458             fld dword ptr [esp + 0x58]
// 004f2701  0fbf9424e2000000     movsx edx, word ptr [esp + 0xe2]
// 004f2709  d8442438             fadd dword ptr [esp + 0x38]
// 004f270d  42                   inc edx
// 004f270e  0fafd3               imul edx, ebx
// 004f2711  d9542438             fst dword ptr [esp + 0x38]
// 004f2715  d9442460             fld dword ptr [esp + 0x60]
// 004f2719  d844243c             fadd dword ptr [esp + 0x3c]
// 004f271d  d954243c             fst dword ptr [esp + 0x3c]
// 004f2721  03d6                 add edx, esi
// 004f2723  890497               mov dword ptr [edi + edx*4], eax
// 004f2726  668b8424e2000000     mov ax, word ptr [esp + 0xe2]
// 004f272e  0fbfc8               movsx ecx, ax
// 004f2731  46                   inc esi
// 004f2732  83c420               add esp, 0x20
// 004f2735  3bf1                 cmp esi, ecx
// 004f2737  0f8e8afeffff         jle 0x4f25c7
// 004f273d  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 004f2744  ddd8                 fstp st(0)
// 004f2746  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004f274a  ddd8                 fstp st(0)
// 004f274c  d9442410             fld dword ptr [esp + 0x10]
// 004f2750  d9ee                 fldz 
// 004f2752  eb04                 jmp 0x4f2758
// 004f2754  ddd8                 fstp st(0)
// 004f2756  ddd8                 fstp st(0)
// 004f2758  d9442434             fld dword ptr [esp + 0x34]
// 004f275c  0fbfca               movsx ecx, dx
// 004f275f  dec2                 faddp st(2)
// 004f2761  43                   inc ebx
// 004f2762  3bd9                 cmp ebx, ecx
// 004f2764  d9c9                 fxch st(1)
// 004f2766  d9542410             fst dword ptr [esp + 0x10]
// 004f276a  d944243c             fld dword ptr [esp + 0x3c]
// 004f276e  d8442414             fadd dword ptr [esp + 0x14]
// 004f2772  d95c2414             fstp dword ptr [esp + 0x14]
// 004f2776  0f8e0bfeffff         jle 0x4f2587
// 004f277c  ddd9                 fstp st(1)
// 004f277e  33c9                 xor ecx, ecx
// 004f2780  ddd8                 fstp st(0)
// 004f2782  33db                 xor ebx, ebx
// 004f2784  663bca               cmp cx, dx
// 004f2787  7d4d                 jge 0x4f27d6
// 004f2789  0fbfc8               movsx ecx, ax
// 004f278c  8d642400             lea esp, [esp]
// 004f2790  33f6                 xor esi, esi
// 004f2792  85c9                 test ecx, ecx
// 004f2794  7e38                 jle 0x4f27ce
// 004f2796  8d4101               lea eax, [ecx + 1]
// 004f2799  0fafc3               imul eax, ebx
// 004f279c  03c6                 add eax, esi
// 004f279e  03c8                 add ecx, eax
// 004f27a0  8b548f08             mov edx, dword ptr [edi + ecx*4 + 8]
// 004f27a4  8b4c8f04             mov ecx, dword ptr [edi + ecx*4 + 4]
// 004f27a8  52                   push edx
// 004f27a9  8b1487               mov edx, dword ptr [edi + eax*4]
// 004f27ac  8b448704             mov eax, dword ptr [edi + eax*4 + 4]
// 004f27b0  51                   push ecx
// 004f27b1  52                   push edx
// 004f27b2  50                   push eax
// 004f27b3  8bcd                 mov ecx, ebp
// 004f27b5  e8f6e60000           call 0x500eb0
// 004f27ba  0fbf8c24c2000000     movsx ecx, word ptr [esp + 0xc2]
// 004f27c2  46                   inc esi
// 004f27c3  3bf1                 cmp esi, ecx
// 004f27c5  7ccf                 jl 0x4f2796
// 004f27c7  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 004f27ce  0fbfc2               movsx eax, dx
// 004f27d1  43                   inc ebx
// 004f27d2  3bd8                 cmp ebx, eax
// 004f27d4  7cba                 jl 0x4f2790
// 004f27d6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f27da  33f6                 xor esi, esi
// 004f27dc  85db                 test ebx, ebx
// 004f27de  7611                 jbe 0x4f27f1
// 004f27e0  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 004f27e3  51                   push ecx
// 004f27e4  e8575e0500           call 0x548640
// 004f27e9  46                   inc esi
// 004f27ea  83c404               add esp, 4
// 004f27ed  3bf3                 cmp esi, ebx
// 004f27ef  72ef                 jb 0x4f27e0
// 004f27f1  57                   push edi
// 004f27f2  e853e11a00           call 0x6a094a
// 004f27f7  83c404               add esp, 4
// 004f27fa  5f                   pop edi
// 004f27fb  5e                   pop esi
// 004f27fc  5d                   pop ebp
// 004f27fd  5b                   pop ebx
// 004f27fe  83c478               add esp, 0x78
// 004f2801  c23800               ret 0x38

// from server: 52% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// Complete 884-byte face grid emitter; native LevelBuilder and PBB Face12 contracts.
// Descriptive deformation/global labels identify observed ABI and arithmetic.
// Native PBBMesh.cpp establishes Face12 (Vector2 perturbation,bool[2]).
// Measured zero-valued inset global and sign comparison at zero replace the earlier unproved scratch.
// Loop barrier preserves the target per-iteration memory ordering; absoluteSize scopes mapped storage.
// Face-specific deformation shrinks point.x/point.y; depth is preserved.
#include <stddef.h>
#include <intrin.h>
#include <math.h>
namespace G3D {
struct Vector2 {float x,y;Vector2():x(0),y(0){}Vector2(float a,float b):x(a),y(b){}Vector2(const Vector2&v):x(v.x),y(v.y){}Vector2&operator=(const Vector2&v){x=v.x;y=v.y;return *this;}float&operator[](int i){return ((float*)this)[i];}const float&operator[](int i)const{return ((const float*)this)[i];}};
struct Vector3 {float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}float&operator[](int i){return ((float*)this)[i];}const float&operator[](int i)const{return ((const float*)this)[i];}Vector3 abs()const{return Vector3((float)fabs(x),(float)fabs(y),(float)fabs(z));}};
struct Vector2int16 {short x,y;Vector2int16(short a,short b):x(a),y(b){}};
struct Rect2D {Vector2 min,max;};
}
namespace RBX {namespace View {
using G3D::Vector2;using G3D::Vector3;using G3D::Rect2D;using G3D::Vector2int16;
extern const float inset;
struct Face {Vector2 perturbation;bool bulge[2];void operator()(Vector3&,Vector3&,Vector2&,const Vector3&,const Vector2int16&);};
typedef Face Deformation;
__forceinline void Face::operator()(Vector3&vertex,Vector3&normal,Vector2&,const Vector3&size,const Vector2int16&){
 if(vertex.x>0)vertex.x-=inset;else vertex.x+=inset;
 if(vertex.y>0)vertex.y-=inset;else vertex.y+=inset;
 for(int k=0;k<2;++k){normal[k]=bulge[k]?vertex[k]/size[k]*perturbation[k]:perturbation[k];_ReadWriteBarrier();}
}
Vector3 __cdecl mapFace(const Vector3&);
static __forceinline Vector3 absoluteSize(const Vector3&v){Vector3 mapped=mapFace(v);return mapped.abs();}
const Vector2&__cdecl zeroVector2();
unsigned __cdecl allocVertex(const Vector3&,const Vector3&,const Vector2&,bool);
void __cdecl freeVertex(unsigned);
struct Level;
class LevelBuilder {
public:
 enum Purpose{Surface,Decal,Shadow};
 virtual void build(Purpose);virtual void buildTop(Purpose)=0;virtual void buildBottom(Purpose)=0;virtual void buildLeft(Purpose)=0;virtual void buildRight(Purpose)=0;virtual void buildFront(Purpose)=0;virtual void buildBack(Purpose)=0;
 const Vector3 halfSize;unsigned surfaceTypes;Level*level;Vector2 textureScale;
 void appendQuadFromVertexIndices(unsigned,unsigned,unsigned,unsigned);
 void emit(Deformation,Rect2D,float,Vector2,Vector2,int,Vector2int16);
};
void LevelBuilder::emit(Deformation function,Rect2D rect,float depth,Vector2 origin,Vector2 extent,int axis,Vector2int16 grid){
 Vector3 size=absoluteSize(halfSize);
 Vector2 step((rect.max.x-rect.min.x)/grid.x,(rect.max.y-rect.min.y)/grid.y);
 Vector2 textureStep(extent.x/grid.x,extent.y/grid.y);
 unsigned count=(grid.x+1)*(grid.y+1);
 unsigned*indices=new unsigned[count];
 float pointX=rect.min.x;
 float uvX=origin.x;
 for(int j=0;j<=grid.x;++j){
  float pointY=rect.min.y;float uvY=origin.y;
  for(int i=0;i<=grid.y;++i){
   Vector3 vertex(pointX,pointY,depth);
   Vector2 texture;texture[1-axis]=uvX;texture[axis]=uvY;
   Vector3 normal(0,0,1);
   function(vertex,normal,texture,size,Vector2int16(j,i));
   const Vector2&zero=zeroVector2();
   float texU,texV;
   if(extent.x==zero.x&&extent.y==zero.y){texU=origin.x;texV=origin.y;}else{texU=texture.x;texV=texture.y;}
   Vector2 tex(texU*.5f,texV*.5f);
   Vector3 mappedNormal=mapFace(normal);Vector3 mappedVertex=mapFace(vertex);
   indices[(grid.y+1)*j+i]=allocVertex(mappedVertex,mappedNormal,tex,true);
   pointY+=step.y;uvY+=textureStep.y;
  }
  pointX+=step.x;uvX+=textureStep.x;
 }
 for(int j=0;j<grid.x;++j)for(int i=0;i<grid.y;++i){int k=(grid.y+1)*j+i;appendQuadFromVertexIndices(indices[k+1],indices[k],indices[k+grid.y+1],indices[k+grid.y+2]);}
 for(unsigned k=0;k<count;++k)freeVertex(indices[k]);
 delete[]indices;
}
}}
typedef char deformation_extent[sizeof(RBX::View::Deformation)==12?1:-1];
typedef char rectangle_extent[sizeof(G3D::Rect2D)==16?1:-1];
typedef char builder_extent[sizeof(RBX::View::LevelBuilder)==32?1:-1];
typedef char size_offset[offsetof(RBX::View::LevelBuilder,halfSize)==4?1:-1];

typedef char perturbation_offset[offsetof(RBX::View::Face,perturbation)==0?1:-1];
typedef char bulge_offset[offsetof(RBX::View::Face,bulge)==8?1:-1];
