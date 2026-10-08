// from server: 100% by auto
// roc 2009-06 0057aa30  unit: G3D::TextInput::WrongSymbol  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057aa30
//
// 0057aa30  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0057aa33  3b4124               cmp eax, dword ptr [ecx + 0x24]
// 0057aa36  7204                 jb 0x57aa3c
// 0057aa38  83c8ff               or eax, 0xffffffff
// 0057aa3b  c3                   ret 
// 0057aa3c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0057aa3f  8a1410               mov dl, byte ptr [eax + edx]
// 0057aa42  40                   inc eax
// 0057aa43  89412c               mov dword ptr [ecx + 0x2c], eax
// 0057aa46  80fa0a               cmp dl, 0xa
// 0057aa49  750f                 jne 0x57aa5a
// 0057aa4b  b801000000           mov eax, 1
// 0057aa50  014130               add dword ptr [ecx + 0x30], eax
// 0057aa53  894134               mov dword ptr [ecx + 0x34], eax
// 0057aa56  0fb6c2               movzx eax, dl
// 0057aa59  c3                   ret 
// 0057aa5a  ff4134               inc dword ptr [ecx + 0x34]
// 0057aa5d  0fb6c2               movzx eax, dl
// 0057aa60  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
