// roc 2009-12 004d6590  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6590
//
// 004d6590  56                   push esi
// 004d6591  8bf1                 mov esi, ecx
// 004d6593  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d6596  57                   push edi
// 004d6597  8d78ff               lea edi, [eax - 1]
// 004d659a  85c0                 test eax, eax
// 004d659c  7e17                 jle 0x4d65b5
// 004d659e  85ff                 test edi, edi
// 004d65a0  7f0f                 jg 0x4d65b1
// 004d65a2  8b06                 mov eax, dword ptr [esi]
// 004d65a4  8b5074               mov edx, dword ptr [eax + 0x74]
// 004d65a7  6a01                 push 1
// 004d65a9  ffd2                 call edx
// 004d65ab  897e14               mov dword ptr [esi + 0x14], edi
// 004d65ae  5f                   pop edi
// 004d65af  5e                   pop esi
// 004d65b0  c3                   ret 
// 004d65b1  85c0                 test eax, eax
// 004d65b3  7f0d                 jg 0x4d65c2
// 004d65b5  85ff                 test edi, edi
// 004d65b7  7e09                 jle 0x4d65c2
// 004d65b9  8b06                 mov eax, dword ptr [esi]
// 004d65bb  8b5074               mov edx, dword ptr [eax + 0x74]
// 004d65be  6a00                 push 0
// 004d65c0  ffd2                 call edx
// 004d65c2  897e14               mov dword ptr [esi + 0x14], edi
// 004d65c5  5f                   pop edi
// 004d65c6  5e                   pop esi
// 004d65c7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
