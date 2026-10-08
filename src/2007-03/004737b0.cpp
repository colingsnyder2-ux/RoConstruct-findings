// roc 2007-03 004737b0  unit: seg_00470000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004737b0
//
// 004737b0  d9442404             fld dword ptr [esp + 4]
// 004737b4  56                   push esi
// 004737b5  8bf1                 mov esi, ecx
// 004737b7  dc9668040000         fcom qword ptr [esi + 0x468]
// 004737bd  83467801             add dword ptr [esi + 0x78], 1
// 004737c1  dfe0                 fnstsw ax
// 004737c3  f6c444               test ah, 0x44
// 004737c6  7b22                 jnp 0x4737ea
// 004737c8  51                   push ecx
// 004737c9  dd9668040000         fst qword ptr [esi + 0x468]
// 004737cf  d91c24               fstp dword ptr [esp]
// 004737d2  6801160000           push 0x1601
// 004737d7  6808040000           push 0x408
// 004737dc  ff15cceb7700         call dword ptr [0x77ebcc]
// 004737e2  83467001             add dword ptr [esi + 0x70], 1
// 004737e6  5e                   pop esi
// 004737e7  c20400               ret 4
// 004737ea  ddd8                 fstp st(0)
// 004737ec  5e                   pop esi
// 004737ed  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShininess@RenderDevice@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
