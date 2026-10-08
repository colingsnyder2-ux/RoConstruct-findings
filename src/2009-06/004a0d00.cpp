// from server: 100% by auto
// roc 2009-06 004a0d00  unit: G3D::VARArea  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0d00
//
// 004a0d00  56                   push esi
// 004a0d01  8b742408             mov esi, dword ptr [esp + 8]
// 004a0d05  56                   push esi
// 004a0d06  e8d5feffff           call 0x4a0be0
// 004a0d0b  8bce                 mov ecx, esi
// 004a0d0d  e85e240100           call 0x4b3170
// 004a0d12  5e                   pop esi
// 004a0d13  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
