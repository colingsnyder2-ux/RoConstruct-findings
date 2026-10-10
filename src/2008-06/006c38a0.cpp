// roc 2008-06 006c38a0  unit: CXTPToolBar  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c38a0
//
// 006c38a0  83ec10               sub esp, 0x10
// 006c38a3  56                   push esi
// 006c38a4  8bf1                 mov esi, ecx
// 006c38a6  85f6                 test esi, esi
// 006c38a8  7441                 je 0x6c38eb
// 006c38aa  837e2000             cmp dword ptr [esi + 0x20], 0
// 006c38ae  743b                 je 0x6c38eb
// 006c38b0  8b06                 mov eax, dword ptr [esi]
// 006c38b2  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 006c38b8  ffd2                 call edx
// 006c38ba  85c0                 test eax, eax
// 006c38bc  742d                 je 0x6c38eb
// 006c38be  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c38c1  50                   push eax
// 006c38c2  ff153c2d8000         call dword ptr [0x802d3c]
// 006c38c8  85c0                 test eax, eax
// 006c38ca  741f                 je 0x6c38eb
// 006c38cc  56                   push esi
// 006c38cd  8d4c2408             lea ecx, [esp + 8]
// 006c38d1  e8fa410300           call 0x6f7ad0
// 006c38d6  50                   push eax
// 006c38d7  ff156c2d8000         call dword ptr [0x802d6c]
// 006c38dd  85c0                 test eax, eax
// 006c38df  750a                 jne 0x6c38eb
// 006c38e1  b801000000           mov eax, 1
// 006c38e6  5e                   pop esi
// 006c38e7  83c410               add esp, 0x10
// 006c38ea  c3                   ret 
// 006c38eb  33c0                 xor eax, eax
// 006c38ed  5e                   pop esi
// 006c38ee  83c410               add esp, 0x10
// 006c38f1  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?IsWindowVisible@CXTPToolBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
