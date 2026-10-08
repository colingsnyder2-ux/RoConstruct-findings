// roc 2007-08 004742d0  unit: G3D::VARArea  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004742d0
//
// 004742d0  51                   push ecx
// 004742d1  dd442408             fld qword ptr [esp + 8]
// 004742d5  56                   push esi
// 004742d6  8bf1                 mov esi, ecx
// 004742d8  dc9698040000         fcom qword ptr [esi + 0x498]
// 004742de  83467801             add dword ptr [esi + 0x78], 1
// 004742e2  dfe0                 fnstsw ax
// 004742e4  f6c444               test ah, 0x44
// 004742e7  7b25                 jnp 0x47430e
// 004742e9  d95c2404             fstp dword ptr [esp + 4]
// 004742ed  51                   push ecx
// 004742ee  d9442408             fld dword ptr [esp + 8]
// 004742f2  d91c24               fstp dword ptr [esp]
// 004742f5  ff15c8ea7700         call dword ptr [0x77eac8]
// 004742fb  dd44240c             fld qword ptr [esp + 0xc]
// 004742ff  83467001             add dword ptr [esi + 0x70], 1
// 00474303  dd9e98040000         fstp qword ptr [esi + 0x498]
// 00474309  5e                   pop esi
// 0047430a  59                   pop ecx
// 0047430b  c20800               ret 8
// 0047430e  ddd8                 fstp st(0)
// 00474310  5e                   pop esi
// 00474311  59                   pop ecx
// 00474312  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setLineWidth@RenderDevice@G3D@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
