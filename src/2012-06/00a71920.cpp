// roc 2012-06 00a71920  unit: CXTPDialogBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71920
//
// 00a71920  83ec10               sub esp, 0x10
// 00a71923  56                   push esi
// 00a71924  8bf1                 mov esi, ecx
// 00a71926  56                   push esi
// 00a71927  8d4c2408             lea ecx, [esp + 8]
// 00a7192b  e81038f6ff           call 0x9d5140
// 00a71930  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 00a71936  03442408             add eax, dword ptr [esp + 8]
// 00a7193a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a7193e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a71942  51                   push ecx
// 00a71943  89442414             mov dword ptr [esp + 0x14], eax
// 00a71947  52                   push edx
// 00a71948  8d44240c             lea eax, [esp + 0xc]
// 00a7194c  50                   push eax
// 00a7194d  ff15483bb200         call dword ptr [0xb23b48]
// 00a71953  f7d8                 neg eax
// 00a71955  1bc0                 sbb eax, eax
// 00a71957  83e003               and eax, 3
// 00a7195a  83c0fe               add eax, -2
// 00a7195d  5e                   pop esi
// 00a7195e  83c410               add esp, 0x10
// 00a71961  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnMouseHitTest@CXTPDialogBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
