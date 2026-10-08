// from server: 100% by auto
// roc 2010-06 004870e0  unit: G3D::Texture  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004870e0
//
// 004870e0  56                   push esi
// 004870e1  8bf1                 mov esi, ecx
// 004870e3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004870e7  57                   push edi
// 004870e8  8d7e0c               lea edi, [esi + 0xc]
// 004870eb  7438                 je 0x487125
// 004870ed  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004870f0  57                   push edi
// 004870f1  e8aac00000           call 0x4931a0
// 004870f6  8b07                 mov eax, dword ptr [edi]
// 004870f8  85c0                 test eax, eax
// 004870fa  7429                 je 0x487125
// 004870fc  83c004               add eax, 4
// 004870ff  50                   push eax
// 00487100  ff157ca39e00         call dword ptr [0x9ea37c]
// 00487106  85c0                 test eax, eax
// 00487108  7515                 jne 0x48711f
// 0048710a  8b0f                 mov ecx, dword ptr [edi]
// 0048710c  e80fcaffff           call 0x483b20
// 00487111  8b0f                 mov ecx, dword ptr [edi]
// 00487113  85c9                 test ecx, ecx
// 00487115  7408                 je 0x48711f
// 00487117  8b01                 mov eax, dword ptr [ecx]
// 00487119  8b10                 mov edx, dword ptr [eax]
// 0048711b  6a01                 push 1
// 0048711d  ffd2                 call edx
// 0048711f  c70700000000         mov dword ptr [edi], 0
// 00487125  83461801             add dword ptr [esi + 0x18], 1
// 00487129  5f                   pop edi
// 0048712a  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00487131  83561c00             adc dword ptr [esi + 0x1c], 0
// 00487135  5e                   pop esi
// 00487136  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?reset@VARArea@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
