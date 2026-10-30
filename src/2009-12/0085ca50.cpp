// roc 2009-12 0085ca50  unit: CXTPDockingPane  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ca50
//
// 0085ca50  56                   push esi
// 0085ca51  8bf1                 mov esi, ecx
// 0085ca53  837e3000             cmp dword ptr [esi + 0x30], 0
// 0085ca57  7445                 je 0x85ca9e
// 0085ca59  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085ca5c  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0085ca5f  8d4e20               lea ecx, [esi + 0x20]
// 0085ca62  ffd2                 call edx
// 0085ca64  85c0                 test eax, eax
// 0085ca66  7536                 jne 0x85ca9e
// 0085ca68  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0085ca6b  8b01                 mov eax, dword ptr [ecx]
// 0085ca6d  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085ca70  ffd2                 call edx
// 0085ca72  85c0                 test eax, eax
// 0085ca74  7428                 je 0x85ca9e
// 0085ca76  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0085ca79  8b01                 mov eax, dword ptr [ecx]
// 0085ca7b  8b5018               mov edx, dword ptr [eax + 0x18]
// 0085ca7e  ffd2                 call edx
// 0085ca80  8bf0                 mov esi, eax
// 0085ca82  85f6                 test esi, esi
// 0085ca84  7418                 je 0x85ca9e
// 0085ca86  e8351a0500           call 0x8ae4c0
// 0085ca8b  50                   push eax
// 0085ca8c  8bce                 mov ecx, esi
// 0085ca8e  e85573f9ff           call 0x7f3de8
// 0085ca93  85c0                 test eax, eax
// 0085ca95  7407                 je 0x85ca9e
// 0085ca97  b801000000           mov eax, 1
// 0085ca9c  5e                   pop esi
// 0085ca9d  c3                   ret 
// 0085ca9e  33c0                 xor eax, eax
// 0085caa0  5e                   pop esi
// 0085caa1  c3                   ret 
// copied from an identical function in another client (function ?IsFloating@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp