// roc 2009-12 008d0fb0  unit: CXTPTabPaintManager  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0fb0
//
// 008d0fb0  6aff                 push -1
// 008d0fb2  68395a9600           push 0x965a39
// 008d0fb7  64a100000000         mov eax, dword ptr fs:[0]
// 008d0fbd  50                   push eax
// 008d0fbe  83ec08               sub esp, 8
// 008d0fc1  56                   push esi
// 008d0fc2  a10052b600           mov eax, dword ptr [0xb65200]
// 008d0fc7  33c4                 xor eax, esp
// 008d0fc9  50                   push eax
// 008d0fca  8d442410             lea eax, [esp + 0x10]
// 008d0fce  64a300000000         mov dword ptr fs:[0], eax
// 008d0fd4  8bf1                 mov esi, ecx
// 008d0fd6  f744242800080000     test dword ptr [esp + 0x28], 0x800
// 008d0fde  742b                 je 0x8d100b
// 008d0fe0  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d0fe4  8d442408             lea eax, [esp + 8]
// 008d0fe8  50                   push eax
// 008d0fe9  8bce                 mov ecx, esi
// 008d0feb  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d0ff1  50                   push eax
// 008d0ff2  8bce                 mov ecx, esi
// 008d0ff4  ff1580de9800         call dword ptr [0x98de80]
// 008d0ffa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d0ffe  8b5108               mov edx, dword ptr [ecx + 8]
// 008d1001  50                   push eax
// 008d1002  52                   push edx
// 008d1003  ff156cb19800         call dword ptr [0x98b16c]
// 008d1009  eb56                 jmp 0x8d1061
// 008d100b  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d100f  50                   push eax
// 008d1010  8d4c2428             lea ecx, [esp + 0x28]
// 008d1014  ff1594de9800         call dword ptr [0x98de94]
// 008d101a  8d4c2424             lea ecx, [esp + 0x24]
// 008d101e  51                   push ecx
// 008d101f  8bce                 mov ecx, esi
// 008d1021  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008d1029  e892f8ffff           call 0x8d08c0
// 008d102e  8d542408             lea edx, [esp + 8]
// 008d1032  52                   push edx
// 008d1033  8d4c2428             lea ecx, [esp + 0x28]
// 008d1037  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d103d  50                   push eax
// 008d103e  8d4c242c             lea ecx, [esp + 0x2c]
// 008d1042  ff1580de9800         call dword ptr [0x98de80]
// 008d1048  50                   push eax
// 008d1049  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d104d  8b4808               mov ecx, dword ptr [eax + 8]
// 008d1050  51                   push ecx
// 008d1051  ff156cb19800         call dword ptr [0x98b16c]
// 008d1057  8d4c2424             lea ecx, [esp + 0x24]
// 008d105b  ff15c0de9800         call dword ptr [0x98dec0]
// 008d1061  8b442408             mov eax, dword ptr [esp + 8]
// 008d1065  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d1069  64890d00000000       mov dword ptr fs:[0], ecx
// 008d1070  59                   pop ecx
// 008d1071  5e                   pop esi
// 008d1072  83c414               add esp, 0x14
// 008d1075  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPrefixTextExtent@CXTPTabPaintManager@@IAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp