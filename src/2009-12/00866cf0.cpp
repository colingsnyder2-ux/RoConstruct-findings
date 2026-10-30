// roc 2009-12 00866cf0  unit: CXTPPropertyGridItems  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866cf0
//
// 00866cf0  6aff                 push -1
// 00866cf2  68cbf09500           push 0x95f0cb
// 00866cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00866cfd  50                   push eax
// 00866cfe  51                   push ecx
// 00866cff  53                   push ebx
// 00866d00  56                   push esi
// 00866d01  57                   push edi
// 00866d02  a10052b600           mov eax, dword ptr [0xb65200]
// 00866d07  33c4                 xor eax, esp
// 00866d09  50                   push eax
// 00866d0a  8d442414             lea eax, [esp + 0x14]
// 00866d0e  64a300000000         mov dword ptr fs:[0], eax
// 00866d14  8bf1                 mov esi, ecx
// 00866d16  89742410             mov dword ptr [esp + 0x10], esi
// 00866d1a  e823f70b00           call 0x926442
// 00866d1f  8d7e20               lea edi, [esi + 0x20]
// 00866d22  8bcf                 mov ecx, edi
// 00866d24  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00866d2c  e8af5afdff           call 0x83c7e0
// 00866d31  c707aceb9f00         mov dword ptr [edi], 0x9febac
// 00866d37  8dbea4000000         lea edi, [esi + 0xa4]
// 00866d3d  8bcf                 mov ecx, edi
// 00866d3f  c706c4ea9f00         mov dword ptr [esi], 0x9feac4
// 00866d45  ff1574de9800         call dword ptr [0x98de74]
// 00866d4b  8d9ea8000000         lea ebx, [esi + 0xa8]
// 00866d51  8bcb                 mov ecx, ebx
// 00866d53  ff1574de9800         call dword ptr [0x98de74]
// 00866d59  8d8eac000000         lea ecx, [esi + 0xac]
// 00866d5f  ff1574de9800         call dword ptr [0x98de74]
// 00866d65  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00866d6b  ff1574de9800         call dword ptr [0x98de74]
// 00866d71  8d8eb4000000         lea ecx, [esi + 0xb4]
// 00866d77  ff1574de9800         call dword ptr [0x98de74]
// 00866d7d  8d8ee4000000         lea ecx, [esi + 0xe4]
// 00866d83  ff1574de9800         call dword ptr [0x98de74]
// 00866d89  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00866d8f  ff1574de9800         call dword ptr [0x98de74]
// 00866d95  8d8eec000000         lea ecx, [esi + 0xec]
// 00866d9b  ff1574de9800         call dword ptr [0x98de74]
// 00866da1  8bce                 mov ecx, esi
// 00866da3  c644241c09           mov byte ptr [esp + 0x1c], 9
// 00866da8  e823faffff           call 0x8667d0
// 00866dad  8b442424             mov eax, dword ptr [esp + 0x24]
// 00866db1  50                   push eax
// 00866db2  8bce                 mov ecx, esi
// 00866db4  e8d7d7ffff           call 0x864590
// 00866db9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00866dbd  51                   push ecx
// 00866dbe  8bcf                 mov ecx, edi
// 00866dc0  ff155cde9800         call dword ptr [0x98de5c]
// 00866dc6  50                   push eax
// 00866dc7  8bcb                 mov ecx, ebx
// 00866dc9  ff1538d59800         call dword ptr [0x98d538]
// 00866dcf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00866dd3  52                   push edx
// 00866dd4  8bce                 mov ecx, esi
// 00866dd6  e8b5daffff           call 0x864890
// 00866ddb  8bc6                 mov eax, esi
// 00866ddd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00866de1  64890d00000000       mov dword ptr fs:[0], ecx
// 00866de8  59                   pop ecx
// 00866de9  5f                   pop edi
// 00866dea  5e                   pop esi
// 00866deb  5b                   pop ebx
// 00866dec  83c410               add esp, 0x10
// 00866def  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CXTPPropertyGridItem@@QAE@PBD0PAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp