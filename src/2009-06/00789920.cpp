// roc 2009-06 00789920  unit: CXTPPropertyGridItem  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789920
//
// 00789920  6aff                 push -1
// 00789922  6829ab8700           push 0x87ab29
// 00789927  64a100000000         mov eax, dword ptr fs:[0]
// 0078992d  50                   push eax
// 0078992e  51                   push ecx
// 0078992f  56                   push esi
// 00789930  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00789935  33c4                 xor eax, esp
// 00789937  50                   push eax
// 00789938  8d44240c             lea eax, [esp + 0xc]
// 0078993c  64a300000000         mov dword ptr fs:[0], eax
// 00789942  8bf1                 mov esi, ecx
// 00789944  8d442408             lea eax, [esp + 8]
// 00789948  50                   push eax
// 00789949  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00789951  e8fa7ccaff           call 0x431650
// 00789956  83bef400000000       cmp dword ptr [esi + 0xf4], 0
// 0078995d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00789965  7421                 je 0x789988
// 00789967  8d4c2408             lea ecx, [esp + 8]
// 0078996b  ff1554fb8900         call dword ptr [0x89fb54]
// 00789971  0fb68ef0000000       movzx ecx, byte ptr [esi + 0xf0]
// 00789978  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0078997c  50                   push eax
// 0078997d  51                   push ecx
// 0078997e  8bce                 mov ecx, esi
// 00789980  ff15dcf88900         call dword ptr [0x89f8dc]
// 00789986  eb11                 jmp 0x789999
// 00789988  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0078998c  8d542408             lea edx, [esp + 8]
// 00789990  52                   push edx
// 00789991  8bce                 mov ecx, esi
// 00789993  ff15e4fc8900         call dword ptr [0x89fce4]
// 00789999  8d4c2408             lea ecx, [esp + 8]
// 0078999d  ff1510fd8900         call dword ptr [0x89fd10]
// 007899a3  8bc6                 mov eax, esi
// 007899a5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007899a9  64890d00000000       mov dword ptr fs:[0], ecx
// 007899b0  59                   pop ecx
// 007899b1  5e                   pop esi
// 007899b2  83c410               add esp, 0x10
// 007899b5  c20400               ret 4
// copied from an identical function in another client (function ?GetViewValue@CXTPPropertyGridItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp