// roc 2007-03 00714550  unit: seg_00710000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00714550
//
// 00714550  83ec10               sub esp, 0x10
// 00714553  56                   push esi
// 00714554  8bf1                 mov esi, ecx
// 00714556  56                   push esi
// 00714557  8d4c2408             lea ecx, [esp + 8]
// 0071455b  e87072f5ff           call 0x66b7d0
// 00714560  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 00714566  03442408             add eax, dword ptr [esp + 8]
// 0071456a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071456e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00714572  51                   push ecx
// 00714573  89442414             mov dword ptr [esp + 0x14], eax
// 00714577  52                   push edx
// 00714578  8d44240c             lea eax, [esp + 0xc]
// 0071457c  50                   push eax
// 0071457d  ff1598ed7700         call dword ptr [0x77ed98]
// 00714583  f7d8                 neg eax
// 00714585  1bc0                 sbb eax, eax
// 00714587  83e003               and eax, 3
// 0071458a  83c0fe               add eax, -2
// 0071458d  5e                   pop esi
// 0071458e  83c410               add esp, 0x10
// 00714591  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnMouseHitTest@CXTPDialogBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
