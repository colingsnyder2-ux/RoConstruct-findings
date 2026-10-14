// roc 2009-06 0056e260  unit: G3D::Log  size: 1295 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056e260
//
// 0056e260  64a100000000         mov eax, dword ptr fs:[0]
// 0056e266  6aff                 push -1
// 0056e268  6874018600           push 0x860174
// 0056e26d  50                   push eax
// 0056e26e  64892500000000       mov dword ptr fs:[0], esp
// 0056e275  81ecc0000000         sub esp, 0xc0
// 0056e27b  56                   push esi
// 0056e27c  8bb424d4000000       mov esi, dword ptr [esp + 0xd4]
// 0056e283  8b4638               mov eax, dword ptr [esi + 0x38]
// 0056e286  57                   push edi
// 0056e287  8bf9                 mov edi, ecx
// 0056e289  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e28c  2bc1                 sub eax, ecx
// 0056e28e  83c0ee               add eax, -0x12
// 0056e291  894644               mov dword ptr [esi + 0x44], eax
// 0056e294  7805                 js 0x56e29b
// 0056e296  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0056e299  7e0c                 jle 0x56e2a7
// 0056e29b  03c1                 add eax, ecx
// 0056e29d  6a00                 push 0
// 0056e29f  50                   push eax
// 0056e2a0  8bce                 mov ecx, esi
// 0056e2a2  e8a9640000           call 0x574750
// 0056e2a7  6a10                 push 0x10
// 0056e2a9  8d442434             lea eax, [esp + 0x34]
// 0056e2ad  50                   push eax
// 0056e2ae  8bce                 mov ecx, esi
// 0056e2b0  e82b6a0000           call 0x574ce0
// 0056e2b5  8d4c2430             lea ecx, [esp + 0x30]
// 0056e2b9  68e4b38c00           push 0x8cb3e4
// 0056e2be  51                   push ecx
// 0056e2bf  c78424d800000000000000 mov dword ptr [esp + 0xd8], 0
// 0056e2ca  ff152ce48900         call dword ptr [0x89e42c]
// 0056e2d0  83c408               add esp, 8
// 0056e2d3  84c0                 test al, al
// 0056e2d5  7449                 je 0x56e320
// 0056e2d7  68d4b38c00           push 0x8cb3d4
// 0056e2dc  8d4c2418             lea ecx, [esp + 0x18]
// 0056e2e0  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056e2e6  8d54244c             lea edx, [esp + 0x4c]
// 0056e2ea  52                   push edx
// 0056e2eb  8bce                 mov ecx, esi
// 0056e2ed  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 0056e2f5  e8b6eeffff           call 0x56d1b0
// 0056e2fa  50                   push eax
// 0056e2fb  8d442418             lea eax, [esp + 0x18]
// 0056e2ff  50                   push eax
// 0056e300  8d4c2470             lea ecx, [esp + 0x70]
// 0056e304  c68424d800000002     mov byte ptr [esp + 0xd8], 2
// 0056e30c  e88fbcf2ff           call 0x499fa0
// 0056e311  68308a9800           push 0x988a30
// 0056e316  8d4c246c             lea ecx, [esp + 0x6c]
// 0056e31a  51                   push ecx
// 0056e31b  e82ab71a00           call 0x719a4a
// 0056e320  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e323  8bc1                 mov eax, ecx
// 0056e325  f7d8                 neg eax
// 0056e327  894644               mov dword ptr [esi + 0x44], eax
// 0056e32a  7805                 js 0x56e331
// 0056e32c  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0056e32f  7e0c                 jle 0x56e33d
// 0056e331  03c1                 add eax, ecx
// 0056e333  6a00                 push 0
// 0056e335  50                   push eax
// 0056e336  8bce                 mov ecx, esi
// 0056e338  e813640000           call 0x574750
// 0056e33d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e340  8d5001               lea edx, [eax + 1]
// 0056e343  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0056e346  7e0f                 jle 0x56e357
// 0056e348  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e34b  03c8                 add ecx, eax
// 0056e34d  6a01                 push 1
// 0056e34f  51                   push ecx
// 0056e350  8bce                 mov ecx, esi
// 0056e352  e8f9630000           call 0x574750
// 0056e357  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e35a  8b5640               mov edx, dword ptr [esi + 0x40]
// 0056e35d  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e360  40                   inc eax
// 0056e361  55                   push ebp
// 0056e362  0fb6e9               movzx ebp, cl
// 0056e365  8d4801               lea ecx, [eax + 1]
// 0056e368  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056e36b  894644               mov dword ptr [esi + 0x44], eax
// 0056e36e  7e0f                 jle 0x56e37f
// 0056e370  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056e373  6a01                 push 1
// 0056e375  03d0                 add edx, eax
// 0056e377  52                   push edx
// 0056e378  8bce                 mov ecx, esi
// 0056e37a  e8d1630000           call 0x574750
// 0056e37f  ff4644               inc dword ptr [esi + 0x44]
// 0056e382  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e385  8d4801               lea ecx, [eax + 1]
// 0056e388  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056e38b  7e0f                 jle 0x56e39c
// 0056e38d  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056e390  6a01                 push 1
// 0056e392  03d0                 add edx, eax
// 0056e394  52                   push edx
// 0056e395  8bce                 mov ecx, esi
// 0056e397  e8b4630000           call 0x574750
// 0056e39c  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e39f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056e3a2  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056e3a5  0fb6c9               movzx ecx, cl
// 0056e3a8  40                   inc eax
// 0056e3a9  894644               mov dword ptr [esi + 0x44], eax
// 0056e3ac  83f902               cmp ecx, 2
// 0056e3af  7449                 je 0x56e3fa
// 0056e3b1  68a0b38c00           push 0x8cb3a0
// 0056e3b6  8d4c241c             lea ecx, [esp + 0x1c]
// 0056e3ba  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056e3c0  8d542450             lea edx, [esp + 0x50]
// 0056e3c4  52                   push edx
// 0056e3c5  8bce                 mov ecx, esi
// 0056e3c7  c68424d800000003     mov byte ptr [esp + 0xd8], 3
// 0056e3cf  e8dcedffff           call 0x56d1b0
// 0056e3d4  50                   push eax
// 0056e3d5  8d44241c             lea eax, [esp + 0x1c]
// 0056e3d9  50                   push eax
// 0056e3da  8d4c2474             lea ecx, [esp + 0x74]
// 0056e3de  c68424dc00000004     mov byte ptr [esp + 0xdc], 4
// 0056e3e6  e8b5bbf2ff           call 0x499fa0
// 0056e3eb  68308a9800           push 0x988a30
// 0056e3f0  8d4c2470             lea ecx, [esp + 0x70]
// 0056e3f4  51                   push ecx
// 0056e3f5  e850b61a00           call 0x719a4a
// 0056e3fa  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e3fd  8d440805             lea eax, [eax + ecx + 5]
// 0056e401  2bc1                 sub eax, ecx
// 0056e403  894644               mov dword ptr [esi + 0x44], eax
// 0056e406  7805                 js 0x56e40d
// 0056e408  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0056e40b  7e0c                 jle 0x56e419
// 0056e40d  03c1                 add eax, ecx
// 0056e40f  6a00                 push 0
// 0056e411  50                   push eax
// 0056e412  8bce                 mov ecx, esi
// 0056e414  e837630000           call 0x574750
// 0056e419  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e41c  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056e41f  8d441104             lea eax, [ecx + edx + 4]
// 0056e423  2bc1                 sub eax, ecx
// 0056e425  894644               mov dword ptr [esi + 0x44], eax
// 0056e428  7805                 js 0x56e42f
// 0056e42a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0056e42d  7e0c                 jle 0x56e43b
// 0056e42f  03c1                 add eax, ecx
// 0056e431  6a00                 push 0
// 0056e433  50                   push eax
// 0056e434  8bce                 mov ecx, esi
// 0056e436  e815630000           call 0x574750
// 0056e43b  8bce                 mov ecx, esi
// 0056e43d  e87ecaf0ff           call 0x47aec0
// 0056e442  0fb7c0               movzx eax, ax
// 0056e445  98                   cwde 
// 0056e446  8bce                 mov ecx, esi
// 0056e448  894708               mov dword ptr [edi + 8], eax
// 0056e44b  e870caf0ff           call 0x47aec0
// 0056e450  0fb7c0               movzx eax, ax
// 0056e453  0fbfc8               movsx ecx, ax
// 0056e456  894f0c               mov dword ptr [edi + 0xc], ecx
// 0056e459  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e45c  8d5001               lea edx, [eax + 1]
// 0056e45f  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0056e462  7e0f                 jle 0x56e473
// 0056e464  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e467  03c8                 add ecx, eax
// 0056e469  6a01                 push 1
// 0056e46b  51                   push ecx
// 0056e46c  8bce                 mov ecx, esi
// 0056e46e  e8dd620000           call 0x574750
// 0056e473  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e476  8b5640               mov edx, dword ptr [esi + 0x40]
// 0056e479  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e47c  40                   inc eax
// 0056e47d  894644               mov dword ptr [esi + 0x44], eax
// 0056e480  0fb6c1               movzx eax, cl
// 0056e483  53                   push ebx
// 0056e484  bb03000000           mov ebx, 3
// 0056e489  83f818               cmp eax, 0x18
// 0056e48c  7457                 je 0x56e4e5
// 0056e48e  83f820               cmp eax, 0x20
// 0056e491  7449                 je 0x56e4dc
// 0056e493  6880b38c00           push 0x8cb380
// 0056e498  8d4c2420             lea ecx, [esp + 0x20]
// 0056e49c  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056e4a2  8d442454             lea eax, [esp + 0x54]
// 0056e4a6  50                   push eax
// 0056e4a7  8bce                 mov ecx, esi
// 0056e4a9  c68424dc00000005     mov byte ptr [esp + 0xdc], 5
// 0056e4b1  e8faecffff           call 0x56d1b0
// 0056e4b6  50                   push eax
// 0056e4b7  8d4c2420             lea ecx, [esp + 0x20]
// 0056e4bb  51                   push ecx
// 0056e4bc  8d4c2478             lea ecx, [esp + 0x78]
// 0056e4c0  c68424e000000006     mov byte ptr [esp + 0xe0], 6
// 0056e4c8  e8d3baf2ff           call 0x499fa0
// 0056e4cd  68308a9800           push 0x988a30
// 0056e4d2  8d542474             lea edx, [esp + 0x74]
// 0056e4d6  52                   push edx
// 0056e4d7  e86eb51a00           call 0x719a4a
// 0056e4dc  c7471004000000       mov dword ptr [edi + 0x10], 4
// 0056e4e3  eb03                 jmp 0x56e4e8
// 0056e4e5  895f10               mov dword ptr [edi + 0x10], ebx
// 0056e4e8  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e4eb  8d4801               lea ecx, [eax + 1]
// 0056e4ee  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056e4f1  7e0f                 jle 0x56e502
// 0056e4f3  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056e4f6  6a01                 push 1
// 0056e4f8  03d0                 add edx, eax
// 0056e4fa  52                   push edx
// 0056e4fb  8bce                 mov ecx, esi
// 0056e4fd  e84e620000           call 0x574750
// 0056e502  ff4644               inc dword ptr [esi + 0x44]
// 0056e505  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e508  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e50b  03c1                 add eax, ecx
// 0056e50d  03c5                 add eax, ebp
// 0056e50f  2bc1                 sub eax, ecx
// 0056e511  894644               mov dword ptr [esi + 0x44], eax
// 0056e514  7805                 js 0x56e51b
// 0056e516  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0056e519  7e0c                 jle 0x56e527
// 0056e51b  03c1                 add eax, ecx
// 0056e51d  6a00                 push 0
// 0056e51f  50                   push eax
// 0056e520  8bce                 mov ecx, esi
// 0056e522  e829620000           call 0x574750
// 0056e527  8b4708               mov eax, dword ptr [edi + 8]
// 0056e52a  0faf470c             imul eax, dword ptr [edi + 0xc]
// 0056e52e  0faf4710             imul eax, dword ptr [edi + 0x10]
// 0056e532  50                   push eax
// 0056e533  e808ccffff           call 0x56b140
// 0056e538  83c404               add esp, 4
// 0056e53b  894704               mov dword ptr [edi + 4], eax
// 0056e53e  8b470c               mov eax, dword ptr [edi + 0xc]
// 0056e541  395f10               cmp dword ptr [edi + 0x10], ebx
// 0056e544  0f85e2000000         jne 0x56e62c
// 0056e54a  83e801               sub eax, 1
// 0056e54d  89442410             mov dword ptr [esp + 0x10], eax
// 0056e551  0f88e8010000         js 0x56e73f
// 0056e557  eb07                 jmp 0x56e560
// 0056e559  8da42400000000       lea esp, [esp]
// 0056e560  33ed                 xor ebp, ebp
// 0056e562  396f08               cmp dword ptr [edi + 8], ebp
// 0056e565  0f8eb1000000         jle 0x56e61c
// 0056e56b  eb03                 jmp 0x56e570
// 0056e56d  8d4900               lea ecx, [ecx]
// 0056e570  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e573  8d4801               lea ecx, [eax + 1]
// 0056e576  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056e579  7e0f                 jle 0x56e58a
// 0056e57b  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056e57e  6a01                 push 1
// 0056e580  03d0                 add edx, eax
// 0056e582  52                   push edx
// 0056e583  8bce                 mov ecx, esi
// 0056e585  e8c6610000           call 0x574750
// 0056e58a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e58d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056e590  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056e593  40                   inc eax
// 0056e594  0fb6d1               movzx edx, cl
// 0056e597  8d4801               lea ecx, [eax + 1]
// 0056e59a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056e59d  894644               mov dword ptr [esi + 0x44], eax
// 0056e5a0  89542414             mov dword ptr [esp + 0x14], edx
// 0056e5a4  7e0f                 jle 0x56e5b5
// 0056e5a6  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056e5a9  6a01                 push 1
// 0056e5ab  03d0                 add edx, eax
// 0056e5ad  52                   push edx
// 0056e5ae  8bce                 mov ecx, esi
// 0056e5b0  e89b610000           call 0x574750
// 0056e5b5  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e5b8  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056e5bb  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056e5be  40                   inc eax
// 0056e5bf  8d5001               lea edx, [eax + 1]
// 0056e5c2  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0056e5c5  894644               mov dword ptr [esi + 0x44], eax
// 0056e5c8  0fb6d9               movzx ebx, cl
// 0056e5cb  7e0f                 jle 0x56e5dc
// 0056e5cd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e5d0  03c8                 add ecx, eax
// 0056e5d2  6a01                 push 1
// 0056e5d4  51                   push ecx
// 0056e5d5  8bce                 mov ecx, esi
// 0056e5d7  e874610000           call 0x574750
// 0056e5dc  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e5df  8b5640               mov edx, dword ptr [esi + 0x40]
// 0056e5e2  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e5e5  40                   inc eax
// 0056e5e6  894644               mov dword ptr [esi + 0x44], eax
// 0056e5e9  8b4708               mov eax, dword ptr [edi + 8]
// 0056e5ec  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0056e5f1  8b5704               mov edx, dword ptr [edi + 4]
// 0056e5f4  0fb6c9               movzx ecx, cl
// 0056e5f7  03c5                 add eax, ebp
// 0056e5f9  8d0440               lea eax, [eax + eax*2]
// 0056e5fc  880c10               mov byte ptr [eax + edx], cl
// 0056e5ff  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056e602  885c0101             mov byte ptr [ecx + eax + 1], bl
// 0056e606  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0056e60b  8b5704               mov edx, dword ptr [edi + 4]
// 0056e60e  45                   inc ebp
// 0056e60f  884c0202             mov byte ptr [edx + eax + 2], cl
// 0056e613  3b6f08               cmp ebp, dword ptr [edi + 8]
// 0056e616  0f8c54ffffff         jl 0x56e570
// 0056e61c  836c241001           sub dword ptr [esp + 0x10], 1
// 0056e621  0f8939ffffff         jns 0x56e560
// 0056e627  e913010000           jmp 0x56e73f
// 0056e62c  83e801               sub eax, 1
// 0056e62f  89442410             mov dword ptr [esp + 0x10], eax
// 0056e633  0f8806010000         js 0x56e73f
// 0056e639  8da42400000000       lea esp, [esp]
// 0056e640  33ed                 xor ebp, ebp
// 0056e642  396f08               cmp dword ptr [edi + 8], ebp
// 0056e645  0f8ee9000000         jle 0x56e734
// 0056e64b  eb03                 jmp 0x56e650
// 0056e64d  8d4900               lea ecx, [ecx]
// 0056e650  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e653  8d5001               lea edx, [eax + 1]
// 0056e656  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0056e659  7e0f                 jle 0x56e66a
// 0056e65b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e65e  03c8                 add ecx, eax
// 0056e660  6a01                 push 1
// 0056e662  51                   push ecx
// 0056e663  8bce                 mov ecx, esi
// 0056e665  e8e6600000           call 0x574750
// 0056e66a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e66d  8b5640               mov edx, dword ptr [esi + 0x40]
// 0056e670  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e673  40                   inc eax
// 0056e674  0fb6c9               movzx ecx, cl
// 0056e677  8d5001               lea edx, [eax + 1]
// 0056e67a  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0056e67d  894644               mov dword ptr [esi + 0x44], eax
// 0056e680  894c2418             mov dword ptr [esp + 0x18], ecx
// 0056e684  7e0f                 jle 0x56e695
// 0056e686  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e689  03c8                 add ecx, eax
// 0056e68b  6a01                 push 1
// 0056e68d  51                   push ecx
// 0056e68e  8bce                 mov ecx, esi
// 0056e690  e8bb600000           call 0x574750
// 0056e695  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e698  8b5640               mov edx, dword ptr [esi + 0x40]
// 0056e69b  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e69e  40                   inc eax
// 0056e69f  0fb6c9               movzx ecx, cl
// 0056e6a2  8d5001               lea edx, [eax + 1]
// 0056e6a5  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0056e6a8  894644               mov dword ptr [esi + 0x44], eax
// 0056e6ab  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056e6af  7e0f                 jle 0x56e6c0
// 0056e6b1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e6b4  03c8                 add ecx, eax
// 0056e6b6  6a01                 push 1
// 0056e6b8  51                   push ecx
// 0056e6b9  8bce                 mov ecx, esi
// 0056e6bb  e890600000           call 0x574750
// 0056e6c0  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e6c3  8b5640               mov edx, dword ptr [esi + 0x40]
// 0056e6c6  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e6c9  40                   inc eax
// 0056e6ca  0fb6d9               movzx ebx, cl
// 0056e6cd  8d4801               lea ecx, [eax + 1]
// 0056e6d0  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056e6d3  894644               mov dword ptr [esi + 0x44], eax
// 0056e6d6  7e0f                 jle 0x56e6e7
// 0056e6d8  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056e6db  6a01                 push 1
// 0056e6dd  03d0                 add edx, eax
// 0056e6df  52                   push edx
// 0056e6e0  8bce                 mov ecx, esi
// 0056e6e2  e869600000           call 0x574750
// 0056e6e7  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056e6ea  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056e6ed  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056e6f0  40                   inc eax
// 0056e6f1  894644               mov dword ptr [esi + 0x44], eax
// 0056e6f4  8b4708               mov eax, dword ptr [edi + 8]
// 0056e6f7  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0056e6fc  8b5704               mov edx, dword ptr [edi + 4]
// 0056e6ff  03c5                 add eax, ebp
// 0056e701  03c0                 add eax, eax
// 0056e703  03c0                 add eax, eax
// 0056e705  881c10               mov byte ptr [eax + edx], bl
// 0056e708  8b5704               mov edx, dword ptr [edi + 4]
// 0056e70b  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 0056e710  885c0201             mov byte ptr [edx + eax + 1], bl
// 0056e714  8b5704               mov edx, dword ptr [edi + 4]
// 0056e717  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 0056e71c  885c0202             mov byte ptr [edx + eax + 2], bl
// 0056e720  8b5704               mov edx, dword ptr [edi + 4]
// 0056e723  0fb6c9               movzx ecx, cl
// 0056e726  45                   inc ebp
// 0056e727  884c0203             mov byte ptr [edx + eax + 3], cl
// 0056e72b  3b6f08               cmp ebp, dword ptr [edi + 8]
// 0056e72e  0f8c1cffffff         jl 0x56e650
// 0056e734  836c241001           sub dword ptr [esp + 0x10], 1
// 0056e739  0f8901ffffff         jns 0x56e640
// 0056e73f  8d4c2438             lea ecx, [esp + 0x38]
// 0056e743  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 0056e74e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056e754  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 0056e75b  5b                   pop ebx
// 0056e75c  5d                   pop ebp
// 0056e75d  5f                   pop edi
// 0056e75e  5e                   pop esi
// 0056e75f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056e766  81c4cc000000         add esp, 0xcc
// 0056e76c  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_tga.cpp (function ?decodeTGA@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_tga.cpp
