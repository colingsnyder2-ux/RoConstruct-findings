// roc 2007-03 004743d0  unit: seg_00470000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004743d0
//
// 004743d0  51                   push ecx
// 004743d1  dd442408             fld qword ptr [esp + 8]
// 004743d5  56                   push esi
// 004743d6  8bf1                 mov esi, ecx
// 004743d8  dc9698040000         fcom qword ptr [esi + 0x498]
// 004743de  83467801             add dword ptr [esi + 0x78], 1
// 004743e2  dfe0                 fnstsw ax
// 004743e4  f6c444               test ah, 0x44
// 004743e7  7b25                 jnp 0x47440e
// 004743e9  d95c2404             fstp dword ptr [esp + 4]
// 004743ed  51                   push ecx
// 004743ee  d9442408             fld dword ptr [esp + 8]
// 004743f2  d91c24               fstp dword ptr [esp]
// 004743f5  ff15f4eb7700         call dword ptr [0x77ebf4]
// 004743fb  dd44240c             fld qword ptr [esp + 0xc]
// 004743ff  83467001             add dword ptr [esi + 0x70], 1
// 00474403  dd9e98040000         fstp qword ptr [esi + 0x498]
// 00474409  5e                   pop esi
// 0047440a  59                   pop ecx
// 0047440b  c20800               ret 8
// 0047440e  ddd8                 fstp st(0)
// 00474410  5e                   pop esi
// 00474411  59                   pop ecx
// 00474412  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setLineWidth@RenderDevice@G3D@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
