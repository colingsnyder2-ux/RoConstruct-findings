// from server: 100% by king_originala_sol_native
// roc 2008-06 004f2110  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 884 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f2110
//
// 004f2110  83ec78               sub esp, 0x78
// 004f2113  53                   push ebx
// 004f2114  55                   push ebp
// 004f2115  8be9                 mov ebp, ecx
// 004f2117  56                   push esi
// 004f2118  57                   push edi
// 004f2119  8d4504               lea eax, [ebp + 4]
// 004f211c  50                   push eax
// 004f211d  8d4c245c             lea ecx, [esp + 0x5c]
// 004f2121  51                   push ecx
// 004f2122  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f2126  e895a00f00           call 0x5ec1c0
// 004f212b  d9442460             fld dword ptr [esp + 0x60]
// 004f212f  0fbf8424c8000000     movsx eax, word ptr [esp + 0xc8]
// 004f2137  d9e1                 fabs 
// 004f2139  d95c246c             fstp dword ptr [esp + 0x6c]
// 004f213d  89442424             mov dword ptr [esp + 0x24], eax
// 004f2141  d9442464             fld dword ptr [esp + 0x64]
// 004f2145  0fbf8c24ca000000     movsx ecx, word ptr [esp + 0xca]
// 004f214d  d9e1                 fabs 
// 004f214f  d95c2470             fstp dword ptr [esp + 0x70]
// 004f2153  d9442468             fld dword ptr [esp + 0x68]
// 004f2157  40                   inc eax
// 004f2158  d9e1                 fabs 
// 004f215a  33db                 xor ebx, ebx
// 004f215c  d95c2474             fstp dword ptr [esp + 0x74]
// 004f2160  ba04000000           mov edx, 4
// 004f2165  db442424             fild dword ptr [esp + 0x24]
// 004f2169  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f216d  d98424a8000000       fld dword ptr [esp + 0xa8]
// 004f2174  41                   inc ecx
// 004f2175  d8a424a0000000       fsub dword ptr [esp + 0xa0]
// 004f217c  0fafc8               imul ecx, eax
// 004f217f  d8f1                 fdiv st(1)
// 004f2181  8bc1                 mov eax, ecx
// 004f2183  894c2430             mov dword ptr [esp + 0x30], ecx
// 004f2187  d95c243c             fstp dword ptr [esp + 0x3c]
// 004f218b  f7e2                 mul edx
// 004f218d  db442424             fild dword ptr [esp + 0x24]
// 004f2191  d98424ac000000       fld dword ptr [esp + 0xac]
// 004f2198  d8a424a4000000       fsub dword ptr [esp + 0xa4]
// 004f219f  d8f1                 fdiv st(1)
// 004f21a1  0f90c3               seto bl
// 004f21a4  f7db                 neg ebx
// 004f21a6  0bd8                 or ebx, eax
// 004f21a8  53                   push ebx
// 004f21a9  d95c2444             fstp dword ptr [esp + 0x44]
// 004f21ad  d98424c0000000       fld dword ptr [esp + 0xc0]
// 004f21b4  def2                 fdivrp st(2)
// 004f21b6  d9c9                 fxch st(1)
// 004f21b8  d95c2448             fstp dword ptr [esp + 0x48]
// 004f21bc  d8bc24c4000000       fdivr dword ptr [esp + 0xc4]
// 004f21c3  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f21c7  e88ae71a00           call 0x6a0956
// 004f21cc  d98424a4000000       fld dword ptr [esp + 0xa4]
// 004f21d3  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 004f21da  d954241c             fst dword ptr [esp + 0x1c]
// 004f21de  d98424b8000000       fld dword ptr [esp + 0xb8]
// 004f21e5  8bf8                 mov edi, eax
// 004f21e7  33c0                 xor eax, eax
// 004f21e9  d95c2420             fstp dword ptr [esp + 0x20]
// 004f21ed  83c40c               add esp, 0xc
// 004f21f0  33db                 xor ebx, ebx
// 004f21f2  663bc2               cmp ax, dx
// 004f21f5  668b8424c2000000     mov ax, word ptr [esp + 0xc2]
// 004f21fd  0f8ffb010000         jg 0x4f23fe
// 004f2203  d9ee                 fldz 
// 004f2205  eb02                 jmp 0x4f2209
// 004f2207  d9c9                 fxch st(1)
// 004f2209  d984249c000000       fld dword ptr [esp + 0x9c]
// 004f2210  33c9                 xor ecx, ecx
// 004f2212  d9542418             fst dword ptr [esp + 0x18]
// 004f2216  33f6                 xor esi, esi
// 004f2218  663bc8               cmp cx, ax
// 004f221b  d98424b0000000       fld dword ptr [esp + 0xb0]
// 004f2222  d954241c             fst dword ptr [esp + 0x1c]
// 004f2226  0f8fa8010000         jg 0x4f23d4
// 004f222c  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 004f2233  03c0                 add eax, eax
// 004f2235  03c0                 add eax, eax
// 004f2237  8d6c2430             lea ebp, [esp + 0x30]
// 004f223b  8d54042c             lea edx, [esp + eax + 0x2c]
// 004f223f  2be8                 sub ebp, eax
// 004f2241  89542420             mov dword ptr [esp + 0x20], edx
// 004f2245  eb0c                 jmp 0x4f2253
// 004f2247  d9ee                 fldz 
// 004f2249  d9442410             fld dword ptr [esp + 0x10]
// 004f224d  d9cb                 fxch st(3)
// 004f224f  d9c9                 fxch st(1)
// 004f2251  d9ca                 fxch st(2)
// 004f2253  d98424a8000000       fld dword ptr [esp + 0xa8]
// 004f225a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f225e  d95c2454             fstp dword ptr [esp + 0x54]
// 004f2262  d9ca                 fxch st(2)
// 004f2264  d954242c             fst dword ptr [esp + 0x2c]
// 004f2268  d9542430             fst dword ptr [esp + 0x30]
// 004f226c  d9442414             fld dword ptr [esp + 0x14]
// 004f2270  d95d00               fstp dword ptr [ebp]
// 004f2273  d9ca                 fxch st(2)
// 004f2275  d918                 fstp dword ptr [eax]
// 004f2277  d9c9                 fxch st(1)
// 004f2279  d9542458             fst dword ptr [esp + 0x58]
// 004f227d  d954245c             fst dword ptr [esp + 0x5c]
// 004f2281  d9e8                 fld1 
// 004f2283  d95c2460             fstp dword ptr [esp + 0x60]
// 004f2287  d8d2                 fcom st(2)
// 004f2289  dfe0                 fnstsw ax
// 004f228b  d905386e8200         fld dword ptr [0x826e38]
// 004f2291  f6c405               test ah, 5
// 004f2294  7a04                 jp 0x4f229a
// 004f2296  dceb                 fsub st(3), st(0)
// 004f2298  eb04                 jmp 0x4f229e
// 004f229a  d9c0                 fld st(0)
// 004f229c  dec4                 faddp st(4)
// 004f229e  d9cb                 fxch st(3)
// 004f22a0  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f22a4  d8d9                 fcomp st(1)
// 004f22a6  dfe0                 fnstsw ax
// 004f22a8  f6c405               test ah, 5
// 004f22ab  7a04                 jp 0x4f22b1
// 004f22ad  dee1                 fsubrp st(1)
// 004f22af  eb02                 jmp 0x4f22b3
// 004f22b1  dec1                 faddp st(1)
// 004f22b3  d95c2450             fstp dword ptr [esp + 0x50]
// 004f22b7  33c0                 xor eax, eax
// 004f22b9  8da42400000000       lea esp, [esp]
// 004f22c0  80bc049400000000     cmp byte ptr [esp + eax + 0x94], 0
// 004f22c8  7411                 je 0x4f22db
// 004f22ca  d944844c             fld dword ptr [esp + eax*4 + 0x4c]
// 004f22ce  d8748464             fdiv dword ptr [esp + eax*4 + 0x64]
// 004f22d2  d88c848c000000       fmul dword ptr [esp + eax*4 + 0x8c]
// 004f22d9  eb07                 jmp 0x4f22e2
// 004f22db  d984848c000000       fld dword ptr [esp + eax*4 + 0x8c]
// 004f22e2  d95c8458             fstp dword ptr [esp + eax*4 + 0x58]
// 004f22e6  40                   inc eax
// 004f22e7  83f802               cmp eax, 2
// 004f22ea  7cd4                 jl 0x4f22c0
// 004f22ec  e8af780100           call 0x509ba0
// 004f22f1  8bc8                 mov ecx, eax
// 004f22f3  d901                 fld dword ptr [ecx]
// 004f22f5  d89c24b4000000       fcomp dword ptr [esp + 0xb4]
// 004f22fc  dfe0                 fnstsw ax
// 004f22fe  f6c444               test ah, 0x44
// 004f2301  7a21                 jp 0x4f2324
// 004f2303  d94104               fld dword ptr [ecx + 4]
// 004f2306  d89c24b8000000       fcomp dword ptr [esp + 0xb8]
// 004f230d  dfe0                 fnstsw ax
// 004f230f  f6c444               test ah, 0x44
// 004f2312  7a10                 jp 0x4f2324
// 004f2314  d98424ac000000       fld dword ptr [esp + 0xac]
// 004f231b  d98424b0000000       fld dword ptr [esp + 0xb0]
// 004f2322  eb08                 jmp 0x4f232c
// 004f2324  d944242c             fld dword ptr [esp + 0x2c]
// 004f2328  d9442430             fld dword ptr [esp + 0x30]
// 004f232c  d905ac9b8100         fld dword ptr [0x819bac]
// 004f2332  8d4c2458             lea ecx, [esp + 0x58]
// 004f2336  dcca                 fmul st(2), st(0)
// 004f2338  51                   push ecx
// 004f2339  d9ca                 fxch st(2)
// 004f233b  8d542474             lea edx, [esp + 0x74]
// 004f233f  52                   push edx
// 004f2340  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f2344  dec9                 fmulp st(1)
// 004f2346  d95c2450             fstp dword ptr [esp + 0x50]
// 004f234a  e8719e0f00           call 0x5ec1c0
// 004f234f  8d442454             lea eax, [esp + 0x54]
// 004f2353  50                   push eax
// 004f2354  8d8c2488000000       lea ecx, [esp + 0x88]
// 004f235b  51                   push ecx
// 004f235c  e85f9e0f00           call 0x5ec1c0
// 004f2361  6a01                 push 1
// 004f2363  8d542458             lea edx, [esp + 0x58]
// 004f2367  52                   push edx
// 004f2368  8d842488000000       lea eax, [esp + 0x88]
// 004f236f  50                   push eax
// 004f2370  8d8c2498000000       lea ecx, [esp + 0x98]
// 004f2377  51                   push ecx
// 004f2378  e8835c0500           call 0x548000
// 004f237d  d9442458             fld dword ptr [esp + 0x58]
// 004f2381  0fbf9424e2000000     movsx edx, word ptr [esp + 0xe2]
// 004f2389  d8442438             fadd dword ptr [esp + 0x38]
// 004f238d  42                   inc edx
// 004f238e  0fafd3               imul edx, ebx
// 004f2391  d9542438             fst dword ptr [esp + 0x38]
// 004f2395  d9442460             fld dword ptr [esp + 0x60]
// 004f2399  d844243c             fadd dword ptr [esp + 0x3c]
// 004f239d  d954243c             fst dword ptr [esp + 0x3c]
// 004f23a1  03d6                 add edx, esi
// 004f23a3  890497               mov dword ptr [edi + edx*4], eax
// 004f23a6  668b8424e2000000     mov ax, word ptr [esp + 0xe2]
// 004f23ae  0fbfc8               movsx ecx, ax
// 004f23b1  46                   inc esi
// 004f23b2  83c420               add esp, 0x20
// 004f23b5  3bf1                 cmp esi, ecx
// 004f23b7  0f8e8afeffff         jle 0x4f2247
// 004f23bd  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 004f23c4  ddd8                 fstp st(0)
// 004f23c6  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004f23ca  ddd8                 fstp st(0)
// 004f23cc  d9442410             fld dword ptr [esp + 0x10]
// 004f23d0  d9ee                 fldz 
// 004f23d2  eb04                 jmp 0x4f23d8
// 004f23d4  ddd8                 fstp st(0)
// 004f23d6  ddd8                 fstp st(0)
// 004f23d8  d9442434             fld dword ptr [esp + 0x34]
// 004f23dc  0fbfca               movsx ecx, dx
// 004f23df  dec2                 faddp st(2)
// 004f23e1  43                   inc ebx
// 004f23e2  3bd9                 cmp ebx, ecx
// 004f23e4  d9c9                 fxch st(1)
// 004f23e6  d9542410             fst dword ptr [esp + 0x10]
// 004f23ea  d944243c             fld dword ptr [esp + 0x3c]
// 004f23ee  d8442414             fadd dword ptr [esp + 0x14]
// 004f23f2  d95c2414             fstp dword ptr [esp + 0x14]
// 004f23f6  0f8e0bfeffff         jle 0x4f2207
// 004f23fc  ddd9                 fstp st(1)
// 004f23fe  33c9                 xor ecx, ecx
// 004f2400  ddd8                 fstp st(0)
// 004f2402  33db                 xor ebx, ebx
// 004f2404  663bca               cmp cx, dx
// 004f2407  7d4d                 jge 0x4f2456
// 004f2409  0fbfc8               movsx ecx, ax
// 004f240c  8d642400             lea esp, [esp]
// 004f2410  33f6                 xor esi, esi
// 004f2412  85c9                 test ecx, ecx
// 004f2414  7e38                 jle 0x4f244e
// 004f2416  8d4101               lea eax, [ecx + 1]
// 004f2419  0fafc3               imul eax, ebx
// 004f241c  03c6                 add eax, esi
// 004f241e  03c8                 add ecx, eax
// 004f2420  8b548f08             mov edx, dword ptr [edi + ecx*4 + 8]
// 004f2424  8b4c8f04             mov ecx, dword ptr [edi + ecx*4 + 4]
// 004f2428  52                   push edx
// 004f2429  8b1487               mov edx, dword ptr [edi + eax*4]
// 004f242c  8b448704             mov eax, dword ptr [edi + eax*4 + 4]
// 004f2430  51                   push ecx
// 004f2431  52                   push edx
// 004f2432  50                   push eax
// 004f2433  8bcd                 mov ecx, ebp
// 004f2435  e876ea0000           call 0x500eb0
// 004f243a  0fbf8c24c2000000     movsx ecx, word ptr [esp + 0xc2]
// 004f2442  46                   inc esi
// 004f2443  3bf1                 cmp esi, ecx
// 004f2445  7ccf                 jl 0x4f2416
// 004f2447  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 004f244e  0fbfc2               movsx eax, dx
// 004f2451  43                   inc ebx
// 004f2452  3bd8                 cmp ebx, eax
// 004f2454  7cba                 jl 0x4f2410
// 004f2456  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f245a  33f6                 xor esi, esi
// 004f245c  85db                 test ebx, ebx
// 004f245e  7611                 jbe 0x4f2471
// 004f2460  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 004f2463  51                   push ecx
// 004f2464  e8d7610500           call 0x548640
// 004f2469  46                   inc esi
// 004f246a  83c404               add esp, 4
// 004f246d  3bf3                 cmp esi, ebx
// 004f246f  72ef                 jb 0x4f2460
// 004f2471  57                   push edi
// 004f2472  e8d3e41a00           call 0x6a094a
// 004f2477  83c404               add esp, 4
// 004f247a  5f                   pop edi
// 004f247b  5e                   pop esi
// 004f247c  5d                   pop ebp
// 004f247d  5b                   pop ebx
// 004f247e  83c478               add esp, 0x78
// 004f2481  c23800               ret 0x38

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
