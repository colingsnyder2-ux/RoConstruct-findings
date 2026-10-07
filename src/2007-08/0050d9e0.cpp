// roc 2007-08 0050d9e0  unit: G3D::TextInput::WrongSymbol  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d9e0
//
// 0050d9e0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0050d9e3  3b4118               cmp eax, dword ptr [ecx + 0x18]
// 0050d9e6  7204                 jb 0x50d9ec
// 0050d9e8  83c8ff               or eax, 0xffffffff
// 0050d9eb  c3                   ret 
// 0050d9ec  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0050d9ef  8a1410               mov dl, byte ptr [eax + edx]
// 0050d9f2  83c001               add eax, 1
// 0050d9f5  80fa0a               cmp dl, 0xa
// 0050d9f8  894120               mov dword ptr [ecx + 0x20], eax
// 0050d9fb  750f                 jne 0x50da0c
// 0050d9fd  b801000000           mov eax, 1
// 0050da02  014124               add dword ptr [ecx + 0x24], eax
// 0050da05  894128               mov dword ptr [ecx + 0x28], eax
// 0050da08  0fb6c2               movzx eax, dl
// 0050da0b  c3                   ret 
// 0050da0c  83412801             add dword ptr [ecx + 0x28], 1
// 0050da10  0fb6c2               movzx eax, dl
// 0050da13  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?eatInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
