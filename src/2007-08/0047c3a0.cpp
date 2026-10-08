// from server: 100% by auto
// roc 2007-08 0047c3a0  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c3a0
//
// 0047c3a0  56                   push esi
// 0047c3a1  8bf1                 mov esi, ecx
// 0047c3a3  8b4614               mov eax, dword ptr [esi + 0x14]
// 0047c3a6  85c0                 test eax, eax
// 0047c3a8  57                   push edi
// 0047c3a9  8d7801               lea edi, [eax + 1]
// 0047c3ac  7e17                 jle 0x47c3c5
// 0047c3ae  85ff                 test edi, edi
// 0047c3b0  7f0f                 jg 0x47c3c1
// 0047c3b2  8b06                 mov eax, dword ptr [esi]
// 0047c3b4  8b5074               mov edx, dword ptr [eax + 0x74]
// 0047c3b7  6a01                 push 1
// 0047c3b9  ffd2                 call edx
// 0047c3bb  897e14               mov dword ptr [esi + 0x14], edi
// 0047c3be  5f                   pop edi
// 0047c3bf  5e                   pop esi
// 0047c3c0  c3                   ret 
// 0047c3c1  85c0                 test eax, eax
// 0047c3c3  7f0d                 jg 0x47c3d2
// 0047c3c5  85ff                 test edi, edi
// 0047c3c7  7e09                 jle 0x47c3d2
// 0047c3c9  8b06                 mov eax, dword ptr [esi]
// 0047c3cb  8b5074               mov edx, dword ptr [eax + 0x74]
// 0047c3ce  6a00                 push 0
// 0047c3d0  ffd2                 call edx
// 0047c3d2  897e14               mov dword ptr [esi + 0x14], edi
// 0047c3d5  5f                   pop edi
// 0047c3d6  5e                   pop esi
// 0047c3d7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
