// roc 2007-08 006a5b70  unit: CXTPMenuBarMDIMenuInfo  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5b70
//
// 006a5b70  83ec0c               sub esp, 0xc
// 006a5b73  56                   push esi
// 006a5b74  8bf1                 mov esi, ecx
// 006a5b76  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006a5b79  f7d8                 neg eax
// 006a5b7b  1bc0                 sbb eax, eax
// 006a5b7d  89442404             mov dword ptr [esp + 4], eax
// 006a5b81  742b                 je 0x6a5bae
// 006a5b83  57                   push edi
// 006a5b84  8d7e20               lea edi, [esi + 0x20]
// 006a5b87  8d44240c             lea eax, [esp + 0xc]
// 006a5b8b  50                   push eax
// 006a5b8c  8d4c2414             lea ecx, [esp + 0x14]
// 006a5b90  51                   push ecx
// 006a5b91  8d542410             lea edx, [esp + 0x10]
// 006a5b95  52                   push edx
// 006a5b96  8bcf                 mov ecx, edi
// 006a5b98  e893610400           call 0x6ebd30
// 006a5b9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a5ba1  e83ea6f8ff           call 0x6301e4
// 006a5ba6  837c240800           cmp dword ptr [esp + 8], 0
// 006a5bab  75da                 jne 0x6a5b87
// 006a5bad  5f                   pop edi
// 006a5bae  8d4e20               lea ecx, [esi + 0x20]
// 006a5bb1  5e                   pop esi
// 006a5bb2  83c40c               add esp, 0xc
// 006a5bb5  e936210300           jmp 0x6d7cf0
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ?RemoveAll@CXTPMenuBarMDIMenus@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
