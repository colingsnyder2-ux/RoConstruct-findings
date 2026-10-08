// roc 2007-03 0072d0d0  unit: seg_00720000  size: 1153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072d0d0
//
// 0072d0d0  51                   push ecx
// 0072d0d1  53                   push ebx
// 0072d0d2  55                   push ebp
// 0072d0d3  56                   push esi
// 0072d0d4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0072d0d8  57                   push edi
// 0072d0d9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0072d0e1  bd01000000           mov ebp, 1
// 0072d0e6  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072d0e9  3d06010000           cmp eax, 0x106
// 0072d0ee  7323                 jae 0x72d113
// 0072d0f0  e83bf9ffff           call 0x72ca30
// 0072d0f5  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072d0f8  3d06010000           cmp eax, 0x106
// 0072d0fd  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0072d101  7308                 jae 0x72d10b
// 0072d103  85ff                 test edi, edi
// 0072d105  0f849d020000         je 0x72d3a8
// 0072d10b  85c0                 test eax, eax
// 0072d10d  0f848d030000         je 0x72d4a0
// 0072d113  83f803               cmp eax, 3
// 0072d116  724d                 jb 0x72d165
// 0072d118  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072d11b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072d11e  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072d121  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0072d124  d3e0                 shl eax, cl
// 0072d126  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072d129  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0072d12e  33c1                 xor eax, ecx
// 0072d130  234654               and eax, dword ptr [esi + 0x54]
// 0072d133  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072d136  894648               mov dword ptr [esi + 0x48], eax
// 0072d139  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0072d13d  23fa                 and edi, edx
// 0072d13f  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072d142  6689047a             mov word ptr [edx + edi*2], ax
// 0072d146  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072d149  234e34               and ecx, dword ptr [esi + 0x34]
// 0072d14c  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072d14f  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 0072d153  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0072d156  8b5644               mov edx, dword ptr [esi + 0x44]
// 0072d159  89442410             mov dword ptr [esp + 0x10], eax
// 0072d15d  0fb7466c             movzx eax, word ptr [esi + 0x6c]
// 0072d161  6689044a             mov word ptr [edx + ecx*2], ax
// 0072d165  8b5670               mov edx, dword ptr [esi + 0x70]
// 0072d168  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0072d16b  895664               mov dword ptr [esi + 0x64], edx
// 0072d16e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072d172  85d2                 test edx, edx
// 0072d174  bb02000000           mov ebx, 2
// 0072d179  894e78               mov dword ptr [esi + 0x78], ecx
// 0072d17c  895e60               mov dword ptr [esi + 0x60], ebx
// 0072d17f  7471                 je 0x72d1f2
// 0072d181  8bc1                 mov eax, ecx
// 0072d183  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0072d189  7367                 jae 0x72d1f2
// 0072d18b  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072d18e  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0072d191  2bc2                 sub eax, edx
// 0072d193  81e906010000         sub ecx, 0x106
// 0072d199  3bc1                 cmp eax, ecx
// 0072d19b  7755                 ja 0x72d1f2
// 0072d19d  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0072d1a3  3bcb                 cmp ecx, ebx
// 0072d1a5  7410                 je 0x72d1b7
// 0072d1a7  83f903               cmp ecx, 3
// 0072d1aa  7410                 je 0x72d1bc
// 0072d1ac  8bc2                 mov eax, edx
// 0072d1ae  8bfe                 mov edi, esi
// 0072d1b0  e82bf6ffff           call 0x72c7e0
// 0072d1b5  eb12                 jmp 0x72d1c9
// 0072d1b7  83f903               cmp ecx, 3
// 0072d1ba  7510                 jne 0x72d1cc
// 0072d1bc  3bc5                 cmp eax, ebp
// 0072d1be  750c                 jne 0x72d1cc
// 0072d1c0  52                   push edx
// 0072d1c1  e89af7ffff           call 0x72c960
// 0072d1c6  83c404               add esp, 4
// 0072d1c9  894660               mov dword ptr [esi + 0x60], eax
// 0072d1cc  8b4660               mov eax, dword ptr [esi + 0x60]
// 0072d1cf  83f805               cmp eax, 5
// 0072d1d2  771e                 ja 0x72d1f2
// 0072d1d4  39ae88000000         cmp dword ptr [esi + 0x88], ebp
// 0072d1da  7413                 je 0x72d1ef
// 0072d1dc  83f803               cmp eax, 3
// 0072d1df  7511                 jne 0x72d1f2
// 0072d1e1  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072d1e4  2b5670               sub edx, dword ptr [esi + 0x70]
// 0072d1e7  81fa00100000         cmp edx, 0x1000
// 0072d1ed  7603                 jbe 0x72d1f2
// 0072d1ef  895e60               mov dword ptr [esi + 0x60], ebx
// 0072d1f2  8b4678               mov eax, dword ptr [esi + 0x78]
// 0072d1f5  83f803               cmp eax, 3
// 0072d1f8  0f82b2010000         jb 0x72d3b0
// 0072d1fe  394660               cmp dword ptr [esi + 0x60], eax
// 0072d201  0f87a9010000         ja 0x72d3b0
// 0072d207  668b566c             mov dx, word ptr [esi + 0x6c]
// 0072d20b  662b5664             sub dx, word ptr [esi + 0x64]
// 0072d20f  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072d212  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0072d215  8b9ea4160000         mov ebx, dword ptr [esi + 0x16a4]
// 0072d21b  8d7c08fd             lea edi, [eax + ecx - 3]
// 0072d21f  8a4678               mov al, byte ptr [esi + 0x78]
// 0072d222  662bd5               sub dx, bp
// 0072d225  0fb7ca               movzx ecx, dx
// 0072d228  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072d22e  66890c53             mov word ptr [ebx + edx*2], cx
// 0072d232  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0072d238  8b9ea0160000         mov ebx, dword ptr [esi + 0x16a0]
// 0072d23e  2c03                 sub al, 3
// 0072d240  88041a               mov byte ptr [edx + ebx], al
// 0072d243  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072d249  0fb6c0               movzx eax, al
// 0072d24c  0fb690e06a7e00       movzx edx, byte ptr [eax + 0x7e6ae0]
// 0072d253  6601ac9698040000     add word ptr [esi + edx*4 + 0x498], bp
// 0072d25b  8d849698040000       lea eax, [esi + edx*4 + 0x498]
// 0072d262  81c1ffff0000         add ecx, 0xffff
// 0072d268  6681f90001           cmp cx, 0x100
// 0072d26d  730c                 jae 0x72d27b
// 0072d26f  0fb7c1               movzx eax, cx
// 0072d272  0fb680e0687e00       movzx eax, byte ptr [eax + 0x7e68e0]
// 0072d279  eb0d                 jmp 0x72d288
// 0072d27b  0fb7c9               movzx ecx, cx
// 0072d27e  c1e907               shr ecx, 7
// 0072d281  0fb681e0697e00       movzx eax, byte ptr [ecx + 0x7e69e0]
// 0072d288  6601ac8688090000     add word ptr [esi + eax*4 + 0x988], bp
// 0072d290  8b969c160000         mov edx, dword ptr [esi + 0x169c]
// 0072d296  8b4678               mov eax, dword ptr [esi + 0x78]
// 0072d299  2bd5                 sub edx, ebp
// 0072d29b  33db                 xor ebx, ebx
// 0072d29d  3996a0160000         cmp dword ptr [esi + 0x16a0], edx
// 0072d2a3  8bcd                 mov ecx, ebp
// 0072d2a5  0f94c3               sete bl
// 0072d2a8  2bc8                 sub ecx, eax
// 0072d2aa  014e74               add dword ptr [esi + 0x74], ecx
// 0072d2ad  83c0fe               add eax, -2
// 0072d2b0  894678               mov dword ptr [esi + 0x78], eax
// 0072d2b3  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072d2b6  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072d2b9  3bd7                 cmp edx, edi
// 0072d2bb  774e                 ja 0x72d30b
// 0072d2bd  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072d2c0  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072d2c3  8b6e40               mov ebp, dword ptr [esi + 0x40]
// 0072d2c6  d3e0                 shl eax, cl
// 0072d2c8  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072d2cb  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0072d2d0  235634               and edx, dword ptr [esi + 0x34]
// 0072d2d3  33c1                 xor eax, ecx
// 0072d2d5  234654               and eax, dword ptr [esi + 0x54]
// 0072d2d8  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072d2db  894648               mov dword ptr [esi + 0x48], eax
// 0072d2de  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0072d2e2  6689445500           mov word ptr [ebp + edx*2], ax
// 0072d2e7  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072d2ea  234e34               and ecx, dword ptr [esi + 0x34]
// 0072d2ed  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072d2f0  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 0072d2f4  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0072d2f7  8b5644               mov edx, dword ptr [esi + 0x44]
// 0072d2fa  89442410             mov dword ptr [esp + 0x10], eax
// 0072d2fe  0fb7466c             movzx eax, word ptr [esi + 0x6c]
// 0072d302  6689044a             mov word ptr [edx + ecx*2], ax
// 0072d306  bd01000000           mov ebp, 1
// 0072d30b  834678ff             add dword ptr [esi + 0x78], -1
// 0072d30f  75a2                 jne 0x72d2b3
// 0072d311  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072d314  85db                 test ebx, ebx
// 0072d316  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072d319  c7466800000000       mov dword ptr [esi + 0x68], 0
// 0072d320  c7466002000000       mov dword ptr [esi + 0x60], 2
// 0072d327  0f84b9fdffff         je 0x72d0e6
// 0072d32d  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0072d330  85d2                 test edx, edx
// 0072d332  7c07                 jl 0x72d33b
// 0072d334  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072d337  03ca                 add ecx, edx
// 0072d339  eb02                 jmp 0x72d33d
// 0072d33b  33c9                 xor ecx, ecx
// 0072d33d  6a00                 push 0
// 0072d33f  2bc2                 sub eax, edx
// 0072d341  50                   push eax
// 0072d342  51                   push ecx
// 0072d343  56                   push esi
// 0072d344  e8278bffff           call 0x725e70
// 0072d349  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072d34c  8b3e                 mov edi, dword ptr [esi]
// 0072d34e  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0072d351  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d354  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0072d357  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072d35a  83c410               add esp, 0x10
// 0072d35d  3bd9                 cmp ebx, ecx
// 0072d35f  7602                 jbe 0x72d363
// 0072d361  8bd9                 mov ebx, ecx
// 0072d363  85db                 test ebx, ebx
// 0072d365  7435                 je 0x72d39c
// 0072d367  8b5010               mov edx, dword ptr [eax + 0x10]
// 0072d36a  8b470c               mov eax, dword ptr [edi + 0xc]
// 0072d36d  53                   push ebx
// 0072d36e  52                   push edx
// 0072d36f  50                   push eax
// 0072d370  e86d1eefff           call 0x61f1e2
// 0072d375  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d378  015f0c               add dword ptr [edi + 0xc], ebx
// 0072d37b  015810               add dword ptr [eax + 0x10], ebx
// 0072d37e  015f14               add dword ptr [edi + 0x14], ebx
// 0072d381  295f10               sub dword ptr [edi + 0x10], ebx
// 0072d384  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d387  295814               sub dword ptr [eax + 0x14], ebx
// 0072d38a  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072d38d  83c40c               add esp, 0xc
// 0072d390  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072d394  7506                 jne 0x72d39c
// 0072d396  8b4f08               mov ecx, dword ptr [edi + 8]
// 0072d399  894f10               mov dword ptr [edi + 0x10], ecx
// 0072d39c  8b16                 mov edx, dword ptr [esi]
// 0072d39e  837a1000             cmp dword ptr [edx + 0x10], 0
// 0072d3a2  0f853efdffff         jne 0x72d0e6
// 0072d3a8  5f                   pop edi
// 0072d3a9  5e                   pop esi
// 0072d3aa  5d                   pop ebp
// 0072d3ab  33c0                 xor eax, eax
// 0072d3ad  5b                   pop ebx
// 0072d3ae  59                   pop ecx
// 0072d3af  c3                   ret 
// 0072d3b0  837e6800             cmp dword ptr [esi + 0x68], 0
// 0072d3b4  0f84d7000000         je 0x72d491
// 0072d3ba  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072d3bd  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072d3c0  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 0072d3c4  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072d3ca  8b8ea4160000         mov ecx, dword ptr [esi + 0x16a4]
// 0072d3d0  66c704510000         mov word ptr [ecx + edx*2], 0
// 0072d3d6  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0072d3dc  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 0072d3e2  88040a               mov byte ptr [edx + ecx], al
// 0072d3e5  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072d3eb  0fb6d0               movzx edx, al
// 0072d3ee  6601ac9694000000     add word ptr [esi + edx*4 + 0x94], bp
// 0072d3f6  8d849694000000       lea eax, [esi + edx*4 + 0x94]
// 0072d3fd  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 0072d403  2bc5                 sub eax, ebp
// 0072d405  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 0072d40b  7572                 jne 0x72d47f
// 0072d40d  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072d410  85c9                 test ecx, ecx
// 0072d412  7c07                 jl 0x72d41b
// 0072d414  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072d417  03c1                 add eax, ecx
// 0072d419  eb02                 jmp 0x72d41d
// 0072d41b  33c0                 xor eax, eax
// 0072d41d  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072d420  6a00                 push 0
// 0072d422  2bd1                 sub edx, ecx
// 0072d424  52                   push edx
// 0072d425  50                   push eax
// 0072d426  56                   push esi
// 0072d427  e8448affff           call 0x725e70
// 0072d42c  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072d42f  8b3e                 mov edi, dword ptr [esi]
// 0072d431  89465c               mov dword ptr [esi + 0x5c], eax
// 0072d434  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d437  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0072d43a  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072d43d  83c410               add esp, 0x10
// 0072d440  3bd9                 cmp ebx, ecx
// 0072d442  7602                 jbe 0x72d446
// 0072d444  8bd9                 mov ebx, ecx
// 0072d446  85db                 test ebx, ebx
// 0072d448  7435                 je 0x72d47f
// 0072d44a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0072d44d  8b570c               mov edx, dword ptr [edi + 0xc]
// 0072d450  53                   push ebx
// 0072d451  51                   push ecx
// 0072d452  52                   push edx
// 0072d453  e88a1defff           call 0x61f1e2
// 0072d458  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d45b  015f0c               add dword ptr [edi + 0xc], ebx
// 0072d45e  015810               add dword ptr [eax + 0x10], ebx
// 0072d461  015f14               add dword ptr [edi + 0x14], ebx
// 0072d464  295f10               sub dword ptr [edi + 0x10], ebx
// 0072d467  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d46a  295814               sub dword ptr [eax + 0x14], ebx
// 0072d46d  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072d470  83c40c               add esp, 0xc
// 0072d473  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072d477  7506                 jne 0x72d47f
// 0072d479  8b4708               mov eax, dword ptr [edi + 8]
// 0072d47c  894710               mov dword ptr [edi + 0x10], eax
// 0072d47f  8b0e                 mov ecx, dword ptr [esi]
// 0072d481  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072d484  834674ff             add dword ptr [esi + 0x74], -1
// 0072d488  83791000             cmp dword ptr [ecx + 0x10], 0
// 0072d48c  e911ffffff           jmp 0x72d3a2
// 0072d491  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072d494  834674ff             add dword ptr [esi + 0x74], -1
// 0072d498  896e68               mov dword ptr [esi + 0x68], ebp
// 0072d49b  e946fcffff           jmp 0x72d0e6
// 0072d4a0  837e6800             cmp dword ptr [esi + 0x68], 0
// 0072d4a4  744a                 je 0x72d4f0
// 0072d4a6  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072d4a9  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072d4ac  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 0072d4b0  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 0072d4b6  8b96a4160000         mov edx, dword ptr [esi + 0x16a4]
// 0072d4bc  66c7044a0000         mov word ptr [edx + ecx*2], 0
// 0072d4c2  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072d4c8  8b8e98160000         mov ecx, dword ptr [esi + 0x1698]
// 0072d4ce  880411               mov byte ptr [ecx + edx], al
// 0072d4d1  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072d4d7  0fb6c0               movzx eax, al
// 0072d4da  6601ac8694000000     add word ptr [esi + eax*4 + 0x94], bp
// 0072d4e2  8d848694000000       lea eax, [esi + eax*4 + 0x94]
// 0072d4e9  c7466800000000       mov dword ptr [esi + 0x68], 0
// 0072d4f0  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072d4f3  85c9                 test ecx, ecx
// 0072d4f5  7c07                 jl 0x72d4fe
// 0072d4f7  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072d4fa  03c1                 add eax, ecx
// 0072d4fc  eb02                 jmp 0x72d500
// 0072d4fe  33c0                 xor eax, eax
// 0072d500  33d2                 xor edx, edx
// 0072d502  83ff04               cmp edi, 4
// 0072d505  0f94c2               sete dl
// 0072d508  52                   push edx
// 0072d509  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072d50c  2bd1                 sub edx, ecx
// 0072d50e  52                   push edx
// 0072d50f  50                   push eax
// 0072d510  56                   push esi
// 0072d511  e85a89ffff           call 0x725e70
// 0072d516  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072d519  89465c               mov dword ptr [esi + 0x5c], eax
// 0072d51c  8b06                 mov eax, dword ptr [esi]
// 0072d51e  83c410               add esp, 0x10
// 0072d521  e82ae9ffff           call 0x72be50
// 0072d526  8b0e                 mov ecx, dword ptr [esi]
// 0072d528  33c0                 xor eax, eax
// 0072d52a  394110               cmp dword ptr [ecx + 0x10], eax
// 0072d52d  7512                 jne 0x72d541
// 0072d52f  83ff04               cmp edi, 4
// 0072d532  0f95c0               setne al
// 0072d535  5f                   pop edi
// 0072d536  5e                   pop esi
// 0072d537  5d                   pop ebp
// 0072d538  5b                   pop ebx
// 0072d539  83e801               sub eax, 1
// 0072d53c  83e002               and eax, 2
// 0072d53f  59                   pop ecx
// 0072d540  c3                   ret 
// 0072d541  83ff04               cmp edi, 4
// 0072d544  0f94c0               sete al
// 0072d547  5f                   pop edi
// 0072d548  5e                   pop esi
// 0072d549  5d                   pop ebp
// 0072d54a  5b                   pop ebx
// 0072d54b  8d440001             lea eax, [eax + eax + 1]
// 0072d54f  59                   pop ecx
// 0072d550  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
