// roc 2008-06 00516d10  unit: G3D::TextInput::WrongSymbol  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516d10
//
// 00516d10  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00516d13  56                   push esi
// 00516d14  8b7124               mov esi, dword ptr [ecx + 0x24]
// 00516d17  3bc6                 cmp eax, esi
// 00516d19  731f                 jae 0x516d3a
// 00516d1b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00516d1e  8a1410               mov dl, byte ptr [eax + edx]
// 00516d21  40                   inc eax
// 00516d22  89412c               mov dword ptr [ecx + 0x2c], eax
// 00516d25  80fa0a               cmp dl, 0xa
// 00516d28  750d                 jne 0x516d37
// 00516d2a  b801000000           mov eax, 1
// 00516d2f  014130               add dword ptr [ecx + 0x30], eax
// 00516d32  894134               mov dword ptr [ecx + 0x34], eax
// 00516d35  eb03                 jmp 0x516d3a
// 00516d37  ff4134               inc dword ptr [ecx + 0x34]
// 00516d3a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00516d3d  3bc6                 cmp eax, esi
// 00516d3f  5e                   pop esi
// 00516d40  7204                 jb 0x516d46
// 00516d42  83c8ff               or eax, 0xffffffff
// 00516d45  c3                   ret 
// 00516d46  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00516d49  0fb60401             movzx eax, byte ptr [ecx + eax]
// 00516d4d  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatAndPeekInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
