// roc 2009-12 004cbc90  unit: G3D::VARArea  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cbc90
//
// 004cbc90  56                   push esi
// 004cbc91  6a02                 push 2
// 004cbc93  8bf1                 mov esi, ecx
// 004cbc95  ff1508bc9800         call dword ptr [0x98bc08]
// 004cbc9b  c6861201000001       mov byte ptr [esi + 0x112], 1
// 004cbca2  5e                   pop esi
// 004cbca3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
