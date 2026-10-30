// roc 2012-06 00a4e3b0  unit: CXTPTabPaintManager  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4e3b0
//
// 00a4e3b0  6aff                 push -1
// 00a4e3b2  68b980ae00           push 0xae80b9
// 00a4e3b7  64a100000000         mov eax, dword ptr fs:[0]
// 00a4e3bd  50                   push eax
// 00a4e3be  83ec08               sub esp, 8
// 00a4e3c1  56                   push esi
// 00a4e3c2  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a4e3c7  33c4                 xor eax, esp
// 00a4e3c9  50                   push eax
// 00a4e3ca  8d442410             lea eax, [esp + 0x10]
// 00a4e3ce  64a300000000         mov dword ptr fs:[0], eax
// 00a4e3d4  8bf1                 mov esi, ecx
// 00a4e3d6  f744242800080000     test dword ptr [esp + 0x28], 0x800
// 00a4e3de  742b                 je 0xa4e40b
// 00a4e3e0  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a4e3e4  8d442408             lea eax, [esp + 8]
// 00a4e3e8  50                   push eax
// 00a4e3e9  8bce                 mov ecx, esi
// 00a4e3eb  ff155846b200         call dword ptr [0xb24658]
// 00a4e3f1  50                   push eax
// 00a4e3f2  8bce                 mov ecx, esi
// 00a4e3f4  ff159847b200         call dword ptr [0xb24798]
// 00a4e3fa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a4e3fe  8b5108               mov edx, dword ptr [ecx + 8]
// 00a4e401  50                   push eax
// 00a4e402  52                   push edx
// 00a4e403  ff154021b200         call dword ptr [0xb22140]
// 00a4e409  eb56                 jmp 0xa4e461
// 00a4e40b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a4e40f  50                   push eax
// 00a4e410  8d4c2428             lea ecx, [esp + 0x28]
// 00a4e414  ff158047b200         call dword ptr [0xb24780]
// 00a4e41a  8d4c2424             lea ecx, [esp + 0x24]
// 00a4e41e  51                   push ecx
// 00a4e41f  8bce                 mov ecx, esi
// 00a4e421  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a4e429  e8b2f8ffff           call 0xa4dce0
// 00a4e42e  8d542408             lea edx, [esp + 8]
// 00a4e432  52                   push edx
// 00a4e433  8d4c2428             lea ecx, [esp + 0x28]
// 00a4e437  ff155846b200         call dword ptr [0xb24658]
// 00a4e43d  50                   push eax
// 00a4e43e  8d4c242c             lea ecx, [esp + 0x2c]
// 00a4e442  ff159847b200         call dword ptr [0xb24798]
// 00a4e448  50                   push eax
// 00a4e449  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a4e44d  8b4808               mov ecx, dword ptr [eax + 8]
// 00a4e450  51                   push ecx
// 00a4e451  ff154021b200         call dword ptr [0xb22140]
// 00a4e457  8d4c2424             lea ecx, [esp + 0x24]
// 00a4e45b  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e461  8b442408             mov eax, dword ptr [esp + 8]
// 00a4e465  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4e469  64890d00000000       mov dword ptr fs:[0], ecx
// 00a4e470  59                   pop ecx
// 00a4e471  5e                   pop esi
// 00a4e472  83c414               add esp, 0x14
// 00a4e475  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPrefixTextExtent@CXTPTabPaintManager@@IAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp