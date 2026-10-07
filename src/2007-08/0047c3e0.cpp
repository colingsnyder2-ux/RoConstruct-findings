// roc 2007-08 0047c3e0  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c3e0
//
// 0047c3e0  56                   push esi
// 0047c3e1  8bf1                 mov esi, ecx
// 0047c3e3  8b4614               mov eax, dword ptr [esi + 0x14]
// 0047c3e6  85c0                 test eax, eax
// 0047c3e8  57                   push edi
// 0047c3e9  8d78ff               lea edi, [eax - 1]
// 0047c3ec  7e17                 jle 0x47c405
// 0047c3ee  85ff                 test edi, edi
// 0047c3f0  7f0f                 jg 0x47c401
// 0047c3f2  8b06                 mov eax, dword ptr [esi]
// 0047c3f4  8b5074               mov edx, dword ptr [eax + 0x74]
// 0047c3f7  6a01                 push 1
// 0047c3f9  ffd2                 call edx
// 0047c3fb  897e14               mov dword ptr [esi + 0x14], edi
// 0047c3fe  5f                   pop edi
// 0047c3ff  5e                   pop esi
// 0047c400  c3                   ret 
// 0047c401  85c0                 test eax, eax
// 0047c403  7f0d                 jg 0x47c412
// 0047c405  85ff                 test edi, edi
// 0047c407  7e09                 jle 0x47c412
// 0047c409  8b06                 mov eax, dword ptr [esi]
// 0047c40b  8b5074               mov edx, dword ptr [eax + 0x74]
// 0047c40e  6a00                 push 0
// 0047c410  ffd2                 call edx
// 0047c412  897e14               mov dword ptr [esi + 0x14], edi
// 0047c415  5f                   pop edi
// 0047c416  5e                   pop esi
// 0047c417  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
