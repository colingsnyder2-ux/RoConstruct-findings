// roc 2009-06 007e1700  unit: CXTPDockingPaneContextAlphaWnd  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e1700
//
// 007e1700  6aff                 push -1
// 007e1702  68a81c8800           push 0x881ca8
// 007e1707  64a100000000         mov eax, dword ptr fs:[0]
// 007e170d  50                   push eax
// 007e170e  83ec68               sub esp, 0x68
// 007e1711  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007e1716  33c4                 xor eax, esp
// 007e1718  89442464             mov dword ptr [esp + 0x64], eax
// 007e171c  56                   push esi
// 007e171d  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007e1722  33c4                 xor eax, esp
// 007e1724  50                   push eax
// 007e1725  8d442470             lea eax, [esp + 0x70]
// 007e1729  64a300000000         mov dword ptr fs:[0], eax
// 007e172f  8bf1                 mov esi, ecx
// 007e1731  56                   push esi
// 007e1732  8d4c241c             lea ecx, [esp + 0x1c]
// 007e1736  e88d7cf3ff           call 0x7193c8
// 007e173b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007e173e  8d442408             lea eax, [esp + 8]
// 007e1742  50                   push eax
// 007e1743  51                   push ecx
// 007e1744  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 007e174f  ff1514ee8900         call dword ptr [0x89ee14]
// 007e1755  6a0d                 push 0xd
// 007e1757  ff15e4ee8900         call dword ptr [0x89eee4]
// 007e175d  50                   push eax
// 007e175e  8d54240c             lea edx, [esp + 0xc]
// 007e1762  52                   push edx
// 007e1763  8d4c2420             lea ecx, [esp + 0x20]
// 007e1767  e86480f3ff           call 0x7197d0
// 007e176c  8d4c2418             lea ecx, [esp + 0x18]
// 007e1770  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 007e1778  e8457cf3ff           call 0x7193c2
// 007e177d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007e1781  64890d00000000       mov dword ptr fs:[0], ecx
// 007e1788  59                   pop ecx
// 007e1789  5e                   pop esi
// 007e178a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007e178e  33cc                 xor ecx, esp
// 007e1790  e8e58df3ff           call 0x71a57a
// 007e1795  83c474               add esp, 0x74
// 007e1798  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneContextAlphaWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp