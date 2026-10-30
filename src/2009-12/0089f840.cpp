// roc 2009-12 0089f840  unit: CXTPReportPaintManager  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089f840
//
// 0089f840  6aff                 push -1
// 0089f842  68721f9600           push 0x961f72
// 0089f847  64a100000000         mov eax, dword ptr fs:[0]
// 0089f84d  50                   push eax
// 0089f84e  83ec20               sub esp, 0x20
// 0089f851  53                   push ebx
// 0089f852  55                   push ebp
// 0089f853  56                   push esi
// 0089f854  57                   push edi
// 0089f855  a10052b600           mov eax, dword ptr [0xb65200]
// 0089f85a  33c4                 xor eax, esp
// 0089f85c  50                   push eax
// 0089f85d  8d442434             lea eax, [esp + 0x34]
// 0089f861  64a300000000         mov dword ptr fs:[0], eax
// 0089f867  8d4c2420             lea ecx, [esp + 0x20]
// 0089f86b  ff1574de9800         call dword ptr [0x98de74]
// 0089f871  8b442448             mov eax, dword ptr [esp + 0x48]
// 0089f875  33f6                 xor esi, esi
// 0089f877  50                   push eax
// 0089f878  8d4c241c             lea ecx, [esp + 0x1c]
// 0089f87c  89742440             mov dword ptr [esp + 0x40], esi
// 0089f880  ff1594de9800         call dword ptr [0x98de94]
// 0089f886  6868619a00           push 0x9a6168
// 0089f88b  8d4c241c             lea ecx, [esp + 0x1c]
// 0089f88f  c644244001           mov byte ptr [esp + 0x40], 1
// 0089f894  ff1574d29800         call dword ptr [0x98d274]
// 0089f89a  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0089f89e  8b5708               mov edx, dword ptr [edi + 8]
// 0089f8a1  8d4c242c             lea ecx, [esp + 0x2c]
// 0089f8a5  51                   push ecx
// 0089f8a6  6a01                 push 1
// 0089f8a8  6868619a00           push 0x9a6168
// 0089f8ad  52                   push edx
// 0089f8ae  ff156cb19800         call dword ptr [0x98b16c]
// 0089f8b4  89742448             mov dword ptr [esp + 0x48], esi
// 0089f8b8  89742414             mov dword ptr [esp + 0x14], esi
// 0089f8bc  8974241c             mov dword ptr [esp + 0x1c], esi
// 0089f8c0  39742450             cmp dword ptr [esp + 0x50], esi
// 0089f8c4  753e                 jne 0x89f904
// 0089f8c6  83c8ff               or eax, 0xffffffff
// 0089f8c9  8da42400000000       lea esp, [esp]
// 0089f8d0  40                   inc eax
// 0089f8d1  50                   push eax
// 0089f8d2  6a0a                 push 0xa
// 0089f8d4  8d4c2420             lea ecx, [esp + 0x20]
// 0089f8d8  46                   inc esi
// 0089f8d9  ff1580d69800         call dword ptr [0x98d680]
// 0089f8df  83f8ff               cmp eax, -1
// 0089f8e2  75ec                 jne 0x89f8d0
// 0089f8e4  8d4c2418             lea ecx, [esp + 0x18]
// 0089f8e8  ff15c0de9800         call dword ptr [0x98dec0]
// 0089f8ee  8d4c2420             lea ecx, [esp + 0x20]
// 0089f8f2  ff15c0de9800         call dword ptr [0x98dec0]
// 0089f8f8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089f8fc  0fafc6               imul eax, esi
// 0089f8ff  e939010000           jmp 0x89fa3d
// 0089f904  6a01                 push 1
// 0089f906  6868619a00           push 0x9a6168
// 0089f90b  57                   push edi
// 0089f90c  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 0089f914  e8c7b2ffff           call 0x89abe0
// 0089f919  83c40c               add esp, 0xc
// 0089f91c  8d4c2418             lea ecx, [esp + 0x18]
// 0089f920  89442424             mov dword ptr [esp + 0x24], eax
// 0089f924  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089f92a  8d7801               lea edi, [eax + 1]
// 0089f92d  57                   push edi
// 0089f92e  8d4c241c             lea ecx, [esp + 0x1c]
// 0089f932  ff155cd29800         call dword ptr [0x98d25c]
// 0089f938  57                   push edi
// 0089f939  8d4c2424             lea ecx, [esp + 0x24]
// 0089f93d  8be8                 mov ebp, eax
// 0089f93f  ff155cd29800         call dword ptr [0x98d25c]
// 0089f945  8a5d00               mov bl, byte ptr [ebp]
// 0089f948  8bf8                 mov edi, eax
// 0089f94a  84db                 test bl, bl
// 0089f94c  0f84c7000000         je 0x89fa19
// 0089f952  45                   inc ebp
// 0089f953  896c2428             mov dword ptr [esp + 0x28], ebp
// 0089f957  80fb20               cmp bl, 0x20
// 0089f95a  7418                 je 0x89f974
// 0089f95c  80fb09               cmp bl, 9
// 0089f95f  7413                 je 0x89f974
// 0089f961  80fb0a               cmp bl, 0xa
// 0089f964  740e                 je 0x89f974
// 0089f966  881c37               mov byte ptr [edi + esi], bl
// 0089f969  c644370100           mov byte ptr [edi + esi + 1], 0
// 0089f96e  46                   inc esi
// 0089f96f  e98f000000           jmp 0x89fa03
// 0089f974  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0089f978  036c2424             add ebp, dword ptr [esp + 0x24]
// 0089f97c  803f00               cmp byte ptr [edi], 0
// 0089f97f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0089f983  7505                 jne 0x89f98a
// 0089f985  80fb0a               cmp bl, 0xa
// 0089f988  7579                 jne 0x89fa03
// 0089f98a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089f98e  56                   push esi
// 0089f98f  57                   push edi
// 0089f990  50                   push eax
// 0089f991  e84ab2ffff           call 0x89abe0
// 0089f996  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0089f99a  83c40c               add esp, 0xc
// 0089f99d  3bc1                 cmp eax, ecx
// 0089f99f  7c1e                 jl 0x89f9bf
// 0089f9a1  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089f9a5  01442448             add dword ptr [esp + 0x48], eax
// 0089f9a9  33f6                 xor esi, esi
// 0089f9ab  39742414             cmp dword ptr [esp + 0x14], esi
// 0089f9af  7e04                 jle 0x89f9b5
// 0089f9b1  01442448             add dword ptr [esp + 0x48], eax
// 0089f9b5  89742450             mov dword ptr [esp + 0x50], esi
// 0089f9b9  89742414             mov dword ptr [esp + 0x14], esi
// 0089f9bd  eb3d                 jmp 0x89f9fc
// 0089f9bf  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089f9c3  03d0                 add edx, eax
// 0089f9c5  03c5                 add eax, ebp
// 0089f9c7  3bd1                 cmp edx, ecx
// 0089f9c9  7c0e                 jl 0x89f9d9
// 0089f9cb  89442414             mov dword ptr [esp + 0x14], eax
// 0089f9cf  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089f9d3  01442448             add dword ptr [esp + 0x48], eax
// 0089f9d7  eb0c                 jmp 0x89f9e5
// 0089f9d9  01442414             add dword ptr [esp + 0x14], eax
// 0089f9dd  c744245001000000     mov dword ptr [esp + 0x50], 1
// 0089f9e5  80fb0a               cmp bl, 0xa
// 0089f9e8  7510                 jne 0x89f9fa
// 0089f9ea  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089f9ee  014c2448             add dword ptr [esp + 0x48], ecx
// 0089f9f2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0089f9fa  33f6                 xor esi, esi
// 0089f9fc  c60700               mov byte ptr [edi], 0
// 0089f9ff  8974241c             mov dword ptr [esp + 0x1c], esi
// 0089fa03  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0089fa07  8a5d00               mov bl, byte ptr [ebp]
// 0089fa0a  84db                 test bl, bl
// 0089fa0c  0f8540ffffff         jne 0x89f952
// 0089fa12  837c245000           cmp dword ptr [esp + 0x50], 0
// 0089fa17  740a                 je 0x89fa23
// 0089fa19  8b742448             mov esi, dword ptr [esp + 0x48]
// 0089fa1d  03742430             add esi, dword ptr [esp + 0x30]
// 0089fa21  eb04                 jmp 0x89fa27
// 0089fa23  8b742448             mov esi, dword ptr [esp + 0x48]
// 0089fa27  8d4c2418             lea ecx, [esp + 0x18]
// 0089fa2b  ff15c0de9800         call dword ptr [0x98dec0]
// 0089fa31  8d4c2420             lea ecx, [esp + 0x20]
// 0089fa35  ff15c0de9800         call dword ptr [0x98dec0]
// 0089fa3b  8bc6                 mov eax, esi
// 0089fa3d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089fa41  64890d00000000       mov dword ptr fs:[0], ecx
// 0089fa48  59                   pop ecx
// 0089fa49  5f                   pop edi
// 0089fa4a  5e                   pop esi
// 0089fa4b  5d                   pop ebp
// 0089fa4c  5b                   pop ebx
// 0089fa4d  83c42c               add esp, 0x2c
// 0089fa50  c21000               ret 0x10
// copied from an identical function in another client (function ?CalculateRowHeight@CXTPReportPaintManager@@MAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp