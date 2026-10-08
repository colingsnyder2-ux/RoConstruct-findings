// from server: 100% by auto
// roc 2010-06 0055cfa0  unit: G3D::TextInput::WrongSymbol  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055cfa0
//
// 0055cfa0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0055cfa3  56                   push esi
// 0055cfa4  8b7124               mov esi, dword ptr [ecx + 0x24]
// 0055cfa7  3bc6                 cmp eax, esi
// 0055cfa9  731f                 jae 0x55cfca
// 0055cfab  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0055cfae  8a1410               mov dl, byte ptr [eax + edx]
// 0055cfb1  40                   inc eax
// 0055cfb2  89412c               mov dword ptr [ecx + 0x2c], eax
// 0055cfb5  80fa0a               cmp dl, 0xa
// 0055cfb8  750d                 jne 0x55cfc7
// 0055cfba  b801000000           mov eax, 1
// 0055cfbf  014130               add dword ptr [ecx + 0x30], eax
// 0055cfc2  894134               mov dword ptr [ecx + 0x34], eax
// 0055cfc5  eb03                 jmp 0x55cfca
// 0055cfc7  ff4134               inc dword ptr [ecx + 0x34]
// 0055cfca  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0055cfcd  3bc6                 cmp eax, esi
// 0055cfcf  5e                   pop esi
// 0055cfd0  7204                 jb 0x55cfd6
// 0055cfd2  83c8ff               or eax, 0xffffffff
// 0055cfd5  c3                   ret 
// 0055cfd6  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0055cfd9  0fb60401             movzx eax, byte ptr [ecx + eax]
// 0055cfdd  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatAndPeekInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
