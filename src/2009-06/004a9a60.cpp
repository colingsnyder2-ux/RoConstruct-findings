// roc 2009-06 004a9a60  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9a60
//
// 004a9a60  56                   push esi
// 004a9a61  8bf1                 mov esi, ecx
// 004a9a63  8b4614               mov eax, dword ptr [esi + 0x14]
// 004a9a66  57                   push edi
// 004a9a67  8d78ff               lea edi, [eax - 1]
// 004a9a6a  85c0                 test eax, eax
// 004a9a6c  7e17                 jle 0x4a9a85
// 004a9a6e  85ff                 test edi, edi
// 004a9a70  7f0f                 jg 0x4a9a81
// 004a9a72  8b06                 mov eax, dword ptr [esi]
// 004a9a74  8b5074               mov edx, dword ptr [eax + 0x74]
// 004a9a77  6a01                 push 1
// 004a9a79  ffd2                 call edx
// 004a9a7b  897e14               mov dword ptr [esi + 0x14], edi
// 004a9a7e  5f                   pop edi
// 004a9a7f  5e                   pop esi
// 004a9a80  c3                   ret 
// 004a9a81  85c0                 test eax, eax
// 004a9a83  7f0d                 jg 0x4a9a92
// 004a9a85  85ff                 test edi, edi
// 004a9a87  7e09                 jle 0x4a9a92
// 004a9a89  8b06                 mov eax, dword ptr [esi]
// 004a9a8b  8b5074               mov edx, dword ptr [eax + 0x74]
// 004a9a8e  6a00                 push 0
// 004a9a90  ffd2                 call edx
// 004a9a92  897e14               mov dword ptr [esi + 0x14], edi
// 004a9a95  5f                   pop edi
// 004a9a96  5e                   pop esi
// 004a9a97  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
