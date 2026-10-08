// from server: 100% by auto
// roc 2010-06 00488590  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488590
//
// 00488590  56                   push esi
// 00488591  8bf1                 mov esi, ecx
// 00488593  8b4614               mov eax, dword ptr [esi + 0x14]
// 00488596  57                   push edi
// 00488597  8d7801               lea edi, [eax + 1]
// 0048859a  85c0                 test eax, eax
// 0048859c  7e17                 jle 0x4885b5
// 0048859e  85ff                 test edi, edi
// 004885a0  7f0f                 jg 0x4885b1
// 004885a2  8b06                 mov eax, dword ptr [esi]
// 004885a4  8b5074               mov edx, dword ptr [eax + 0x74]
// 004885a7  6a01                 push 1
// 004885a9  ffd2                 call edx
// 004885ab  897e14               mov dword ptr [esi + 0x14], edi
// 004885ae  5f                   pop edi
// 004885af  5e                   pop esi
// 004885b0  c3                   ret 
// 004885b1  85c0                 test eax, eax
// 004885b3  7f0d                 jg 0x4885c2
// 004885b5  85ff                 test edi, edi
// 004885b7  7e09                 jle 0x4885c2
// 004885b9  8b06                 mov eax, dword ptr [esi]
// 004885bb  8b5074               mov edx, dword ptr [eax + 0x74]
// 004885be  6a00                 push 0
// 004885c0  ffd2                 call edx
// 004885c2  897e14               mov dword ptr [esi + 0x14], edi
// 004885c5  5f                   pop edi
// 004885c6  5e                   pop esi
// 004885c7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
