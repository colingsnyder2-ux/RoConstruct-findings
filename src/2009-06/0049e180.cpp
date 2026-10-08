// roc 2009-06 0049e180  unit: G3D::VARArea  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e180
//
// 0049e180  d9442404             fld dword ptr [esp + 4]
// 0049e184  56                   push esi
// 0049e185  8bf1                 mov esi, ecx
// 0049e187  dc9668040000         fcom qword ptr [esi + 0x468]
// 0049e18d  ff4678               inc dword ptr [esi + 0x78]
// 0049e190  dfe0                 fnstsw ax
// 0049e192  f6c444               test ah, 0x44
// 0049e195  7b21                 jnp 0x49e1b8
// 0049e197  51                   push ecx
// 0049e198  dd9668040000         fst qword ptr [esi + 0x468]
// 0049e19e  d91c24               fstp dword ptr [esp]
// 0049e1a1  6801160000           push 0x1601
// 0049e1a6  6808040000           push 0x408
// 0049e1ab  ff1578eb8900         call dword ptr [0x89eb78]
// 0049e1b1  ff4670               inc dword ptr [esi + 0x70]
// 0049e1b4  5e                   pop esi
// 0049e1b5  c20400               ret 4
// 0049e1b8  ddd8                 fstp st(0)
// 0049e1ba  5e                   pop esi
// 0049e1bb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShininess@RenderDevice@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
