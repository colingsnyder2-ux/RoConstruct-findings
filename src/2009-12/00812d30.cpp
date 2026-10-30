// roc 2009-12 00812d30  unit: CXTPToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812d30
//
// 00812d30  e887381100           call 0x9265bc
// 00812d35  85c0                 test eax, eax
// 00812d37  7501                 jne 0x812d3a
// 00812d39  c3                   ret 
// 00812d3a  56                   push esi
// 00812d3b  57                   push edi
// 00812d3c  ff15eccb9800         call dword ptr [0x98cbec]
// 00812d42  50                   push eax
// 00812d43  e8e20dfeff           call 0x7f3b2a
// 00812d48  8bf0                 mov esi, eax
// 00812d4a  85f6                 test esi, esi
// 00812d4c  7430                 je 0x812d7e
// 00812d4e  8b3d84cc9800         mov edi, dword ptr [0x98cc84]
// 00812d54  8b4620               mov eax, dword ptr [esi + 0x20]
// 00812d57  50                   push eax
// 00812d58  ffd7                 call edi
// 00812d5a  85c0                 test eax, eax
// 00812d5c  7420                 je 0x812d7e
// 00812d5e  8bce                 mov ecx, esi
// 00812d60  e8e90dfeff           call 0x7f3b4e
// 00812d65  8bf0                 mov esi, eax
// 00812d67  56                   push esi
// 00812d68  e849381100           call 0x9265b6
// 00812d6d  50                   push eax
// 00812d6e  e8cb0efeff           call 0x7f3c3e
// 00812d73  83c408               add esp, 8
// 00812d76  85c0                 test eax, eax
// 00812d78  7509                 jne 0x812d83
// 00812d7a  85f6                 test esi, esi
// 00812d7c  75d6                 jne 0x812d54
// 00812d7e  5f                   pop edi
// 00812d7f  33c0                 xor eax, eax
// 00812d81  5e                   pop esi
// 00812d82  c3                   ret 
// 00812d83  5f                   pop edi
// 00812d84  b801000000           mov eax, 1
// 00812d89  5e                   pop esi
// 00812d8a  c3                   ret 
// copied from an identical function in another client (function ?IsFloatingFrameFocused@CXTPToolBar@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp