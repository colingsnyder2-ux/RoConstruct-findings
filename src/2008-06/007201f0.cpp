// from server: 100% by auto
// roc 2008-06 007201f0  unit: CXTPMenuBarMDIMenuInfo  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007201f0
//
// 007201f0  83ec0c               sub esp, 0xc
// 007201f3  56                   push esi
// 007201f4  8bf1                 mov esi, ecx
// 007201f6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007201f9  f7d8                 neg eax
// 007201fb  1bc0                 sbb eax, eax
// 007201fd  89442404             mov dword ptr [esp + 4], eax
// 00720201  742b                 je 0x72022e
// 00720203  57                   push edi
// 00720204  8d7e20               lea edi, [esi + 0x20]
// 00720207  8d44240c             lea eax, [esp + 0xc]
// 0072020b  50                   push eax
// 0072020c  8d4c2414             lea ecx, [esp + 0x14]
// 00720210  51                   push ecx
// 00720211  8d542410             lea edx, [esp + 0x10]
// 00720215  52                   push edx
// 00720216  8bcf                 mov ecx, edi
// 00720218  e8338c0400           call 0x768e50
// 0072021d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720221  e8be09f8ff           call 0x6a0be4
// 00720226  837c240800           cmp dword ptr [esp + 8], 0
// 0072022b  75da                 jne 0x720207
// 0072022d  5f                   pop edi
// 0072022e  8d4e20               lea ecx, [esi + 0x20]
// 00720231  5e                   pop esi
// 00720232  83c40c               add esp, 0xc
// 00720235  e9f62ef8ff           jmp 0x6a3130
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?RemoveAll@CXTPMenuBarMDIMenus@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
