// roc 2009-12 004ca550  unit: G3D::VARArea  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca550
//
// 004ca550  8b442408             mov eax, dword ptr [esp + 8]
// 004ca554  56                   push esi
// 004ca555  8b742408             mov esi, dword ptr [esp + 8]
// 004ca559  50                   push eax
// 004ca55a  56                   push esi
// 004ca55b  e840fa0000           call 0x4d9fa0
// 004ca560  83c408               add esp, 8
// 004ca563  8bc6                 mov eax, esi
// 004ca565  5e                   pop esi
// 004ca566  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
