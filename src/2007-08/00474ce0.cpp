// roc 2007-08 00474ce0  unit: G3D::VARArea  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474ce0
//
// 00474ce0  56                   push esi
// 00474ce1  6a02                 push 2
// 00474ce3  8bf1                 mov esi, ecx
// 00474ce5  ff1530eb7700         call dword ptr [0x77eb30]
// 00474ceb  c6861201000001       mov byte ptr [esi + 0x112], 1
// 00474cf2  5e                   pop esi
// 00474cf3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
