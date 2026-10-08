// from server: 100% by auto
// roc 2007-08 00473410  unit: G3D::VARArea  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473410
//
// 00473410  8b442408             mov eax, dword ptr [esp + 8]
// 00473414  56                   push esi
// 00473415  8b742408             mov esi, dword ptr [esp + 8]
// 00473419  50                   push eax
// 0047341a  56                   push esi
// 0047341b  e8a0cd0000           call 0x4801c0
// 00473420  83c408               add esp, 8
// 00473423  8bc6                 mov eax, esi
// 00473425  5e                   pop esi
// 00473426  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
