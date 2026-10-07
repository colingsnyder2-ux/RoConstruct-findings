// roc 2008-06 004768e0  unit: G3D::VARArea  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004768e0
//
// 004768e0  8b442408             mov eax, dword ptr [esp + 8]
// 004768e4  56                   push esi
// 004768e5  8b742408             mov esi, dword ptr [esp + 8]
// 004768e9  50                   push eax
// 004768ea  56                   push esi
// 004768eb  e860cc0000           call 0x483550
// 004768f0  83c408               add esp, 8
// 004768f3  8bc6                 mov eax, esi
// 004768f5  5e                   pop esi
// 004768f6  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
