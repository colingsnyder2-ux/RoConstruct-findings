// roc 2009-12 008e1530  unit: CXTPOffice2007Image  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1530
//
// 008e1530  6aff                 push -1
// 008e1532  683b5c9600           push 0x965c3b
// 008e1537  64a100000000         mov eax, dword ptr fs:[0]
// 008e153d  50                   push eax
// 008e153e  83ec0c               sub esp, 0xc
// 008e1541  56                   push esi
// 008e1542  a10052b600           mov eax, dword ptr [0xb65200]
// 008e1547  33c4                 xor eax, esp
// 008e1549  50                   push eax
// 008e154a  8d442414             lea eax, [esp + 0x14]
// 008e154e  64a300000000         mov dword ptr fs:[0], eax
// 008e1554  8bf1                 mov esi, ecx
// 008e1556  c744240800000000     mov dword ptr [esp + 8], 0
// 008e155e  51                   push ecx
// 008e155f  8d44242c             lea eax, [esp + 0x2c]
// 008e1563  8bcc                 mov ecx, esp
// 008e1565  89642410             mov dword ptr [esp + 0x10], esp
// 008e1569  50                   push eax
// 008e156a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008e1572  ff1594de9800         call dword ptr [0x98de94]
// 008e1578  51                   push ecx
// 008e1579  8bcc                 mov ecx, esp
// 008e157b  89642418             mov dword ptr [esp + 0x18], esp
// 008e157f  68087e9f00           push 0x9f7e08
// 008e1584  c644242801           mov byte ptr [esp + 0x28], 1
// 008e1589  ff15b8de9800         call dword ptr [0x98deb8]
// 008e158f  8d4c2410             lea ecx, [esp + 0x10]
// 008e1593  51                   push ecx
// 008e1594  8bce                 mov ecx, esi
// 008e1596  c644242800           mov byte ptr [esp + 0x28], 0
// 008e159b  e890fcffff           call 0x8e1230
// 008e15a0  8d4c2408             lea ecx, [esp + 8]
// 008e15a4  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008e15a9  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008e15af  84c0                 test al, al
// 008e15b1  750f                 jne 0x8e15c2
// 008e15b3  8d542408             lea edx, [esp + 8]
// 008e15b7  52                   push edx
// 008e15b8  8d4c242c             lea ecx, [esp + 0x2c]
// 008e15bc  ff1538d59800         call dword ptr [0x98d538]
// 008e15c2  6a5f                 push 0x5f
// 008e15c4  6a2e                 push 0x2e
// 008e15c6  8d4c2430             lea ecx, [esp + 0x30]
// 008e15ca  ff157cdc9800         call dword ptr [0x98dc7c]
// 008e15d0  6a5f                 push 0x5f
// 008e15d2  6a5c                 push 0x5c
// 008e15d4  8d4c2430             lea ecx, [esp + 0x30]
// 008e15d8  ff157cdc9800         call dword ptr [0x98dc7c]
// 008e15de  8b742424             mov esi, dword ptr [esp + 0x24]
// 008e15e2  8d442428             lea eax, [esp + 0x28]
// 008e15e6  50                   push eax
// 008e15e7  8bce                 mov ecx, esi
// 008e15e9  ff1594de9800         call dword ptr [0x98de94]
// 008e15ef  8d4c2408             lea ecx, [esp + 8]
// 008e15f3  ff15c0de9800         call dword ptr [0x98dec0]
// 008e15f9  8d4c2428             lea ecx, [esp + 0x28]
// 008e15fd  ff15c0de9800         call dword ptr [0x98dec0]
// 008e1603  8bc6                 mov eax, esi
// 008e1605  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e1609  64890d00000000       mov dword ptr fs:[0], ecx
// 008e1610  59                   pop ecx
// 008e1611  5e                   pop esi
// 008e1612  83c418               add esp, 0x18
// 008e1615  c20800               ret 8
// copied from an identical function in another client (function ?_ImageNameToResourceName@CXTPOffice2007Images@@IAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp