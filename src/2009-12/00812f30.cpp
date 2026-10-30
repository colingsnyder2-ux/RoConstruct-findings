// roc 2009-12 00812f30  unit: CXTPToolBar  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812f30
//
// 00812f30  83ec10               sub esp, 0x10
// 00812f33  56                   push esi
// 00812f34  8bf1                 mov esi, ecx
// 00812f36  85f6                 test esi, esi
// 00812f38  7441                 je 0x812f7b
// 00812f3a  837e2000             cmp dword ptr [esi + 0x20], 0
// 00812f3e  743b                 je 0x812f7b
// 00812f40  8b06                 mov eax, dword ptr [esi]
// 00812f42  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00812f48  ffd2                 call edx
// 00812f4a  85c0                 test eax, eax
// 00812f4c  742d                 je 0x812f7b
// 00812f4e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00812f51  50                   push eax
// 00812f52  ff1564ca9800         call dword ptr [0x98ca64]
// 00812f58  85c0                 test eax, eax
// 00812f5a  741f                 je 0x812f7b
// 00812f5c  56                   push esi
// 00812f5d  8d4c2408             lea ecx, [esp + 8]
// 00812f61  e80a830300           call 0x84b270
// 00812f66  50                   push eax
// 00812f67  ff1568cc9800         call dword ptr [0x98cc68]
// 00812f6d  85c0                 test eax, eax
// 00812f6f  750a                 jne 0x812f7b
// 00812f71  b801000000           mov eax, 1
// 00812f76  5e                   pop esi
// 00812f77  83c410               add esp, 0x10
// 00812f7a  c3                   ret 
// 00812f7b  33c0                 xor eax, eax
// 00812f7d  5e                   pop esi
// 00812f7e  83c410               add esp, 0x10
// 00812f81  c3                   ret 
// copied from an identical function in another client (function ?IsWindowVisible@CXTPToolBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp