// roc 2009-12 004cd500  unit: G3D::VARArea  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd500
//
// 004cd500  56                   push esi
// 004cd501  8b742408             mov esi, dword ptr [esp + 8]
// 004cd505  56                   push esi
// 004cd506  e8b5feffff           call 0x4cd3c0
// 004cd50b  8bce                 mov ecx, esi
// 004cd50d  e8fe290100           call 0x4dff10
// 004cd512  5e                   pop esi
// 004cd513  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
