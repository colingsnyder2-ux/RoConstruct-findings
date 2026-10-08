// roc 2009-12 005fafc0  unit: G3D::TextInput::WrongSymbol  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fafc0
//
// 005fafc0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 005fafc3  3b4124               cmp eax, dword ptr [ecx + 0x24]
// 005fafc6  7204                 jb 0x5fafcc
// 005fafc8  83c8ff               or eax, 0xffffffff
// 005fafcb  c3                   ret 
// 005fafcc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 005fafcf  8a1410               mov dl, byte ptr [eax + edx]
// 005fafd2  40                   inc eax
// 005fafd3  89412c               mov dword ptr [ecx + 0x2c], eax
// 005fafd6  80fa0a               cmp dl, 0xa
// 005fafd9  750f                 jne 0x5fafea
// 005fafdb  b801000000           mov eax, 1
// 005fafe0  014130               add dword ptr [ecx + 0x30], eax
// 005fafe3  894134               mov dword ptr [ecx + 0x34], eax
// 005fafe6  0fb6c2               movzx eax, dl
// 005fafe9  c3                   ret 
// 005fafea  ff4134               inc dword ptr [ecx + 0x34]
// 005fafed  0fb6c2               movzx eax, dl
// 005faff0  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
