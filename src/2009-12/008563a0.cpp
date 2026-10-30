// roc 2009-12 008563a0  unit: CXTPTabClientWnd  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008563a0
//
// 008563a0  6aff                 push -1
// 008563a2  68a9df9500           push 0x95dfa9
// 008563a7  64a100000000         mov eax, dword ptr fs:[0]
// 008563ad  50                   push eax
// 008563ae  51                   push ecx
// 008563af  56                   push esi
// 008563b0  a10052b600           mov eax, dword ptr [0xb65200]
// 008563b5  33c4                 xor eax, esp
// 008563b7  50                   push eax
// 008563b8  8d44240c             lea eax, [esp + 0xc]
// 008563bc  64a300000000         mov dword ptr fs:[0], eax
// 008563c2  8b742420             mov esi, dword ptr [esp + 0x20]
// 008563c6  c744240800000000     mov dword ptr [esp + 8], 0
// 008563ce  85f6                 test esi, esi
// 008563d0  7526                 jne 0x8563f8
// 008563d2  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008563d6  6856fd9900           push 0x99fd56
// 008563db  8bce                 mov ecx, esi
// 008563dd  ff15b8de9800         call dword ptr [0x98deb8]
// 008563e3  8bc6                 mov eax, esi
// 008563e5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008563e9  64890d00000000       mov dword ptr fs:[0], ecx
// 008563f0  59                   pop ecx
// 008563f1  5e                   pop esi
// 008563f2  83c410               add esp, 0x10
// 008563f5  c20800               ret 8
// 008563f8  8b4620               mov eax, dword ptr [esi + 0x20]
// 008563fb  6a00                 push 0
// 008563fd  6a00                 push 0
// 008563ff  6869280000           push 0x2869
// 00856404  50                   push eax
// 00856405  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0085640b  50                   push eax
// 0085640c  8d4c2424             lea ecx, [esp + 0x24]
// 00856410  ff15b8de9800         call dword ptr [0x98deb8]
// 00856416  8d4c2420             lea ecx, [esp + 0x20]
// 0085641a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00856422  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00856428  84c0                 test al, al
// 0085642a  7438                 je 0x856464
// 0085642c  8b16                 mov edx, dword ptr [esi]
// 0085642e  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00856434  8bce                 mov ecx, esi
// 00856436  ffd0                 call eax
// 00856438  85c0                 test eax, eax
// 0085643a  740e                 je 0x85644a
// 0085643c  83c020               add eax, 0x20
// 0085643f  50                   push eax
// 00856440  8d4c2424             lea ecx, [esp + 0x24]
// 00856444  ff1538d59800         call dword ptr [0x98d538]
// 0085644a  8d4c2420             lea ecx, [esp + 0x20]
// 0085644e  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00856454  84c0                 test al, al
// 00856456  740c                 je 0x856464
// 00856458  8d4c2420             lea ecx, [esp + 0x20]
// 0085645c  51                   push ecx
// 0085645d  8bce                 mov ecx, esi
// 0085645f  e8e4d9f9ff           call 0x7f3e48
// 00856464  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00856468  8d542420             lea edx, [esp + 0x20]
// 0085646c  52                   push edx
// 0085646d  8bce                 mov ecx, esi
// 0085646f  ff1594de9800         call dword ptr [0x98de94]
// 00856475  8d4c2420             lea ecx, [esp + 0x20]
// 00856479  ff15c0de9800         call dword ptr [0x98dec0]
// 0085647f  8bc6                 mov eax, esi
// 00856481  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00856485  64890d00000000       mov dword ptr fs:[0], ecx
// 0085648c  59                   pop ecx
// 0085648d  5e                   pop esi
// 0085648e  83c410               add esp, 0x10
// 00856491  c20800               ret 8
// copied from an identical function in another client (function ?GetItemText@CXTPTabClientWnd@@MBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPTabClientWnd.cpp