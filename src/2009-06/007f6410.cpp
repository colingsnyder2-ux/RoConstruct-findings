// roc 2009-06 007f6410  unit: CXTPTabPaintManager  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f6410
//
// 007f6410  6aff                 push -1
// 007f6412  68e99c8700           push 0x879ce9
// 007f6417  64a100000000         mov eax, dword ptr fs:[0]
// 007f641d  50                   push eax
// 007f641e  83ec08               sub esp, 8
// 007f6421  56                   push esi
// 007f6422  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f6427  33c4                 xor eax, esp
// 007f6429  50                   push eax
// 007f642a  8d442410             lea eax, [esp + 0x10]
// 007f642e  64a300000000         mov dword ptr fs:[0], eax
// 007f6434  8bf1                 mov esi, ecx
// 007f6436  f744242800080000     test dword ptr [esp + 0x28], 0x800
// 007f643e  742b                 je 0x7f646b
// 007f6440  8b742424             mov esi, dword ptr [esp + 0x24]
// 007f6444  8d442408             lea eax, [esp + 8]
// 007f6448  50                   push eax
// 007f6449  8bce                 mov ecx, esi
// 007f644b  ff1554fb8900         call dword ptr [0x89fb54]
// 007f6451  50                   push eax
// 007f6452  8bce                 mov ecx, esi
// 007f6454  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f645a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f645e  8b5108               mov edx, dword ptr [ecx + 8]
// 007f6461  50                   push eax
// 007f6462  52                   push edx
// 007f6463  ff1550e18900         call dword ptr [0x89e150]
// 007f6469  eb56                 jmp 0x7f64c1
// 007f646b  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f646f  50                   push eax
// 007f6470  8d4c2428             lea ecx, [esp + 0x28]
// 007f6474  ff15e4fc8900         call dword ptr [0x89fce4]
// 007f647a  8d4c2424             lea ecx, [esp + 0x24]
// 007f647e  51                   push ecx
// 007f647f  8bce                 mov ecx, esi
// 007f6481  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007f6489  e862f8ffff           call 0x7f5cf0
// 007f648e  8d542408             lea edx, [esp + 8]
// 007f6492  52                   push edx
// 007f6493  8d4c2428             lea ecx, [esp + 0x28]
// 007f6497  ff1554fb8900         call dword ptr [0x89fb54]
// 007f649d  50                   push eax
// 007f649e  8d4c242c             lea ecx, [esp + 0x2c]
// 007f64a2  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f64a8  50                   push eax
// 007f64a9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f64ad  8b4808               mov ecx, dword ptr [eax + 8]
// 007f64b0  51                   push ecx
// 007f64b1  ff1550e18900         call dword ptr [0x89e150]
// 007f64b7  8d4c2424             lea ecx, [esp + 0x24]
// 007f64bb  ff1510fd8900         call dword ptr [0x89fd10]
// 007f64c1  8b442408             mov eax, dword ptr [esp + 8]
// 007f64c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f64c9  64890d00000000       mov dword ptr fs:[0], ecx
// 007f64d0  59                   pop ecx
// 007f64d1  5e                   pop esi
// 007f64d2  83c414               add esp, 0x14
// 007f64d5  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPrefixTextExtent@CXTPTabPaintManager@@IAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp