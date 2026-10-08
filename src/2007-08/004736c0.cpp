// roc 2007-08 004736c0  unit: G3D::VARArea  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004736c0
//
// 004736c0  d9442404             fld dword ptr [esp + 4]
// 004736c4  56                   push esi
// 004736c5  8bf1                 mov esi, ecx
// 004736c7  dc9668040000         fcom qword ptr [esi + 0x468]
// 004736cd  83467801             add dword ptr [esi + 0x78], 1
// 004736d1  dfe0                 fnstsw ax
// 004736d3  f6c444               test ah, 0x44
// 004736d6  7b22                 jnp 0x4736fa
// 004736d8  51                   push ecx
// 004736d9  dd9668040000         fst qword ptr [esi + 0x468]
// 004736df  d91c24               fstp dword ptr [esp]
// 004736e2  6801160000           push 0x1601
// 004736e7  6808040000           push 0x408
// 004736ec  ff15f0ea7700         call dword ptr [0x77eaf0]
// 004736f2  83467001             add dword ptr [esi + 0x70], 1
// 004736f6  5e                   pop esi
// 004736f7  c20400               ret 4
// 004736fa  ddd8                 fstp st(0)
// 004736fc  5e                   pop esi
// 004736fd  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShininess@RenderDevice@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
