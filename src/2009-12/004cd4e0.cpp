// roc 2009-12 004cd4e0  unit: G3D::VARArea  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd4e0
//
// 004cd4e0  56                   push esi
// 004cd4e1  8b742408             mov esi, dword ptr [esp + 8]
// 004cd4e5  56                   push esi
// 004cd4e6  e8d5feffff           call 0x4cd3c0
// 004cd4eb  8bce                 mov ecx, esi
// 004cd4ed  e8de290100           call 0x4dfed0
// 004cd4f2  5e                   pop esi
// 004cd4f3  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
