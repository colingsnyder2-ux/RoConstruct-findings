// roc 2009-06 007c4a40  unit: CXTPReportPaintManager  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c4a40
//
// 007c4a40  6aff                 push -1
// 007c4a42  6802de8700           push 0x87de02
// 007c4a47  64a100000000         mov eax, dword ptr fs:[0]
// 007c4a4d  50                   push eax
// 007c4a4e  83ec20               sub esp, 0x20
// 007c4a51  53                   push ebx
// 007c4a52  55                   push ebp
// 007c4a53  56                   push esi
// 007c4a54  57                   push edi
// 007c4a55  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c4a5a  33c4                 xor eax, esp
// 007c4a5c  50                   push eax
// 007c4a5d  8d442434             lea eax, [esp + 0x34]
// 007c4a61  64a300000000         mov dword ptr fs:[0], eax
// 007c4a67  8d4c2420             lea ecx, [esp + 0x20]
// 007c4a6b  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c4a71  8b442448             mov eax, dword ptr [esp + 0x48]
// 007c4a75  33f6                 xor esi, esi
// 007c4a77  50                   push eax
// 007c4a78  8d4c241c             lea ecx, [esp + 0x1c]
// 007c4a7c  89742440             mov dword ptr [esp + 0x40], esi
// 007c4a80  ff15e4fc8900         call dword ptr [0x89fce4]
// 007c4a86  68f8338b00           push 0x8b33f8
// 007c4a8b  8d4c241c             lea ecx, [esp + 0x1c]
// 007c4a8f  c644244001           mov byte ptr [esp + 0x40], 1
// 007c4a94  ff15f0f08900         call dword ptr [0x89f0f0]
// 007c4a9a  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007c4a9e  8b5708               mov edx, dword ptr [edi + 8]
// 007c4aa1  8d4c242c             lea ecx, [esp + 0x2c]
// 007c4aa5  51                   push ecx
// 007c4aa6  6a01                 push 1
// 007c4aa8  68f8338b00           push 0x8b33f8
// 007c4aad  52                   push edx
// 007c4aae  ff1550e18900         call dword ptr [0x89e150]
// 007c4ab4  89742448             mov dword ptr [esp + 0x48], esi
// 007c4ab8  89742414             mov dword ptr [esp + 0x14], esi
// 007c4abc  8974241c             mov dword ptr [esp + 0x1c], esi
// 007c4ac0  39742450             cmp dword ptr [esp + 0x50], esi
// 007c4ac4  753e                 jne 0x7c4b04
// 007c4ac6  83c8ff               or eax, 0xffffffff
// 007c4ac9  8da42400000000       lea esp, [esp]
// 007c4ad0  40                   inc eax
// 007c4ad1  50                   push eax
// 007c4ad2  6a0a                 push 0xa
// 007c4ad4  8d4c2420             lea ecx, [esp + 0x20]
// 007c4ad8  46                   inc esi
// 007c4ad9  ff1500008a00         call dword ptr [0x8a0000]
// 007c4adf  83f8ff               cmp eax, -1
// 007c4ae2  75ec                 jne 0x7c4ad0
// 007c4ae4  8d4c2418             lea ecx, [esp + 0x18]
// 007c4ae8  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4aee  8d4c2420             lea ecx, [esp + 0x20]
// 007c4af2  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4af8  8b442430             mov eax, dword ptr [esp + 0x30]
// 007c4afc  0fafc6               imul eax, esi
// 007c4aff  e939010000           jmp 0x7c4c3d
// 007c4b04  6a01                 push 1
// 007c4b06  68f8338b00           push 0x8b33f8
// 007c4b0b  57                   push edi
// 007c4b0c  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 007c4b14  e8c7b2ffff           call 0x7bfde0
// 007c4b19  83c40c               add esp, 0xc
// 007c4b1c  8d4c2418             lea ecx, [esp + 0x18]
// 007c4b20  89442424             mov dword ptr [esp + 0x24], eax
// 007c4b24  ff1554fb8900         call dword ptr [0x89fb54]
// 007c4b2a  8d7801               lea edi, [eax + 1]
// 007c4b2d  57                   push edi
// 007c4b2e  8d4c241c             lea ecx, [esp + 0x1c]
// 007c4b32  ff1508f18900         call dword ptr [0x89f108]
// 007c4b38  57                   push edi
// 007c4b39  8d4c2424             lea ecx, [esp + 0x24]
// 007c4b3d  8be8                 mov ebp, eax
// 007c4b3f  ff1508f18900         call dword ptr [0x89f108]
// 007c4b45  8a5d00               mov bl, byte ptr [ebp]
// 007c4b48  8bf8                 mov edi, eax
// 007c4b4a  84db                 test bl, bl
// 007c4b4c  0f84c7000000         je 0x7c4c19
// 007c4b52  45                   inc ebp
// 007c4b53  896c2428             mov dword ptr [esp + 0x28], ebp
// 007c4b57  80fb20               cmp bl, 0x20
// 007c4b5a  7418                 je 0x7c4b74
// 007c4b5c  80fb09               cmp bl, 9
// 007c4b5f  7413                 je 0x7c4b74
// 007c4b61  80fb0a               cmp bl, 0xa
// 007c4b64  740e                 je 0x7c4b74
// 007c4b66  881c37               mov byte ptr [edi + esi], bl
// 007c4b69  c644370100           mov byte ptr [edi + esi + 1], 0
// 007c4b6e  46                   inc esi
// 007c4b6f  e98f000000           jmp 0x7c4c03
// 007c4b74  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007c4b78  036c2424             add ebp, dword ptr [esp + 0x24]
// 007c4b7c  803f00               cmp byte ptr [edi], 0
// 007c4b7f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007c4b83  7505                 jne 0x7c4b8a
// 007c4b85  80fb0a               cmp bl, 0xa
// 007c4b88  7579                 jne 0x7c4c03
// 007c4b8a  8b442444             mov eax, dword ptr [esp + 0x44]
// 007c4b8e  56                   push esi
// 007c4b8f  57                   push edi
// 007c4b90  50                   push eax
// 007c4b91  e84ab2ffff           call 0x7bfde0
// 007c4b96  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007c4b9a  83c40c               add esp, 0xc
// 007c4b9d  3bc1                 cmp eax, ecx
// 007c4b9f  7c1e                 jl 0x7c4bbf
// 007c4ba1  8b442430             mov eax, dword ptr [esp + 0x30]
// 007c4ba5  01442448             add dword ptr [esp + 0x48], eax
// 007c4ba9  33f6                 xor esi, esi
// 007c4bab  39742414             cmp dword ptr [esp + 0x14], esi
// 007c4baf  7e04                 jle 0x7c4bb5
// 007c4bb1  01442448             add dword ptr [esp + 0x48], eax
// 007c4bb5  89742450             mov dword ptr [esp + 0x50], esi
// 007c4bb9  89742414             mov dword ptr [esp + 0x14], esi
// 007c4bbd  eb3d                 jmp 0x7c4bfc
// 007c4bbf  8b542414             mov edx, dword ptr [esp + 0x14]
// 007c4bc3  03d0                 add edx, eax
// 007c4bc5  03c5                 add eax, ebp
// 007c4bc7  3bd1                 cmp edx, ecx
// 007c4bc9  7c0e                 jl 0x7c4bd9
// 007c4bcb  89442414             mov dword ptr [esp + 0x14], eax
// 007c4bcf  8b442430             mov eax, dword ptr [esp + 0x30]
// 007c4bd3  01442448             add dword ptr [esp + 0x48], eax
// 007c4bd7  eb0c                 jmp 0x7c4be5
// 007c4bd9  01442414             add dword ptr [esp + 0x14], eax
// 007c4bdd  c744245001000000     mov dword ptr [esp + 0x50], 1
// 007c4be5  80fb0a               cmp bl, 0xa
// 007c4be8  7510                 jne 0x7c4bfa
// 007c4bea  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007c4bee  014c2448             add dword ptr [esp + 0x48], ecx
// 007c4bf2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007c4bfa  33f6                 xor esi, esi
// 007c4bfc  c60700               mov byte ptr [edi], 0
// 007c4bff  8974241c             mov dword ptr [esp + 0x1c], esi
// 007c4c03  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007c4c07  8a5d00               mov bl, byte ptr [ebp]
// 007c4c0a  84db                 test bl, bl
// 007c4c0c  0f8540ffffff         jne 0x7c4b52
// 007c4c12  837c245000           cmp dword ptr [esp + 0x50], 0
// 007c4c17  740a                 je 0x7c4c23
// 007c4c19  8b742448             mov esi, dword ptr [esp + 0x48]
// 007c4c1d  03742430             add esi, dword ptr [esp + 0x30]
// 007c4c21  eb04                 jmp 0x7c4c27
// 007c4c23  8b742448             mov esi, dword ptr [esp + 0x48]
// 007c4c27  8d4c2418             lea ecx, [esp + 0x18]
// 007c4c2b  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4c31  8d4c2420             lea ecx, [esp + 0x20]
// 007c4c35  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4c3b  8bc6                 mov eax, esi
// 007c4c3d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007c4c41  64890d00000000       mov dword ptr fs:[0], ecx
// 007c4c48  59                   pop ecx
// 007c4c49  5f                   pop edi
// 007c4c4a  5e                   pop esi
// 007c4c4b  5d                   pop ebp
// 007c4c4c  5b                   pop ebx
// 007c4c4d  83c42c               add esp, 0x2c
// 007c4c50  c21000               ret 0x10
// copied from an identical function in another client (function ?CalculateRowHeight@CXTPReportPaintManager@@MAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp