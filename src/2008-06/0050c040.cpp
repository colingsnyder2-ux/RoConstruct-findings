// roc 2008-06 0050c040  unit: G3D::Log  size: 2810 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050c040
//
// 0050c040  64a100000000         mov eax, dword ptr fs:[0]
// 0050c046  6aff                 push -1
// 0050c048  6864c07c00           push 0x7cc064
// 0050c04d  50                   push eax
// 0050c04e  64892500000000       mov dword ptr fs:[0], esp
// 0050c055  81ece0000000         sub esp, 0xe0
// 0050c05b  53                   push ebx
// 0050c05c  8b9c24f4000000       mov ebx, dword ptr [esp + 0xf4]
// 0050c063  55                   push ebp
// 0050c064  56                   push esi
// 0050c065  8bf1                 mov esi, ecx
// 0050c067  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c06a  8bc1                 mov eax, ecx
// 0050c06c  f7d8                 neg eax
// 0050c06e  894344               mov dword ptr [ebx + 0x44], eax
// 0050c071  bd00000000           mov ebp, 0
// 0050c076  7805                 js 0x50c07d
// 0050c078  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050c07b  7e0b                 jle 0x50c088
// 0050c07d  03c1                 add eax, ecx
// 0050c07f  55                   push ebp
// 0050c080  50                   push eax
// 0050c081  8bcb                 mov ecx, ebx
// 0050c083  e848970000           call 0x5157d0
// 0050c088  6a02                 push 2
// 0050c08a  8d442474             lea eax, [esp + 0x74]
// 0050c08e  50                   push eax
// 0050c08f  8bcb                 mov ecx, ebx
// 0050c091  e8ba9c0000           call 0x515d50
// 0050c096  8d4c2470             lea ecx, [esp + 0x70]
// 0050c09a  6820808200           push 0x828020
// 0050c09f  51                   push ecx
// 0050c0a0  89ac24fc000000       mov dword ptr [esp + 0xfc], ebp
// 0050c0a7  ff15cc238000         call dword ptr [0x8023cc]
// 0050c0ad  83c408               add esp, 8
// 0050c0b0  84c0                 test al, al
// 0050c0b2  744f                 je 0x50c103
// 0050c0b4  6810808200           push 0x828010
// 0050c0b9  8d4c2434             lea ecx, [esp + 0x34]
// 0050c0bd  ff1558248000         call dword ptr [0x802458]
// 0050c0c3  8d542454             lea edx, [esp + 0x54]
// 0050c0c7  52                   push edx
// 0050c0c8  8bcb                 mov ecx, ebx
// 0050c0ca  c68424f800000001     mov byte ptr [esp + 0xf8], 1
// 0050c0d2  e859e9ffff           call 0x50aa30
// 0050c0d7  50                   push eax
// 0050c0d8  8d442434             lea eax, [esp + 0x34]
// 0050c0dc  50                   push eax
// 0050c0dd  8d8c2494000000       lea ecx, [esp + 0x94]
// 0050c0e4  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 0050c0ec  e8bf67f6ff           call 0x4728b0
// 0050c0f1  6878c48d00           push 0x8dc478
// 0050c0f6  8d8c2490000000       lea ecx, [esp + 0x90]
// 0050c0fd  51                   push ecx
// 0050c0fe  e889541900           call 0x6a158c
// 0050c103  c7461003000000       mov dword ptr [esi + 0x10], 3
// 0050c10a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c10d  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0050c110  8d441110             lea eax, [ecx + edx + 0x10]
// 0050c114  2bc1                 sub eax, ecx
// 0050c116  894344               mov dword ptr [ebx + 0x44], eax
// 0050c119  7805                 js 0x50c120
// 0050c11b  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050c11e  7e0b                 jle 0x50c12b
// 0050c120  03c1                 add eax, ecx
// 0050c122  55                   push ebp
// 0050c123  50                   push eax
// 0050c124  8bcb                 mov ecx, ebx
// 0050c126  e8a5960000           call 0x5157d0
// 0050c12b  8bcb                 mov ecx, ebx
// 0050c12d  e80edaffff           call 0x509b40
// 0050c132  8bcb                 mov ecx, ebx
// 0050c134  894608               mov dword ptr [esi + 8], eax
// 0050c137  e804daffff           call 0x509b40
// 0050c13c  89460c               mov dword ptr [esi + 0xc], eax
// 0050c13f  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c142  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c145  8d440102             lea eax, [ecx + eax + 2]
// 0050c149  2bc1                 sub eax, ecx
// 0050c14b  894344               mov dword ptr [ebx + 0x44], eax
// 0050c14e  7805                 js 0x50c155
// 0050c150  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050c153  7e0b                 jle 0x50c160
// 0050c155  03c1                 add eax, ecx
// 0050c157  55                   push ebp
// 0050c158  50                   push eax
// 0050c159  8bcb                 mov ecx, ebx
// 0050c15b  e870960000           call 0x5157d0
// 0050c160  57                   push edi
// 0050c161  8bcb                 mov ecx, ebx
// 0050c163  e848e9ffff           call 0x50aab0
// 0050c168  0fb7f8               movzx edi, ax
// 0050c16b  8bcb                 mov ecx, ebx
// 0050c16d  897c2420             mov dword ptr [esp + 0x20], edi
// 0050c171  e8cad9ffff           call 0x509b40
// 0050c176  3bc5                 cmp eax, ebp
// 0050c178  744f                 je 0x50c1c9
// 0050c17a  68f07f8200           push 0x827ff0
// 0050c17f  8d4c2438             lea ecx, [esp + 0x38]
// 0050c183  ff1558248000         call dword ptr [0x802458]
// 0050c189  8d4c2458             lea ecx, [esp + 0x58]
// 0050c18d  51                   push ecx
// 0050c18e  8bcb                 mov ecx, ebx
// 0050c190  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 0050c198  e893e8ffff           call 0x50aa30
// 0050c19d  50                   push eax
// 0050c19e  8d542438             lea edx, [esp + 0x38]
// 0050c1a2  52                   push edx
// 0050c1a3  8d8c2498000000       lea ecx, [esp + 0x98]
// 0050c1aa  c684240001000004     mov byte ptr [esp + 0x100], 4
// 0050c1b2  e8f966f6ff           call 0x4728b0
// 0050c1b7  6878c48d00           push 0x8dc478
// 0050c1bc  8d842494000000       lea eax, [esp + 0x94]
// 0050c1c3  50                   push eax
// 0050c1c4  e8c3531900           call 0x6a158c
// 0050c1c9  6683ff08             cmp di, 8
// 0050c1cd  0f873a010000         ja 0x50c30d
// 0050c1d3  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c1d6  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0050c1d9  8d44110c             lea eax, [ecx + edx + 0xc]
// 0050c1dd  2bc1                 sub eax, ecx
// 0050c1df  894344               mov dword ptr [ebx + 0x44], eax
// 0050c1e2  7805                 js 0x50c1e9
// 0050c1e4  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050c1e7  7e0c                 jle 0x50c1f5
// 0050c1e9  03c1                 add eax, ecx
// 0050c1eb  6a00                 push 0
// 0050c1ed  50                   push eax
// 0050c1ee  8bcb                 mov ecx, ebx
// 0050c1f0  e8db950000           call 0x5157d0
// 0050c1f5  8bcb                 mov ecx, ebx
// 0050c1f7  e844d9ffff           call 0x509b40
// 0050c1fc  8d3c40               lea edi, [eax + eax*2]
// 0050c1ff  57                   push edi
// 0050c200  897c2428             mov dword ptr [esp + 0x28], edi
// 0050c204  e827c3ffff           call 0x508530
// 0050c209  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c20c  8be8                 mov ebp, eax
// 0050c20e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c211  8d440104             lea eax, [ecx + eax + 4]
// 0050c215  83c404               add esp, 4
// 0050c218  2bc1                 sub eax, ecx
// 0050c21a  894344               mov dword ptr [ebx + 0x44], eax
// 0050c21d  7805                 js 0x50c224
// 0050c21f  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050c222  7e0c                 jle 0x50c230
// 0050c224  03c1                 add eax, ecx
// 0050c226  6a00                 push 0
// 0050c228  50                   push eax
// 0050c229  8bcb                 mov ecx, ebx
// 0050c22b  e8a0950000           call 0x5157d0
// 0050c230  85ff                 test edi, edi
// 0050c232  0f8ed5000000         jle 0x50c30d
// 0050c238  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050c23c  49                   dec ecx
// 0050c23d  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0050c242  f7e1                 mul ecx
// 0050c244  d1ea                 shr edx, 1
// 0050c246  42                   inc edx
// 0050c247  8d7d01               lea edi, [ebp + 1]
// 0050c24a  89542418             mov dword ptr [esp + 0x18], edx
// 0050c24e  8bff                 mov edi, edi
// 0050c250  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c253  8d5001               lea edx, [eax + 1]
// 0050c256  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050c259  7e0f                 jle 0x50c26a
// 0050c25b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c25e  03c8                 add ecx, eax
// 0050c260  6a01                 push 1
// 0050c262  51                   push ecx
// 0050c263  8bcb                 mov ecx, ebx
// 0050c265  e866950000           call 0x5157d0
// 0050c26a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c26d  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050c270  8a0c10               mov cl, byte ptr [eax + edx]
// 0050c273  40                   inc eax
// 0050c274  8d5001               lea edx, [eax + 1]
// 0050c277  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050c27a  884c241f             mov byte ptr [esp + 0x1f], cl
// 0050c27e  894344               mov dword ptr [ebx + 0x44], eax
// 0050c281  7e0f                 jle 0x50c292
// 0050c283  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c286  03c8                 add ecx, eax
// 0050c288  6a01                 push 1
// 0050c28a  51                   push ecx
// 0050c28b  8bcb                 mov ecx, ebx
// 0050c28d  e83e950000           call 0x5157d0
// 0050c292  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c295  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050c298  8a0c10               mov cl, byte ptr [eax + edx]
// 0050c29b  40                   inc eax
// 0050c29c  8d5001               lea edx, [eax + 1]
// 0050c29f  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050c2a2  884c2413             mov byte ptr [esp + 0x13], cl
// 0050c2a6  894344               mov dword ptr [ebx + 0x44], eax
// 0050c2a9  7e0f                 jle 0x50c2ba
// 0050c2ab  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c2ae  03c8                 add ecx, eax
// 0050c2b0  6a01                 push 1
// 0050c2b2  51                   push ecx
// 0050c2b3  8bcb                 mov ecx, ebx
// 0050c2b5  e816950000           call 0x5157d0
// 0050c2ba  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c2bd  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050c2c0  8a0c10               mov cl, byte ptr [eax + edx]
// 0050c2c3  40                   inc eax
// 0050c2c4  8d5001               lea edx, [eax + 1]
// 0050c2c7  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050c2ca  884c242f             mov byte ptr [esp + 0x2f], cl
// 0050c2ce  894344               mov dword ptr [ebx + 0x44], eax
// 0050c2d1  7e0f                 jle 0x50c2e2
// 0050c2d3  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c2d6  03c8                 add ecx, eax
// 0050c2d8  6a01                 push 1
// 0050c2da  51                   push ecx
// 0050c2db  8bcb                 mov ecx, ebx
// 0050c2dd  e8ee940000           call 0x5157d0
// 0050c2e2  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 0050c2e7  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0050c2eb  b801000000           mov eax, 1
// 0050c2f0  014344               add dword ptr [ebx + 0x44], eax
// 0050c2f3  8857ff               mov byte ptr [edi - 1], dl
// 0050c2f6  0fb654241f           movzx edx, byte ptr [esp + 0x1f]
// 0050c2fb  880f                 mov byte ptr [edi], cl
// 0050c2fd  885701               mov byte ptr [edi + 1], dl
// 0050c300  83c703               add edi, 3
// 0050c303  29442418             sub dword ptr [esp + 0x18], eax
// 0050c307  0f8543ffffff         jne 0x50c250
// 0050c30d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050c310  b9ffffffff           mov ecx, 0xffffffff
// 0050c315  85c0                 test eax, eax
// 0050c317  7d15                 jge 0x50c32e
// 0050c319  f7d8                 neg eax
// 0050c31b  89460c               mov dword ptr [esi + 0xc], eax
// 0050c31e  33ff                 xor edi, edi
// 0050c320  89442428             mov dword ptr [esp + 0x28], eax
// 0050c324  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0050c32c  eb0b                 jmp 0x50c339
// 0050c32e  8d78ff               lea edi, [eax - 1]
// 0050c331  894c2428             mov dword ptr [esp + 0x28], ecx
// 0050c335  894c2430             mov dword ptr [esp + 0x30], ecx
// 0050c339  8b4608               mov eax, dword ptr [esi + 8]
// 0050c33c  0faf460c             imul eax, dword ptr [esi + 0xc]
// 0050c340  8d0440               lea eax, [eax + eax*2]
// 0050c343  50                   push eax
// 0050c344  e8e7c1ffff           call 0x508530
// 0050c349  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050c34d  83c404               add esp, 4
// 0050c350  894604               mov dword ptr [esi + 4], eax
// 0050c353  6683f901             cmp cx, 1
// 0050c357  0f8515030000         jne 0x50c672
// 0050c35d  8b4608               mov eax, dword ptr [esi + 8]
// 0050c360  83c007               add eax, 7
// 0050c363  c1f803               sar eax, 3
// 0050c366  8bc8                 mov ecx, eax
// 0050c368  83e103               and ecx, 3
// 0050c36b  89442420             mov dword ptr [esp + 0x20], eax
// 0050c36f  740d                 je 0x50c37e
// 0050c371  ba04000000           mov edx, 4
// 0050c376  2bd1                 sub edx, ecx
// 0050c378  03c2                 add eax, edx
// 0050c37a  89442420             mov dword ptr [esp + 0x20], eax
// 0050c37e  897c2418             mov dword ptr [esp + 0x18], edi
// 0050c382  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0050c386  0f84ac060000         je 0x50ca38
// 0050c38c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0050c390  8bcf                 mov ecx, edi
// 0050c392  8b7e08               mov edi, dword ptr [esi + 8]
// 0050c395  0faff9               imul edi, ecx
// 0050c398  33c0                 xor eax, eax
// 0050c39a  89442414             mov dword ptr [esp + 0x14], eax
// 0050c39e  8d3c7f               lea edi, [edi + edi*2]
// 0050c3a1  85d2                 test edx, edx
// 0050c3a3  0f8eb2020000         jle 0x50c65b
// 0050c3a9  89542424             mov dword ptr [esp + 0x24], edx
// 0050c3ad  8d4900               lea ecx, [ecx]
// 0050c3b0  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 0050c3b3  8d5101               lea edx, [ecx + 1]
// 0050c3b6  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050c3b9  7e13                 jle 0x50c3ce
// 0050c3bb  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0050c3be  03c1                 add eax, ecx
// 0050c3c0  6a01                 push 1
// 0050c3c2  50                   push eax
// 0050c3c3  8bcb                 mov ecx, ebx
// 0050c3c5  e806940000           call 0x5157d0
// 0050c3ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050c3ce  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0050c3d1  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050c3d4  8a0c0a               mov cl, byte ptr [edx + ecx]
// 0050c3d7  42                   inc edx
// 0050c3d8  895344               mov dword ptr [ebx + 0x44], edx
// 0050c3db  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c3de  884c2413             mov byte ptr [esp + 0x13], cl
// 0050c3e2  0f8d60020000         jge 0x50c648
// 0050c3e8  8b5604               mov edx, dword ptr [esi + 4]
// 0050c3eb  0fb6c9               movzx ecx, cl
// 0050c3ee  c1e907               shr ecx, 7
// 0050c3f1  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c3f4  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c3f8  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0050c3fc  880c17               mov byte ptr [edi + edx], cl
// 0050c3ff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c403  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0050c408  8b5604               mov edx, dword ptr [esi + 4]
// 0050c40b  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050c40f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c413  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0050c418  8b5604               mov edx, dword ptr [esi + 4]
// 0050c41b  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050c41f  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0050c423  40                   inc eax
// 0050c424  83c703               add edi, 3
// 0050c427  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c42a  89442414             mov dword ptr [esp + 0x14], eax
// 0050c42e  0f8d14020000         jge 0x50c648
// 0050c434  8b5604               mov edx, dword ptr [esi + 4]
// 0050c437  0fb6c9               movzx ecx, cl
// 0050c43a  c1e906               shr ecx, 6
// 0050c43d  83e101               and ecx, 1
// 0050c440  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c443  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c447  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0050c44b  880c17               mov byte ptr [edi + edx], cl
// 0050c44e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c452  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0050c457  8b5604               mov edx, dword ptr [esi + 4]
// 0050c45a  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050c45e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c462  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0050c467  8b5604               mov edx, dword ptr [esi + 4]
// 0050c46a  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050c46e  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0050c472  40                   inc eax
// 0050c473  83c703               add edi, 3
// 0050c476  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c479  89442414             mov dword ptr [esp + 0x14], eax
// 0050c47d  0f8dc5010000         jge 0x50c648
// 0050c483  8b5604               mov edx, dword ptr [esi + 4]
// 0050c486  0fb6c9               movzx ecx, cl
// 0050c489  c1e905               shr ecx, 5
// 0050c48c  83e101               and ecx, 1
// 0050c48f  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c492  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c496  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0050c49a  880c17               mov byte ptr [edi + edx], cl
// 0050c49d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c4a1  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0050c4a6  8b5604               mov edx, dword ptr [esi + 4]
// 0050c4a9  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050c4ad  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c4b1  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0050c4b6  8b5604               mov edx, dword ptr [esi + 4]
// 0050c4b9  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050c4bd  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0050c4c1  40                   inc eax
// 0050c4c2  83c703               add edi, 3
// 0050c4c5  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c4c8  89442414             mov dword ptr [esp + 0x14], eax
// 0050c4cc  0f8d76010000         jge 0x50c648
// 0050c4d2  8b5604               mov edx, dword ptr [esi + 4]
// 0050c4d5  0fb6c9               movzx ecx, cl
// 0050c4d8  c1e904               shr ecx, 4
// 0050c4db  83e101               and ecx, 1
// 0050c4de  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c4e1  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c4e5  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0050c4e9  880c17               mov byte ptr [edi + edx], cl
// 0050c4ec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c4f0  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0050c4f5  8b5604               mov edx, dword ptr [esi + 4]
// 0050c4f8  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050c4fc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c500  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0050c505  8b5604               mov edx, dword ptr [esi + 4]
// 0050c508  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050c50c  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0050c510  40                   inc eax
// 0050c511  83c703               add edi, 3
// 0050c514  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c517  89442414             mov dword ptr [esp + 0x14], eax
// 0050c51b  0f8d27010000         jge 0x50c648
// 0050c521  8b5604               mov edx, dword ptr [esi + 4]
// 0050c524  0fb6c9               movzx ecx, cl
// 0050c527  c1e903               shr ecx, 3
// 0050c52a  83e101               and ecx, 1
// 0050c52d  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c530  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c534  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0050c538  880c17               mov byte ptr [edi + edx], cl
// 0050c53b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c53f  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0050c544  8b5604               mov edx, dword ptr [esi + 4]
// 0050c547  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050c54b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c54f  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0050c554  8b5604               mov edx, dword ptr [esi + 4]
// 0050c557  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050c55b  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0050c55f  40                   inc eax
// 0050c560  83c703               add edi, 3
// 0050c563  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c566  89442414             mov dword ptr [esp + 0x14], eax
// 0050c56a  0f8dd8000000         jge 0x50c648
// 0050c570  8b5604               mov edx, dword ptr [esi + 4]
// 0050c573  0fb6c9               movzx ecx, cl
// 0050c576  c1e902               shr ecx, 2
// 0050c579  83e101               and ecx, 1
// 0050c57c  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c57f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c583  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0050c587  880c17               mov byte ptr [edi + edx], cl
// 0050c58a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c58e  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0050c593  8b5604               mov edx, dword ptr [esi + 4]
// 0050c596  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050c59a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c59e  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0050c5a3  8b5604               mov edx, dword ptr [esi + 4]
// 0050c5a6  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050c5aa  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0050c5ae  40                   inc eax
// 0050c5af  83c703               add edi, 3
// 0050c5b2  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c5b5  89442414             mov dword ptr [esp + 0x14], eax
// 0050c5b9  0f8d89000000         jge 0x50c648
// 0050c5bf  8b5604               mov edx, dword ptr [esi + 4]
// 0050c5c2  0fb6c9               movzx ecx, cl
// 0050c5c5  d1e9                 shr ecx, 1
// 0050c5c7  83e101               and ecx, 1
// 0050c5ca  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c5cd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c5d1  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0050c5d5  880c17               mov byte ptr [edi + edx], cl
// 0050c5d8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c5dc  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0050c5e1  8b5604               mov edx, dword ptr [esi + 4]
// 0050c5e4  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050c5e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c5ec  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0050c5f1  8b5604               mov edx, dword ptr [esi + 4]
// 0050c5f4  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050c5f8  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0050c5fc  40                   inc eax
// 0050c5fd  83c703               add edi, 3
// 0050c600  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c603  89442414             mov dword ptr [esp + 0x14], eax
// 0050c607  7d3f                 jge 0x50c648
// 0050c609  8b5604               mov edx, dword ptr [esi + 4]
// 0050c60c  0fb6c9               movzx ecx, cl
// 0050c60f  83e101               and ecx, 1
// 0050c612  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c615  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c619  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0050c61d  880c17               mov byte ptr [edi + edx], cl
// 0050c620  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c624  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0050c629  8b5604               mov edx, dword ptr [esi + 4]
// 0050c62c  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050c630  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050c634  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0050c639  8b5604               mov edx, dword ptr [esi + 4]
// 0050c63c  40                   inc eax
// 0050c63d  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050c641  89442414             mov dword ptr [esp + 0x14], eax
// 0050c645  83c703               add edi, 3
// 0050c648  836c242401           sub dword ptr [esp + 0x24], 1
// 0050c64d  0f855dfdffff         jne 0x50c3b0
// 0050c653  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050c657  8b542420             mov edx, dword ptr [esp + 0x20]
// 0050c65b  034c2430             add ecx, dword ptr [esp + 0x30]
// 0050c65f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050c663  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0050c667  0f8525fdffff         jne 0x50c392
// 0050c66d  e9c6030000           jmp 0x50ca38
// 0050c672  6683f904             cmp cx, 4
// 0050c676  0f8522010000         jne 0x50c79e
// 0050c67c  8b4608               mov eax, dword ptr [esi + 8]
// 0050c67f  40                   inc eax
// 0050c680  d1f8                 sar eax, 1
// 0050c682  8bc8                 mov ecx, eax
// 0050c684  83e103               and ecx, 3
// 0050c687  89442424             mov dword ptr [esp + 0x24], eax
// 0050c68b  740d                 je 0x50c69a
// 0050c68d  ba04000000           mov edx, 4
// 0050c692  2bd1                 sub edx, ecx
// 0050c694  03c2                 add eax, edx
// 0050c696  89442424             mov dword ptr [esp + 0x24], eax
// 0050c69a  897c2418             mov dword ptr [esp + 0x18], edi
// 0050c69e  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0050c6a2  0f8490030000         je 0x50ca38
// 0050c6a8  eb06                 jmp 0x50c6b0
// 0050c6aa  8d9b00000000         lea ebx, [ebx]
// 0050c6b0  8b7e08               mov edi, dword ptr [esi + 8]
// 0050c6b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050c6b7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050c6bb  0faff8               imul edi, eax
// 0050c6be  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050c6c6  8d3c7f               lea edi, [edi + edi*2]
// 0050c6c9  85c9                 test ecx, ecx
// 0050c6cb  0f8eb6000000         jle 0x50c787
// 0050c6d1  894c2420             mov dword ptr [esp + 0x20], ecx
// 0050c6d5  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c6d8  8d4801               lea ecx, [eax + 1]
// 0050c6db  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050c6de  7e0f                 jle 0x50c6ef
// 0050c6e0  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050c6e3  6a01                 push 1
// 0050c6e5  03d0                 add edx, eax
// 0050c6e7  52                   push edx
// 0050c6e8  8bcb                 mov ecx, ebx
// 0050c6ea  e8e1900000           call 0x5157d0
// 0050c6ef  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c6f2  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050c6f5  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050c6f8  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050c6fc  40                   inc eax
// 0050c6fd  894344               mov dword ptr [ebx + 0x44], eax
// 0050c700  0fb6c1               movzx eax, cl
// 0050c703  8bc8                 mov ecx, eax
// 0050c705  83e00f               and eax, 0xf
// 0050c708  c1e904               shr ecx, 4
// 0050c70b  3b5608               cmp edx, dword ptr [esi + 8]
// 0050c70e  8d0440               lea eax, [eax + eax*2]
// 0050c711  8d0c49               lea ecx, [ecx + ecx*2]
// 0050c714  89442454             mov dword ptr [esp + 0x54], eax
// 0050c718  7d2c                 jge 0x50c746
// 0050c71a  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 0050c71e  8b4604               mov eax, dword ptr [esi + 4]
// 0050c721  ff442414             inc dword ptr [esp + 0x14]
// 0050c725  881407               mov byte ptr [edi + eax], dl
// 0050c728  0fb6542901           movzx edx, byte ptr [ecx + ebp + 1]
// 0050c72d  8b4604               mov eax, dword ptr [esi + 4]
// 0050c730  88543801             mov byte ptr [eax + edi + 1], dl
// 0050c734  8b4604               mov eax, dword ptr [esi + 4]
// 0050c737  8a4c2902             mov cl, byte ptr [ecx + ebp + 2]
// 0050c73b  884c3802             mov byte ptr [eax + edi + 2], cl
// 0050c73f  8b442454             mov eax, dword ptr [esp + 0x54]
// 0050c743  83c703               add edi, 3
// 0050c746  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050c74a  3b5608               cmp edx, dword ptr [esi + 8]
// 0050c74d  7d29                 jge 0x50c778
// 0050c74f  0fb61428             movzx edx, byte ptr [eax + ebp]
// 0050c753  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050c756  ff442414             inc dword ptr [esp + 0x14]
// 0050c75a  88140f               mov byte ptr [edi + ecx], dl
// 0050c75d  0fb6542801           movzx edx, byte ptr [eax + ebp + 1]
// 0050c762  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050c765  88543901             mov byte ptr [ecx + edi + 1], dl
// 0050c769  0fb6542802           movzx edx, byte ptr [eax + ebp + 2]
// 0050c76e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050c771  88543902             mov byte ptr [ecx + edi + 2], dl
// 0050c775  83c703               add edi, 3
// 0050c778  836c242001           sub dword ptr [esp + 0x20], 1
// 0050c77d  0f8552ffffff         jne 0x50c6d5
// 0050c783  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050c787  03442430             add eax, dword ptr [esp + 0x30]
// 0050c78b  89442418             mov dword ptr [esp + 0x18], eax
// 0050c78f  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0050c793  0f8517ffffff         jne 0x50c6b0
// 0050c799  e99a020000           jmp 0x50ca38
// 0050c79e  6683f908             cmp cx, 8
// 0050c7a2  0f85d6000000         jne 0x50c87e
// 0050c7a8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050c7ab  8bc1                 mov eax, ecx
// 0050c7ad  83e003               and eax, 3
// 0050c7b0  894c2420             mov dword ptr [esp + 0x20], ecx
// 0050c7b4  740d                 je 0x50c7c3
// 0050c7b6  ba04000000           mov edx, 4
// 0050c7bb  2bd0                 sub edx, eax
// 0050c7bd  03ca                 add ecx, edx
// 0050c7bf  894c2420             mov dword ptr [esp + 0x20], ecx
// 0050c7c3  8bcf                 mov ecx, edi
// 0050c7c5  897c2418             mov dword ptr [esp + 0x18], edi
// 0050c7c9  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0050c7cd  0f8465020000         je 0x50ca38
// 0050c7d3  eb0b                 jmp 0x50c7e0
// 0050c7d5  8da42400000000       lea esp, [esp]
// 0050c7dc  8d642400             lea esp, [esp]
// 0050c7e0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0050c7e4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050c7ec  85c0                 test eax, eax
// 0050c7ee  7e77                 jle 0x50c867
// 0050c7f0  89442424             mov dword ptr [esp + 0x24], eax
// 0050c7f4  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c7f7  8d4801               lea ecx, [eax + 1]
// 0050c7fa  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050c7fd  7e0f                 jle 0x50c80e
// 0050c7ff  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050c802  6a01                 push 1
// 0050c804  03d0                 add edx, eax
// 0050c806  52                   push edx
// 0050c807  8bcb                 mov ecx, ebx
// 0050c809  e8c28f0000           call 0x5157d0
// 0050c80e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c811  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050c814  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050c817  40                   inc eax
// 0050c818  894344               mov dword ptr [ebx + 0x44], eax
// 0050c81b  8b4608               mov eax, dword ptr [esi + 8]
// 0050c81e  39442414             cmp dword ptr [esp + 0x14], eax
// 0050c822  7d38                 jge 0x50c85c
// 0050c824  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0050c829  03442414             add eax, dword ptr [esp + 0x14]
// 0050c82d  8b5604               mov edx, dword ptr [esi + 4]
// 0050c830  ff442414             inc dword ptr [esp + 0x14]
// 0050c834  0fb6f9               movzx edi, cl
// 0050c837  8d3c7f               lea edi, [edi + edi*2]
// 0050c83a  0fb60c2f             movzx ecx, byte ptr [edi + ebp]
// 0050c83e  8d0440               lea eax, [eax + eax*2]
// 0050c841  880c10               mov byte ptr [eax + edx], cl
// 0050c844  0fb64c2f01           movzx ecx, byte ptr [edi + ebp + 1]
// 0050c849  8b5604               mov edx, dword ptr [esi + 4]
// 0050c84c  884c0201             mov byte ptr [edx + eax + 1], cl
// 0050c850  0fb64c2f02           movzx ecx, byte ptr [edi + ebp + 2]
// 0050c855  8b5604               mov edx, dword ptr [esi + 4]
// 0050c858  884c0202             mov byte ptr [edx + eax + 2], cl
// 0050c85c  836c242401           sub dword ptr [esp + 0x24], 1
// 0050c861  7591                 jne 0x50c7f4
// 0050c863  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050c867  034c2430             add ecx, dword ptr [esp + 0x30]
// 0050c86b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050c86f  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0050c873  0f8567ffffff         jne 0x50c7e0
// 0050c879  e9ba010000           jmp 0x50ca38
// 0050c87e  6683f910             cmp cx, 0x10
// 0050c882  7565                 jne 0x50c8e9
// 0050c884  50                   push eax
// 0050c885  e876b4ffff           call 0x507d00
// 0050c88a  55                   push ebp
// 0050c88b  c7460400000000       mov dword ptr [esi + 4], 0
// 0050c892  e869b4ffff           call 0x507d00
// 0050c897  83c408               add esp, 8
// 0050c89a  68d07f8200           push 0x827fd0
// 0050c89f  8d4c2438             lea ecx, [esp + 0x38]
// 0050c8a3  ff1558248000         call dword ptr [0x802458]
// 0050c8a9  8d542458             lea edx, [esp + 0x58]
// 0050c8ad  52                   push edx
// 0050c8ae  8bcb                 mov ecx, ebx
// 0050c8b0  c68424fc00000005     mov byte ptr [esp + 0xfc], 5
// 0050c8b8  e873e1ffff           call 0x50aa30
// 0050c8bd  50                   push eax
// 0050c8be  8d442438             lea eax, [esp + 0x38]
// 0050c8c2  50                   push eax
// 0050c8c3  8d8c2498000000       lea ecx, [esp + 0x98]
// 0050c8ca  c684240001000006     mov byte ptr [esp + 0x100], 6
// 0050c8d2  e8d95ff6ff           call 0x4728b0
// 0050c8d7  6878c48d00           push 0x8dc478
// 0050c8dc  8d8c2494000000       lea ecx, [esp + 0x94]
// 0050c8e3  51                   push ecx
// 0050c8e4  e8a34c1900           call 0x6a158c
// 0050c8e9  6683f918             cmp cx, 0x18
// 0050c8ed  0f857e010000         jne 0x50ca71
// 0050c8f3  6a14                 push 0x14
// 0050c8f5  8bcb                 mov ecx, ebx
// 0050c8f7  e804e2ffff           call 0x50ab00
// 0050c8fc  8b4608               mov eax, dword ptr [esi + 8]
// 0050c8ff  8d0440               lea eax, [eax + eax*2]
// 0050c902  83e003               and eax, 3
// 0050c905  740d                 je 0x50c914
// 0050c907  b904000000           mov ecx, 4
// 0050c90c  2bc8                 sub ecx, eax
// 0050c90e  894c2420             mov dword ptr [esp + 0x20], ecx
// 0050c912  eb08                 jmp 0x50c91c
// 0050c914  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0050c91c  897c2418             mov dword ptr [esp + 0x18], edi
// 0050c920  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0050c924  0f840e010000         je 0x50ca38
// 0050c92a  8d9b00000000         lea ebx, [ebx]
// 0050c930  8b4608               mov eax, dword ptr [esi + 8]
// 0050c933  8bf8                 mov edi, eax
// 0050c935  0faf7c2418           imul edi, dword ptr [esp + 0x18]
// 0050c93a  8d3c7f               lea edi, [edi + edi*2]
// 0050c93d  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0050c945  85c0                 test eax, eax
// 0050c947  0f8eac000000         jle 0x50c9f9
// 0050c94d  8d4900               lea ecx, [ecx]
// 0050c950  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c953  8d5001               lea edx, [eax + 1]
// 0050c956  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050c959  7e0f                 jle 0x50c96a
// 0050c95b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c95e  03c8                 add ecx, eax
// 0050c960  6a01                 push 1
// 0050c962  51                   push ecx
// 0050c963  8bcb                 mov ecx, ebx
// 0050c965  e8668e0000           call 0x5157d0
// 0050c96a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c96d  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050c970  8a0c10               mov cl, byte ptr [eax + edx]
// 0050c973  40                   inc eax
// 0050c974  8d5001               lea edx, [eax + 1]
// 0050c977  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050c97a  884c241f             mov byte ptr [esp + 0x1f], cl
// 0050c97e  894344               mov dword ptr [ebx + 0x44], eax
// 0050c981  7e0f                 jle 0x50c992
// 0050c983  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c986  03c8                 add ecx, eax
// 0050c988  6a01                 push 1
// 0050c98a  51                   push ecx
// 0050c98b  8bcb                 mov ecx, ebx
// 0050c98d  e83e8e0000           call 0x5157d0
// 0050c992  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c995  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050c998  8a0c10               mov cl, byte ptr [eax + edx]
// 0050c99b  40                   inc eax
// 0050c99c  8d5001               lea edx, [eax + 1]
// 0050c99f  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050c9a2  884c2413             mov byte ptr [esp + 0x13], cl
// 0050c9a6  894344               mov dword ptr [ebx + 0x44], eax
// 0050c9a9  7e0f                 jle 0x50c9ba
// 0050c9ab  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050c9ae  03c8                 add ecx, eax
// 0050c9b0  6a01                 push 1
// 0050c9b2  51                   push ecx
// 0050c9b3  8bcb                 mov ecx, ebx
// 0050c9b5  e8168e0000           call 0x5157d0
// 0050c9ba  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050c9bd  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050c9c0  8a0c10               mov cl, byte ptr [eax + edx]
// 0050c9c3  8a542413             mov dl, byte ptr [esp + 0x13]
// 0050c9c7  40                   inc eax
// 0050c9c8  894344               mov dword ptr [ebx + 0x44], eax
// 0050c9cb  8b4604               mov eax, dword ptr [esi + 4]
// 0050c9ce  880c07               mov byte ptr [edi + eax], cl
// 0050c9d1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050c9d4  88543901             mov byte ptr [ecx + edi + 1], dl
// 0050c9d8  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 0050c9dd  8b4604               mov eax, dword ptr [esi + 4]
// 0050c9e0  884c3802             mov byte ptr [eax + edi + 2], cl
// 0050c9e4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0050c9e8  40                   inc eax
// 0050c9e9  83c703               add edi, 3
// 0050c9ec  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c9ef  89442424             mov dword ptr [esp + 0x24], eax
// 0050c9f3  0f8c57ffffff         jl 0x50c950
// 0050c9f9  837c242000           cmp dword ptr [esp + 0x20], 0
// 0050c9fe  7422                 je 0x50ca22
// 0050ca00  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050ca03  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0050ca06  8d441102             lea eax, [ecx + edx + 2]
// 0050ca0a  2bc1                 sub eax, ecx
// 0050ca0c  894344               mov dword ptr [ebx + 0x44], eax
// 0050ca0f  7805                 js 0x50ca16
// 0050ca11  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050ca14  7e0c                 jle 0x50ca22
// 0050ca16  03c1                 add eax, ecx
// 0050ca18  6a00                 push 0
// 0050ca1a  50                   push eax
// 0050ca1b  8bcb                 mov ecx, ebx
// 0050ca1d  e8ae8d0000           call 0x5157d0
// 0050ca22  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050ca26  03442430             add eax, dword ptr [esp + 0x30]
// 0050ca2a  89442418             mov dword ptr [esp + 0x18], eax
// 0050ca2e  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0050ca32  0f85f8feffff         jne 0x50c930
// 0050ca38  55                   push ebp
// 0050ca39  e8c2b2ffff           call 0x507d00
// 0050ca3e  83c404               add esp, 4
// 0050ca41  8d4c2474             lea ecx, [esp + 0x74]
// 0050ca45  c78424f8000000ffffffff mov dword ptr [esp + 0xf8], 0xffffffff
// 0050ca50  ff1568248000         call dword ptr [0x802468]
// 0050ca56  8b8c24f0000000       mov ecx, dword ptr [esp + 0xf0]
// 0050ca5d  5f                   pop edi
// 0050ca5e  5e                   pop esi
// 0050ca5f  5d                   pop ebp
// 0050ca60  5b                   pop ebx
// 0050ca61  64890d00000000       mov dword ptr fs:[0], ecx
// 0050ca68  81c4ec000000         add esp, 0xec
// 0050ca6e  c20400               ret 4
// 0050ca71  50                   push eax
// 0050ca72  6683f920             cmp cx, 0x20
// 0050ca76  7564                 jne 0x50cadc
// 0050ca78  e883b2ffff           call 0x507d00
// 0050ca7d  55                   push ebp
// 0050ca7e  c7460400000000       mov dword ptr [esi + 4], 0
// 0050ca85  e876b2ffff           call 0x507d00
// 0050ca8a  83c408               add esp, 8
// 0050ca8d  68b07f8200           push 0x827fb0
// 0050ca92  8d4c2438             lea ecx, [esp + 0x38]
// 0050ca96  ff1558248000         call dword ptr [0x802458]
// 0050ca9c  8d442458             lea eax, [esp + 0x58]
// 0050caa0  50                   push eax
// 0050caa1  8bcb                 mov ecx, ebx
// 0050caa3  c68424fc00000007     mov byte ptr [esp + 0xfc], 7
// 0050caab  e880dfffff           call 0x50aa30
// 0050cab0  50                   push eax
// 0050cab1  8d4c2438             lea ecx, [esp + 0x38]
// 0050cab5  51                   push ecx
// 0050cab6  8d8c2498000000       lea ecx, [esp + 0x98]
// 0050cabd  c684240001000008     mov byte ptr [esp + 0x100], 8
// 0050cac5  e8e65df6ff           call 0x4728b0
// 0050caca  6878c48d00           push 0x8dc478
// 0050cacf  8d942494000000       lea edx, [esp + 0x94]
// 0050cad6  52                   push edx
// 0050cad7  e8b04a1900           call 0x6a158c
// 0050cadc  e81fb2ffff           call 0x507d00
// 0050cae1  83c404               add esp, 4
// 0050cae4  68a07f8200           push 0x827fa0
// 0050cae9  8d4c2438             lea ecx, [esp + 0x38]
// 0050caed  c7460400000000       mov dword ptr [esi + 4], 0
// 0050caf4  ff1558248000         call dword ptr [0x802458]
// 0050cafa  8d442458             lea eax, [esp + 0x58]
// 0050cafe  50                   push eax
// 0050caff  8bcb                 mov ecx, ebx
// 0050cb01  c68424fc00000009     mov byte ptr [esp + 0xfc], 9
// 0050cb09  e822dfffff           call 0x50aa30
// 0050cb0e  50                   push eax
// 0050cb0f  8d4c2438             lea ecx, [esp + 0x38]
// 0050cb13  51                   push ecx
// 0050cb14  8d8c2498000000       lea ecx, [esp + 0x98]
// 0050cb1b  c68424000100000a     mov byte ptr [esp + 0x100], 0xa
// 0050cb23  e8885df6ff           call 0x4728b0
// 0050cb28  6878c48d00           push 0x8dc478
// 0050cb2d  8d942494000000       lea edx, [esp + 0x94]
// 0050cb34  52                   push edx
// 0050cb35  e8524a1900           call 0x6a158c
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?decodeBMP@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
