// from server: 100% by auto
// roc 2011-06 008a4180  unit: CXTPMenuBarMDIMenuInfo  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4180
//
// 008a4180  83ec0c               sub esp, 0xc
// 008a4183  56                   push esi
// 008a4184  8bf1                 mov esi, ecx
// 008a4186  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008a4189  f7d8                 neg eax
// 008a418b  1bc0                 sbb eax, eax
// 008a418d  89442404             mov dword ptr [esp + 4], eax
// 008a4191  742b                 je 0x8a41be
// 008a4193  57                   push edi
// 008a4194  8d7e20               lea edi, [esi + 0x20]
// 008a4197  8d44240c             lea eax, [esp + 0xc]
// 008a419b  50                   push eax
// 008a419c  8d4c2414             lea ecx, [esp + 0x14]
// 008a41a0  51                   push ecx
// 008a41a1  8d542410             lea edx, [esp + 0x10]
// 008a41a5  52                   push edx
// 008a41a6  8bcf                 mov ecx, edi
// 008a41a8  e833950200           call 0x8cd6e0
// 008a41ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a41b1  e82464f6ff           call 0x80a5da
// 008a41b6  837c240800           cmp dword ptr [esp + 8], 0
// 008a41bb  75da                 jne 0x8a4197
// 008a41bd  5f                   pop edi
// 008a41be  8d4e20               lea ecx, [esi + 0x20]
// 008a41c1  5e                   pop esi
// 008a41c2  83c40c               add esp, 0xc
// 008a41c5  e9e6500100           jmp 0x8b92b0
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?RemoveAll@CXTPMenuBarMDIMenus@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
