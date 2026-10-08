// from server: 100% by auto
// roc 2008-06 00516b00  unit: G3D::TextInput::WrongSymbol  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516b00
//
// 00516b00  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00516b03  3b4124               cmp eax, dword ptr [ecx + 0x24]
// 00516b06  7204                 jb 0x516b0c
// 00516b08  83c8ff               or eax, 0xffffffff
// 00516b0b  c3                   ret 
// 00516b0c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00516b0f  8a1410               mov dl, byte ptr [eax + edx]
// 00516b12  40                   inc eax
// 00516b13  89412c               mov dword ptr [ecx + 0x2c], eax
// 00516b16  80fa0a               cmp dl, 0xa
// 00516b19  750f                 jne 0x516b2a
// 00516b1b  b801000000           mov eax, 1
// 00516b20  014130               add dword ptr [ecx + 0x30], eax
// 00516b23  894134               mov dword ptr [ecx + 0x34], eax
// 00516b26  0fb6c2               movzx eax, dl
// 00516b29  c3                   ret 
// 00516b2a  ff4134               inc dword ptr [ecx + 0x34]
// 00516b2d  0fb6c2               movzx eax, dl
// 00516b30  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
