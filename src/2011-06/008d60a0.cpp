// roc 2011-06 008d60a0  unit: CXTPTabPaintManager  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d60a0
//
// 008d60a0  6aff                 push -1
// 008d60a2  68c96da000           push 0xa06dc9
// 008d60a7  64a100000000         mov eax, dword ptr fs:[0]
// 008d60ad  50                   push eax
// 008d60ae  83ec08               sub esp, 8
// 008d60b1  56                   push esi
// 008d60b2  a12058c900           mov eax, dword ptr [0xc95820]
// 008d60b7  33c4                 xor eax, esp
// 008d60b9  50                   push eax
// 008d60ba  8d442410             lea eax, [esp + 0x10]
// 008d60be  64a300000000         mov dword ptr fs:[0], eax
// 008d60c4  8bf1                 mov esi, ecx
// 008d60c6  f744242800080000     test dword ptr [esp + 0x28], 0x800
// 008d60ce  742b                 je 0x8d60fb
// 008d60d0  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d60d4  8d442408             lea eax, [esp + 8]
// 008d60d8  50                   push eax
// 008d60d9  8bce                 mov ecx, esi
// 008d60db  ff15a826a400         call dword ptr [0xa426a8]
// 008d60e1  50                   push eax
// 008d60e2  8bce                 mov ecx, esi
// 008d60e4  ff15c82da400         call dword ptr [0xa42dc8]
// 008d60ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d60ee  8b5108               mov edx, dword ptr [ecx + 8]
// 008d60f1  50                   push eax
// 008d60f2  52                   push edx
// 008d60f3  ff153801a400         call dword ptr [0xa40138]
// 008d60f9  eb56                 jmp 0x8d6151
// 008d60fb  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d60ff  50                   push eax
// 008d6100  8d4c2428             lea ecx, [esp + 0x28]
// 008d6104  ff15e42da400         call dword ptr [0xa42de4]
// 008d610a  8d4c2424             lea ecx, [esp + 0x24]
// 008d610e  51                   push ecx
// 008d610f  8bce                 mov ecx, esi
// 008d6111  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008d6119  e872f8ffff           call 0x8d5990
// 008d611e  8d542408             lea edx, [esp + 8]
// 008d6122  52                   push edx
// 008d6123  8d4c2428             lea ecx, [esp + 0x28]
// 008d6127  ff15a826a400         call dword ptr [0xa426a8]
// 008d612d  50                   push eax
// 008d612e  8d4c242c             lea ecx, [esp + 0x2c]
// 008d6132  ff15c82da400         call dword ptr [0xa42dc8]
// 008d6138  50                   push eax
// 008d6139  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d613d  8b4808               mov ecx, dword ptr [eax + 8]
// 008d6140  51                   push ecx
// 008d6141  ff153801a400         call dword ptr [0xa40138]
// 008d6147  8d4c2424             lea ecx, [esp + 0x24]
// 008d614b  ff15082ea400         call dword ptr [0xa42e08]
// 008d6151  8b442408             mov eax, dword ptr [esp + 8]
// 008d6155  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d6159  64890d00000000       mov dword ptr fs:[0], ecx
// 008d6160  59                   pop ecx
// 008d6161  5e                   pop esi
// 008d6162  83c414               add esp, 0x14
// 008d6165  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPrefixTextExtent@CXTPTabPaintManager@@IAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp