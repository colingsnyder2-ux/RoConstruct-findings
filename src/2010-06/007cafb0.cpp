// roc 2010-06 007cafb0  unit: CXTPCommandBarKeyboardTip  size: 1907 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cafb0
//
// 007cafb0  6aff                 push -1
// 007cafb2  6893049b00           push 0x9b0493
// 007cafb7  64a100000000         mov eax, dword ptr fs:[0]
// 007cafbd  50                   push eax
// 007cafbe  83ec64               sub esp, 0x64
// 007cafc1  53                   push ebx
// 007cafc2  55                   push ebp
// 007cafc3  56                   push esi
// 007cafc4  57                   push edi
// 007cafc5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007cafca  33c4                 xor eax, esp
// 007cafcc  50                   push eax
// 007cafcd  8d442478             lea eax, [esp + 0x78]
// 007cafd1  64a300000000         mov dword ptr fs:[0], eax
// 007cafd7  8bd9                 mov ebx, ecx
// 007cafd9  895c2414             mov dword ptr [esp + 0x14], ebx
// 007cafdd  e8beebffff           call 0x7c9ba0
// 007cafe2  8b4374               mov eax, dword ptr [ebx + 0x74]
// 007cafe5  33ed                 xor ebp, ebp
// 007cafe7  39a8c4000000         cmp dword ptr [eax + 0xc4], ebp
// 007cafed  0f841a070000         je 0x7cb70d
// 007caff3  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 007caffa  3bf5                 cmp esi, ebp
// 007caffc  0f840b070000         je 0x7cb70d
// 007cb002  396e20               cmp dword ptr [esi + 0x20], ebp
// 007cb005  0f8402070000         je 0x7cb70d
// 007cb00b  8bcb                 mov ecx, ebx
// 007cb00d  e89eb6d0ff           call 0x4d66b0
// 007cb012  8bc8                 mov ecx, eax
// 007cb014  e827ad0400           call 0x815d40
// 007cb019  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cb01c  51                   push ecx
// 007cb01d  ff15d8ba9e00         call dword ptr [0x9ebad8]
// 007cb023  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 007cb02a  895344               mov dword ptr [ebx + 0x44], edx
// 007cb02d  897340               mov dword ptr [ebx + 0x40], esi
// 007cb030  896b48               mov dword ptr [ebx + 0x48], ebp
// 007cb033  8b06                 mov eax, dword ptr [esi]
// 007cb035  8b90c4010000         mov edx, dword ptr [eax + 0x1c4]
// 007cb03b  8bce                 mov ecx, esi
// 007cb03d  ffd2                 call edx
// 007cb03f  396b34               cmp dword ptr [ebx + 0x34], ebp
// 007cb042  7508                 jne 0x7cb04c
// 007cb044  896b40               mov dword ptr [ebx + 0x40], ebp
// 007cb047  e9c1060000           jmp 0x7cb70d
// 007cb04c  8bcb                 mov ecx, ebx
// 007cb04e  e86dd7ffff           call 0x7c87c0
// 007cb053  8bf8                 mov edi, eax
// 007cb055  56                   push esi
// 007cb056  8d4c2468             lea ecx, [esp + 0x68]
// 007cb05a  897c242c             mov dword ptr [esp + 0x2c], edi
// 007cb05e  e8d1d7fdff           call 0x7a8834
// 007cb063  81c7bc000000         add edi, 0xbc
// 007cb069  57                   push edi
// 007cb06a  8d442468             lea eax, [esp + 0x68]
// 007cb06e  50                   push eax
// 007cb06f  8d4c245c             lea ecx, [esp + 0x5c]
// 007cb073  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 007cb07a  e821460300           call 0x7ff6a0
// 007cb07f  8b6b34               mov ebp, dword ptr [ebx + 0x34]
// 007cb082  83c5ff               add ebp, -1
// 007cb085  c684248000000001     mov byte ptr [esp + 0x80], 1
// 007cb08d  0f88f0000000         js 0x7cb183
// 007cb093  85ed                 test ebp, ebp
// 007cb095  0f8c86020000         jl 0x7cb321
// 007cb09b  3b6b34               cmp ebp, dword ptr [ebx + 0x34]
// 007cb09e  0f8d7d020000         jge 0x7cb321
// 007cb0a4  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 007cb0a7  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 007cb0aa  8d04a9               lea eax, [ecx + ebp*4]
// 007cb0ad  8d4e54               lea ecx, [esi + 0x54]
// 007cb0b0  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 007cb0b7  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007cb0bd  33d2                 xor edx, edx
// 007cb0bf  84c0                 test al, al
// 007cb0c1  0f94c2               sete dl
// 007cb0c4  8bc2                 mov eax, edx
// 007cb0c6  89467c               mov dword ptr [esi + 0x7c], eax
// 007cb0c9  85c0                 test eax, eax
// 007cb0cb  0f85a9000000         jne 0x7cb17a
// 007cb0d1  8d7e58               lea edi, [esi + 0x58]
// 007cb0d4  8bcf                 mov ecx, edi
// 007cb0d6  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007cb0dc  84c0                 test al, al
// 007cb0de  7421                 je 0x7cb101
// 007cb0e0  8b06                 mov eax, dword ptr [esi]
// 007cb0e2  8b5068               mov edx, dword ptr [eax + 0x68]
// 007cb0e5  8bce                 mov ecx, esi
// 007cb0e7  ffd2                 call edx
// 007cb0e9  8b06                 mov eax, dword ptr [esi]
// 007cb0eb  8b5004               mov edx, dword ptr [eax + 4]
// 007cb0ee  6a01                 push 1
// 007cb0f0  8bce                 mov ecx, esi
// 007cb0f2  ffd2                 call edx
// 007cb0f4  6a01                 push 1
// 007cb0f6  55                   push ebp
// 007cb0f7  8d4b2c               lea ecx, [ebx + 0x2c]
// 007cb0fa  e841d9feff           call 0x7b8a40
// 007cb0ff  eb79                 jmp 0x7cb17a
// 007cb101  8bcf                 mov ecx, edi
// 007cb103  ff157cc29e00         call dword ptr [0x9ec27c]
// 007cb109  6a00                 push 0
// 007cb10b  6a26                 push 0x26
// 007cb10d  8bcf                 mov ecx, edi
// 007cb10f  ff1578c69e00         call dword ptr [0x9ec678]
// 007cb115  8bd8                 mov ebx, eax
// 007cb117  83fbff               cmp ebx, -1
// 007cb11a  7420                 je 0x7cb13c
// 007cb11c  8d4301               lea eax, [ebx + 1]
// 007cb11f  50                   push eax
// 007cb120  8bcf                 mov ecx, edi
// 007cb122  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb128  3c26                 cmp al, 0x26
// 007cb12a  7510                 jne 0x7cb13c
// 007cb12c  83c302               add ebx, 2
// 007cb12f  53                   push ebx
// 007cb130  6a26                 push 0x26
// 007cb132  8bcf                 mov ecx, edi
// 007cb134  ff1578c69e00         call dword ptr [0x9ec678]
// 007cb13a  8bd8                 mov ebx, eax
// 007cb13c  83c65c               add esi, 0x5c
// 007cb13f  8bce                 mov ecx, esi
// 007cb141  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007cb147  84c0                 test al, al
// 007cb149  741d                 je 0x7cb168
// 007cb14b  43                   inc ebx
// 007cb14c  53                   push ebx
// 007cb14d  8bcf                 mov ecx, edi
// 007cb14f  ff15bcc79e00         call dword ptr [0x9ec7bc]
// 007cb155  0fb6c8               movzx ecx, al
// 007cb158  51                   push ecx
// 007cb159  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007cb160  ff15b8c79e00         call dword ptr [0x9ec7b8]
// 007cb166  eb0e                 jmp 0x7cb176
// 007cb168  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007cb16f  56                   push esi
// 007cb170  ff1580c59e00         call dword ptr [0x9ec580]
// 007cb176  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007cb17a  83ed01               sub ebp, 1
// 007cb17d  0f8910ffffff         jns 0x7cb093
// 007cb183  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 007cb186  33f6                 xor esi, esi
// 007cb188  897c2418             mov dword ptr [esp + 0x18], edi
// 007cb18c  85ff                 test edi, edi
// 007cb18e  0f8e08030000         jle 0x7cb49c
// 007cb194  85f6                 test esi, esi
// 007cb196  0f8c85010000         jl 0x7cb321
// 007cb19c  8b442414             mov eax, dword ptr [esp + 0x14]
// 007cb1a0  3b7034               cmp esi, dword ptr [eax + 0x34]
// 007cb1a3  0f8d78010000         jge 0x7cb321
// 007cb1a9  8b5030               mov edx, dword ptr [eax + 0x30]
// 007cb1ac  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 007cb1af  8d04b2               lea eax, [edx + esi*4]
// 007cb1b2  8d4754               lea eax, [edi + 0x54]
// 007cb1b5  50                   push eax
// 007cb1b6  8d4c2428             lea ecx, [esp + 0x28]
// 007cb1ba  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007cb1c0  8d4c2440             lea ecx, [esp + 0x40]
// 007cb1c4  e887d6ffff           call 0x7c8850
// 007cb1c9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007cb1cd  57                   push edi
// 007cb1ce  51                   push ecx
// 007cb1cf  8d4c2448             lea ecx, [esp + 0x48]
// 007cb1d3  c684248800000003     mov byte ptr [esp + 0x88], 3
// 007cb1db  e8d0620100           call 0x7e14b0
// 007cb1e0  684c82a500           push 0xa5824c
// 007cb1e5  8d8c2490000000       lea ecx, [esp + 0x90]
// 007cb1ec  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007cb1f2  46                   inc esi
// 007cb1f3  3b742418             cmp esi, dword ptr [esp + 0x18]
// 007cb1f7  c684248000000004     mov byte ptr [esp + 0x80], 4
// 007cb1ff  8974243c             mov dword ptr [esp + 0x3c], esi
// 007cb203  7d7d                 jge 0x7cb282
// 007cb205  85f6                 test esi, esi
// 007cb207  0f8c14010000         jl 0x7cb321
// 007cb20d  8b542414             mov edx, dword ptr [esp + 0x14]
// 007cb211  3b7234               cmp esi, dword ptr [edx + 0x34]
// 007cb214  0f8d07010000         jge 0x7cb321
// 007cb21a  8bc2                 mov eax, edx
// 007cb21c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 007cb21f  8b2cb1               mov ebp, dword ptr [ecx + esi*4]
// 007cb222  8d04b1               lea eax, [ecx + esi*4]
// 007cb225  6a00                 push 0
// 007cb227  8d4c2428             lea ecx, [esp + 0x28]
// 007cb22b  8d7d54               lea edi, [ebp + 0x54]
// 007cb22e  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb234  6a00                 push 0
// 007cb236  8bcf                 mov ecx, edi
// 007cb238  8ad8                 mov bl, al
// 007cb23a  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb240  3ac3                 cmp al, bl
// 007cb242  7537                 jne 0x7cb27b
// 007cb244  8b542448             mov edx, dword ptr [esp + 0x48]
// 007cb248  55                   push ebp
// 007cb249  52                   push edx
// 007cb24a  8d4c2448             lea ecx, [esp + 0x48]
// 007cb24e  e85d620100           call 0x7e14b0
// 007cb253  8bcf                 mov ecx, edi
// 007cb255  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007cb25b  83f802               cmp eax, 2
// 007cb25e  751b                 jne 0x7cb27b
// 007cb260  6a01                 push 1
// 007cb262  8bcf                 mov ecx, edi
// 007cb264  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb26a  0fb6c0               movzx eax, al
// 007cb26d  50                   push eax
// 007cb26e  8d8c2490000000       lea ecx, [esp + 0x90]
// 007cb275  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 007cb27b  46                   inc esi
// 007cb27c  3b742418             cmp esi, dword ptr [esp + 0x18]
// 007cb280  7c83                 jl 0x7cb205
// 007cb282  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 007cb286  83fb02               cmp ebx, 2
// 007cb289  0f8cc7010000         jl 0x7cb456
// 007cb28f  33ff                 xor edi, edi
// 007cb291  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 007cb299  897c2434             mov dword ptr [esp + 0x34], edi
// 007cb29d  85db                 test ebx, ebx
// 007cb29f  0f8eb1010000         jle 0x7cb456
// 007cb2a5  85ff                 test edi, edi
// 007cb2a7  7c78                 jl 0x7cb321
// 007cb2a9  3bfb                 cmp edi, ebx
// 007cb2ab  7d74                 jge 0x7cb321
// 007cb2ad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007cb2b1  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 007cb2b4  8d6e54               lea ebp, [esi + 0x54]
// 007cb2b7  8bcd                 mov ecx, ebp
// 007cb2b9  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007cb2bf  83f801               cmp eax, 1
// 007cb2c2  0f8f81010000         jg 0x7cb449
// 007cb2c8  83c658               add esi, 0x58
// 007cb2cb  8bce                 mov ecx, esi
// 007cb2cd  33ff                 xor edi, edi
// 007cb2cf  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007cb2d5  48                   dec eax
// 007cb2d6  85c0                 test eax, eax
// 007cb2d8  7e76                 jle 0x7cb350
// 007cb2da  8d9b00000000         lea ebx, [ebx]
// 007cb2e0  57                   push edi
// 007cb2e1  8bce                 mov ecx, esi
// 007cb2e3  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb2e9  3c20                 cmp al, 0x20
// 007cb2eb  7524                 jne 0x7cb311
// 007cb2ed  6a00                 push 0
// 007cb2ef  8d5701               lea edx, [edi + 1]
// 007cb2f2  52                   push edx
// 007cb2f3  8bce                 mov ecx, esi
// 007cb2f5  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb2fb  0fb6c0               movzx eax, al
// 007cb2fe  50                   push eax
// 007cb2ff  8d8c2494000000       lea ecx, [esp + 0x94]
// 007cb306  ff1578c69e00         call dword ptr [0x9ec678]
// 007cb30c  83f8ff               cmp eax, -1
// 007cb30f  7415                 je 0x7cb326
// 007cb311  8bce                 mov ecx, esi
// 007cb313  47                   inc edi
// 007cb314  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007cb31a  48                   dec eax
// 007cb31b  3bf8                 cmp edi, eax
// 007cb31d  7cc1                 jl 0x7cb2e0
// 007cb31f  eb2f                 jmp 0x7cb350
// 007cb321  e826c9fdff           call 0x7a7c4c
// 007cb326  47                   inc edi
// 007cb327  57                   push edi
// 007cb328  8bce                 mov ecx, esi
// 007cb32a  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb330  8ad8                 mov bl, al
// 007cb332  885c241c             mov byte ptr [esp + 0x1c], bl
// 007cb336  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007cb33a  51                   push ecx
// 007cb33b  8d8c2490000000       lea ecx, [esp + 0x90]
// 007cb342  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 007cb348  84db                 test bl, bl
// 007cb34a  0f85e4000000         jne 0x7cb434
// 007cb350  6a00                 push 0
// 007cb352  8bce                 mov ecx, esi
// 007cb354  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb35a  33d2                 xor edx, edx
// 007cb35c  3c26                 cmp al, 0x26
// 007cb35e  0f94c2               sete dl
// 007cb361  8bce                 mov ecx, esi
// 007cb363  8bfa                 mov edi, edx
// 007cb365  57                   push edi
// 007cb366  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb36c  6a00                 push 0
// 007cb36e  8bcd                 mov ecx, ebp
// 007cb370  8ad8                 mov bl, al
// 007cb372  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb378  3ad8                 cmp bl, al
// 007cb37a  7501                 jne 0x7cb37d
// 007cb37c  47                   inc edi
// 007cb37d  8bce                 mov ecx, esi
// 007cb37f  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007cb385  3bf8                 cmp edi, eax
// 007cb387  7d5a                 jge 0x7cb3e3
// 007cb389  8da42400000000       lea esp, [esp]
// 007cb390  6a00                 push 0
// 007cb392  57                   push edi
// 007cb393  8bce                 mov ecx, esi
// 007cb395  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb39b  0fb6c0               movzx eax, al
// 007cb39e  50                   push eax
// 007cb39f  8d8c2494000000       lea ecx, [esp + 0x94]
// 007cb3a6  ff1578c69e00         call dword ptr [0x9ec678]
// 007cb3ac  8bce                 mov ecx, esi
// 007cb3ae  83f8ff               cmp eax, -1
// 007cb3b1  740d                 je 0x7cb3c0
// 007cb3b3  47                   inc edi
// 007cb3b4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007cb3ba  3bf8                 cmp edi, eax
// 007cb3bc  7cd2                 jl 0x7cb390
// 007cb3be  eb23                 jmp 0x7cb3e3
// 007cb3c0  57                   push edi
// 007cb3c1  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb3c7  8ad8                 mov bl, al
// 007cb3c9  885c241c             mov byte ptr [esp + 0x1c], bl
// 007cb3cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007cb3d1  51                   push ecx
// 007cb3d2  8d8c2490000000       lea ecx, [esp + 0x90]
// 007cb3d9  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 007cb3df  84db                 test bl, bl
// 007cb3e1  7551                 jne 0x7cb434
// 007cb3e3  8d4c2420             lea ecx, [esp + 0x20]
// 007cb3e7  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007cb3ed  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007cb3f1  56                   push esi
// 007cb3f2  8d542424             lea edx, [esp + 0x24]
// 007cb3f6  684882a500           push 0xa58248
// 007cb3fb  52                   push edx
// 007cb3fc  c684248c00000005     mov byte ptr [esp + 0x8c], 5
// 007cb404  ff15acce9e00         call dword ptr [0x9eceac]
// 007cb40a  83c40c               add esp, 0xc
// 007cb40d  6a00                 push 0
// 007cb40f  8d4c2424             lea ecx, [esp + 0x24]
// 007cb413  ff1558c59e00         call dword ptr [0x9ec558]
// 007cb419  46                   inc esi
// 007cb41a  8d4c2420             lea ecx, [esp + 0x20]
// 007cb41e  8844241c             mov byte ptr [esp + 0x1c], al
// 007cb422  8974242c             mov dword ptr [esp + 0x2c], esi
// 007cb426  c684248000000004     mov byte ptr [esp + 0x80], 4
// 007cb42e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cb434  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007cb438  50                   push eax
// 007cb439  8bcd                 mov ecx, ebp
// 007cb43b  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 007cb441  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 007cb445  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007cb449  47                   inc edi
// 007cb44a  3bfb                 cmp edi, ebx
// 007cb44c  897c2434             mov dword ptr [esp + 0x34], edi
// 007cb450  0f8c4ffeffff         jl 0x7cb2a5
// 007cb456  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007cb45d  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cb463  8d4c2440             lea ecx, [esp + 0x40]
// 007cb467  c684248000000002     mov byte ptr [esp + 0x80], 2
// 007cb46f  e8fcd3ffff           call 0x7c8870
// 007cb474  8d4c2424             lea ecx, [esp + 0x24]
// 007cb478  c684248000000001     mov byte ptr [esp + 0x80], 1
// 007cb480  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cb486  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 007cb48a  3b742418             cmp esi, dword ptr [esp + 0x18]
// 007cb48e  0f8c00fdffff         jl 0x7cb194
// 007cb494  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007cb498  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007cb49c  8bcb                 mov ecx, ebx
// 007cb49e  e8ddcfffff           call 0x7c8480
// 007cb4a3  8944243c             mov dword ptr [esp + 0x3c], eax
// 007cb4a7  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 007cb4b2  85ff                 test edi, edi
// 007cb4b4  0f8eed010000         jle 0x7cb6a7
// 007cb4ba  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007cb4c1  85c0                 test eax, eax
// 007cb4c3  0f8c58feffff         jl 0x7cb321
// 007cb4c9  3b4334               cmp eax, dword ptr [ebx + 0x34]
// 007cb4cc  0f8d4ffeffff         jge 0x7cb321
// 007cb4d2  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 007cb4d5  8b3481               mov esi, dword ptr [ecx + eax*4]
// 007cb4d8  837e7000             cmp dword ptr [esi + 0x70], 0
// 007cb4dc  8d0481               lea eax, [ecx + eax*4]
// 007cb4df  0f84a1010000         je 0x7cb686
// 007cb4e5  8d54242c             lea edx, [esp + 0x2c]
// 007cb4e9  8d7e54               lea edi, [esi + 0x54]
// 007cb4ec  52                   push edx
// 007cb4ed  8bcf                 mov ecx, edi
// 007cb4ef  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007cb4f5  50                   push eax
// 007cb4f6  8bcf                 mov ecx, edi
// 007cb4f8  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cb4fe  50                   push eax
// 007cb4ff  8b442478             mov eax, dword ptr [esp + 0x78]
// 007cb503  50                   push eax
// 007cb504  ff1594a19e00         call dword ptr [0x9ea194]
// 007cb50a  8b442430             mov eax, dword ptr [esp + 0x30]
// 007cb50e  83c002               add eax, 2
// 007cb511  83f80f               cmp eax, 0xf
// 007cb514  8be8                 mov ebp, eax
// 007cb516  7f05                 jg 0x7cb51d
// 007cb518  bd0f000000           mov ebp, 0xf
// 007cb51d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007cb521  83c006               add eax, 6
// 007cb524  83f810               cmp eax, 0x10
// 007cb527  8bd8                 mov ebx, eax
// 007cb529  7f05                 jg 0x7cb530
// 007cb52b  bb10000000           mov ebx, 0x10
// 007cb530  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007cb533  894c2434             mov dword ptr [esp + 0x34], ecx
// 007cb537  8b5668               mov edx, dword ptr [esi + 0x68]
// 007cb53a  89542438             mov dword ptr [esp + 0x38], edx
// 007cb53e  8b4660               mov eax, dword ptr [esi + 0x60]
// 007cb541  50                   push eax
// 007cb542  e809cffdff           call 0x7a8450
// 007cb547  50                   push eax
// 007cb548  e831c8fdff           call 0x7a7d7e
// 007cb54d  83c408               add esp, 8
// 007cb550  85c0                 test eax, eax
// 007cb552  7516                 jne 0x7cb56a
// 007cb554  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007cb55b  8b4220               mov eax, dword ptr [edx + 0x20]
// 007cb55e  8d4c2434             lea ecx, [esp + 0x34]
// 007cb562  51                   push ecx
// 007cb563  50                   push eax
// 007cb564  ff1558bc9e00         call dword ptr [0x9ebc58]
// 007cb56a  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 007cb56d  f6c104               test cl, 4
// 007cb570  740b                 je 0x7cb57d
// 007cb572  8bc5                 mov eax, ebp
// 007cb574  99                   cdq 
// 007cb575  2bc2                 sub eax, edx
// 007cb577  8bf8                 mov edi, eax
// 007cb579  d1ff                 sar edi, 1
// 007cb57b  eb0e                 jmp 0x7cb58b
// 007cb57d  8bd1                 mov edx, ecx
// 007cb57f  80e208               and dl, 8
// 007cb582  0fb6fa               movzx edi, dl
// 007cb585  f7df                 neg edi
// 007cb587  1bff                 sbb edi, edi
// 007cb589  23fd                 and edi, ebp
// 007cb58b  f6c101               test cl, 1
// 007cb58e  7409                 je 0x7cb599
// 007cb590  8bc3                 mov eax, ebx
// 007cb592  99                   cdq 
// 007cb593  2bc2                 sub eax, edx
// 007cb595  d1f8                 sar eax, 1
// 007cb597  eb12                 jmp 0x7cb5ab
// 007cb599  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 007cb59e  7509                 jne 0x7cb5a9
// 007cb5a0  f6c102               test cl, 2
// 007cb5a3  7504                 jne 0x7cb5a9
// 007cb5a5  33c0                 xor eax, eax
// 007cb5a7  eb02                 jmp 0x7cb5ab
// 007cb5a9  8bc3                 mov eax, ebx
// 007cb5ab  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007cb5af  8b542434             mov edx, dword ptr [esp + 0x34]
// 007cb5b3  2bd0                 sub edx, eax
// 007cb5b5  8b442428             mov eax, dword ptr [esp + 0x28]
// 007cb5b9  2bcf                 sub ecx, edi
// 007cb5bb  89542440             mov dword ptr [esp + 0x40], edx
// 007cb5bf  03d3                 add edx, ebx
// 007cb5c1  894c2444             mov dword ptr [esp + 0x44], ecx
// 007cb5c5  03cd                 add ecx, ebp
// 007cb5c7  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 007cb5ce  89542448             mov dword ptr [esp + 0x48], edx
// 007cb5d2  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007cb5d6  740d                 je 0x7cb5e5
// 007cb5d8  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 007cb5dc  7507                 jne 0x7cb5e5
// 007cb5de  bb01000000           mov ebx, 1
// 007cb5e3  eb02                 jmp 0x7cb5e7
// 007cb5e5  33db                 xor ebx, ebx
// 007cb5e7  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007cb5ee  8b3e                 mov edi, dword ptr [esi]
// 007cb5f0  6a00                 push 0
// 007cb5f2  6a00                 push 0
// 007cb5f4  51                   push ecx
// 007cb5f5  8d54244c             lea edx, [esp + 0x4c]
// 007cb5f9  52                   push edx
// 007cb5fa  6800000080           push 0x80000000
// 007cb5ff  6a00                 push 0
// 007cb601  6a00                 push 0
// 007cb603  6a00                 push 0
// 007cb605  6a00                 push 0
// 007cb607  6800080000           push 0x800
// 007cb60c  83c760               add edi, 0x60
// 007cb60f  e852cdfdff           call 0x7a8366
// 007cb614  8b17                 mov edx, dword ptr [edi]
// 007cb616  50                   push eax
// 007cb617  8bc3                 mov eax, ebx
// 007cb619  f7d8                 neg eax
// 007cb61b  1bc0                 sbb eax, eax
// 007cb61d  2500000800           and eax, 0x80000
// 007cb622  0d80000000           or eax, 0x80
// 007cb627  50                   push eax
// 007cb628  8bce                 mov ecx, esi
// 007cb62a  ffd2                 call edx
// 007cb62c  8b442444             mov eax, dword ptr [esp + 0x44]
// 007cb630  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007cb634  8b542448             mov edx, dword ptr [esp + 0x48]
// 007cb638  6810020000           push 0x210
// 007cb63d  2bc8                 sub ecx, eax
// 007cb63f  51                   push ecx
// 007cb640  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007cb644  2bd1                 sub edx, ecx
// 007cb646  52                   push edx
// 007cb647  50                   push eax
// 007cb648  a178c79e00           mov eax, dword ptr [0x9ec778]
// 007cb64d  51                   push ecx
// 007cb64e  50                   push eax
// 007cb64f  8bce                 mov ecx, esi
// 007cb651  e816c7fdff           call 0x7a7d6c
// 007cb656  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007cb65a  8b11                 mov edx, dword ptr [ecx]
// 007cb65c  8b820c010000         mov eax, dword ptr [edx + 0x10c]
// 007cb662  6a01                 push 1
// 007cb664  56                   push esi
// 007cb665  6a00                 push 0
// 007cb667  ffd0                 call eax
// 007cb669  85db                 test ebx, ebx
// 007cb66b  7419                 je 0x7cb686
// 007cb66d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cb670  8b542428             mov edx, dword ptr [esp + 0x28]
// 007cb674  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 007cb67a  6a02                 push 2
// 007cb67c  6896000000           push 0x96
// 007cb681  6a00                 push 0
// 007cb683  51                   push ecx
// 007cb684  ffd0                 call eax
// 007cb686  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007cb68d  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007cb691  40                   inc eax
// 007cb692  3b442418             cmp eax, dword ptr [esp + 0x18]
// 007cb696  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 007cb69d  0f8c1efeffff         jl 0x7cb4c1
// 007cb6a3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007cb6a7  33f6                 xor esi, esi
// 007cb6a9  85ff                 test edi, edi
// 007cb6ab  7e3b                 jle 0x7cb6e8
// 007cb6ad  8d4900               lea ecx, [ecx]
// 007cb6b0  85f6                 test esi, esi
// 007cb6b2  0f8c69fcffff         jl 0x7cb321
// 007cb6b8  3b7334               cmp esi, dword ptr [ebx + 0x34]
// 007cb6bb  0f8d60fcffff         jge 0x7cb321
// 007cb6c1  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 007cb6c4  8d04b1               lea eax, [ecx + esi*4]
// 007cb6c7  8b08                 mov ecx, dword ptr [eax]
// 007cb6c9  83797000             cmp dword ptr [ecx + 0x70], 0
// 007cb6cd  7414                 je 0x7cb6e3
// 007cb6cf  6857020000           push 0x257
// 007cb6d4  6a00                 push 0
// 007cb6d6  6a00                 push 0
// 007cb6d8  6a00                 push 0
// 007cb6da  6a00                 push 0
// 007cb6dc  6a00                 push 0
// 007cb6de  e889c6fdff           call 0x7a7d6c
// 007cb6e3  46                   inc esi
// 007cb6e4  3bf7                 cmp esi, edi
// 007cb6e6  7cc8                 jl 0x7cb6b0
// 007cb6e8  8d4c2454             lea ecx, [esp + 0x54]
// 007cb6ec  c684248000000000     mov byte ptr [esp + 0x80], 0
// 007cb6f4  e827400300           call 0x7ff720
// 007cb6f9  8d4c2464             lea ecx, [esp + 0x64]
// 007cb6fd  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 007cb708  e821d1fdff           call 0x7a882e
// 007cb70d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007cb711  64890d00000000       mov dword ptr fs:[0], ecx
// 007cb718  59                   pop ecx
// 007cb719  5f                   pop edi
// 007cb71a  5e                   pop esi
// 007cb71b  5d                   pop ebp
// 007cb71c  5b                   pop ebx
// 007cb71d  83c470               add esp, 0x70
// 007cb720  c20800               ret 8
// copied from an identical function in another client (function ?ShowKeyboardTips@CXTPCommandBars@@QAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp