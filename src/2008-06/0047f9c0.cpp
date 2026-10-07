// roc 2008-06 0047f9c0  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f9c0
//
// 0047f9c0  56                   push esi
// 0047f9c1  8bf1                 mov esi, ecx
// 0047f9c3  8b4614               mov eax, dword ptr [esi + 0x14]
// 0047f9c6  57                   push edi
// 0047f9c7  8d78ff               lea edi, [eax - 1]
// 0047f9ca  85c0                 test eax, eax
// 0047f9cc  7e17                 jle 0x47f9e5
// 0047f9ce  85ff                 test edi, edi
// 0047f9d0  7f0f                 jg 0x47f9e1
// 0047f9d2  8b06                 mov eax, dword ptr [esi]
// 0047f9d4  8b5074               mov edx, dword ptr [eax + 0x74]
// 0047f9d7  6a01                 push 1
// 0047f9d9  ffd2                 call edx
// 0047f9db  897e14               mov dword ptr [esi + 0x14], edi
// 0047f9de  5f                   pop edi
// 0047f9df  5e                   pop esi
// 0047f9e0  c3                   ret 
// 0047f9e1  85c0                 test eax, eax
// 0047f9e3  7f0d                 jg 0x47f9f2
// 0047f9e5  85ff                 test edi, edi
// 0047f9e7  7e09                 jle 0x47f9f2
// 0047f9e9  8b06                 mov eax, dword ptr [esi]
// 0047f9eb  8b5074               mov edx, dword ptr [eax + 0x74]
// 0047f9ee  6a00                 push 0
// 0047f9f0  ffd2                 call edx
// 0047f9f2  897e14               mov dword ptr [esi + 0x14], edi
// 0047f9f5  5f                   pop edi
// 0047f9f6  5e                   pop esi
// 0047f9f7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
