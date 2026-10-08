// roc 2007-03 00474de0  unit: seg_00470000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474de0
//
// 00474de0  56                   push esi
// 00474de1  6a02                 push 2
// 00474de3  8bf1                 mov esi, ecx
// 00474de5  ff1590eb7700         call dword ptr [0x77eb90]
// 00474deb  c6861201000001       mov byte ptr [esi + 0x112], 1
// 00474df2  5e                   pop esi
// 00474df3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
