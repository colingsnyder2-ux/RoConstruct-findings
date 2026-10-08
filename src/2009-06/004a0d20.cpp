// from server: 100% by auto
// roc 2009-06 004a0d20  unit: G3D::VARArea  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0d20
//
// 004a0d20  56                   push esi
// 004a0d21  8b742408             mov esi, dword ptr [esp + 8]
// 004a0d25  56                   push esi
// 004a0d26  e8b5feffff           call 0x4a0be0
// 004a0d2b  8bce                 mov ecx, esi
// 004a0d2d  e87e240100           call 0x4b31b0
// 004a0d32  5e                   pop esi
// 004a0d33  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
