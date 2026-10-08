// roc 2007-08 00474320  unit: G3D::VARArea  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474320
//
// 00474320  51                   push ecx
// 00474321  dd442408             fld qword ptr [esp + 8]
// 00474325  56                   push esi
// 00474326  8bf1                 mov esi, ecx
// 00474328  dc96a0040000         fcom qword ptr [esi + 0x4a0]
// 0047432e  83467801             add dword ptr [esi + 0x78], 1
// 00474332  dfe0                 fnstsw ax
// 00474334  f6c444               test ah, 0x44
// 00474337  7b25                 jnp 0x47435e
// 00474339  d95c2404             fstp dword ptr [esp + 4]
// 0047433d  51                   push ecx
// 0047433e  d9442408             fld dword ptr [esp + 8]
// 00474342  d91c24               fstp dword ptr [esp]
// 00474345  ff15c4ea7700         call dword ptr [0x77eac4]
// 0047434b  dd44240c             fld qword ptr [esp + 0xc]
// 0047434f  83467001             add dword ptr [esi + 0x70], 1
// 00474353  dd9ea0040000         fstp qword ptr [esi + 0x4a0]
// 00474359  5e                   pop esi
// 0047435a  59                   pop ecx
// 0047435b  c20800               ret 8
// 0047435e  ddd8                 fstp st(0)
// 00474360  5e                   pop esi
// 00474361  59                   pop ecx
// 00474362  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setPointSize@RenderDevice@G3D@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
