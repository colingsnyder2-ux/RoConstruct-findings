// roc 2010-06 0055cd90  unit: G3D::TextInput::WrongSymbol  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055cd90
//
// 0055cd90  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0055cd93  3b4124               cmp eax, dword ptr [ecx + 0x24]
// 0055cd96  7204                 jb 0x55cd9c
// 0055cd98  83c8ff               or eax, 0xffffffff
// 0055cd9b  c3                   ret 
// 0055cd9c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0055cd9f  8a1410               mov dl, byte ptr [eax + edx]
// 0055cda2  40                   inc eax
// 0055cda3  89412c               mov dword ptr [ecx + 0x2c], eax
// 0055cda6  80fa0a               cmp dl, 0xa
// 0055cda9  750f                 jne 0x55cdba
// 0055cdab  b801000000           mov eax, 1
// 0055cdb0  014130               add dword ptr [ecx + 0x30], eax
// 0055cdb3  894134               mov dword ptr [ecx + 0x34], eax
// 0055cdb6  0fb6c2               movzx eax, dl
// 0055cdb9  c3                   ret 
// 0055cdba  ff4134               inc dword ptr [ecx + 0x34]
// 0055cdbd  0fb6c2               movzx eax, dl
// 0055cdc0  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
