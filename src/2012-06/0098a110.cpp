// roc 2012-06 0098a110  unit: CXTPPaintManager  size: 1147 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098a110
//
// 0098a110  6aff                 push -1
// 0098a112  6819c1ad00           push 0xadc119
// 0098a117  64a100000000         mov eax, dword ptr fs:[0]
// 0098a11d  50                   push eax
// 0098a11e  83ec48               sub esp, 0x48
// 0098a121  53                   push ebx
// 0098a122  55                   push ebp
// 0098a123  56                   push esi
// 0098a124  57                   push edi
// 0098a125  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098a12a  33c4                 xor eax, esp
// 0098a12c  50                   push eax
// 0098a12d  8d44245c             lea eax, [esp + 0x5c]
// 0098a131  64a300000000         mov dword ptr fs:[0], eax
// 0098a137  8bf9                 mov edi, ecx
// 0098a139  837c247800           cmp dword ptr [esp + 0x78], 0
// 0098a13e  8b742474             mov esi, dword ptr [esp + 0x74]
// 0098a142  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0098a148  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0098a14e  0f841c020000         je 0x98a370
// 0098a154  83f802               cmp eax, 2
// 0098a157  751b                 jne 0x98a174
// 0098a159  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098a15d  8b07                 mov eax, dword ptr [edi]
// 0098a15f  8b4058               mov eax, dword ptr [eax + 0x58]
// 0098a162  6a01                 push 1
// 0098a164  56                   push esi
// 0098a165  51                   push ecx
// 0098a166  8d542430             lea edx, [esp + 0x30]
// 0098a16a  52                   push edx
// 0098a16b  8bcf                 mov ecx, edi
// 0098a16d  ffd0                 call eax
// 0098a16f  e9e6010000           jmp 0x98a35a
// 0098a174  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0098a17a  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0098a180  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 0098a186  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0098a18c  89442444             mov dword ptr [esp + 0x44], eax
// 0098a190  89442434             mov dword ptr [esp + 0x34], eax
// 0098a194  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0098a19a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0098a19e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0098a1a4  83c302               add ebx, 2
// 0098a1a7  89542440             mov dword ptr [esp + 0x40], edx
// 0098a1ab  894c2448             mov dword ptr [esp + 0x48], ecx
// 0098a1af  89542430             mov dword ptr [esp + 0x30], edx
// 0098a1b3  894c2438             mov dword ptr [esp + 0x38], ecx
// 0098a1b7  83f8ff               cmp eax, -1
// 0098a1ba  750f                 jne 0x98a1cb
// 0098a1bc  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0098a1c2  85c9                 test ecx, ecx
// 0098a1c4  7405                 je 0x98a1cb
// 0098a1c6  e855adffff           call 0x984f20
// 0098a1cb  8bce                 mov ecx, esi
// 0098a1cd  89442478             mov dword ptr [esp + 0x78], eax
// 0098a1d1  e85a9d0800           call 0xa13f30
// 0098a1d6  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0098a1da  85c0                 test eax, eax
// 0098a1dc  0f84ab000000         je 0x98a28d
// 0098a1e2  8b16                 mov edx, dword ptr [esi]
// 0098a1e4  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0098a1ea  8d442414             lea eax, [esp + 0x14]
// 0098a1ee  50                   push eax
// 0098a1ef  8bce                 mov ecx, esi
// 0098a1f1  ffd2                 call edx
// 0098a1f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0098a1f7  8b06                 mov eax, dword ptr [esi]
// 0098a1f9  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0098a1ff  51                   push ecx
// 0098a200  8bce                 mov ecx, esi
// 0098a202  ffd2                 call edx
// 0098a204  8bd8                 mov ebx, eax
// 0098a206  8bcb                 mov ecx, ebx
// 0098a208  e813d80000           call 0x997a20
// 0098a20d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 0098a212  8bcb                 mov ecx, ebx
// 0098a214  89442470             mov dword ptr [esp + 0x70], eax
// 0098a218  e843140a00           call 0xa2b660
// 0098a21d  8bc8                 mov ecx, eax
// 0098a21f  8b442470             mov eax, dword ptr [esp + 0x70]
// 0098a223  99                   cdq 
// 0098a224  f7f9                 idiv ecx
// 0098a226  8b542440             mov edx, dword ptr [esp + 0x40]
// 0098a22a  6a01                 push 1
// 0098a22c  6a00                 push 0
// 0098a22e  6a00                 push 0
// 0098a230  89442424             mov dword ptr [esp + 0x24], eax
// 0098a234  8b442454             mov eax, dword ptr [esp + 0x54]
// 0098a238  03c2                 add eax, edx
// 0098a23a  99                   cdq 
// 0098a23b  2bc2                 sub eax, edx
// 0098a23d  8bc8                 mov ecx, eax
// 0098a23f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0098a243  99                   cdq 
// 0098a244  2bc2                 sub eax, edx
// 0098a246  8b542448             mov edx, dword ptr [esp + 0x48]
// 0098a24a  83c203               add edx, 3
// 0098a24d  89542430             mov dword ptr [esp + 0x30], edx
// 0098a251  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0098a258  52                   push edx
// 0098a259  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098a25d  6a00                 push 0
// 0098a25f  6a00                 push 0
// 0098a261  53                   push ebx
// 0098a262  52                   push edx
// 0098a263  8b542434             mov edx, dword ptr [esp + 0x34]
// 0098a267  d1f9                 sar ecx, 1
// 0098a269  d1f8                 sar eax, 1
// 0098a26b  2bc8                 sub ecx, eax
// 0098a26d  8b07                 mov eax, dword ptr [edi]
// 0098a26f  52                   push edx
// 0098a270  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0098a276  51                   push ecx
// 0098a277  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0098a27b  51                   push ecx
// 0098a27c  55                   push ebp
// 0098a27d  8bcf                 mov ecx, edi
// 0098a27f  ffd2                 call edx
// 0098a281  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098a285  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0098a289  8d5c0106             lea ebx, [ecx + eax + 6]
// 0098a28d  8b16                 mov edx, dword ptr [esi]
// 0098a28f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 0098a295  8bce                 mov ecx, esi
// 0098a297  ffd0                 call eax
// 0098a299  85c0                 test eax, eax
// 0098a29b  0f84b9000000         je 0x98a35a
// 0098a2a1  85ff                 test edi, edi
// 0098a2a3  7510                 jne 0x98a2b5
// 0098a2a5  6a11                 push 0x11
// 0098a2a7  ff153021b200         call dword ptr [0xb22130]
// 0098a2ad  50                   push eax
// 0098a2ae  e83b89ffff           call 0x982bee
// 0098a2b3  eb06                 jmp 0x98a2bb
// 0098a2b5  8d87f0000000         lea eax, [edi + 0xf0]
// 0098a2bb  50                   push eax
// 0098a2bc  55                   push ebp
// 0098a2bd  8d4c241c             lea ecx, [esp + 0x1c]
// 0098a2c1  e86ab20400           call 0x9d5530
// 0098a2c6  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0098a2cc  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0098a2d2  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0098a2d8  8b5500               mov edx, dword ptr [ebp]
// 0098a2db  51                   push ecx
// 0098a2dc  50                   push eax
// 0098a2dd  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0098a2e4  6a00                 push 0
// 0098a2e6  6a00                 push 0
// 0098a2e8  50                   push eax
// 0098a2e9  89942484000000       mov dword ptr [esp + 0x84], edx
// 0098a2f0  8b17                 mov edx, dword ptr [edi]
// 0098a2f2  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0098a2f8  6a00                 push 0
// 0098a2fa  6a00                 push 0
// 0098a2fc  8bcf                 mov ecx, edi
// 0098a2fe  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0098a309  ffd2                 call edx
// 0098a30b  50                   push eax
// 0098a30c  8b442474             mov eax, dword ptr [esp + 0x74]
// 0098a310  8b5038               mov edx, dword ptr [eax + 0x38]
// 0098a313  8bcd                 mov ecx, ebp
// 0098a315  ffd2                 call edx
// 0098a317  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098a31b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0098a31f  6a00                 push 0
// 0098a321  6a00                 push 0
// 0098a323  6a00                 push 0
// 0098a325  6a01                 push 1
// 0098a327  83ec10               sub esp, 0x10
// 0098a32a  8bc4                 mov eax, esp
// 0098a32c  8918                 mov dword ptr [eax], ebx
// 0098a32e  894804               mov dword ptr [eax + 4], ecx
// 0098a331  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0098a335  56                   push esi
// 0098a336  895008               mov dword ptr [eax + 8], edx
// 0098a339  55                   push ebp
// 0098a33a  8d54244c             lea edx, [esp + 0x4c]
// 0098a33e  89480c               mov dword ptr [eax + 0xc], ecx
// 0098a341  52                   push edx
// 0098a342  8bcf                 mov ecx, edi
// 0098a344  e827f6ffff           call 0x989970
// 0098a349  8d4c2414             lea ecx, [esp + 0x14]
// 0098a34d  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0098a355  e856b20400           call 0x9d55b0
// 0098a35a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0098a35e  c70000000000         mov dword ptr [eax], 0
// 0098a364  c7400400000000       mov dword ptr [eax + 4], 0
// 0098a36b  e905020000           jmp 0x98a575
// 0098a370  8b16                 mov edx, dword ptr [esi]
// 0098a372  8b5258               mov edx, dword ptr [edx + 0x58]
// 0098a375  33c9                 xor ecx, ecx
// 0098a377  83f802               cmp eax, 2
// 0098a37a  0f94c1               sete cl
// 0098a37d  8d442474             lea eax, [esp + 0x74]
// 0098a381  50                   push eax
// 0098a382  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0098a386  8bce                 mov ecx, esi
// 0098a388  ffd2                 call edx
// 0098a38a  8d442474             lea eax, [esp + 0x74]
// 0098a38e  50                   push eax
// 0098a38f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 0098a397  e884d7ffff           call 0x987b20
// 0098a39c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 0098a3a0  83c404               add esp, 4
// 0098a3a3  8d8fa4000000         lea ecx, [edi + 0xa4]
// 0098a3a9  51                   push ecx
// 0098a3aa  55                   push ebp
// 0098a3ab  8d4c2454             lea ecx, [esp + 0x54]
// 0098a3af  e87cb10400           call 0x9d5530
// 0098a3b4  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 0098a3ba  c644246402           mov byte ptr [esp + 0x64], 2
// 0098a3bf  85c0                 test eax, eax
// 0098a3c1  7e06                 jle 0x98a3c9
// 0098a3c3  89442470             mov dword ptr [esp + 0x70], eax
// 0098a3c7  eb21                 jmp 0x98a3ea
// 0098a3c9  8b4508               mov eax, dword ptr [ebp + 8]
// 0098a3cc  8d542424             lea edx, [esp + 0x24]
// 0098a3d0  52                   push edx
// 0098a3d1  6a01                 push 1
// 0098a3d3  68ecf3b400           push 0xb4f3ec
// 0098a3d8  50                   push eax
// 0098a3d9  ff154021b200         call dword ptr [0xb22140]
// 0098a3df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098a3e3  83c107               add ecx, 7
// 0098a3e6  894c2470             mov dword ptr [esp + 0x70], ecx
// 0098a3ea  8d87f0000000         lea eax, [edi + 0xf0]
// 0098a3f0  50                   push eax
// 0098a3f1  8d4c2450             lea ecx, [esp + 0x50]
// 0098a3f5  e8169c0400           call 0x9d4010
// 0098a3fa  8b16                 mov edx, dword ptr [esi]
// 0098a3fc  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 0098a402  8bce                 mov ecx, esi
// 0098a404  ffd0                 call eax
// 0098a406  8bd8                 mov ebx, eax
// 0098a408  85db                 test ebx, ebx
// 0098a40a  7449                 je 0x98a455
// 0098a40c  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 0098a413  7540                 jne 0x98a455
// 0098a415  8b5508               mov edx, dword ptr [ebp + 8]
// 0098a418  8d4c2424             lea ecx, [esp + 0x24]
// 0098a41c  51                   push ecx
// 0098a41d  6a01                 push 1
// 0098a41f  68ecf3b400           push 0xb4f3ec
// 0098a424  52                   push edx
// 0098a425  ff154021b200         call dword ptr [0xb22140]
// 0098a42b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0098a42f  83c007               add eax, 7
// 0098a432  39442470             cmp dword ptr [esp + 0x70], eax
// 0098a436  7f1d                 jg 0x98a455
// 0098a438  6a01                 push 1
// 0098a43a  68ecf3b400           push 0xb4f3ec
// 0098a43f  8d4c241c             lea ecx, [esp + 0x1c]
// 0098a443  51                   push ecx
// 0098a444  8bcd                 mov ecx, ebp
// 0098a446  e8c5dfffff           call 0x988410
// 0098a44b  8b4004               mov eax, dword ptr [eax + 4]
// 0098a44e  83c007               add eax, 7
// 0098a451  89442470             mov dword ptr [esp + 0x70], eax
// 0098a455  8d542424             lea edx, [esp + 0x24]
// 0098a459  52                   push edx
// 0098a45a  8d4c2478             lea ecx, [esp + 0x78]
// 0098a45e  ff155846b200         call dword ptr [0xb24658]
// 0098a464  50                   push eax
// 0098a465  8d4c247c             lea ecx, [esp + 0x7c]
// 0098a469  ff159847b200         call dword ptr [0xb24798]
// 0098a46f  50                   push eax
// 0098a470  8b4508               mov eax, dword ptr [ebp + 8]
// 0098a473  50                   push eax
// 0098a474  ff154021b200         call dword ptr [0xb22140]
// 0098a47a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0098a47e  83c505               add ebp, 5
// 0098a481  837c247800           cmp dword ptr [esp + 0x78], 0
// 0098a486  7443                 je 0x98a4cb
// 0098a488  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0098a48e  8b17                 mov edx, dword ptr [edi]
// 0098a490  50                   push eax
// 0098a491  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 0098a497  8bcf                 mov ecx, edi
// 0098a499  ffd0                 call eax
// 0098a49b  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 0098a4a1  03f8                 add edi, eax
// 0098a4a3  03fd                 add edi, ebp
// 0098a4a5  39be80010000         cmp dword ptr [esi + 0x180], edi
// 0098a4ab  7410                 je 0x98a4bd
// 0098a4ad  89be80010000         mov dword ptr [esi + 0x180], edi
// 0098a4b3  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 0098a4bd  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 0098a4c3  8d0c06               lea ecx, [esi + eax]
// 0098a4c6  e983000000           jmp 0x98a54e
// 0098a4cb  8bce                 mov ecx, esi
// 0098a4cd  e85e9a0800           call 0xa13f30
// 0098a4d2  8bf8                 mov edi, eax
// 0098a4d4  85ff                 test edi, edi
// 0098a4d6  7418                 je 0x98a4f0
// 0098a4d8  8b06                 mov eax, dword ptr [esi]
// 0098a4da  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0098a4e0  8d4c2424             lea ecx, [esp + 0x24]
// 0098a4e4  51                   push ecx
// 0098a4e5  8bce                 mov ecx, esi
// 0098a4e7  ffd2                 call edx
// 0098a4e9  8b00                 mov eax, dword ptr [eax]
// 0098a4eb  83c004               add eax, 4
// 0098a4ee  eb02                 jmp 0x98a4f2
// 0098a4f0  33c0                 xor eax, eax
// 0098a4f2  f7db                 neg ebx
// 0098a4f4  1bdb                 sbb ebx, ebx
// 0098a4f6  23dd                 and ebx, ebp
// 0098a4f8  03d8                 add ebx, eax
// 0098a4fa  85ff                 test edi, edi
// 0098a4fc  7432                 je 0x98a530
// 0098a4fe  8b06                 mov eax, dword ptr [esi]
// 0098a500  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 0098a506  8d4c242c             lea ecx, [esp + 0x2c]
// 0098a50a  51                   push ecx
// 0098a50b  8bce                 mov ecx, esi
// 0098a50d  ffd2                 call edx
// 0098a50f  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098a513  3b4804               cmp ecx, dword ptr [eax + 4]
// 0098a516  7f18                 jg 0x98a530
// 0098a518  8b16                 mov edx, dword ptr [esi]
// 0098a51a  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 0098a520  8d44243c             lea eax, [esp + 0x3c]
// 0098a524  50                   push eax
// 0098a525  8bce                 mov ecx, esi
// 0098a527  ffd2                 call edx
// 0098a529  8b4004               mov eax, dword ptr [eax + 4]
// 0098a52c  89442470             mov dword ptr [esp + 0x70], eax
// 0098a530  399e80010000         cmp dword ptr [esi + 0x180], ebx
// 0098a536  7410                 je 0x98a548
// 0098a538  899e80010000         mov dword ptr [esi + 0x180], ebx
// 0098a53e  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 0098a548  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 0098a54e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0098a552  8b542470             mov edx, dword ptr [esp + 0x70]
// 0098a556  890e                 mov dword ptr [esi], ecx
// 0098a558  8d4c244c             lea ecx, [esp + 0x4c]
// 0098a55c  895604               mov dword ptr [esi + 4], edx
// 0098a55f  c644246401           mov byte ptr [esp + 0x64], 1
// 0098a564  e847b00400           call 0x9d55b0
// 0098a569  8d4c2474             lea ecx, [esp + 0x74]
// 0098a56d  ff15d047b200         call dword ptr [0xb247d0]
// 0098a573  8bc6                 mov eax, esi
// 0098a575  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0098a579  64890d00000000       mov dword ptr fs:[0], ecx
// 0098a580  59                   pop ecx
// 0098a581  5f                   pop edi
// 0098a582  5e                   pop esi
// 0098a583  5d                   pop ebp
// 0098a584  5b                   pop ebx
// 0098a585  83c454               add esp, 0x54
// 0098a588  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlEdit@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp