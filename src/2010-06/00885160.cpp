// roc 2010-06 00885160  unit: CXTPTabPaintManager  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00885160
//
// 00885160  6aff                 push -1
// 00885162  68e9c89b00           push 0x9bc8e9
// 00885167  64a100000000         mov eax, dword ptr fs:[0]
// 0088516d  50                   push eax
// 0088516e  83ec08               sub esp, 8
// 00885171  56                   push esi
// 00885172  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00885177  33c4                 xor eax, esp
// 00885179  50                   push eax
// 0088517a  8d442410             lea eax, [esp + 0x10]
// 0088517e  64a300000000         mov dword ptr fs:[0], eax
// 00885184  8bf1                 mov esi, ecx
// 00885186  f744242800080000     test dword ptr [esp + 0x28], 0x800
// 0088518e  742b                 je 0x8851bb
// 00885190  8b742424             mov esi, dword ptr [esp + 0x24]
// 00885194  8d442408             lea eax, [esp + 8]
// 00885198  50                   push eax
// 00885199  8bce                 mov ecx, esi
// 0088519b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008851a1  50                   push eax
// 008851a2  8bce                 mov ecx, esi
// 008851a4  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008851aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008851ae  8b5108               mov edx, dword ptr [ecx + 8]
// 008851b1  50                   push eax
// 008851b2  52                   push edx
// 008851b3  ff1594a19e00         call dword ptr [0x9ea194]
// 008851b9  eb56                 jmp 0x885211
// 008851bb  8b442424             mov eax, dword ptr [esp + 0x24]
// 008851bf  50                   push eax
// 008851c0  8d4c2428             lea ecx, [esp + 0x28]
// 008851c4  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 008851ca  8d4c2424             lea ecx, [esp + 0x24]
// 008851ce  51                   push ecx
// 008851cf  8bce                 mov ecx, esi
// 008851d1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008851d9  e8a2f8ffff           call 0x884a80
// 008851de  8d542408             lea edx, [esp + 8]
// 008851e2  52                   push edx
// 008851e3  8d4c2428             lea ecx, [esp + 0x28]
// 008851e7  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008851ed  50                   push eax
// 008851ee  8d4c242c             lea ecx, [esp + 0x2c]
// 008851f2  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008851f8  50                   push eax
// 008851f9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008851fd  8b4808               mov ecx, dword ptr [eax + 8]
// 00885200  51                   push ecx
// 00885201  ff1594a19e00         call dword ptr [0x9ea194]
// 00885207  8d4c2424             lea ecx, [esp + 0x24]
// 0088520b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00885211  8b442408             mov eax, dword ptr [esp + 8]
// 00885215  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00885219  64890d00000000       mov dword ptr fs:[0], ecx
// 00885220  59                   pop ecx
// 00885221  5e                   pop esi
// 00885222  83c414               add esp, 0x14
// 00885225  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPrefixTextExtent@CXTPTabPaintManager@@IAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp