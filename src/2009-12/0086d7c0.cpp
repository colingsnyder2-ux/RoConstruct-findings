// roc 2009-12 0086d7c0  unit: CXTPReportColumns  size: 847 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d7c0
//
// 0086d7c0  6aff                 push -1
// 0086d7c2  6829f99500           push 0x95f929
// 0086d7c7  64a100000000         mov eax, dword ptr fs:[0]
// 0086d7cd  50                   push eax
// 0086d7ce  81ece0000000         sub esp, 0xe0
// 0086d7d4  53                   push ebx
// 0086d7d5  55                   push ebp
// 0086d7d6  56                   push esi
// 0086d7d7  57                   push edi
// 0086d7d8  a10052b600           mov eax, dword ptr [0xb65200]
// 0086d7dd  33c4                 xor eax, esp
// 0086d7df  50                   push eax
// 0086d7e0  8d8424f4000000       lea eax, [esp + 0xf4]
// 0086d7e7  64a300000000         mov dword ptr fs:[0], eax
// 0086d7ed  8bd9                 mov ebx, ecx
// 0086d7ef  8d4c2418             lea ecx, [esp + 0x18]
// 0086d7f3  ff1574de9800         call dword ptr [0x98de74]
// 0086d7f9  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 0086d800  8b07                 mov eax, dword ptr [edi]
// 0086d802  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0086d808  33f6                 xor esi, esi
// 0086d80a  89b424fc000000       mov dword ptr [esp + 0xfc], esi
// 0086d811  68ac04a000           push 0xa004ac
// 0086d816  8bcf                 mov ecx, edi
// 0086d818  397728               cmp dword ptr [edi + 0x28], esi
// 0086d81b  0f8501010000         jne 0x86d922
// 0086d821  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0086d824  89742430             mov dword ptr [esp + 0x30], esi
// 0086d828  ffd2                 call edx
// 0086d82a  8be8                 mov ebp, eax
// 0086d82c  896c2424             mov dword ptr [esp + 0x24], ebp
// 0086d830  8b4500               mov eax, dword ptr [ebp]
// 0086d833  8b5004               mov edx, dword ptr [eax + 4]
// 0086d836  6a00                 push 0
// 0086d838  56                   push esi
// 0086d839  8bcd                 mov ecx, ebp
// 0086d83b  c684240401000001     mov byte ptr [esp + 0x104], 1
// 0086d843  ffd2                 call edx
// 0086d845  8944241c             mov dword ptr [esp + 0x1c], eax
// 0086d849  33c0                 xor eax, eax
// 0086d84b  89442414             mov dword ptr [esp + 0x14], eax
// 0086d84f  85f6                 test esi, esi
// 0086d851  0f8eb3000000         jle 0x86d90a
// 0086d857  eb0b                 jmp 0x86d864
// 0086d859  8da42400000000       lea esp, [esp]
// 0086d860  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086d864  85c0                 test eax, eax
// 0086d866  7c10                 jl 0x86d878
// 0086d868  3b4330               cmp eax, dword ptr [ebx + 0x30]
// 0086d86b  7d0b                 jge 0x86d878
// 0086d86d  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 0086d870  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 0086d873  8d0481               lea eax, [ecx + eax*4]
// 0086d876  eb02                 jmp 0x86d87a
// 0086d878  33ff                 xor edi, edi
// 0086d87a  8b5500               mov edx, dword ptr [ebp]
// 0086d87d  8b5208               mov edx, dword ptr [edx + 8]
// 0086d880  8d44241c             lea eax, [esp + 0x1c]
// 0086d884  50                   push eax
// 0086d885  8bcd                 mov ecx, ebp
// 0086d887  ffd2                 call edx
// 0086d889  8bf0                 mov esi, eax
// 0086d88b  89742428             mov dword ptr [esp + 0x28], esi
// 0086d88f  8bcf                 mov ecx, edi
// 0086d891  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 0086d899  e8d27fc6ff           call 0x4d5870
// 0086d89e  89442420             mov dword ptr [esp + 0x20], eax
// 0086d8a2  8d4720               lea eax, [edi + 0x20]
// 0086d8a5  50                   push eax
// 0086d8a6  8d4c241c             lea ecx, [esp + 0x1c]
// 0086d8aa  ff1538d59800         call dword ptr [0x98d538]
// 0086d8b0  8d4c2420             lea ecx, [esp + 0x20]
// 0086d8b4  51                   push ecx
// 0086d8b5  68a004a000           push 0xa004a0
// 0086d8ba  56                   push esi
// 0086d8bb  e81031feff           call 0x8509d0
// 0086d8c0  8d542424             lea edx, [esp + 0x24]
// 0086d8c4  52                   push edx
// 0086d8c5  6874169b00           push 0x9b1674
// 0086d8ca  56                   push esi
// 0086d8cb  e8c031feff           call 0x850a90
// 0086d8d0  8b07                 mov eax, dword ptr [edi]
// 0086d8d2  8b5058               mov edx, dword ptr [eax + 0x58]
// 0086d8d5  83c418               add esp, 0x18
// 0086d8d8  56                   push esi
// 0086d8d9  8bcf                 mov ecx, edi
// 0086d8db  ffd2                 call edx
// 0086d8dd  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 0086d8e5  85f6                 test esi, esi
// 0086d8e7  7407                 je 0x86d8f0
// 0086d8e9  8bce                 mov ecx, esi
// 0086d8eb  e8ec64f8ff           call 0x7f3ddc
// 0086d8f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086d8f4  40                   inc eax
// 0086d8f5  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0086d8f9  89442414             mov dword ptr [esp + 0x14], eax
// 0086d8fd  0f8c5dffffff         jl 0x86d860
// 0086d903  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 0086d90a  8b4500               mov eax, dword ptr [ebp]
// 0086d90d  8b10                 mov edx, dword ptr [eax]
// 0086d90f  6a01                 push 1
// 0086d911  8bcd                 mov ecx, ebp
// 0086d913  c684240001000000     mov byte ptr [esp + 0x100], 0
// 0086d91b  ffd2                 call edx
// 0086d91d  e948010000           jmp 0x86da6a
// 0086d922  ffd2                 call edx
// 0086d924  8be8                 mov ebp, eax
// 0086d926  896c2428             mov dword ptr [esp + 0x28], ebp
// 0086d92a  8b4500               mov eax, dword ptr [ebp]
// 0086d92d  8b5004               mov edx, dword ptr [eax + 4]
// 0086d930  56                   push esi
// 0086d931  56                   push esi
// 0086d932  8bcd                 mov ecx, ebp
// 0086d934  c684240401000003     mov byte ptr [esp + 0x104], 3
// 0086d93c  ffd2                 call edx
// 0086d93e  6a01                 push 1
// 0086d940  6a01                 push 1
// 0086d942  6aff                 push -1
// 0086d944  6a01                 push 1
// 0086d946  56                   push esi
// 0086d947  6856fd9900           push 0x99fd56
// 0086d94c  56                   push esi
// 0086d94d  8d4c244c             lea ecx, [esp + 0x4c]
// 0086d951  89442430             mov dword ptr [esp + 0x30], eax
// 0086d955  e846a7fbff           call 0x8280a0
// 0086d95a  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 0086d962  8974241c             mov dword ptr [esp + 0x1c], esi
// 0086d966  39742414             cmp dword ptr [esp + 0x14], esi
// 0086d96a  0f84d6000000         je 0x86da46
// 0086d970  8b4500               mov eax, dword ptr [ebp]
// 0086d973  8b5008               mov edx, dword ptr [eax + 8]
// 0086d976  8d4c2414             lea ecx, [esp + 0x14]
// 0086d97a  51                   push ecx
// 0086d97b  8bcd                 mov ecx, ebp
// 0086d97d  ffd2                 call edx
// 0086d97f  8bf0                 mov esi, eax
// 0086d981  89742424             mov dword ptr [esp + 0x24], esi
// 0086d985  6aff                 push -1
// 0086d987  8d442424             lea eax, [esp + 0x24]
// 0086d98b  50                   push eax
// 0086d98c  68a004a000           push 0xa004a0
// 0086d991  56                   push esi
// 0086d992  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 0086d99a  e86130feff           call 0x850a00
// 0086d99f  83c410               add esp, 0x10
// 0086d9a2  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 0086d9a6  763f                 jbe 0x86d9e7
// 0086d9a8  8d4c2418             lea ecx, [esp + 0x18]
// 0086d9ac  51                   push ecx
// 0086d9ad  6874169b00           push 0x9b1674
// 0086d9b2  56                   push esi
// 0086d9b3  e8d830feff           call 0x850a90
// 0086d9b8  83c40c               add esp, 0xc
// 0086d9bb  8d4c2418             lea ecx, [esp + 0x18]
// 0086d9bf  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0086d9c5  84c0                 test al, al
// 0086d9c7  751e                 jne 0x86d9e7
// 0086d9c9  8d542418             lea edx, [esp + 0x18]
// 0086d9cd  52                   push edx
// 0086d9ce  8bcb                 mov ecx, ebx
// 0086d9d0  e8cbfaffff           call 0x86d4a0
// 0086d9d5  8bf8                 mov edi, eax
// 0086d9d7  85ff                 test edi, edi
// 0086d9d9  7522                 jne 0x86d9fd
// 0086d9db  56                   push esi
// 0086d9dc  8d4c2434             lea ecx, [esp + 0x34]
// 0086d9e0  e84ba1fbff           call 0x827b30
// 0086d9e5  eb3a                 jmp 0x86da21
// 0086d9e7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086d9eb  50                   push eax
// 0086d9ec  8bcb                 mov ecx, ebx
// 0086d9ee  e84dfaffff           call 0x86d440
// 0086d9f3  8bf8                 mov edi, eax
// 0086d9f5  85ff                 test edi, edi
// 0086d9f7  0f8409010000         je 0x86db06
// 0086d9fd  8b17                 mov edx, dword ptr [edi]
// 0086d9ff  8b4258               mov eax, dword ptr [edx + 0x58]
// 0086da02  56                   push esi
// 0086da03  8bcf                 mov ecx, edi
// 0086da05  ffd0                 call eax
// 0086da07  57                   push edi
// 0086da08  8bcb                 mov ecx, ebx
// 0086da0a  e8b1f9ffff           call 0x86d3c0
// 0086da0f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0086da13  50                   push eax
// 0086da14  57                   push edi
// 0086da15  8bcb                 mov ecx, ebx
// 0086da17  e8e4fcffff           call 0x86d700
// 0086da1c  47                   inc edi
// 0086da1d  897c241c             mov dword ptr [esp + 0x1c], edi
// 0086da21  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 0086da29  85f6                 test esi, esi
// 0086da2b  7407                 je 0x86da34
// 0086da2d  8bce                 mov ecx, esi
// 0086da2f  e8a863f8ff           call 0x7f3ddc
// 0086da34  837c241400           cmp dword ptr [esp + 0x14], 0
// 0086da39  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 0086da40  0f852affffff         jne 0x86d970
// 0086da46  8d4c2430             lea ecx, [esp + 0x30]
// 0086da4a  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 0086da52  e8b9a3fbff           call 0x827e10
// 0086da57  8b5500               mov edx, dword ptr [ebp]
// 0086da5a  8b02                 mov eax, dword ptr [edx]
// 0086da5c  6a01                 push 1
// 0086da5e  8bcd                 mov ecx, ebp
// 0086da60  c684240001000000     mov byte ptr [esp + 0x100], 0
// 0086da68  ffd0                 call eax
// 0086da6a  8b17                 mov edx, dword ptr [edi]
// 0086da6c  8b4270               mov eax, dword ptr [edx + 0x70]
// 0086da6f  689404a000           push 0xa00494
// 0086da74  8bcf                 mov ecx, edi
// 0086da76  ffd0                 call eax
// 0086da78  8be8                 mov ebp, eax
// 0086da7a  896c2428             mov dword ptr [esp + 0x28], ebp
// 0086da7e  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0086da81  8b11                 mov edx, dword ptr [ecx]
// 0086da83  8b4258               mov eax, dword ptr [edx + 0x58]
// 0086da86  55                   push ebp
// 0086da87  c684240001000006     mov byte ptr [esp + 0x100], 6
// 0086da8f  ffd0                 call eax
// 0086da91  8b17                 mov edx, dword ptr [edi]
// 0086da93  8b4270               mov eax, dword ptr [edx + 0x70]
// 0086da96  688804a000           push 0xa00488
// 0086da9b  8bcf                 mov ecx, edi
// 0086da9d  ffd0                 call eax
// 0086da9f  8bf0                 mov esi, eax
// 0086daa1  89742424             mov dword ptr [esp + 0x24], esi
// 0086daa5  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 0086daa8  8b13                 mov edx, dword ptr [ebx]
// 0086daaa  8b4258               mov eax, dword ptr [edx + 0x58]
// 0086daad  56                   push esi
// 0086daae  8bcb                 mov ecx, ebx
// 0086dab0  c684240001000007     mov byte ptr [esp + 0x100], 7
// 0086dab8  ffd0                 call eax
// 0086daba  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 0086dac2  85f6                 test esi, esi
// 0086dac4  7407                 je 0x86dacd
// 0086dac6  8bce                 mov ecx, esi
// 0086dac8  e80f63f8ff           call 0x7f3ddc
// 0086dacd  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 0086dad5  85ed                 test ebp, ebp
// 0086dad7  7407                 je 0x86dae0
// 0086dad9  8bcd                 mov ecx, ebp
// 0086dadb  e8fc62f8ff           call 0x7f3ddc
// 0086dae0  8d4c2418             lea ecx, [esp + 0x18]
// 0086dae4  ff15c0de9800         call dword ptr [0x98dec0]
// 0086daea  8b8c24f4000000       mov ecx, dword ptr [esp + 0xf4]
// 0086daf1  64890d00000000       mov dword ptr fs:[0], ecx
// 0086daf8  59                   pop ecx
// 0086daf9  5f                   pop edi
// 0086dafa  5e                   pop esi
// 0086dafb  5d                   pop ebp
// 0086dafc  5b                   pop ebx
// 0086dafd  81c4ec000000         add esp, 0xec
// 0086db03  c20400               ret 4
// 0086db06  6a00                 push 0
// 0086db08  6a05                 push 5
// 0086db0a  e8c168f8ff           call 0x7f43d0
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportColumns@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportColumns.cpp