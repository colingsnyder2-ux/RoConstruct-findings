// from server: 100% by auto
// roc 2009-06 004a0d40  unit: G3D::VARArea  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0d40
//
// 004a0d40  56                   push esi
// 004a0d41  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a0d45  56                   push esi
// 004a0d46  e895feffff           call 0x4a0be0
// 004a0d4b  8b442408             mov eax, dword ptr [esp + 8]
// 004a0d4f  50                   push eax
// 004a0d50  8bce                 mov ecx, esi
// 004a0d52  e889240100           call 0x4b31e0
// 004a0d57  5e                   pop esi
// 004a0d58  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoordArray@RenderDevice@G3D@@QAEXIABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
