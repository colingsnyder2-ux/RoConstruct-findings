// roc 2009-12 0088c3f0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c3f0
//
// 0088c3f0  6aff                 push -1
// 0088c3f2  68720e9600           push 0x960e72
// 0088c3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0088c3fd  50                   push eax
// 0088c3fe  83ec08               sub esp, 8
// 0088c401  56                   push esi
// 0088c402  a10052b600           mov eax, dword ptr [0xb65200]
// 0088c407  33c4                 xor eax, esp
// 0088c409  50                   push eax
// 0088c40a  8d442410             lea eax, [esp + 0x10]
// 0088c40e  64a300000000         mov dword ptr fs:[0], eax
// 0088c414  8bf1                 mov esi, ecx
// 0088c416  8d442408             lea eax, [esp + 8]
// 0088c41a  50                   push eax
// 0088c41b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0088c423  e8f8f0ffff           call 0x88b520
// 0088c428  8d4c240c             lea ecx, [esp + 0xc]
// 0088c42c  51                   push ecx
// 0088c42d  8bce                 mov ecx, esi
// 0088c42f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0088c437  e804eeffff           call 0x88b240
// 0088c43c  8bc8                 mov ecx, eax
// 0088c43e  c644241801           mov byte ptr [esp + 0x18], 1
// 0088c443  ff1580de9800         call dword ptr [0x98de80]
// 0088c449  50                   push eax
// 0088c44a  8d4c240c             lea ecx, [esp + 0xc]
// 0088c44e  ff1584de9800         call dword ptr [0x98de84]
// 0088c454  85c0                 test eax, eax
// 0088c456  7507                 jne 0x88c45f
// 0088c458  b856fd9900           mov eax, 0x99fd56
// 0088c45d  eb0a                 jmp 0x88c469
// 0088c45f  8d4c2408             lea ecx, [esp + 8]
// 0088c463  ff1580de9800         call dword ptr [0x98de80]
// 0088c469  8b742420             mov esi, dword ptr [esp + 0x20]
// 0088c46d  50                   push eax
// 0088c46e  8bce                 mov ecx, esi
// 0088c470  ff15b8de9800         call dword ptr [0x98deb8]
// 0088c476  8d4c240c             lea ecx, [esp + 0xc]
// 0088c47a  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c480  8d4c2408             lea ecx, [esp + 8]
// 0088c484  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c48a  8bc6                 mov eax, esi
// 0088c48c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088c490  64890d00000000       mov dword ptr fs:[0], ecx
// 0088c497  59                   pop ecx
// 0088c498  5e                   pop esi
// 0088c499  83c414               add esp, 0x14
// 0088c49c  c20400               ret 4
// copied from an identical function in another client (function ?GetEditText@CXTPControlComboBox@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp