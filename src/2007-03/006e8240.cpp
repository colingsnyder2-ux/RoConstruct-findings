// roc 2007-03 006e8240  unit: seg_006e0000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e8240
//
// 006e8240  6aff                 push -1
// 006e8242  68699a7600           push 0x769a69
// 006e8247  64a100000000         mov eax, dword ptr fs:[0]
// 006e824d  50                   push eax
// 006e824e  83ec08               sub esp, 8
// 006e8251  56                   push esi
// 006e8252  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006e8257  33c4                 xor eax, esp
// 006e8259  50                   push eax
// 006e825a  8d442410             lea eax, [esp + 0x10]
// 006e825e  64a300000000         mov dword ptr fs:[0], eax
// 006e8264  8bf1                 mov esi, ecx
// 006e8266  f744242800080000     test dword ptr [esp + 0x28], 0x800
// 006e826e  742b                 je 0x6e829b
// 006e8270  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e8274  8d442408             lea eax, [esp + 8]
// 006e8278  50                   push eax
// 006e8279  8bce                 mov ecx, esi
// 006e827b  ff1520db7700         call dword ptr [0x77db20]
// 006e8281  50                   push eax
// 006e8282  8bce                 mov ecx, esi
// 006e8284  ff1554dd7700         call dword ptr [0x77dd54]
// 006e828a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006e828e  8b5108               mov edx, dword ptr [ecx + 8]
// 006e8291  50                   push eax
// 006e8292  52                   push edx
// 006e8293  ff15bcd07700         call dword ptr [0x77d0bc]
// 006e8299  eb56                 jmp 0x6e82f1
// 006e829b  8b442424             mov eax, dword ptr [esp + 0x24]
// 006e829f  50                   push eax
// 006e82a0  8d4c2428             lea ecx, [esp + 0x28]
// 006e82a4  ff152cdd7700         call dword ptr [0x77dd2c]
// 006e82aa  8d4c2424             lea ecx, [esp + 0x24]
// 006e82ae  51                   push ecx
// 006e82af  8bce                 mov ecx, esi
// 006e82b1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006e82b9  e802faffff           call 0x6e7cc0
// 006e82be  8d542408             lea edx, [esp + 8]
// 006e82c2  52                   push edx
// 006e82c3  8d4c2428             lea ecx, [esp + 0x28]
// 006e82c7  ff1520db7700         call dword ptr [0x77db20]
// 006e82cd  50                   push eax
// 006e82ce  8d4c242c             lea ecx, [esp + 0x2c]
// 006e82d2  ff1554dd7700         call dword ptr [0x77dd54]
// 006e82d8  50                   push eax
// 006e82d9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006e82dd  8b4808               mov ecx, dword ptr [eax + 8]
// 006e82e0  51                   push ecx
// 006e82e1  ff15bcd07700         call dword ptr [0x77d0bc]
// 006e82e7  8d4c2424             lea ecx, [esp + 0x24]
// 006e82eb  ff1578dd7700         call dword ptr [0x77dd78]
// 006e82f1  8b442408             mov eax, dword ptr [esp + 8]
// 006e82f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e82f9  64890d00000000       mov dword ptr fs:[0], ecx
// 006e8300  59                   pop ecx
// 006e8301  5e                   pop esi
// 006e8302  83c414               add esp, 0x14
// 006e8305  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPrefixTextExtent@CXTPTabPaintManager@@IAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp