// roc 2008-06 00476b10  unit: G3D::VARArea  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476b10
//
// 00476b10  d9442404             fld dword ptr [esp + 4]
// 00476b14  56                   push esi
// 00476b15  8bf1                 mov esi, ecx
// 00476b17  dc9668040000         fcom qword ptr [esi + 0x468]
// 00476b1d  ff4678               inc dword ptr [esi + 0x78]
// 00476b20  dfe0                 fnstsw ax
// 00476b22  f6c444               test ah, 0x44
// 00476b25  7b21                 jnp 0x476b48
// 00476b27  51                   push ecx
// 00476b28  dd9668040000         fst qword ptr [esi + 0x468]
// 00476b2e  d91c24               fstp dword ptr [esp]
// 00476b31  6801160000           push 0x1601
// 00476b36  6808040000           push 0x408
// 00476b3b  ff156c298000         call dword ptr [0x80296c]
// 00476b41  ff4670               inc dword ptr [esi + 0x70]
// 00476b44  5e                   pop esi
// 00476b45  c20400               ret 4
// 00476b48  ddd8                 fstp st(0)
// 00476b4a  5e                   pop esi
// 00476b4b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShininess@RenderDevice@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
