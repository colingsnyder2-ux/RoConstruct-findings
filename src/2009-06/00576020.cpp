// roc 2009-06 00576020  unit: G3D::BinaryInput  size: 778 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576020
//
// 00576020  64a100000000         mov eax, dword ptr fs:[0]
// 00576026  6aff                 push -1
// 00576028  686b078600           push 0x86076b
// 0057602d  50                   push eax
// 0057602e  64892500000000       mov dword ptr fs:[0], esp
// 00576035  81ece4000000         sub esp, 0xe4
// 0057603b  56                   push esi
// 0057603c  8bb424f8000000       mov esi, dword ptr [esp + 0xf8]
// 00576043  6816d28a00           push 0x8ad216
// 00576048  56                   push esi
// 00576049  ff1574e48900         call dword ptr [0x89e474]
// 0057604f  83c408               add esp, 8
// 00576052  84c0                 test al, al
// 00576054  0f85ba020000         jne 0x576314
// 0057605a  55                   push ebp
// 0057605b  57                   push edi
// 0057605c  8d4c2434             lea ecx, [esp + 0x34]
// 00576060  ff15c0e48900         call dword ptr [0x89e4c0]
// 00576066  8b4614               mov eax, dword ptr [esi + 0x14]
// 00576069  33ed                 xor ebp, ebp
// 0057606b  8d78ff               lea edi, [eax - 1]
// 0057606e  89ac24f8000000       mov dword ptr [esp + 0xf8], ebp
// 00576075  3bf8                 cmp edi, eax
// 00576077  7606                 jbe 0x57607f
// 00576079  ff15ace98900         call dword ptr [0x89e9ac]
// 0057607f  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00576083  7205                 jb 0x57608a
// 00576085  8b4604               mov eax, dword ptr [esi + 4]
// 00576088  eb03                 jmp 0x57608d
// 0057608a  8d4604               lea eax, [esi + 4]
// 0057608d  8a0438               mov al, byte ptr [eax + edi]
// 00576090  8b3d48e48900         mov edi, dword ptr [0x89e448]
// 00576096  3c2f                 cmp al, 0x2f
// 00576098  743b                 je 0x5760d5
// 0057609a  3c5c                 cmp al, 0x5c
// 0057609c  7437                 je 0x5760d5
// 0057609e  683cfc8b00           push 0x8bfc3c
// 005760a3  8d442454             lea eax, [esp + 0x54]
// 005760a7  56                   push esi
// 005760a8  50                   push eax
// 005760a9  ffd7                 call edi
// 005760ab  83c40c               add esp, 0xc
// 005760ae  50                   push eax
// 005760af  8d4c2438             lea ecx, [esp + 0x38]
// 005760b3  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 005760bb  ff1564e48900         call dword ptr [0x89e464]
// 005760c1  8d4c2450             lea ecx, [esp + 0x50]
// 005760c5  c68424f800000000     mov byte ptr [esp + 0xf8], 0
// 005760cd  ff15c4e48900         call dword ptr [0x89e4c4]
// 005760d3  eb0b                 jmp 0x5760e0
// 005760d5  56                   push esi
// 005760d6  8d4c2438             lea ecx, [esp + 0x38]
// 005760da  ff1564e48900         call dword ptr [0x89e464]
// 005760e0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005760e4  53                   push ebx
// 005760e5  49                   dec ecx
// 005760e6  51                   push ecx
// 005760e7  55                   push ebp
// 005760e8  8d54245c             lea edx, [esp + 0x5c]
// 005760ec  52                   push edx
// 005760ed  8d4c2444             lea ecx, [esp + 0x44]
// 005760f1  ff1570e48900         call dword ptr [0x89e470]
// 005760f7  50                   push eax
// 005760f8  c684240001000002     mov byte ptr [esp + 0x100], 2
// 00576100  e83bf8ffff           call 0x575940
// 00576105  83c404               add esp, 4
// 00576108  8d4c2454             lea ecx, [esp + 0x54]
// 0057610c  8ad8                 mov bl, al
// 0057610e  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 00576116  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057611c  84db                 test bl, bl
// 0057611e  0f85d8010000         jne 0x5762fc
// 00576124  8d8c2484000000       lea ecx, [esp + 0x84]
// 0057612b  ff15c0e48900         call dword ptr [0x89e4c0]
// 00576131  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00576138  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 00576140  ff15c0e48900         call dword ptr [0x89e4c0]
// 00576146  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0057614d  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 00576155  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057615b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057615f  896c2418             mov dword ptr [esp + 0x18], ebp
// 00576163  896c2410             mov dword ptr [esp + 0x10], ebp
// 00576167  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 0057616e  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 00576176  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057617c  8d8424a0000000       lea eax, [esp + 0xa0]
// 00576183  50                   push eax
// 00576184  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 0057618b  51                   push ecx
// 0057618c  8d542418             lea edx, [esp + 0x18]
// 00576190  52                   push edx
// 00576191  8d842490000000       lea eax, [esp + 0x90]
// 00576198  50                   push eax
// 00576199  8d4c2448             lea ecx, [esp + 0x48]
// 0057619d  51                   push ecx
// 0057619e  c684241001000007     mov byte ptr [esp + 0x110], 7
// 005761a6  e815f9ffff           call 0x575ac0
// 005761ab  68a4d08b00           push 0x8bd0a4
// 005761b0  8d94249c000000       lea edx, [esp + 0x9c]
// 005761b7  52                   push edx
// 005761b8  8d442438             lea eax, [esp + 0x38]
// 005761bc  50                   push eax
// 005761bd  ffd7                 call edi
// 005761bf  83c420               add esp, 0x20
// 005761c2  396c2414             cmp dword ptr [esp + 0x14], ebp
// 005761c6  c68424fc00000008     mov byte ptr [esp + 0xfc], 8
// 005761ce  0f8eb1000000         jle 0x576285
// 005761d4  8b3d10e58900         mov edi, dword ptr [0x89e510]
// 005761da  33f6                 xor esi, esi
// 005761dc  8d642400             lea esp, [esp]
// 005761e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005761e4  8d040e               lea eax, [esi + ecx]
// 005761e7  50                   push eax
// 005761e8  8d542458             lea edx, [esp + 0x58]
// 005761ec  683cfc8b00           push 0x8bfc3c
// 005761f1  52                   push edx
// 005761f2  ffd7                 call edi
// 005761f4  83c40c               add esp, 0xc
// 005761f7  50                   push eax
// 005761f8  8d4c2420             lea ecx, [esp + 0x20]
// 005761fc  c684240001000009     mov byte ptr [esp + 0x100], 9
// 00576204  ff15ace48900         call dword ptr [0x89e4ac]
// 0057620a  8d4c2454             lea ecx, [esp + 0x54]
// 0057620e  c68424fc00000008     mov byte ptr [esp + 0xfc], 8
// 00576216  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057621c  8d44241c             lea eax, [esp + 0x1c]
// 00576220  6816d28a00           push 0x8ad216
// 00576225  50                   push eax
// 00576226  ff1574e48900         call dword ptr [0x89e474]
// 0057622c  83c408               add esp, 8
// 0057622f  84c0                 test al, al
// 00576231  7544                 jne 0x576277
// 00576233  8b442420             mov eax, dword ptr [esp + 0x20]
// 00576237  bb10000000           mov ebx, 0x10
// 0057623c  395c2434             cmp dword ptr [esp + 0x34], ebx
// 00576240  7304                 jae 0x576246
// 00576242  8d442420             lea eax, [esp + 0x20]
// 00576246  8d4c2454             lea ecx, [esp + 0x54]
// 0057624a  51                   push ecx
// 0057624b  50                   push eax
// 0057624c  ff15d0e88900         call dword ptr [0x89e8d0]
// 00576252  83c408               add esp, 8
// 00576255  83f8ff               cmp eax, -1
// 00576258  0f95c0               setne al
// 0057625b  84c0                 test al, al
// 0057625d  7518                 jne 0x576277
// 0057625f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00576263  395c2434             cmp dword ptr [esp + 0x34], ebx
// 00576267  7304                 jae 0x57626d
// 00576269  8d442420             lea eax, [esp + 0x20]
// 0057626d  50                   push eax
// 0057626e  ff1558e88900         call dword ptr [0x89e858]
// 00576274  83c404               add esp, 4
// 00576277  45                   inc ebp
// 00576278  83c61c               add esi, 0x1c
// 0057627b  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0057627f  0f8c5bffffff         jl 0x5761e0
// 00576285  8d4c241c             lea ecx, [esp + 0x1c]
// 00576289  c68424fc00000007     mov byte ptr [esp + 0xfc], 7
// 00576291  ff15c4e48900         call dword ptr [0x89e4c4]
// 00576297  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 0057629e  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 005762a6  ff15c4e48900         call dword ptr [0x89e4c4]
// 005762ac  8d4c2410             lea ecx, [esp + 0x10]
// 005762b0  c68424fc00000005     mov byte ptr [esp + 0xfc], 5
// 005762b8  e8d357ffff           call 0x56ba90
// 005762bd  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 005762c4  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 005762cc  ff15c4e48900         call dword ptr [0x89e4c4]
// 005762d2  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 005762d9  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 005762e1  ff15c4e48900         call dword ptr [0x89e4c4]
// 005762e7  8d8c2484000000       lea ecx, [esp + 0x84]
// 005762ee  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 005762f6  ff15c4e48900         call dword ptr [0x89e4c4]
// 005762fc  8d4c2438             lea ecx, [esp + 0x38]
// 00576300  c78424fc000000ffffffff mov dword ptr [esp + 0xfc], 0xffffffff
// 0057630b  ff15c4e48900         call dword ptr [0x89e4c4]
// 00576311  5b                   pop ebx
// 00576312  5f                   pop edi
// 00576313  5d                   pop ebp
// 00576314  8b8c24e8000000       mov ecx, dword ptr [esp + 0xe8]
// 0057631b  5e                   pop esi
// 0057631c  64890d00000000       mov dword ptr fs:[0], ecx
// 00576323  81c4f0000000         add esp, 0xf0
// 00576329  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?createDirectory@G3D@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
