// from server: 100% by auto
// roc 2010-06 00488550  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488550
//
// 00488550  56                   push esi
// 00488551  8bf1                 mov esi, ecx
// 00488553  8b4610               mov eax, dword ptr [esi + 0x10]
// 00488556  57                   push edi
// 00488557  8d78ff               lea edi, [eax - 1]
// 0048855a  85c0                 test eax, eax
// 0048855c  7e17                 jle 0x488575
// 0048855e  85ff                 test edi, edi
// 00488560  7f0f                 jg 0x488571
// 00488562  8b06                 mov eax, dword ptr [esi]
// 00488564  8b5064               mov edx, dword ptr [eax + 0x64]
// 00488567  6a00                 push 0
// 00488569  ffd2                 call edx
// 0048856b  897e10               mov dword ptr [esi + 0x10], edi
// 0048856e  5f                   pop edi
// 0048856f  5e                   pop esi
// 00488570  c3                   ret 
// 00488571  85c0                 test eax, eax
// 00488573  7f0d                 jg 0x488582
// 00488575  85ff                 test edi, edi
// 00488577  7e09                 jle 0x488582
// 00488579  8b06                 mov eax, dword ptr [esi]
// 0048857b  8b5064               mov edx, dword ptr [eax + 0x64]
// 0048857e  6a01                 push 1
// 00488580  ffd2                 call edx
// 00488582  897e10               mov dword ptr [esi + 0x10], edi
// 00488585  5f                   pop edi
// 00488586  5e                   pop esi
// 00488587  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
