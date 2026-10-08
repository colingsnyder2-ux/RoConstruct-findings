// from server: 100% by auto
// roc 2007-08 0071eaf0  unit: CXTPDialogBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071eaf0
//
// 0071eaf0  83ec10               sub esp, 0x10
// 0071eaf3  56                   push esi
// 0071eaf4  8bf1                 mov esi, ecx
// 0071eaf6  56                   push esi
// 0071eaf7  8d4c2408             lea ecx, [esp + 8]
// 0071eafb  e8a014f6ff           call 0x67ffa0
// 0071eb00  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 0071eb06  03442408             add eax, dword ptr [esp + 8]
// 0071eb0a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071eb0e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071eb12  51                   push ecx
// 0071eb13  89442414             mov dword ptr [esp + 0x14], eax
// 0071eb17  52                   push edx
// 0071eb18  8d44240c             lea eax, [esp + 0xc]
// 0071eb1c  50                   push eax
// 0071eb1d  ff1594ed7700         call dword ptr [0x77ed94]
// 0071eb23  f7d8                 neg eax
// 0071eb25  1bc0                 sbb eax, eax
// 0071eb27  83e003               and eax, 3
// 0071eb2a  83c0fe               add eax, -2
// 0071eb2d  5e                   pop esi
// 0071eb2e  83c410               add esp, 0x10
// 0071eb31  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?OnMouseHitTest@CXTPDialogBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
