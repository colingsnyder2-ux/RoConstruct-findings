// roc 2011-06 008f9620  unit: CXTPDialogBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f9620
//
// 008f9620  83ec10               sub esp, 0x10
// 008f9623  56                   push esi
// 008f9624  8bf1                 mov esi, ecx
// 008f9626  56                   push esi
// 008f9627  8d4c2408             lea ecx, [esp + 8]
// 008f962b  e80037f6ff           call 0x85cd30
// 008f9630  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 008f9636  03442408             add eax, dword ptr [esp + 8]
// 008f963a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f963e  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f9642  51                   push ecx
// 008f9643  89442414             mov dword ptr [esp + 0x14], eax
// 008f9647  52                   push edx
// 008f9648  8d44240c             lea eax, [esp + 0xc]
// 008f964c  50                   push eax
// 008f964d  ff15101ca400         call dword ptr [0xa41c10]
// 008f9653  f7d8                 neg eax
// 008f9655  1bc0                 sbb eax, eax
// 008f9657  83e003               and eax, 3
// 008f965a  83c0fe               add eax, -2
// 008f965d  5e                   pop esi
// 008f965e  83c410               add esp, 0x10
// 008f9661  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnMouseHitTest@CXTPDialogBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
