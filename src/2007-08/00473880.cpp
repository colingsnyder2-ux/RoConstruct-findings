// roc 2007-08 00473880  unit: G3D::VARArea  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473880
//
// 00473880  dd442404             fld qword ptr [esp + 4]
// 00473884  56                   push esi
// 00473885  8bf1                 mov esi, ecx
// 00473887  dc9600040000         fcom qword ptr [esi + 0x400]
// 0047388d  b901000000           mov ecx, 1
// 00473892  014e78               add dword ptr [esi + 0x78], ecx
// 00473895  dfe0                 fnstsw ax
// 00473897  f6c444               test ah, 0x44
// 0047389a  7b1d                 jnp 0x4738b9
// 0047389c  014e70               add dword ptr [esi + 0x70], ecx
// 0047389f  83ec08               sub esp, 8
// 004738a2  dd1c24               fstp qword ptr [esp]
// 004738a5  ff15e0ea7700         call dword ptr [0x77eae0]
// 004738ab  dd442408             fld qword ptr [esp + 8]
// 004738af  dd9e00040000         fstp qword ptr [esi + 0x400]
// 004738b5  5e                   pop esi
// 004738b6  c20800               ret 8
// 004738b9  ddd8                 fstp st(0)
// 004738bb  5e                   pop esi
// 004738bc  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setDepthClearValue@RenderDevice@G3D@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
