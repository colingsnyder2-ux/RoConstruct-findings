// roc 2007-03 00473980  unit: seg_00470000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473980
//
// 00473980  dd442404             fld qword ptr [esp + 4]
// 00473984  56                   push esi
// 00473985  8bf1                 mov esi, ecx
// 00473987  dc9600040000         fcom qword ptr [esi + 0x400]
// 0047398d  b901000000           mov ecx, 1
// 00473992  014e78               add dword ptr [esi + 0x78], ecx
// 00473995  dfe0                 fnstsw ax
// 00473997  f6c444               test ah, 0x44
// 0047399a  7b1d                 jnp 0x4739b9
// 0047399c  014e70               add dword ptr [esi + 0x70], ecx
// 0047399f  83ec08               sub esp, 8
// 004739a2  dd1c24               fstp qword ptr [esp]
// 004739a5  ff15dceb7700         call dword ptr [0x77ebdc]
// 004739ab  dd442408             fld qword ptr [esp + 8]
// 004739af  dd9e00040000         fstp qword ptr [esi + 0x400]
// 004739b5  5e                   pop esi
// 004739b6  c20800               ret 8
// 004739b9  ddd8                 fstp st(0)
// 004739bb  5e                   pop esi
// 004739bc  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setDepthClearValue@RenderDevice@G3D@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
