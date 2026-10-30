// from server: 100% by auto
// roc 2008-06 0079f8a0  unit: CXTPDialogBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079f8a0
//
// 0079f8a0  83ec10               sub esp, 0x10
// 0079f8a3  56                   push esi
// 0079f8a4  8bf1                 mov esi, ecx
// 0079f8a6  56                   push esi
// 0079f8a7  8d4c2408             lea ecx, [esp + 8]
// 0079f8ab  e82082f5ff           call 0x6f7ad0
// 0079f8b0  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 0079f8b6  03442408             add eax, dword ptr [esp + 8]
// 0079f8ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079f8be  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079f8c2  51                   push ecx
// 0079f8c3  89442414             mov dword ptr [esp + 0x14], eax
// 0079f8c7  52                   push edx
// 0079f8c8  8d44240c             lea eax, [esp + 0xc]
// 0079f8cc  50                   push eax
// 0079f8cd  ff152c2d8000         call dword ptr [0x802d2c]
// 0079f8d3  f7d8                 neg eax
// 0079f8d5  1bc0                 sbb eax, eax
// 0079f8d7  83e003               and eax, 3
// 0079f8da  83c0fe               add eax, -2
// 0079f8dd  5e                   pop esi
// 0079f8de  83c410               add esp, 0x10
// 0079f8e1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnMouseHitTest@CXTPDialogBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
