// roc 2009-12 0086ae50  unit: CXTPPropertyGridItemBool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ae50
//
// 0086ae50  6aff                 push -1
// 0086ae52  6899e39500           push 0x95e399
// 0086ae57  64a100000000         mov eax, dword ptr fs:[0]
// 0086ae5d  50                   push eax
// 0086ae5e  56                   push esi
// 0086ae5f  57                   push edi
// 0086ae60  a10052b600           mov eax, dword ptr [0xb65200]
// 0086ae65  33c4                 xor eax, esp
// 0086ae67  50                   push eax
// 0086ae68  8d44240c             lea eax, [esp + 0xc]
// 0086ae6c  64a300000000         mov dword ptr fs:[0], eax
// 0086ae72  8bf1                 mov esi, ecx
// 0086ae74  8b3e                 mov edi, dword ptr [esi]
// 0086ae76  8d8e14010000         lea ecx, [esi + 0x114]
// 0086ae7c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0086ae84  ff1580de9800         call dword ptr [0x98de80]
// 0086ae8a  50                   push eax
// 0086ae8b  8d4c2420             lea ecx, [esp + 0x20]
// 0086ae8f  ff15d4cf9800         call dword ptr [0x98cfd4]
// 0086ae95  f7d8                 neg eax
// 0086ae97  1bc0                 sbb eax, eax
// 0086ae99  40                   inc eax
// 0086ae9a  50                   push eax
// 0086ae9b  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 0086aea1  8bce                 mov ecx, esi
// 0086aea3  ffd0                 call eax
// 0086aea5  8d4c241c             lea ecx, [esp + 0x1c]
// 0086aea9  ff15c0de9800         call dword ptr [0x98dec0]
// 0086aeaf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086aeb3  64890d00000000       mov dword ptr fs:[0], ecx
// 0086aeba  59                   pop ecx
// 0086aebb  5f                   pop edi
// 0086aebc  5e                   pop esi
// 0086aebd  83c40c               add esp, 0xc
// 0086aec0  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItemBool@@MAEXV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemBool.cpp