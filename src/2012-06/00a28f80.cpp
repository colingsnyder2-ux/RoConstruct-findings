// roc 2012-06 00a28f80  unit: CXTPReportPaintManager  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a28f80
//
// 00a28f80  6aff                 push -1
// 00a28f82  68224cae00           push 0xae4c22
// 00a28f87  64a100000000         mov eax, dword ptr fs:[0]
// 00a28f8d  50                   push eax
// 00a28f8e  83ec20               sub esp, 0x20
// 00a28f91  53                   push ebx
// 00a28f92  55                   push ebp
// 00a28f93  56                   push esi
// 00a28f94  57                   push edi
// 00a28f95  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a28f9a  33c4                 xor eax, esp
// 00a28f9c  50                   push eax
// 00a28f9d  8d442434             lea eax, [esp + 0x34]
// 00a28fa1  64a300000000         mov dword ptr fs:[0], eax
// 00a28fa7  8d4c2420             lea ecx, [esp + 0x20]
// 00a28fab  ff158447b200         call dword ptr [0xb24784]
// 00a28fb1  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a28fb5  33f6                 xor esi, esi
// 00a28fb7  50                   push eax
// 00a28fb8  8d4c241c             lea ecx, [esp + 0x1c]
// 00a28fbc  89742440             mov dword ptr [esp + 0x40], esi
// 00a28fc0  ff158047b200         call dword ptr [0xb24780]
// 00a28fc6  68ecf3b400           push 0xb4f3ec
// 00a28fcb  8d4c241c             lea ecx, [esp + 0x1c]
// 00a28fcf  c644244001           mov byte ptr [esp + 0x40], 1
// 00a28fd4  ff157442b200         call dword ptr [0xb24274]
// 00a28fda  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a28fde  8b5708               mov edx, dword ptr [edi + 8]
// 00a28fe1  8d4c242c             lea ecx, [esp + 0x2c]
// 00a28fe5  51                   push ecx
// 00a28fe6  6a01                 push 1
// 00a28fe8  68ecf3b400           push 0xb4f3ec
// 00a28fed  52                   push edx
// 00a28fee  ff154021b200         call dword ptr [0xb22140]
// 00a28ff4  89742448             mov dword ptr [esp + 0x48], esi
// 00a28ff8  89742414             mov dword ptr [esp + 0x14], esi
// 00a28ffc  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a29000  39742450             cmp dword ptr [esp + 0x50], esi
// 00a29004  753e                 jne 0xa29044
// 00a29006  83c8ff               or eax, 0xffffffff
// 00a29009  8da42400000000       lea esp, [esp]
// 00a29010  40                   inc eax
// 00a29011  50                   push eax
// 00a29012  6a0a                 push 0xa
// 00a29014  8d4c2420             lea ecx, [esp + 0x20]
// 00a29018  46                   inc esi
// 00a29019  ff15f447b200         call dword ptr [0xb247f4]
// 00a2901f  83f8ff               cmp eax, -1
// 00a29022  75ec                 jne 0xa29010
// 00a29024  8d4c2418             lea ecx, [esp + 0x18]
// 00a29028  ff15d047b200         call dword ptr [0xb247d0]
// 00a2902e  8d4c2420             lea ecx, [esp + 0x20]
// 00a29032  ff15d047b200         call dword ptr [0xb247d0]
// 00a29038  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a2903c  0fafc6               imul eax, esi
// 00a2903f  e939010000           jmp 0xa2917d
// 00a29044  6a01                 push 1
// 00a29046  68ecf3b400           push 0xb4f3ec
// 00a2904b  57                   push edi
// 00a2904c  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 00a29054  e8c7b2ffff           call 0xa24320
// 00a29059  83c40c               add esp, 0xc
// 00a2905c  8d4c2418             lea ecx, [esp + 0x18]
// 00a29060  89442424             mov dword ptr [esp + 0x24], eax
// 00a29064  ff155846b200         call dword ptr [0xb24658]
// 00a2906a  8d7801               lea edi, [eax + 1]
// 00a2906d  57                   push edi
// 00a2906e  8d4c241c             lea ecx, [esp + 0x1c]
// 00a29072  ff15ac43b200         call dword ptr [0xb243ac]
// 00a29078  57                   push edi
// 00a29079  8d4c2424             lea ecx, [esp + 0x24]
// 00a2907d  8be8                 mov ebp, eax
// 00a2907f  ff15ac43b200         call dword ptr [0xb243ac]
// 00a29085  8a5d00               mov bl, byte ptr [ebp]
// 00a29088  8bf8                 mov edi, eax
// 00a2908a  84db                 test bl, bl
// 00a2908c  0f84c7000000         je 0xa29159
// 00a29092  45                   inc ebp
// 00a29093  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a29097  80fb20               cmp bl, 0x20
// 00a2909a  7418                 je 0xa290b4
// 00a2909c  80fb09               cmp bl, 9
// 00a2909f  7413                 je 0xa290b4
// 00a290a1  80fb0a               cmp bl, 0xa
// 00a290a4  740e                 je 0xa290b4
// 00a290a6  881c37               mov byte ptr [edi + esi], bl
// 00a290a9  c644370100           mov byte ptr [edi + esi + 1], 0
// 00a290ae  46                   inc esi
// 00a290af  e98f000000           jmp 0xa29143
// 00a290b4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a290b8  036c2424             add ebp, dword ptr [esp + 0x24]
// 00a290bc  803f00               cmp byte ptr [edi], 0
// 00a290bf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a290c3  7505                 jne 0xa290ca
// 00a290c5  80fb0a               cmp bl, 0xa
// 00a290c8  7579                 jne 0xa29143
// 00a290ca  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a290ce  56                   push esi
// 00a290cf  57                   push edi
// 00a290d0  50                   push eax
// 00a290d1  e84ab2ffff           call 0xa24320
// 00a290d6  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a290da  83c40c               add esp, 0xc
// 00a290dd  3bc1                 cmp eax, ecx
// 00a290df  7c1e                 jl 0xa290ff
// 00a290e1  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a290e5  01442448             add dword ptr [esp + 0x48], eax
// 00a290e9  33f6                 xor esi, esi
// 00a290eb  39742414             cmp dword ptr [esp + 0x14], esi
// 00a290ef  7e04                 jle 0xa290f5
// 00a290f1  01442448             add dword ptr [esp + 0x48], eax
// 00a290f5  89742450             mov dword ptr [esp + 0x50], esi
// 00a290f9  89742414             mov dword ptr [esp + 0x14], esi
// 00a290fd  eb3d                 jmp 0xa2913c
// 00a290ff  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a29103  03d0                 add edx, eax
// 00a29105  03c5                 add eax, ebp
// 00a29107  3bd1                 cmp edx, ecx
// 00a29109  7c0e                 jl 0xa29119
// 00a2910b  89442414             mov dword ptr [esp + 0x14], eax
// 00a2910f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a29113  01442448             add dword ptr [esp + 0x48], eax
// 00a29117  eb0c                 jmp 0xa29125
// 00a29119  01442414             add dword ptr [esp + 0x14], eax
// 00a2911d  c744245001000000     mov dword ptr [esp + 0x50], 1
// 00a29125  80fb0a               cmp bl, 0xa
// 00a29128  7510                 jne 0xa2913a
// 00a2912a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a2912e  014c2448             add dword ptr [esp + 0x48], ecx
// 00a29132  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a2913a  33f6                 xor esi, esi
// 00a2913c  c60700               mov byte ptr [edi], 0
// 00a2913f  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a29143  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a29147  8a5d00               mov bl, byte ptr [ebp]
// 00a2914a  84db                 test bl, bl
// 00a2914c  0f8540ffffff         jne 0xa29092
// 00a29152  837c245000           cmp dword ptr [esp + 0x50], 0
// 00a29157  740a                 je 0xa29163
// 00a29159  8b742448             mov esi, dword ptr [esp + 0x48]
// 00a2915d  03742430             add esi, dword ptr [esp + 0x30]
// 00a29161  eb04                 jmp 0xa29167
// 00a29163  8b742448             mov esi, dword ptr [esp + 0x48]
// 00a29167  8d4c2418             lea ecx, [esp + 0x18]
// 00a2916b  ff15d047b200         call dword ptr [0xb247d0]
// 00a29171  8d4c2420             lea ecx, [esp + 0x20]
// 00a29175  ff15d047b200         call dword ptr [0xb247d0]
// 00a2917b  8bc6                 mov eax, esi
// 00a2917d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a29181  64890d00000000       mov dword ptr fs:[0], ecx
// 00a29188  59                   pop ecx
// 00a29189  5f                   pop edi
// 00a2918a  5e                   pop esi
// 00a2918b  5d                   pop ebp
// 00a2918c  5b                   pop ebx
// 00a2918d  83c42c               add esp, 0x2c
// 00a29190  c21000               ret 0x10
// copied from an identical function in another client (function ?CalculateRowHeight@CXTPReportPaintManager@@MAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp