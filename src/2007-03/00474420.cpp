// roc 2007-03 00474420  unit: seg_00470000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474420
//
// 00474420  51                   push ecx
// 00474421  dd442408             fld qword ptr [esp + 8]
// 00474425  56                   push esi
// 00474426  8bf1                 mov esi, ecx
// 00474428  dc96a0040000         fcom qword ptr [esi + 0x4a0]
// 0047442e  83467801             add dword ptr [esi + 0x78], 1
// 00474432  dfe0                 fnstsw ax
// 00474434  f6c444               test ah, 0x44
// 00474437  7b25                 jnp 0x47445e
// 00474439  d95c2404             fstp dword ptr [esp + 4]
// 0047443d  51                   push ecx
// 0047443e  d9442408             fld dword ptr [esp + 8]
// 00474442  d91c24               fstp dword ptr [esp]
// 00474445  ff15f8eb7700         call dword ptr [0x77ebf8]
// 0047444b  dd44240c             fld qword ptr [esp + 0xc]
// 0047444f  83467001             add dword ptr [esi + 0x70], 1
// 00474453  dd9ea0040000         fstp qword ptr [esi + 0x4a0]
// 00474459  5e                   pop esi
// 0047445a  59                   pop ecx
// 0047445b  c20800               ret 8
// 0047445e  ddd8                 fstp st(0)
// 00474460  5e                   pop esi
// 00474461  59                   pop ecx
// 00474462  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setPointSize@RenderDevice@G3D@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
