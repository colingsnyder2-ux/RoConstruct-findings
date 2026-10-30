// roc 2009-12 008f0650  unit: CXTPRibbonControlTab  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0650
//
// 008f0650  6aff                 push -1
// 008f0652  68395a9600           push 0x965a39
// 008f0657  64a100000000         mov eax, dword ptr fs:[0]
// 008f065d  50                   push eax
// 008f065e  51                   push ecx
// 008f065f  56                   push esi
// 008f0660  57                   push edi
// 008f0661  a10052b600           mov eax, dword ptr [0xb65200]
// 008f0666  33c4                 xor eax, esp
// 008f0668  50                   push eax
// 008f0669  8d442410             lea eax, [esp + 0x10]
// 008f066d  64a300000000         mov dword ptr fs:[0], eax
// 008f0673  8b742424             mov esi, dword ptr [esp + 0x24]
// 008f0677  56                   push esi
// 008f0678  8d442428             lea eax, [esp + 0x28]
// 008f067c  33ff                 xor edi, edi
// 008f067e  50                   push eax
// 008f067f  897c2414             mov dword ptr [esp + 0x14], edi
// 008f0683  e828ddfdff           call 0x8ce3b0
// 008f0688  8d4c2424             lea ecx, [esp + 0x24]
// 008f068c  897c2418             mov dword ptr [esp + 0x18], edi
// 008f0690  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008f0696  84c0                 test al, al
// 008f0698  7531                 jne 0x8f06cb
// 008f069a  8b742420             mov esi, dword ptr [esp + 0x20]
// 008f069e  8d4c2424             lea ecx, [esp + 0x24]
// 008f06a2  51                   push ecx
// 008f06a3  8bce                 mov ecx, esi
// 008f06a5  ff1594de9800         call dword ptr [0x98de94]
// 008f06ab  8d4c2424             lea ecx, [esp + 0x24]
// 008f06af  ff15c0de9800         call dword ptr [0x98dec0]
// 008f06b5  8bc6                 mov eax, esi
// 008f06b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f06bb  64890d00000000       mov dword ptr fs:[0], ecx
// 008f06c2  59                   pop ecx
// 008f06c3  5f                   pop edi
// 008f06c4  5e                   pop esi
// 008f06c5  83c410               add esp, 0x10
// 008f06c8  c20800               ret 8
// 008f06cb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008f06cf  57                   push edi
// 008f06d0  8bce                 mov ecx, esi
// 008f06d2  e8f9d8fdff           call 0x8cdfd0
// 008f06d7  8d4c2424             lea ecx, [esp + 0x24]
// 008f06db  ff15c0de9800         call dword ptr [0x98dec0]
// 008f06e1  8bc7                 mov eax, edi
// 008f06e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f06e7  64890d00000000       mov dword ptr fs:[0], ecx
// 008f06ee  59                   pop ecx
// 008f06ef  5f                   pop edi
// 008f06f0  5e                   pop esi
// 008f06f1  83c410               add esp, 0x10
// 008f06f4  c20800               ret 8
// copied from an identical function in another client (function ?GetItemTooltip@CXTPRibbonControlTab@@MBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp