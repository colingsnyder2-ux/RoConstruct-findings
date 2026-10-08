// roc 2009-06 0049f620  unit: G3D::VARArea  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f620
//
// 0049f620  56                   push esi
// 0049f621  6a02                 push 2
// 0049f623  8bf1                 mov esi, ecx
// 0049f625  ff1588ea8900         call dword ptr [0x89ea88]
// 0049f62b  c6861201000001       mov byte ptr [esi + 0x112], 1
// 0049f632  5e                   pop esi
// 0049f633  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
