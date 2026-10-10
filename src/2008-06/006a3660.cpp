// roc 2008-06 006a3660  unit: CXTPCommandBarKeyboardTip  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a3660
//
// 006a3660  56                   push esi
// 006a3661  8bf1                 mov esi, ecx
// 006a3663  8d4e5c               lea ecx, [esi + 0x5c]
// 006a3666  ff15143f8000         call dword ptr [0x803f14]
// 006a366c  8d4e58               lea ecx, [esi + 0x58]
// 006a366f  ff15143f8000         call dword ptr [0x803f14]
// 006a3675  8d4e54               lea ecx, [esi + 0x54]
// 006a3678  ff15143f8000         call dword ptr [0x803f14]
// 006a367e  8bce                 mov ecx, esi
// 006a3680  e8f1d9ffff           call 0x6a1076
// 006a3685  f644240801           test byte ptr [esp + 8], 1
// 006a368a  7409                 je 0x6a3695
// 006a368c  56                   push esi
// 006a368d  e8e8cfffff           call 0x6a067a
// 006a3692  83c404               add esp, 4
// 006a3695  8bc6                 mov eax, esi
// 006a3697  5e                   pop esi
// 006a3698  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ??_GCXTPCommandBarKeyboardTip@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
