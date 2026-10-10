// roc 2012-06 009a10b0  unit: CXTPToolBar  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a10b0
//
// 009a10b0  83ec10               sub esp, 0x10
// 009a10b3  56                   push esi
// 009a10b4  8bf1                 mov esi, ecx
// 009a10b6  85f6                 test esi, esi
// 009a10b8  7441                 je 0x9a10fb
// 009a10ba  837e2000             cmp dword ptr [esi + 0x20], 0
// 009a10be  743b                 je 0x9a10fb
// 009a10c0  8b06                 mov eax, dword ptr [esi]
// 009a10c2  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 009a10c8  ffd2                 call edx
// 009a10ca  85c0                 test eax, eax
// 009a10cc  742d                 je 0x9a10fb
// 009a10ce  8b4620               mov eax, dword ptr [esi + 0x20]
// 009a10d1  50                   push eax
// 009a10d2  ff153c3bb200         call dword ptr [0xb23b3c]
// 009a10d8  85c0                 test eax, eax
// 009a10da  741f                 je 0x9a10fb
// 009a10dc  56                   push esi
// 009a10dd  8d4c2408             lea ecx, [esp + 8]
// 009a10e1  e85a400300           call 0x9d5140
// 009a10e6  50                   push eax
// 009a10e7  ff15f03ab200         call dword ptr [0xb23af0]
// 009a10ed  85c0                 test eax, eax
// 009a10ef  750a                 jne 0x9a10fb
// 009a10f1  b801000000           mov eax, 1
// 009a10f6  5e                   pop esi
// 009a10f7  83c410               add esp, 0x10
// 009a10fa  c3                   ret 
// 009a10fb  33c0                 xor eax, eax
// 009a10fd  5e                   pop esi
// 009a10fe  83c410               add esp, 0x10
// 009a1101  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?IsWindowVisible@CXTPToolBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPToolBar.cpp
