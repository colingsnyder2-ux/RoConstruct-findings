// roc 2008-06 00477fb0  unit: G3D::VARArea  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477fb0
//
// 00477fb0  56                   push esi
// 00477fb1  6a02                 push 2
// 00477fb3  8bf1                 mov esi, ecx
// 00477fb5  ff15b82a8000         call dword ptr [0x802ab8]
// 00477fbb  c6861201000001       mov byte ptr [esi + 0x112], 1
// 00477fc2  5e                   pop esi
// 00477fc3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
