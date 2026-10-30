// roc 2009-12 008ec800  unit: CXTPDialogBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec800
//
// 008ec800  83ec10               sub esp, 0x10
// 008ec803  56                   push esi
// 008ec804  8bf1                 mov esi, ecx
// 008ec806  56                   push esi
// 008ec807  8d4c2408             lea ecx, [esp + 8]
// 008ec80b  e860eaf5ff           call 0x84b270
// 008ec810  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 008ec816  03442408             add eax, dword ptr [esp + 8]
// 008ec81a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ec81e  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ec822  51                   push ecx
// 008ec823  89442414             mov dword ptr [esp + 0x14], eax
// 008ec827  52                   push edx
// 008ec828  8d44240c             lea eax, [esp + 0xc]
// 008ec82c  50                   push eax
// 008ec82d  ff155cca9800         call dword ptr [0x98ca5c]
// 008ec833  f7d8                 neg eax
// 008ec835  1bc0                 sbb eax, eax
// 008ec837  83e003               and eax, 3
// 008ec83a  83c0fe               add eax, -2
// 008ec83d  5e                   pop esi
// 008ec83e  83c410               add esp, 0x10
// 008ec841  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnMouseHitTest@CXTPDialogBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
