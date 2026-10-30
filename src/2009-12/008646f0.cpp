// roc 2009-12 008646f0  unit: CXTPPropertyGridItem  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008646f0
//
// 008646f0  6aff                 push -1
// 008646f2  6878ed9500           push 0x95ed78
// 008646f7  64a100000000         mov eax, dword ptr fs:[0]
// 008646fd  50                   push eax
// 008646fe  83ec0c               sub esp, 0xc
// 00864701  56                   push esi
// 00864702  57                   push edi
// 00864703  a10052b600           mov eax, dword ptr [0xb65200]
// 00864708  33c4                 xor eax, esp
// 0086470a  50                   push eax
// 0086470b  8d442418             lea eax, [esp + 0x18]
// 0086470f  64a300000000         mov dword ptr fs:[0], eax
// 00864715  8bf1                 mov esi, ecx
// 00864717  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0086471e  7516                 jne 0x864736
// 00864720  33c0                 xor eax, eax
// 00864722  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00864726  64890d00000000       mov dword ptr fs:[0], ecx
// 0086472d  59                   pop ecx
// 0086472e  5f                   pop edi
// 0086472f  5e                   pop esi
// 00864730  83c418               add esp, 0x18
// 00864733  c20400               ret 4
// 00864736  8d4c2410             lea ecx, [esp + 0x10]
// 0086473a  ff1574de9800         call dword ptr [0x98de74]
// 00864740  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00864744  57                   push edi
// 00864745  8d4c2414             lea ecx, [esp + 0x14]
// 00864749  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00864751  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00864759  ff1538d59800         call dword ptr [0x98d538]
// 0086475f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00864765  89742414             mov dword ptr [esp + 0x14], esi
// 00864769  85c9                 test ecx, ecx
// 0086476b  7419                 je 0x864786
// 0086476d  8d44240c             lea eax, [esp + 0xc]
// 00864771  50                   push eax
// 00864772  6a0c                 push 0xc
// 00864774  e897310000           call 0x867910
// 00864779  8d4c2410             lea ecx, [esp + 0x10]
// 0086477d  51                   push ecx
// 0086477e  8bcf                 mov ecx, edi
// 00864780  ff1538d59800         call dword ptr [0x98d538]
// 00864786  33d2                 xor edx, edx
// 00864788  3954240c             cmp dword ptr [esp + 0xc], edx
// 0086478c  8d4c2410             lea ecx, [esp + 0x10]
// 00864790  0f94c2               sete dl
// 00864793  8bf2                 mov esi, edx
// 00864795  ff15c0de9800         call dword ptr [0x98dec0]
// 0086479b  8bc6                 mov eax, esi
// 0086479d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008647a1  64890d00000000       mov dword ptr fs:[0], ecx
// 008647a8  59                   pop ecx
// 008647a9  5f                   pop edi
// 008647aa  5e                   pop esi
// 008647ab  83c418               add esp, 0x18
// 008647ae  c20400               ret 4
// copied from an identical function in another client (function ?OnAfterEdit@CXTPPropertyGridItem@@UAEHAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp