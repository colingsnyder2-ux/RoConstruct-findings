// roc 2009-06 00569070  unit: RBX::RbxG3D::RenderScene  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00569070
//
// 00569070  8b442404             mov eax, dword ptr [esp + 4]
// 00569074  d94048               fld dword ptr [eax + 0x48]
// 00569077  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056907b  d84044               fadd dword ptr [eax + 0x44]
// 0056907e  d84040               fadd dword ptr [eax + 0x40]
// 00569081  d9057ca48c00         fld dword ptr [0x8ca47c]
// 00569087  dcc9                 fmul st(1), st(0)
// 00569089  d9400c               fld dword ptr [eax + 0xc]
// 0056908c  dd05b85c8c00         fld qword ptr [0x8c5cb8]
// 00569092  d9c0                 fld st(0)
// 00569094  dee2                 fsubrp st(2)
// 00569096  d9cb                 fxch st(3)
// 00569098  dec9                 fmulp st(1)
// 0056909a  d94148               fld dword ptr [ecx + 0x48]
// 0056909d  d84144               fadd dword ptr [ecx + 0x44]
// 005690a0  d84140               fadd dword ptr [ecx + 0x40]
// 005690a3  deca                 fmulp st(2)
// 005690a5  d9410c               fld dword ptr [ecx + 0xc]
// 005690a8  deeb                 fsubp st(3)
// 005690aa  d9c9                 fxch st(1)
// 005690ac  deca                 fmulp st(2)
// 005690ae  ded9                 fcompp 
// 005690b0  dfe0                 fnstsw ax
// 005690b2  f6c441               test ah, 0x41
// 005690b5  7506                 jne 0x5690bd
// 005690b7  b801000000           mov eax, 1
// 005690bc  c3                   ret 
// 005690bd  33c0                 xor eax, eax
// 005690bf  c3                   ret 
// copied from an identical function in another client (function ?compareLights@@YAHPBVGLight@G3D@@0@Z)

// from server: 100% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// Consumed G3D GLight/Color3 fields and real inline arithmetic APIs.
// Only existing light pointers are read; no light is constructed here.
#include <stddef.h>
namespace G3D {
class Vector4 {public:float x,y,z,w;};
class Vector3 {public:float x,y,z;};
class Color3 {public:float r,g,b;
 inline double sum()const{return r+g+b;}
 inline double average()const{return sum()/3.0;}
};
class GLight {public:
 Vector4 position;Vector3 spotDirection;
 double spotCutoff;double attenuation[3];Color3 color;
 bool enabled,specular,diffuse;
 GLight();
};
}
int __cdecl compareLights(const G3D::GLight*a,const G3D::GLight*b){
 return a->color.average()*(1.2-a->position.w)>b->color.average()*(1.2-b->position.w);
}
typedef char NativeLightSize[sizeof(G3D::GLight)==80?1:-1];
typedef char NativeLightColor[offsetof(G3D::GLight,color)==64?1:-1];
typedef char NativeLightPosition[offsetof(G3D::GLight,position)==0?1:-1];
typedef char NativeLightDirection[offsetof(G3D::GLight,spotDirection)==16?1:-1];
typedef char NativeLightCutoff[offsetof(G3D::GLight,spotCutoff)==32?1:-1];
typedef char NativeLightAttenuation[offsetof(G3D::GLight,attenuation)==40?1:-1];
typedef char NativeLightFlags[offsetof(G3D::GLight,enabled)==76?1:-1];