// from server: 100% by auto
// roc 2009-06 004a9a20  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9a20
//
// 004a9a20  56                   push esi
// 004a9a21  8bf1                 mov esi, ecx
// 004a9a23  8b4614               mov eax, dword ptr [esi + 0x14]
// 004a9a26  57                   push edi
// 004a9a27  8d7801               lea edi, [eax + 1]
// 004a9a2a  85c0                 test eax, eax
// 004a9a2c  7e17                 jle 0x4a9a45
// 004a9a2e  85ff                 test edi, edi
// 004a9a30  7f0f                 jg 0x4a9a41
// 004a9a32  8b06                 mov eax, dword ptr [esi]
// 004a9a34  8b5074               mov edx, dword ptr [eax + 0x74]
// 004a9a37  6a01                 push 1
// 004a9a39  ffd2                 call edx
// 004a9a3b  897e14               mov dword ptr [esi + 0x14], edi
// 004a9a3e  5f                   pop edi
// 004a9a3f  5e                   pop esi
// 004a9a40  c3                   ret 
// 004a9a41  85c0                 test eax, eax
// 004a9a43  7f0d                 jg 0x4a9a52
// 004a9a45  85ff                 test edi, edi
// 004a9a47  7e09                 jle 0x4a9a52
// 004a9a49  8b06                 mov eax, dword ptr [esi]
// 004a9a4b  8b5074               mov edx, dword ptr [eax + 0x74]
// 004a9a4e  6a00                 push 0
// 004a9a50  ffd2                 call edx
// 004a9a52  897e14               mov dword ptr [esi + 0x14], edi
// 004a9a55  5f                   pop edi
// 004a9a56  5e                   pop esi
// 004a9a57  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
