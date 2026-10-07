// roc 2010-06 00490df0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490df0
//
// 00490df0  8b442408             mov eax, dword ptr [esp + 8]
// 00490df4  56                   push esi
// 00490df5  8b742408             mov esi, dword ptr [esp + 8]
// 00490df9  50                   push eax
// 00490dfa  56                   push esi
// 00490dfb  e890dfffff           call 0x48ed90
// 00490e00  83c408               add esp, 8
// 00490e03  8bc6                 mov eax, esi
// 00490e05  5e                   pop esi
// 00490e06  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
