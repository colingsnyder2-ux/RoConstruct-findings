// roc 2008-06 007074b0  unit: CXTPDockingPane  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007074b0
//
// 007074b0  56                   push esi
// 007074b1  8bf1                 mov esi, ecx
// 007074b3  837e3000             cmp dword ptr [esi + 0x30], 0
// 007074b7  7445                 je 0x7074fe
// 007074b9  8b4620               mov eax, dword ptr [esi + 0x20]
// 007074bc  8b501c               mov edx, dword ptr [eax + 0x1c]
// 007074bf  8d4e20               lea ecx, [esi + 0x20]
// 007074c2  ffd2                 call edx
// 007074c4  85c0                 test eax, eax
// 007074c6  7536                 jne 0x7074fe
// 007074c8  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007074cb  8b01                 mov eax, dword ptr [ecx]
// 007074cd  8b5020               mov edx, dword ptr [eax + 0x20]
// 007074d0  ffd2                 call edx
// 007074d2  85c0                 test eax, eax
// 007074d4  7428                 je 0x7074fe
// 007074d6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007074d9  8b01                 mov eax, dword ptr [ecx]
// 007074db  8b5018               mov edx, dword ptr [eax + 0x18]
// 007074de  ffd2                 call edx
// 007074e0  8bf0                 mov esi, eax
// 007074e2  85f6                 test esi, esi
// 007074e4  7418                 je 0x7074fe
// 007074e6  e8353c0500           call 0x75b120
// 007074eb  50                   push eax
// 007074ec  8bce                 mov ecx, esi
// 007074ee  e8fd96f9ff           call 0x6a0bf0
// 007074f3  85c0                 test eax, eax
// 007074f5  7407                 je 0x7074fe
// 007074f7  b801000000           mov eax, 1
// 007074fc  5e                   pop esi
// 007074fd  c3                   ret 
// 007074fe  33c0                 xor eax, eax
// 00707500  5e                   pop esi
// 00707501  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPane.cpp (function ?IsFloating@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp
