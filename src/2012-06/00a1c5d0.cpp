// roc 2012-06 00a1c5d0  unit: CXTPMenuBarMDIMenuInfo  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c5d0
//
// 00a1c5d0  83ec0c               sub esp, 0xc
// 00a1c5d3  56                   push esi
// 00a1c5d4  8bf1                 mov esi, ecx
// 00a1c5d6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a1c5d9  f7d8                 neg eax
// 00a1c5db  1bc0                 sbb eax, eax
// 00a1c5dd  89442404             mov dword ptr [esp + 4], eax
// 00a1c5e1  742b                 je 0xa1c60e
// 00a1c5e3  57                   push edi
// 00a1c5e4  8d7e20               lea edi, [esi + 0x20]
// 00a1c5e7  8d44240c             lea eax, [esp + 0xc]
// 00a1c5eb  50                   push eax
// 00a1c5ec  8d4c2414             lea ecx, [esp + 0x14]
// 00a1c5f0  51                   push ecx
// 00a1c5f1  8d542410             lea edx, [esp + 0x10]
// 00a1c5f5  52                   push edx
// 00a1c5f6  8bcf                 mov ecx, edi
// 00a1c5f8  e863bbf7ff           call 0x998160
// 00a1c5fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a1c601  e88460f6ff           call 0x98268a
// 00a1c606  837c240800           cmp dword ptr [esp + 8], 0
// 00a1c60b  75da                 jne 0xa1c5e7
// 00a1c60d  5f                   pop edi
// 00a1c60e  8d4e20               lea ecx, [esi + 0x20]
// 00a1c611  5e                   pop esi
// 00a1c612  83c40c               add esp, 0xc
// 00a1c615  e99690a3ff           jmp 0x4556b0
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?RemoveAll@CXTPMenuBarMDIMenus@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
