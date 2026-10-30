// roc 2007-08 00700240  unit: CXTPTabPaintManager  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00700240
//
// 00700240  6aff                 push -1
// 00700242  6809a37600           push 0x76a309
// 00700247  64a100000000         mov eax, dword ptr fs:[0]
// 0070024d  50                   push eax
// 0070024e  83ec08               sub esp, 8
// 00700251  56                   push esi
// 00700252  a188518b00           mov eax, dword ptr [0x8b5188]
// 00700257  33c4                 xor eax, esp
// 00700259  50                   push eax
// 0070025a  8d442410             lea eax, [esp + 0x10]
// 0070025e  64a300000000         mov dword ptr fs:[0], eax
// 00700264  8bf1                 mov esi, ecx
// 00700266  f744242800080000     test dword ptr [esp + 0x28], 0x800
// 0070026e  742b                 je 0x70029b
// 00700270  8b742424             mov esi, dword ptr [esp + 0x24]
// 00700274  8d442408             lea eax, [esp + 8]
// 00700278  50                   push eax
// 00700279  8bce                 mov ecx, esi
// 0070027b  ff15c8dc7700         call dword ptr [0x77dcc8]
// 00700281  50                   push eax
// 00700282  8bce                 mov ecx, esi
// 00700284  ff1598dd7700         call dword ptr [0x77dd98]
// 0070028a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0070028e  8b5108               mov edx, dword ptr [ecx + 8]
// 00700291  50                   push eax
// 00700292  52                   push edx
// 00700293  ff15b8d07700         call dword ptr [0x77d0b8]
// 00700299  eb56                 jmp 0x7002f1
// 0070029b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0070029f  50                   push eax
// 007002a0  8d4c2428             lea ecx, [esp + 0x28]
// 007002a4  ff1574dd7700         call dword ptr [0x77dd74]
// 007002aa  8d4c2424             lea ecx, [esp + 0x24]
// 007002ae  51                   push ecx
// 007002af  8bce                 mov ecx, esi
// 007002b1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007002b9  e882f7ffff           call 0x6ffa40
// 007002be  8d542408             lea edx, [esp + 8]
// 007002c2  52                   push edx
// 007002c3  8d4c2428             lea ecx, [esp + 0x28]
// 007002c7  ff15c8dc7700         call dword ptr [0x77dcc8]
// 007002cd  50                   push eax
// 007002ce  8d4c242c             lea ecx, [esp + 0x2c]
// 007002d2  ff1598dd7700         call dword ptr [0x77dd98]
// 007002d8  50                   push eax
// 007002d9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007002dd  8b4808               mov ecx, dword ptr [eax + 8]
// 007002e0  51                   push ecx
// 007002e1  ff15b8d07700         call dword ptr [0x77d0b8]
// 007002e7  8d4c2424             lea ecx, [esp + 0x24]
// 007002eb  ff15bcdd7700         call dword ptr [0x77ddbc]
// 007002f1  8b442408             mov eax, dword ptr [esp + 8]
// 007002f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007002f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00700300  59                   pop ecx
// 00700301  5e                   pop esi
// 00700302  83c414               add esp, 0x14
// 00700305  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPrefixTextExtent@CXTPTabPaintManager@@IAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp