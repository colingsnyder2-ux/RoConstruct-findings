// roc 2009-12 00864940  unit: CXTPPropertyGridItem  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864940
//
// 00864940  6aff                 push -1
// 00864942  6899869500           push 0x958699
// 00864947  64a100000000         mov eax, dword ptr fs:[0]
// 0086494d  50                   push eax
// 0086494e  51                   push ecx
// 0086494f  56                   push esi
// 00864950  a10052b600           mov eax, dword ptr [0xb65200]
// 00864955  33c4                 xor eax, esp
// 00864957  50                   push eax
// 00864958  8d44240c             lea eax, [esp + 0xc]
// 0086495c  64a300000000         mov dword ptr fs:[0], eax
// 00864962  8bf1                 mov esi, ecx
// 00864964  8d442408             lea eax, [esp + 8]
// 00864968  50                   push eax
// 00864969  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00864971  e8aadcbcff           call 0x432620
// 00864976  83bef400000000       cmp dword ptr [esi + 0xf4], 0
// 0086497d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00864985  7421                 je 0x8649a8
// 00864987  8d4c2408             lea ecx, [esp + 8]
// 0086498b  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00864991  0fb68ef0000000       movzx ecx, byte ptr [esi + 0xf0]
// 00864998  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0086499c  50                   push eax
// 0086499d  51                   push ecx
// 0086499e  8bce                 mov ecx, esi
// 008649a0  ff15f0da9800         call dword ptr [0x98daf0]
// 008649a6  eb11                 jmp 0x8649b9
// 008649a8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008649ac  8d542408             lea edx, [esp + 8]
// 008649b0  52                   push edx
// 008649b1  8bce                 mov ecx, esi
// 008649b3  ff1594de9800         call dword ptr [0x98de94]
// 008649b9  8d4c2408             lea ecx, [esp + 8]
// 008649bd  ff15c0de9800         call dword ptr [0x98dec0]
// 008649c3  8bc6                 mov eax, esi
// 008649c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008649c9  64890d00000000       mov dword ptr fs:[0], ecx
// 008649d0  59                   pop ecx
// 008649d1  5e                   pop esi
// 008649d2  83c410               add esp, 0x10
// 008649d5  c20400               ret 4
// copied from an identical function in another client (function ?GetViewValue@CXTPPropertyGridItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp