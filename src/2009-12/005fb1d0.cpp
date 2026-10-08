// roc 2009-12 005fb1d0  unit: G3D::TextInput::WrongSymbol  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fb1d0
//
// 005fb1d0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 005fb1d3  56                   push esi
// 005fb1d4  8b7124               mov esi, dword ptr [ecx + 0x24]
// 005fb1d7  3bc6                 cmp eax, esi
// 005fb1d9  731f                 jae 0x5fb1fa
// 005fb1db  8b5120               mov edx, dword ptr [ecx + 0x20]
// 005fb1de  8a1410               mov dl, byte ptr [eax + edx]
// 005fb1e1  40                   inc eax
// 005fb1e2  89412c               mov dword ptr [ecx + 0x2c], eax
// 005fb1e5  80fa0a               cmp dl, 0xa
// 005fb1e8  750d                 jne 0x5fb1f7
// 005fb1ea  b801000000           mov eax, 1
// 005fb1ef  014130               add dword ptr [ecx + 0x30], eax
// 005fb1f2  894134               mov dword ptr [ecx + 0x34], eax
// 005fb1f5  eb03                 jmp 0x5fb1fa
// 005fb1f7  ff4134               inc dword ptr [ecx + 0x34]
// 005fb1fa  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 005fb1fd  3bc6                 cmp eax, esi
// 005fb1ff  5e                   pop esi
// 005fb200  7204                 jb 0x5fb206
// 005fb202  83c8ff               or eax, 0xffffffff
// 005fb205  c3                   ret 
// 005fb206  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 005fb209  0fb60401             movzx eax, byte ptr [ecx + eax]
// 005fb20d  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatAndPeekInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
