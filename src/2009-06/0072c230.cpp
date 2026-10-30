// roc 2009-06 0072c230  unit: CXTPCommandBarKeyboardTip  size: 1907 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072c230
//
// 0072c230  6aff                 push -1
// 0072c232  6803568700           push 0x875603
// 0072c237  64a100000000         mov eax, dword ptr fs:[0]
// 0072c23d  50                   push eax
// 0072c23e  83ec64               sub esp, 0x64
// 0072c241  53                   push ebx
// 0072c242  55                   push ebp
// 0072c243  56                   push esi
// 0072c244  57                   push edi
// 0072c245  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072c24a  33c4                 xor eax, esp
// 0072c24c  50                   push eax
// 0072c24d  8d442478             lea eax, [esp + 0x78]
// 0072c251  64a300000000         mov dword ptr fs:[0], eax
// 0072c257  8bd9                 mov ebx, ecx
// 0072c259  895c2414             mov dword ptr [esp + 0x14], ebx
// 0072c25d  e8beebffff           call 0x72ae20
// 0072c262  8b4374               mov eax, dword ptr [ebx + 0x74]
// 0072c265  33ed                 xor ebp, ebp
// 0072c267  39a8c4000000         cmp dword ptr [eax + 0xc4], ebp
// 0072c26d  0f841a070000         je 0x72c98d
// 0072c273  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 0072c27a  3bf5                 cmp esi, ebp
// 0072c27c  0f840b070000         je 0x72c98d
// 0072c282  396e20               cmp dword ptr [esi + 0x20], ebp
// 0072c285  0f8402070000         je 0x72c98d
// 0072c28b  8bcb                 mov ecx, ebx
// 0072c28d  e8deb4cfff           call 0x427770
// 0072c292  8bc8                 mov ecx, eax
// 0072c294  e8b7aa0500           call 0x786d50
// 0072c299  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0072c29c  51                   push ecx
// 0072c29d  ff15b4ee8900         call dword ptr [0x89eeb4]
// 0072c2a3  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 0072c2aa  895344               mov dword ptr [ebx + 0x44], edx
// 0072c2ad  897340               mov dword ptr [ebx + 0x40], esi
// 0072c2b0  896b48               mov dword ptr [ebx + 0x48], ebp
// 0072c2b3  8b06                 mov eax, dword ptr [esi]
// 0072c2b5  8b90c4010000         mov edx, dword ptr [eax + 0x1c4]
// 0072c2bb  8bce                 mov ecx, esi
// 0072c2bd  ffd2                 call edx
// 0072c2bf  396b34               cmp dword ptr [ebx + 0x34], ebp
// 0072c2c2  7508                 jne 0x72c2cc
// 0072c2c4  896b40               mov dword ptr [ebx + 0x40], ebp
// 0072c2c7  e9c1060000           jmp 0x72c98d
// 0072c2cc  8bcb                 mov ecx, ebx
// 0072c2ce  e82dd7ffff           call 0x729a00
// 0072c2d3  8bf8                 mov edi, eax
// 0072c2d5  56                   push esi
// 0072c2d6  8d4c2468             lea ecx, [esp + 0x68]
// 0072c2da  897c242c             mov dword ptr [esp + 0x2c], edi
// 0072c2de  e8bfd5feff           call 0x7198a2
// 0072c2e3  81c7bc000000         add edi, 0xbc
// 0072c2e9  57                   push edi
// 0072c2ea  8d442468             lea eax, [esp + 0x68]
// 0072c2ee  50                   push eax
// 0072c2ef  8d4c245c             lea ecx, [esp + 0x5c]
// 0072c2f3  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 0072c2fa  e861450400           call 0x770860
// 0072c2ff  8b6b34               mov ebp, dword ptr [ebx + 0x34]
// 0072c302  83c5ff               add ebp, -1
// 0072c305  c684248000000001     mov byte ptr [esp + 0x80], 1
// 0072c30d  0f88f0000000         js 0x72c403
// 0072c313  85ed                 test ebp, ebp
// 0072c315  0f8c86020000         jl 0x72c5a1
// 0072c31b  3b6b34               cmp ebp, dword ptr [ebx + 0x34]
// 0072c31e  0f8d7d020000         jge 0x72c5a1
// 0072c324  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0072c327  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 0072c32a  8d04a9               lea eax, [ecx + ebp*4]
// 0072c32d  8d4e54               lea ecx, [esi + 0x54]
// 0072c330  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 0072c337  ff155cfb8900         call dword ptr [0x89fb5c]
// 0072c33d  33d2                 xor edx, edx
// 0072c33f  84c0                 test al, al
// 0072c341  0f94c2               sete dl
// 0072c344  8bc2                 mov eax, edx
// 0072c346  89467c               mov dword ptr [esi + 0x7c], eax
// 0072c349  85c0                 test eax, eax
// 0072c34b  0f85a9000000         jne 0x72c3fa
// 0072c351  8d7e58               lea edi, [esi + 0x58]
// 0072c354  8bcf                 mov ecx, edi
// 0072c356  ff155cfb8900         call dword ptr [0x89fb5c]
// 0072c35c  84c0                 test al, al
// 0072c35e  7421                 je 0x72c381
// 0072c360  8b06                 mov eax, dword ptr [esi]
// 0072c362  8b5068               mov edx, dword ptr [eax + 0x68]
// 0072c365  8bce                 mov ecx, esi
// 0072c367  ffd2                 call edx
// 0072c369  8b06                 mov eax, dword ptr [esi]
// 0072c36b  8b5004               mov edx, dword ptr [eax + 4]
// 0072c36e  6a01                 push 1
// 0072c370  8bce                 mov ecx, esi
// 0072c372  ffd2                 call edx
// 0072c374  6a01                 push 1
// 0072c376  55                   push ebp
// 0072c377  8d4b2c               lea ecx, [ebx + 0x2c]
// 0072c37a  e8e1620200           call 0x752660
// 0072c37f  eb79                 jmp 0x72c3fa
// 0072c381  8bcf                 mov ecx, edi
// 0072c383  ff153cf18900         call dword ptr [0x89f13c]
// 0072c389  6a00                 push 0
// 0072c38b  6a26                 push 0x26
// 0072c38d  8bcf                 mov ecx, edi
// 0072c38f  ff1500008a00         call dword ptr [0x8a0000]
// 0072c395  8bd8                 mov ebx, eax
// 0072c397  83fbff               cmp ebx, -1
// 0072c39a  7420                 je 0x72c3bc
// 0072c39c  8d4301               lea eax, [ebx + 1]
// 0072c39f  50                   push eax
// 0072c3a0  8bcf                 mov ecx, edi
// 0072c3a2  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c3a8  3c26                 cmp al, 0x26
// 0072c3aa  7510                 jne 0x72c3bc
// 0072c3ac  83c302               add ebx, 2
// 0072c3af  53                   push ebx
// 0072c3b0  6a26                 push 0x26
// 0072c3b2  8bcf                 mov ecx, edi
// 0072c3b4  ff1500008a00         call dword ptr [0x8a0000]
// 0072c3ba  8bd8                 mov ebx, eax
// 0072c3bc  83c65c               add esi, 0x5c
// 0072c3bf  8bce                 mov ecx, esi
// 0072c3c1  ff155cfb8900         call dword ptr [0x89fb5c]
// 0072c3c7  84c0                 test al, al
// 0072c3c9  741d                 je 0x72c3e8
// 0072c3cb  43                   inc ebx
// 0072c3cc  53                   push ebx
// 0072c3cd  8bcf                 mov ecx, edi
// 0072c3cf  ff15acff8900         call dword ptr [0x89ffac]
// 0072c3d5  0fb6c8               movzx ecx, al
// 0072c3d8  51                   push ecx
// 0072c3d9  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0072c3e0  ff15b0ff8900         call dword ptr [0x89ffb0]
// 0072c3e6  eb0e                 jmp 0x72c3f6
// 0072c3e8  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0072c3ef  56                   push esi
// 0072c3f0  ff1508fa8900         call dword ptr [0x89fa08]
// 0072c3f6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0072c3fa  83ed01               sub ebp, 1
// 0072c3fd  0f8910ffffff         jns 0x72c313
// 0072c403  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 0072c406  33f6                 xor esi, esi
// 0072c408  897c2418             mov dword ptr [esp + 0x18], edi
// 0072c40c  85ff                 test edi, edi
// 0072c40e  0f8e08030000         jle 0x72c71c
// 0072c414  85f6                 test esi, esi
// 0072c416  0f8c85010000         jl 0x72c5a1
// 0072c41c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072c420  3b7034               cmp esi, dword ptr [eax + 0x34]
// 0072c423  0f8d78010000         jge 0x72c5a1
// 0072c429  8b5030               mov edx, dword ptr [eax + 0x30]
// 0072c42c  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0072c42f  8d04b2               lea eax, [edx + esi*4]
// 0072c432  8d4754               lea eax, [edi + 0x54]
// 0072c435  50                   push eax
// 0072c436  8d4c2428             lea ecx, [esp + 0x28]
// 0072c43a  ff15e4fc8900         call dword ptr [0x89fce4]
// 0072c440  8d4c2440             lea ecx, [esp + 0x40]
// 0072c444  e867d6ffff           call 0x729ab0
// 0072c449  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072c44d  57                   push edi
// 0072c44e  51                   push ecx
// 0072c44f  8d4c2448             lea ecx, [esp + 0x48]
// 0072c453  c684248800000003     mov byte ptr [esp + 0x88], 3
// 0072c45b  e8c0620200           call 0x752720
// 0072c460  68b4298f00           push 0x8f29b4
// 0072c465  8d8c2490000000       lea ecx, [esp + 0x90]
// 0072c46c  ff1508fd8900         call dword ptr [0x89fd08]
// 0072c472  46                   inc esi
// 0072c473  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0072c477  c684248000000004     mov byte ptr [esp + 0x80], 4
// 0072c47f  8974243c             mov dword ptr [esp + 0x3c], esi
// 0072c483  7d7d                 jge 0x72c502
// 0072c485  85f6                 test esi, esi
// 0072c487  0f8c14010000         jl 0x72c5a1
// 0072c48d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072c491  3b7234               cmp esi, dword ptr [edx + 0x34]
// 0072c494  0f8d07010000         jge 0x72c5a1
// 0072c49a  8bc2                 mov eax, edx
// 0072c49c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0072c49f  8b2cb1               mov ebp, dword ptr [ecx + esi*4]
// 0072c4a2  8d04b1               lea eax, [ecx + esi*4]
// 0072c4a5  6a00                 push 0
// 0072c4a7  8d4c2428             lea ecx, [esp + 0x28]
// 0072c4ab  8d7d54               lea edi, [ebp + 0x54]
// 0072c4ae  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c4b4  6a00                 push 0
// 0072c4b6  8bcf                 mov ecx, edi
// 0072c4b8  8ad8                 mov bl, al
// 0072c4ba  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c4c0  3ac3                 cmp al, bl
// 0072c4c2  7537                 jne 0x72c4fb
// 0072c4c4  8b542448             mov edx, dword ptr [esp + 0x48]
// 0072c4c8  55                   push ebp
// 0072c4c9  52                   push edx
// 0072c4ca  8d4c2448             lea ecx, [esp + 0x48]
// 0072c4ce  e84d620200           call 0x752720
// 0072c4d3  8bcf                 mov ecx, edi
// 0072c4d5  ff1554fb8900         call dword ptr [0x89fb54]
// 0072c4db  83f802               cmp eax, 2
// 0072c4de  751b                 jne 0x72c4fb
// 0072c4e0  6a01                 push 1
// 0072c4e2  8bcf                 mov ecx, edi
// 0072c4e4  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c4ea  0fb6c0               movzx eax, al
// 0072c4ed  50                   push eax
// 0072c4ee  8d8c2490000000       lea ecx, [esp + 0x90]
// 0072c4f5  ff15b4ff8900         call dword ptr [0x89ffb4]
// 0072c4fb  46                   inc esi
// 0072c4fc  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0072c500  7c83                 jl 0x72c485
// 0072c502  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0072c506  83fb02               cmp ebx, 2
// 0072c509  0f8cc7010000         jl 0x72c6d6
// 0072c50f  33ff                 xor edi, edi
// 0072c511  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0072c519  897c2434             mov dword ptr [esp + 0x34], edi
// 0072c51d  85db                 test ebx, ebx
// 0072c51f  0f8eb1010000         jle 0x72c6d6
// 0072c525  85ff                 test edi, edi
// 0072c527  7c78                 jl 0x72c5a1
// 0072c529  3bfb                 cmp edi, ebx
// 0072c52b  7d74                 jge 0x72c5a1
// 0072c52d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0072c531  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0072c534  8d6e54               lea ebp, [esi + 0x54]
// 0072c537  8bcd                 mov ecx, ebp
// 0072c539  ff1554fb8900         call dword ptr [0x89fb54]
// 0072c53f  83f801               cmp eax, 1
// 0072c542  0f8f81010000         jg 0x72c6c9
// 0072c548  83c658               add esi, 0x58
// 0072c54b  8bce                 mov ecx, esi
// 0072c54d  33ff                 xor edi, edi
// 0072c54f  ff1554fb8900         call dword ptr [0x89fb54]
// 0072c555  48                   dec eax
// 0072c556  85c0                 test eax, eax
// 0072c558  7e76                 jle 0x72c5d0
// 0072c55a  8d9b00000000         lea ebx, [ebx]
// 0072c560  57                   push edi
// 0072c561  8bce                 mov ecx, esi
// 0072c563  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c569  3c20                 cmp al, 0x20
// 0072c56b  7524                 jne 0x72c591
// 0072c56d  6a00                 push 0
// 0072c56f  8d5701               lea edx, [edi + 1]
// 0072c572  52                   push edx
// 0072c573  8bce                 mov ecx, esi
// 0072c575  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c57b  0fb6c0               movzx eax, al
// 0072c57e  50                   push eax
// 0072c57f  8d8c2494000000       lea ecx, [esp + 0x94]
// 0072c586  ff1500008a00         call dword ptr [0x8a0000]
// 0072c58c  83f8ff               cmp eax, -1
// 0072c58f  7415                 je 0x72c5a6
// 0072c591  8bce                 mov ecx, esi
// 0072c593  47                   inc edi
// 0072c594  ff1554fb8900         call dword ptr [0x89fb54]
// 0072c59a  48                   dec eax
// 0072c59b  3bf8                 cmp edi, eax
// 0072c59d  7cc1                 jl 0x72c560
// 0072c59f  eb2f                 jmp 0x72c5d0
// 0072c5a1  e83ec7feff           call 0x718ce4
// 0072c5a6  47                   inc edi
// 0072c5a7  57                   push edi
// 0072c5a8  8bce                 mov ecx, esi
// 0072c5aa  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c5b0  8ad8                 mov bl, al
// 0072c5b2  885c241c             mov byte ptr [esp + 0x1c], bl
// 0072c5b6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072c5ba  51                   push ecx
// 0072c5bb  8d8c2490000000       lea ecx, [esp + 0x90]
// 0072c5c2  ff15b4ff8900         call dword ptr [0x89ffb4]
// 0072c5c8  84db                 test bl, bl
// 0072c5ca  0f85e4000000         jne 0x72c6b4
// 0072c5d0  6a00                 push 0
// 0072c5d2  8bce                 mov ecx, esi
// 0072c5d4  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c5da  33d2                 xor edx, edx
// 0072c5dc  3c26                 cmp al, 0x26
// 0072c5de  0f94c2               sete dl
// 0072c5e1  8bce                 mov ecx, esi
// 0072c5e3  8bfa                 mov edi, edx
// 0072c5e5  57                   push edi
// 0072c5e6  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c5ec  6a00                 push 0
// 0072c5ee  8bcd                 mov ecx, ebp
// 0072c5f0  8ad8                 mov bl, al
// 0072c5f2  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c5f8  3ad8                 cmp bl, al
// 0072c5fa  7501                 jne 0x72c5fd
// 0072c5fc  47                   inc edi
// 0072c5fd  8bce                 mov ecx, esi
// 0072c5ff  ff1554fb8900         call dword ptr [0x89fb54]
// 0072c605  3bf8                 cmp edi, eax
// 0072c607  7d5a                 jge 0x72c663
// 0072c609  8da42400000000       lea esp, [esp]
// 0072c610  6a00                 push 0
// 0072c612  57                   push edi
// 0072c613  8bce                 mov ecx, esi
// 0072c615  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c61b  0fb6c0               movzx eax, al
// 0072c61e  50                   push eax
// 0072c61f  8d8c2494000000       lea ecx, [esp + 0x94]
// 0072c626  ff1500008a00         call dword ptr [0x8a0000]
// 0072c62c  8bce                 mov ecx, esi
// 0072c62e  83f8ff               cmp eax, -1
// 0072c631  740d                 je 0x72c640
// 0072c633  47                   inc edi
// 0072c634  ff1554fb8900         call dword ptr [0x89fb54]
// 0072c63a  3bf8                 cmp edi, eax
// 0072c63c  7cd2                 jl 0x72c610
// 0072c63e  eb23                 jmp 0x72c663
// 0072c640  57                   push edi
// 0072c641  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c647  8ad8                 mov bl, al
// 0072c649  885c241c             mov byte ptr [esp + 0x1c], bl
// 0072c64d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072c651  51                   push ecx
// 0072c652  8d8c2490000000       lea ecx, [esp + 0x90]
// 0072c659  ff15b4ff8900         call dword ptr [0x89ffb4]
// 0072c65f  84db                 test bl, bl
// 0072c661  7551                 jne 0x72c6b4
// 0072c663  8d4c2420             lea ecx, [esp + 0x20]
// 0072c667  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0072c66d  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0072c671  56                   push esi
// 0072c672  8d542424             lea edx, [esp + 0x24]
// 0072c676  68b0298f00           push 0x8f29b0
// 0072c67b  52                   push edx
// 0072c67c  c684248c00000005     mov byte ptr [esp + 0x8c], 5
// 0072c684  ff15c4fc8900         call dword ptr [0x89fcc4]
// 0072c68a  83c40c               add esp, 0xc
// 0072c68d  6a00                 push 0
// 0072c68f  8d4c2424             lea ecx, [esp + 0x24]
// 0072c693  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072c699  46                   inc esi
// 0072c69a  8d4c2420             lea ecx, [esp + 0x20]
// 0072c69e  8844241c             mov byte ptr [esp + 0x1c], al
// 0072c6a2  8974242c             mov dword ptr [esp + 0x2c], esi
// 0072c6a6  c684248000000004     mov byte ptr [esp + 0x80], 4
// 0072c6ae  ff1510fd8900         call dword ptr [0x89fd10]
// 0072c6b4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072c6b8  50                   push eax
// 0072c6b9  8bcd                 mov ecx, ebp
// 0072c6bb  ff15b4ff8900         call dword ptr [0x89ffb4]
// 0072c6c1  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0072c6c5  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0072c6c9  47                   inc edi
// 0072c6ca  3bfb                 cmp edi, ebx
// 0072c6cc  897c2434             mov dword ptr [esp + 0x34], edi
// 0072c6d0  0f8c4ffeffff         jl 0x72c525
// 0072c6d6  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0072c6dd  ff1510fd8900         call dword ptr [0x89fd10]
// 0072c6e3  8d4c2440             lea ecx, [esp + 0x40]
// 0072c6e7  c684248000000002     mov byte ptr [esp + 0x80], 2
// 0072c6ef  e8dcd3ffff           call 0x729ad0
// 0072c6f4  8d4c2424             lea ecx, [esp + 0x24]
// 0072c6f8  c684248000000001     mov byte ptr [esp + 0x80], 1
// 0072c700  ff1510fd8900         call dword ptr [0x89fd10]
// 0072c706  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0072c70a  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0072c70e  0f8c00fdffff         jl 0x72c414
// 0072c714  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0072c718  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072c71c  8bcb                 mov ecx, ebx
// 0072c71e  e88dcfffff           call 0x7296b0
// 0072c723  8944243c             mov dword ptr [esp + 0x3c], eax
// 0072c727  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 0072c732  85ff                 test edi, edi
// 0072c734  0f8eed010000         jle 0x72c927
// 0072c73a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0072c741  85c0                 test eax, eax
// 0072c743  0f8c58feffff         jl 0x72c5a1
// 0072c749  3b4334               cmp eax, dword ptr [ebx + 0x34]
// 0072c74c  0f8d4ffeffff         jge 0x72c5a1
// 0072c752  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0072c755  8b3481               mov esi, dword ptr [ecx + eax*4]
// 0072c758  837e7000             cmp dword ptr [esi + 0x70], 0
// 0072c75c  8d0481               lea eax, [ecx + eax*4]
// 0072c75f  0f84a1010000         je 0x72c906
// 0072c765  8d54242c             lea edx, [esp + 0x2c]
// 0072c769  8d7e54               lea edi, [esi + 0x54]
// 0072c76c  52                   push edx
// 0072c76d  8bcf                 mov ecx, edi
// 0072c76f  ff1554fb8900         call dword ptr [0x89fb54]
// 0072c775  50                   push eax
// 0072c776  8bcf                 mov ecx, edi
// 0072c778  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0072c77e  50                   push eax
// 0072c77f  8b442478             mov eax, dword ptr [esp + 0x78]
// 0072c783  50                   push eax
// 0072c784  ff1550e18900         call dword ptr [0x89e150]
// 0072c78a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0072c78e  83c002               add eax, 2
// 0072c791  83f80f               cmp eax, 0xf
// 0072c794  8be8                 mov ebp, eax
// 0072c796  7f05                 jg 0x72c79d
// 0072c798  bd0f000000           mov ebp, 0xf
// 0072c79d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0072c7a1  83c006               add eax, 6
// 0072c7a4  83f810               cmp eax, 0x10
// 0072c7a7  8bd8                 mov ebx, eax
// 0072c7a9  7f05                 jg 0x72c7b0
// 0072c7ab  bb10000000           mov ebx, 0x10
// 0072c7b0  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0072c7b3  894c2434             mov dword ptr [esp + 0x34], ecx
// 0072c7b7  8b5668               mov edx, dword ptr [esi + 0x68]
// 0072c7ba  89542438             mov dword ptr [esp + 0x38], edx
// 0072c7be  8b4660               mov eax, dword ptr [esi + 0x60]
// 0072c7c1  50                   push eax
// 0072c7c2  e81bcdfeff           call 0x7194e2
// 0072c7c7  50                   push eax
// 0072c7c8  e8f9c7feff           call 0x718fc6
// 0072c7cd  83c408               add esp, 8
// 0072c7d0  85c0                 test eax, eax
// 0072c7d2  7516                 jne 0x72c7ea
// 0072c7d4  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0072c7db  8b4220               mov eax, dword ptr [edx + 0x20]
// 0072c7de  8d4c2434             lea ecx, [esp + 0x34]
// 0072c7e2  51                   push ecx
// 0072c7e3  50                   push eax
// 0072c7e4  ff1510ee8900         call dword ptr [0x89ee10]
// 0072c7ea  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0072c7ed  f6c104               test cl, 4
// 0072c7f0  740b                 je 0x72c7fd
// 0072c7f2  8bc5                 mov eax, ebp
// 0072c7f4  99                   cdq 
// 0072c7f5  2bc2                 sub eax, edx
// 0072c7f7  8bf8                 mov edi, eax
// 0072c7f9  d1ff                 sar edi, 1
// 0072c7fb  eb0e                 jmp 0x72c80b
// 0072c7fd  8bd1                 mov edx, ecx
// 0072c7ff  80e208               and dl, 8
// 0072c802  0fb6fa               movzx edi, dl
// 0072c805  f7df                 neg edi
// 0072c807  1bff                 sbb edi, edi
// 0072c809  23fd                 and edi, ebp
// 0072c80b  f6c101               test cl, 1
// 0072c80e  7409                 je 0x72c819
// 0072c810  8bc3                 mov eax, ebx
// 0072c812  99                   cdq 
// 0072c813  2bc2                 sub eax, edx
// 0072c815  d1f8                 sar eax, 1
// 0072c817  eb12                 jmp 0x72c82b
// 0072c819  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0072c81e  7509                 jne 0x72c829
// 0072c820  f6c102               test cl, 2
// 0072c823  7504                 jne 0x72c829
// 0072c825  33c0                 xor eax, eax
// 0072c827  eb02                 jmp 0x72c82b
// 0072c829  8bc3                 mov eax, ebx
// 0072c82b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0072c82f  8b542434             mov edx, dword ptr [esp + 0x34]
// 0072c833  2bd0                 sub edx, eax
// 0072c835  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072c839  2bcf                 sub ecx, edi
// 0072c83b  89542440             mov dword ptr [esp + 0x40], edx
// 0072c83f  03d3                 add edx, ebx
// 0072c841  894c2444             mov dword ptr [esp + 0x44], ecx
// 0072c845  03cd                 add ecx, ebp
// 0072c847  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 0072c84e  89542448             mov dword ptr [esp + 0x48], edx
// 0072c852  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0072c856  740d                 je 0x72c865
// 0072c858  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0072c85c  7507                 jne 0x72c865
// 0072c85e  bb01000000           mov ebx, 1
// 0072c863  eb02                 jmp 0x72c867
// 0072c865  33db                 xor ebx, ebx
// 0072c867  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0072c86e  8b3e                 mov edi, dword ptr [esi]
// 0072c870  6a00                 push 0
// 0072c872  6a00                 push 0
// 0072c874  51                   push ecx
// 0072c875  8d54244c             lea edx, [esp + 0x4c]
// 0072c879  52                   push edx
// 0072c87a  6800000080           push 0x80000000
// 0072c87f  6a00                 push 0
// 0072c881  6a00                 push 0
// 0072c883  6a00                 push 0
// 0072c885  6a00                 push 0
// 0072c887  6800080000           push 0x800
// 0072c88c  83c760               add edi, 0x60
// 0072c88f  e86acbfeff           call 0x7193fe
// 0072c894  8b17                 mov edx, dword ptr [edi]
// 0072c896  50                   push eax
// 0072c897  8bc3                 mov eax, ebx
// 0072c899  f7d8                 neg eax
// 0072c89b  1bc0                 sbb eax, eax
// 0072c89d  2500000800           and eax, 0x80000
// 0072c8a2  0d80000000           or eax, 0x80
// 0072c8a7  50                   push eax
// 0072c8a8  8bce                 mov ecx, esi
// 0072c8aa  ffd2                 call edx
// 0072c8ac  8b442444             mov eax, dword ptr [esp + 0x44]
// 0072c8b0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072c8b4  8b542448             mov edx, dword ptr [esp + 0x48]
// 0072c8b8  6810020000           push 0x210
// 0072c8bd  2bc8                 sub ecx, eax
// 0072c8bf  51                   push ecx
// 0072c8c0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072c8c4  2bd1                 sub edx, ecx
// 0072c8c6  52                   push edx
// 0072c8c7  50                   push eax
// 0072c8c8  a1b8ff8900           mov eax, dword ptr [0x89ffb8]
// 0072c8cd  51                   push ecx
// 0072c8ce  50                   push eax
// 0072c8cf  8bce                 mov ecx, esi
// 0072c8d1  e82ec5feff           call 0x718e04
// 0072c8d6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072c8da  8b11                 mov edx, dword ptr [ecx]
// 0072c8dc  8b820c010000         mov eax, dword ptr [edx + 0x10c]
// 0072c8e2  6a01                 push 1
// 0072c8e4  56                   push esi
// 0072c8e5  6a00                 push 0
// 0072c8e7  ffd0                 call eax
// 0072c8e9  85db                 test ebx, ebx
// 0072c8eb  7419                 je 0x72c906
// 0072c8ed  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0072c8f0  8b542428             mov edx, dword ptr [esp + 0x28]
// 0072c8f4  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 0072c8fa  6a02                 push 2
// 0072c8fc  6896000000           push 0x96
// 0072c901  6a00                 push 0
// 0072c903  51                   push ecx
// 0072c904  ffd0                 call eax
// 0072c906  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0072c90d  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0072c911  40                   inc eax
// 0072c912  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0072c916  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 0072c91d  0f8c1efeffff         jl 0x72c741
// 0072c923  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072c927  33f6                 xor esi, esi
// 0072c929  85ff                 test edi, edi
// 0072c92b  7e3b                 jle 0x72c968
// 0072c92d  8d4900               lea ecx, [ecx]
// 0072c930  85f6                 test esi, esi
// 0072c932  0f8c69fcffff         jl 0x72c5a1
// 0072c938  3b7334               cmp esi, dword ptr [ebx + 0x34]
// 0072c93b  0f8d60fcffff         jge 0x72c5a1
// 0072c941  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0072c944  8d04b1               lea eax, [ecx + esi*4]
// 0072c947  8b08                 mov ecx, dword ptr [eax]
// 0072c949  83797000             cmp dword ptr [ecx + 0x70], 0
// 0072c94d  7414                 je 0x72c963
// 0072c94f  6857020000           push 0x257
// 0072c954  6a00                 push 0
// 0072c956  6a00                 push 0
// 0072c958  6a00                 push 0
// 0072c95a  6a00                 push 0
// 0072c95c  6a00                 push 0
// 0072c95e  e8a1c4feff           call 0x718e04
// 0072c963  46                   inc esi
// 0072c964  3bf7                 cmp esi, edi
// 0072c966  7cc8                 jl 0x72c930
// 0072c968  8d4c2454             lea ecx, [esp + 0x54]
// 0072c96c  c684248000000000     mov byte ptr [esp + 0x80], 0
// 0072c974  e8673f0400           call 0x7708e0
// 0072c979  8d4c2464             lea ecx, [esp + 0x64]
// 0072c97d  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 0072c988  e80fcffeff           call 0x71989c
// 0072c98d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0072c991  64890d00000000       mov dword ptr fs:[0], ecx
// 0072c998  59                   pop ecx
// 0072c999  5f                   pop edi
// 0072c99a  5e                   pop esi
// 0072c99b  5d                   pop ebp
// 0072c99c  5b                   pop ebx
// 0072c99d  83c470               add esp, 0x70
// 0072c9a0  c20800               ret 8
// copied from an identical function in another client (function ?ShowKeyboardTips@CXTPCommandBars@@QAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp