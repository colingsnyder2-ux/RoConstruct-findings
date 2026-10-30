// roc 2010-06 008a0aa0  unit: CXTPDialogBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0aa0
//
// 008a0aa0  83ec10               sub esp, 0x10
// 008a0aa3  56                   push esi
// 008a0aa4  8bf1                 mov esi, ecx
// 008a0aa6  56                   push esi
// 008a0aa7  8d4c2408             lea ecx, [esp + 8]
// 008a0aab  e800e8f5ff           call 0x7ff2b0
// 008a0ab0  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 008a0ab6  03442408             add eax, dword ptr [esp + 8]
// 008a0aba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a0abe  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a0ac2  51                   push ecx
// 008a0ac3  89442414             mov dword ptr [esp + 0x14], eax
// 008a0ac7  52                   push edx
// 008a0ac8  8d44240c             lea eax, [esp + 0xc]
// 008a0acc  50                   push eax
// 008a0acd  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 008a0ad3  f7d8                 neg eax
// 008a0ad5  1bc0                 sbb eax, eax
// 008a0ad7  83e003               and eax, 3
// 008a0ada  83c0fe               add eax, -2
// 008a0add  5e                   pop esi
// 008a0ade  83c410               add esp, 0x10
// 008a0ae1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnMouseHitTest@CXTPDialogBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
