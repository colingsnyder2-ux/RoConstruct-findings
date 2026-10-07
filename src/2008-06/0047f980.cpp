// roc 2008-06 0047f980  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f980
//
// 0047f980  56                   push esi
// 0047f981  8bf1                 mov esi, ecx
// 0047f983  8b4614               mov eax, dword ptr [esi + 0x14]
// 0047f986  57                   push edi
// 0047f987  8d7801               lea edi, [eax + 1]
// 0047f98a  85c0                 test eax, eax
// 0047f98c  7e17                 jle 0x47f9a5
// 0047f98e  85ff                 test edi, edi
// 0047f990  7f0f                 jg 0x47f9a1
// 0047f992  8b06                 mov eax, dword ptr [esi]
// 0047f994  8b5074               mov edx, dword ptr [eax + 0x74]
// 0047f997  6a01                 push 1
// 0047f999  ffd2                 call edx
// 0047f99b  897e14               mov dword ptr [esi + 0x14], edi
// 0047f99e  5f                   pop edi
// 0047f99f  5e                   pop esi
// 0047f9a0  c3                   ret 
// 0047f9a1  85c0                 test eax, eax
// 0047f9a3  7f0d                 jg 0x47f9b2
// 0047f9a5  85ff                 test edi, edi
// 0047f9a7  7e09                 jle 0x47f9b2
// 0047f9a9  8b06                 mov eax, dword ptr [esi]
// 0047f9ab  8b5074               mov edx, dword ptr [eax + 0x74]
// 0047f9ae  6a00                 push 0
// 0047f9b0  ffd2                 call edx
// 0047f9b2  897e14               mov dword ptr [esi + 0x14], edi
// 0047f9b5  5f                   pop edi
// 0047f9b6  5e                   pop esi
// 0047f9b7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
