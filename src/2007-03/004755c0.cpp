// roc 2007-03 004755c0  unit: seg_00470000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004755c0
//
// 004755c0  83ec0c               sub esp, 0xc
// 004755c3  56                   push esi
// 004755c4  8bf1                 mov esi, ecx
// 004755c6  e855b30800           call 0x500920
// 004755cb  d900                 fld dword ptr [eax]
// 004755cd  d9442414             fld dword ptr [esp + 0x14]
// 004755d1  8bce                 mov ecx, esi
// 004755d3  d9c0                 fld st(0)
// 004755d5  deca                 fmulp st(2)
// 004755d7  d9c9                 fxch st(1)
// 004755d9  d95c2404             fstp dword ptr [esp + 4]
// 004755dd  d94004               fld dword ptr [eax + 4]
// 004755e0  d8c9                 fmul st(1)
// 004755e2  d95c2408             fstp dword ptr [esp + 8]
// 004755e6  d84808               fmul dword ptr [eax + 8]
// 004755e9  8d442404             lea eax, [esp + 4]
// 004755ed  50                   push eax
// 004755ee  d95c2410             fstp dword ptr [esp + 0x10]
// 004755f2  e819e1ffff           call 0x473710
// 004755f7  5e                   pop esi
// 004755f8  83c40c               add esp, 0xc
// 004755fb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSpecularCoefficient@RenderDevice@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
