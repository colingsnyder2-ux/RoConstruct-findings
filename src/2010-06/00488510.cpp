// from server: 100% by auto
// roc 2010-06 00488510  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488510
//
// 00488510  56                   push esi
// 00488511  8bf1                 mov esi, ecx
// 00488513  8b4610               mov eax, dword ptr [esi + 0x10]
// 00488516  57                   push edi
// 00488517  8d7801               lea edi, [eax + 1]
// 0048851a  85c0                 test eax, eax
// 0048851c  7e17                 jle 0x488535
// 0048851e  85ff                 test edi, edi
// 00488520  7f0f                 jg 0x488531
// 00488522  8b06                 mov eax, dword ptr [esi]
// 00488524  8b5064               mov edx, dword ptr [eax + 0x64]
// 00488527  6a00                 push 0
// 00488529  ffd2                 call edx
// 0048852b  897e10               mov dword ptr [esi + 0x10], edi
// 0048852e  5f                   pop edi
// 0048852f  5e                   pop esi
// 00488530  c3                   ret 
// 00488531  85c0                 test eax, eax
// 00488533  7f0d                 jg 0x488542
// 00488535  85ff                 test edi, edi
// 00488537  7e09                 jle 0x488542
// 00488539  8b06                 mov eax, dword ptr [esi]
// 0048853b  8b5064               mov edx, dword ptr [eax + 0x64]
// 0048853e  6a01                 push 1
// 00488540  ffd2                 call edx
// 00488542  897e10               mov dword ptr [esi + 0x10], edi
// 00488545  5f                   pop edi
// 00488546  5e                   pop esi
// 00488547  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
