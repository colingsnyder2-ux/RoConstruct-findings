// from server: 100% by auto
// roc 2010-06 004885d0  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004885d0
//
// 004885d0  56                   push esi
// 004885d1  8bf1                 mov esi, ecx
// 004885d3  8b4614               mov eax, dword ptr [esi + 0x14]
// 004885d6  57                   push edi
// 004885d7  8d78ff               lea edi, [eax - 1]
// 004885da  85c0                 test eax, eax
// 004885dc  7e17                 jle 0x4885f5
// 004885de  85ff                 test edi, edi
// 004885e0  7f0f                 jg 0x4885f1
// 004885e2  8b06                 mov eax, dword ptr [esi]
// 004885e4  8b5074               mov edx, dword ptr [eax + 0x74]
// 004885e7  6a01                 push 1
// 004885e9  ffd2                 call edx
// 004885eb  897e14               mov dword ptr [esi + 0x14], edi
// 004885ee  5f                   pop edi
// 004885ef  5e                   pop esi
// 004885f0  c3                   ret 
// 004885f1  85c0                 test eax, eax
// 004885f3  7f0d                 jg 0x488602
// 004885f5  85ff                 test edi, edi
// 004885f7  7e09                 jle 0x488602
// 004885f9  8b06                 mov eax, dword ptr [esi]
// 004885fb  8b5074               mov edx, dword ptr [eax + 0x74]
// 004885fe  6a00                 push 0
// 00488600  ffd2                 call edx
// 00488602  897e14               mov dword ptr [esi + 0x14], edi
// 00488605  5f                   pop edi
// 00488606  5e                   pop esi
// 00488607  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
