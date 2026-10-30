// roc 2012-06 009e3f60  unit: CXTPDockingPane  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3f60
//
// 009e3f60  56                   push esi
// 009e3f61  8bf1                 mov esi, ecx
// 009e3f63  837e3000             cmp dword ptr [esi + 0x30], 0
// 009e3f67  7445                 je 0x9e3fae
// 009e3f69  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e3f6c  8b501c               mov edx, dword ptr [eax + 0x1c]
// 009e3f6f  8d4e20               lea ecx, [esi + 0x20]
// 009e3f72  ffd2                 call edx
// 009e3f74  85c0                 test eax, eax
// 009e3f76  7536                 jne 0x9e3fae
// 009e3f78  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 009e3f7b  8b01                 mov eax, dword ptr [ecx]
// 009e3f7d  8b5020               mov edx, dword ptr [eax + 0x20]
// 009e3f80  ffd2                 call edx
// 009e3f82  85c0                 test eax, eax
// 009e3f84  7428                 je 0x9e3fae
// 009e3f86  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 009e3f89  8b01                 mov eax, dword ptr [ecx]
// 009e3f8b  8b5018               mov edx, dword ptr [eax + 0x18]
// 009e3f8e  ffd2                 call edx
// 009e3f90  8bf0                 mov esi, eax
// 009e3f92  85f6                 test esi, esi
// 009e3f94  7418                 je 0x9e3fae
// 009e3f96  e8553e0500           call 0xa37df0
// 009e3f9b  50                   push eax
// 009e3f9c  8bce                 mov ecx, esi
// 009e3f9e  e8f3e6f9ff           call 0x982696
// 009e3fa3  85c0                 test eax, eax
// 009e3fa5  7407                 je 0x9e3fae
// 009e3fa7  b801000000           mov eax, 1
// 009e3fac  5e                   pop esi
// 009e3fad  c3                   ret 
// 009e3fae  33c0                 xor eax, eax
// 009e3fb0  5e                   pop esi
// 009e3fb1  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPane.cpp (function ?IsFloating@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPane.cpp
