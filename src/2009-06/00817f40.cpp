// roc 2009-06 00817f40  unit: CXTPDialogBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817f40
//
// 00817f40  83ec10               sub esp, 0x10
// 00817f43  56                   push esi
// 00817f44  8bf1                 mov esi, ecx
// 00817f46  56                   push esi
// 00817f47  8d4c2408             lea ecx, [esp + 8]
// 00817f4b  e82085f5ff           call 0x770470
// 00817f50  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 00817f56  03442408             add eax, dword ptr [esp + 8]
// 00817f5a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00817f5e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00817f62  51                   push ecx
// 00817f63  89442414             mov dword ptr [esp + 0x14], eax
// 00817f67  52                   push edx
// 00817f68  8d44240c             lea eax, [esp + 0xc]
// 00817f6c  50                   push eax
// 00817f6d  ff15c0ed8900         call dword ptr [0x89edc0]
// 00817f73  f7d8                 neg eax
// 00817f75  1bc0                 sbb eax, eax
// 00817f77  83e003               and eax, 3
// 00817f7a  83c0fe               add eax, -2
// 00817f7d  5e                   pop esi
// 00817f7e  83c410               add esp, 0x10
// 00817f81  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnMouseHitTest@CXTPDialogBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
