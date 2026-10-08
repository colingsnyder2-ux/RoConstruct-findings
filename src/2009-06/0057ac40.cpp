// from server: 100% by auto
// roc 2009-06 0057ac40  unit: G3D::TextInput::WrongSymbol  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057ac40
//
// 0057ac40  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0057ac43  56                   push esi
// 0057ac44  8b7124               mov esi, dword ptr [ecx + 0x24]
// 0057ac47  3bc6                 cmp eax, esi
// 0057ac49  731f                 jae 0x57ac6a
// 0057ac4b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0057ac4e  8a1410               mov dl, byte ptr [eax + edx]
// 0057ac51  40                   inc eax
// 0057ac52  89412c               mov dword ptr [ecx + 0x2c], eax
// 0057ac55  80fa0a               cmp dl, 0xa
// 0057ac58  750d                 jne 0x57ac67
// 0057ac5a  b801000000           mov eax, 1
// 0057ac5f  014130               add dword ptr [ecx + 0x30], eax
// 0057ac62  894134               mov dword ptr [ecx + 0x34], eax
// 0057ac65  eb03                 jmp 0x57ac6a
// 0057ac67  ff4134               inc dword ptr [ecx + 0x34]
// 0057ac6a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0057ac6d  3bc6                 cmp eax, esi
// 0057ac6f  5e                   pop esi
// 0057ac70  7204                 jb 0x57ac76
// 0057ac72  83c8ff               or eax, 0xffffffff
// 0057ac75  c3                   ret 
// 0057ac76  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0057ac79  0fb60401             movzx eax, byte ptr [ecx + eax]
// 0057ac7d  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatAndPeekInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
