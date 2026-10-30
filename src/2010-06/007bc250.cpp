// roc 2010-06 007bc250  unit: CXTPCommandBar  size: 1124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bc250
//
// 007bc250  55                   push ebp
// 007bc251  56                   push esi
// 007bc252  8bf1                 mov esi, ecx
// 007bc254  e877c3ffff           call 0x7b85d0
// 007bc259  8be8                 mov ebp, eax
// 007bc25b  85ed                 test ebp, ebp
// 007bc25d  7410                 je 0x7bc26f
// 007bc25f  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 007bc263  740a                 je 0x7bc26f
// 007bc265  5e                   pop esi
// 007bc266  b802000000           mov eax, 2
// 007bc26b  5d                   pop ebp
// 007bc26c  c20800               ret 8
// 007bc26f  8bce                 mov ecx, esi
// 007bc271  e8baffffff           call 0x7bc230
// 007bc276  85c0                 test eax, eax
// 007bc278  75eb                 jne 0x7bc265
// 007bc27a  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 007bc280  7e0a                 jle 0x7bc28c
// 007bc282  5e                   pop esi
// 007bc283  b801000000           mov eax, 1
// 007bc288  5d                   pop ebp
// 007bc289  c20800               ret 8
// 007bc28c  8d4604               lea eax, [esi + 4]
// 007bc28f  50                   push eax
// 007bc290  ff1580a39e00         call dword ptr [0x9ea380]
// 007bc296  8bce                 mov ecx, esi
// 007bc298  e863efffff           call 0x7bb200
// 007bc29d  8b5020               mov edx, dword ptr [eax + 0x20]
// 007bc2a0  56                   push esi
// 007bc2a1  8d4c2410             lea ecx, [esp + 0x10]
// 007bc2a5  51                   push ecx
// 007bc2a6  685a280000           push 0x285a
// 007bc2ab  52                   push edx
// 007bc2ac  ff1554ba9e00         call dword ptr [0x9eba54]
// 007bc2b2  8bce                 mov ecx, esi
// 007bc2b4  e863bcfeff           call 0x7a7f1c
// 007bc2b9  85c0                 test eax, eax
// 007bc2bb  74c5                 je 0x7bc282
// 007bc2bd  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007bc2c3  57                   push edi
// 007bc2c4  50                   push eax
// 007bc2c5  8bce                 mov ecx, esi
// 007bc2c7  e804d1ffff           call 0x7b93d0
// 007bc2cc  8bf8                 mov edi, eax
// 007bc2ce  85ff                 test edi, edi
// 007bc2d0  7435                 je 0x7bc307
// 007bc2d2  8b17                 mov edx, dword ptr [edi]
// 007bc2d4  8b4274               mov eax, dword ptr [edx + 0x74]
// 007bc2d7  8bcf                 mov ecx, edi
// 007bc2d9  ffd0                 call eax
// 007bc2db  85c0                 test eax, eax
// 007bc2dd  7428                 je 0x7bc307
// 007bc2df  8b442414             mov eax, dword ptr [esp + 0x14]
// 007bc2e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007bc2e7  8b17                 mov edx, dword ptr [edi]
// 007bc2e9  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 007bc2ef  50                   push eax
// 007bc2f0  51                   push ecx
// 007bc2f1  8bcf                 mov ecx, edi
// 007bc2f3  ffd2                 call edx
// 007bc2f5  83f801               cmp eax, 1
// 007bc2f8  0f84cc000000         je 0x7bc3ca
// 007bc2fe  83f802               cmp eax, 2
// 007bc301  0f84c3000000         je 0x7bc3ca
// 007bc307  837e2000             cmp dword ptr [esi + 0x20], 0
// 007bc30b  0f8452030000         je 0x7bc663
// 007bc311  8b442410             mov eax, dword ptr [esp + 0x10]
// 007bc315  83c0f7               add eax, -9
// 007bc318  83f817               cmp eax, 0x17
// 007bc31b  0f8716010000         ja 0x7bc437
// 007bc321  0fb68084c67b00       movzx eax, byte ptr [eax + 0x7bc684]
// 007bc328  ff248570c67b00       jmp dword ptr [eax*4 + 0x7bc670]
// 007bc32f  53                   push ebx
// 007bc330  8b1d7cbc9e00         mov ebx, dword ptr [0x9ebc7c]
// 007bc336  6a11                 push 0x11
// 007bc338  ffd3                 call ebx
// 007bc33a  6685c0               test ax, ax
// 007bc33d  7d3d                 jge 0x7bc37c
// 007bc33f  85ed                 test ebp, ebp
// 007bc341  7439                 je 0x7bc37c
// 007bc343  8bce                 mov ecx, esi
// 007bc345  e856c2ffff           call 0x7b85a0
// 007bc34a  8bf8                 mov edi, eax
// 007bc34c  57                   push edi
// 007bc34d  e87e8e0000           call 0x7c51d0
// 007bc352  50                   push eax
// 007bc353  e826bafeff           call 0x7a7d7e
// 007bc358  83c408               add esp, 8
// 007bc35b  85c0                 test eax, eax
// 007bc35d  741d                 je 0x7bc37c
// 007bc35f  6a10                 push 0x10
// 007bc361  ffd3                 call ebx
// 007bc363  33c9                 xor ecx, ecx
// 007bc365  6685c0               test ax, ax
// 007bc368  0f9dc1               setge cl
// 007bc36b  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 007bc36f  51                   push ecx
// 007bc370  57                   push edi
// 007bc371  8bcd                 mov ecx, ebp
// 007bc373  e868e90000           call 0x7cace0
// 007bc378  85c0                 test eax, eax
// 007bc37a  7548                 jne 0x7bc3c4
// 007bc37c  8b3e                 mov edi, dword ptr [esi]
// 007bc37e  6a10                 push 0x10
// 007bc380  ffd3                 call ebx
// 007bc382  33d2                 xor edx, edx
// 007bc384  6685c0               test ax, ax
// 007bc387  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 007bc38d  0f9cc2               setl dl
// 007bc390  8bce                 mov ecx, esi
// 007bc392  52                   push edx
// 007bc393  ffd0                 call eax
// 007bc395  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007bc39b  51                   push ecx
// 007bc39c  8bce                 mov ecx, esi
// 007bc39e  e82dd0ffff           call 0x7b93d0
// 007bc3a3  8bf0                 mov esi, eax
// 007bc3a5  85f6                 test esi, esi
// 007bc3a7  741b                 je 0x7bc3c4
// 007bc3a9  8b16                 mov edx, dword ptr [esi]
// 007bc3ab  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 007bc3b1  8bce                 mov ecx, esi
// 007bc3b3  ffd0                 call eax
// 007bc3b5  85c0                 test eax, eax
// 007bc3b7  740b                 je 0x7bc3c4
// 007bc3b9  8b16                 mov edx, dword ptr [esi]
// 007bc3bb  8b4270               mov eax, dword ptr [edx + 0x70]
// 007bc3be  6a01                 push 1
// 007bc3c0  8bce                 mov ecx, esi
// 007bc3c2  ffd0                 call eax
// 007bc3c4  b801000000           mov eax, 1
// 007bc3c9  5b                   pop ebx
// 007bc3ca  5f                   pop edi
// 007bc3cb  5e                   pop esi
// 007bc3cc  5d                   pop ebp
// 007bc3cd  c20800               ret 8
// 007bc3d0  8b16                 mov edx, dword ptr [esi]
// 007bc3d2  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007bc3d8  6a05                 push 5
// 007bc3da  8bce                 mov ecx, esi
// 007bc3dc  ffd0                 call eax
// 007bc3de  5f                   pop edi
// 007bc3df  5e                   pop esi
// 007bc3e0  5d                   pop ebp
// 007bc3e1  c20800               ret 8
// 007bc3e4  8b16                 mov edx, dword ptr [esi]
// 007bc3e6  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007bc3ec  6a04                 push 4
// 007bc3ee  8bce                 mov ecx, esi
// 007bc3f0  ffd0                 call eax
// 007bc3f2  5f                   pop edi
// 007bc3f3  5e                   pop esi
// 007bc3f4  5d                   pop ebp
// 007bc3f5  c20800               ret 8
// 007bc3f8  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 007bc3ff  7536                 jne 0x7bc437
// 007bc401  8bce                 mov ecx, esi
// 007bc403  e8c8c1ffff           call 0x7b85d0
// 007bc408  8bc8                 mov ecx, eax
// 007bc40a  e8a1db0000           call 0x7c9fb0
// 007bc40f  8bce                 mov ecx, esi
// 007bc411  e8eaedffff           call 0x7bb200
// 007bc416  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007bc419  6a20                 push 0x20
// 007bc41b  6800f10000           push 0xf100
// 007bc420  6812010000           push 0x112
// 007bc425  51                   push ecx
// 007bc426  ff1548ba9e00         call dword ptr [0x9eba48]
// 007bc42c  5f                   pop edi
// 007bc42d  5e                   pop esi
// 007bc42e  b801000000           mov eax, 1
// 007bc433  5d                   pop ebp
// 007bc434  c20800               ret 8
// 007bc437  8b3d80ba9e00         mov edi, dword ptr [0x9eba80]
// 007bc43d  ffd7                 call edi
// 007bc43f  85c0                 test eax, eax
// 007bc441  741c                 je 0x7bc45f
// 007bc443  ffd7                 call edi
// 007bc445  8b5620               mov edx, dword ptr [esi + 0x20]
// 007bc448  50                   push eax
// 007bc449  52                   push edx
// 007bc44a  ff15acba9e00         call dword ptr [0x9ebaac]
// 007bc450  85c0                 test eax, eax
// 007bc452  740b                 je 0x7bc45f
// 007bc454  5f                   pop edi
// 007bc455  5e                   pop esi
// 007bc456  b802000000           mov eax, 2
// 007bc45b  5d                   pop ebp
// 007bc45c  c20800               ret 8
// 007bc45f  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007bc465  85c0                 test eax, eax
// 007bc467  741c                 je 0x7bc485
// 007bc469  83f801               cmp eax, 1
// 007bc46c  7417                 je 0x7bc485
// 007bc46e  83f804               cmp eax, 4
// 007bc471  7412                 je 0x7bc485
// 007bc473  83f805               cmp eax, 5
// 007bc476  7509                 jne 0x7bc481
// 007bc478  83bef800000001       cmp dword ptr [esi + 0xf8], 1
// 007bc47f  7404                 je 0x7bc485
// 007bc481  33ff                 xor edi, edi
// 007bc483  eb05                 jmp 0x7bc48a
// 007bc485  bf01000000           mov edi, 1
// 007bc48a  8bce                 mov ecx, esi
// 007bc48c  e8efc3ffff           call 0x7b8880
// 007bc491  8b542410             mov edx, dword ptr [esp + 0x10]
// 007bc495  8d4add               lea ecx, [edx - 0x23]
// 007bc498  83f905               cmp ecx, 5
// 007bc49b  0f87dd000000         ja 0x7bc57e
// 007bc4a1  ff248d9cc67b00       jmp dword ptr [ecx*4 + 0x7bc69c]
// 007bc4a8  85ff                 test edi, edi
// 007bc4aa  741c                 je 0x7bc4c8
// 007bc4ac  8b16                 mov edx, dword ptr [esi]
// 007bc4ae  33c9                 xor ecx, ecx
// 007bc4b0  85c0                 test eax, eax
// 007bc4b2  0f94c1               sete cl
// 007bc4b5  8bc1                 mov eax, ecx
// 007bc4b7  50                   push eax
// 007bc4b8  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007bc4be  8bce                 mov ecx, esi
// 007bc4c0  ffd0                 call eax
// 007bc4c2  5f                   pop edi
// 007bc4c3  5e                   pop esi
// 007bc4c4  5d                   pop ebp
// 007bc4c5  c20800               ret 8
// 007bc4c8  33d2                 xor edx, edx
// 007bc4ca  85c0                 test eax, eax
// 007bc4cc  0f95c2               setne dl
// 007bc4cf  8bce                 mov ecx, esi
// 007bc4d1  83c202               add edx, 2
// 007bc4d4  8bc2                 mov eax, edx
// 007bc4d6  8b16                 mov edx, dword ptr [esi]
// 007bc4d8  50                   push eax
// 007bc4d9  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007bc4df  ffd0                 call eax
// 007bc4e1  5f                   pop edi
// 007bc4e2  5e                   pop esi
// 007bc4e3  5d                   pop ebp
// 007bc4e4  c20800               ret 8
// 007bc4e7  85ff                 test edi, edi
// 007bc4e9  741c                 je 0x7bc507
// 007bc4eb  8b16                 mov edx, dword ptr [esi]
// 007bc4ed  33c9                 xor ecx, ecx
// 007bc4ef  85c0                 test eax, eax
// 007bc4f1  0f95c1               setne cl
// 007bc4f4  8bc1                 mov eax, ecx
// 007bc4f6  50                   push eax
// 007bc4f7  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007bc4fd  8bce                 mov ecx, esi
// 007bc4ff  ffd0                 call eax
// 007bc501  5f                   pop edi
// 007bc502  5e                   pop esi
// 007bc503  5d                   pop ebp
// 007bc504  c20800               ret 8
// 007bc507  8b16                 mov edx, dword ptr [esi]
// 007bc509  f7d8                 neg eax
// 007bc50b  1bc0                 sbb eax, eax
// 007bc50d  83c003               add eax, 3
// 007bc510  50                   push eax
// 007bc511  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007bc517  8bce                 mov ecx, esi
// 007bc519  ffd0                 call eax
// 007bc51b  5f                   pop edi
// 007bc51c  5e                   pop esi
// 007bc51d  5d                   pop ebp
// 007bc51e  c20800               ret 8
// 007bc521  8b16                 mov edx, dword ptr [esi]
// 007bc523  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 007bc529  33c0                 xor eax, eax
// 007bc52b  85ff                 test edi, edi
// 007bc52d  0f95c0               setne al
// 007bc530  8bce                 mov ecx, esi
// 007bc532  40                   inc eax
// 007bc533  50                   push eax
// 007bc534  ffd2                 call edx
// 007bc536  5f                   pop edi
// 007bc537  5e                   pop esi
// 007bc538  5d                   pop ebp
// 007bc539  c20800               ret 8
// 007bc53c  8b06                 mov eax, dword ptr [esi]
// 007bc53e  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 007bc544  f7df                 neg edi
// 007bc546  1bff                 sbb edi, edi
// 007bc548  83e703               and edi, 3
// 007bc54b  57                   push edi
// 007bc54c  8bce                 mov ecx, esi
// 007bc54e  ffd2                 call edx
// 007bc550  5f                   pop edi
// 007bc551  5e                   pop esi
// 007bc552  5d                   pop ebp
// 007bc553  c20800               ret 8
// 007bc556  8b06                 mov eax, dword ptr [esi]
// 007bc558  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 007bc55e  6a06                 push 6
// 007bc560  8bce                 mov ecx, esi
// 007bc562  ffd2                 call edx
// 007bc564  5f                   pop edi
// 007bc565  5e                   pop esi
// 007bc566  5d                   pop ebp
// 007bc567  c20800               ret 8
// 007bc56a  8b06                 mov eax, dword ptr [esi]
// 007bc56c  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 007bc572  6a07                 push 7
// 007bc574  8bce                 mov ecx, esi
// 007bc576  ffd2                 call edx
// 007bc578  5f                   pop edi
// 007bc579  5e                   pop esi
// 007bc57a  5d                   pop ebp
// 007bc57b  c20800               ret 8
// 007bc57e  85d2                 test edx, edx
// 007bc580  0f84dd000000         je 0x7bc663
// 007bc586  6a02                 push 2
// 007bc588  52                   push edx
// 007bc589  ff1588bb9e00         call dword ptr [0x9ebb88]
// 007bc58f  85c0                 test eax, eax
// 007bc591  0f84cc000000         je 0x7bc663
// 007bc597  8bce                 mov ecx, esi
// 007bc599  e8c2be0000           call 0x7c8460
// 007bc59e  8b3d7cbc9e00         mov edi, dword ptr [0x9ebc7c]
// 007bc5a4  85c0                 test eax, eax
// 007bc5a6  7420                 je 0x7bc5c8
// 007bc5a8  6a11                 push 0x11
// 007bc5aa  ffd7                 call edi
// 007bc5ac  6685c0               test ax, ax
// 007bc5af  7c17                 jl 0x7bc5c8
// 007bc5b1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007bc5b5  50                   push eax
// 007bc5b6  8bce                 mov ecx, esi
// 007bc5b8  e893e7ffff           call 0x7bad50
// 007bc5bd  5f                   pop edi
// 007bc5be  5e                   pop esi
// 007bc5bf  b801000000           mov eax, 1
// 007bc5c4  5d                   pop ebp
// 007bc5c5  c20800               ret 8
// 007bc5c8  85ed                 test ebp, ebp
// 007bc5ca  7423                 je 0x7bc5ef
// 007bc5cc  56                   push esi
// 007bc5cd  e8fe8b0000           call 0x7c51d0
// 007bc5d2  50                   push eax
// 007bc5d3  e8a6b7feff           call 0x7a7d7e
// 007bc5d8  83c408               add esp, 8
// 007bc5db  85c0                 test eax, eax
// 007bc5dd  7410                 je 0x7bc5ef
// 007bc5df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007bc5e3  51                   push ecx
// 007bc5e4  8bcd                 mov ecx, ebp
// 007bc5e6  e8f5d90000           call 0x7c9fe0
// 007bc5eb  85c0                 test eax, eax
// 007bc5ed  7574                 jne 0x7bc663
// 007bc5ef  6a11                 push 0x11
// 007bc5f1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007bc5f9  ffd7                 call edi
// 007bc5fb  6685c0               test ax, ax
// 007bc5fe  7c4d                 jl 0x7bc64d
// 007bc600  8b442410             mov eax, dword ptr [esp + 0x10]
// 007bc604  8d542414             lea edx, [esp + 0x14]
// 007bc608  52                   push edx
// 007bc609  50                   push eax
// 007bc60a  8bce                 mov ecx, esi
// 007bc60c  e8afd1ffff           call 0x7b97c0
// 007bc611  8bf8                 mov edi, eax
// 007bc613  83ffff               cmp edi, -1
// 007bc616  7435                 je 0x7bc64d
// 007bc618  8b16                 mov edx, dword ptr [esi]
// 007bc61a  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 007bc620  6a02                 push 2
// 007bc622  57                   push edi
// 007bc623  8bce                 mov ecx, esi
// 007bc625  ffd0                 call eax
// 007bc627  837c241400           cmp dword ptr [esp + 0x14], 0
// 007bc62c  7514                 jne 0x7bc642
// 007bc62e  57                   push edi
// 007bc62f  8bce                 mov ecx, esi
// 007bc631  e89acdffff           call 0x7b93d0
// 007bc636  8b10                 mov edx, dword ptr [eax]
// 007bc638  8bc8                 mov ecx, eax
// 007bc63a  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 007bc640  ffd0                 call eax
// 007bc642  5f                   pop edi
// 007bc643  5e                   pop esi
// 007bc644  b801000000           mov eax, 1
// 007bc649  5d                   pop ebp
// 007bc64a  c20800               ret 8
// 007bc64d  8b442410             mov eax, dword ptr [esp + 0x10]
// 007bc651  83f810               cmp eax, 0x10
// 007bc654  740d                 je 0x7bc663
// 007bc656  83f811               cmp eax, 0x11
// 007bc659  7408                 je 0x7bc663
// 007bc65b  6a00                 push 0
// 007bc65d  ff15c4bb9e00         call dword ptr [0x9ebbc4]
// 007bc663  5f                   pop edi
// 007bc664  5e                   pop esi
// 007bc665  b801000000           mov eax, 1
// 007bc66a  5d                   pop ebp
// 007bc66b  c20800               ret 8
// 007bc66e  8bff                 mov edi, edi
// 007bc670  2f                   das 
// 007bc671  c3                   ret 
// 007bc672  7b00                 jnp 0x7bc674
// 007bc674  d0c3                 rol bl, 1
// 007bc676  7b00                 jnp 0x7bc678
// 007bc678  e4c3                 in al, 0xc3
// 007bc67a  7b00                 jnp 0x7bc67c
// 007bc67c  f8                   clc 
// 007bc67d  c3                   ret 
// 007bc67e  7b00                 jnp 0x7bc680
// 007bc680  37                   aaa 
// 007bc681  c47b00               les edi, ptr [ebx]
// 007bc684  000404               add byte ptr [esp + eax], al
// 007bc687  0401                 add al, 1
// 007bc689  0404                 add al, 4
// 007bc68b  0404                 add al, 4
// 007bc68d  0404                 add al, 4
// 007bc68f  0404                 add al, 4
// 007bc691  0404                 add al, 4
// 007bc693  0404                 add al, 4
// 007bc695  0402                 add al, 2
// 007bc697  0404                 add al, 4
// 007bc699  0404                 add al, 4
// 007bc69b  036ac5               add ebp, dword ptr [edx - 0x3b]
// 007bc69e  7b00                 jnp 0x7bc6a0
// 007bc6a0  56                   push esi
// 007bc6a1  c57b00               lds edi, ptr [ebx]
// 007bc6a4  a8c4                 test al, 0xc4
// 007bc6a6  7b00                 jnp 0x7bc6a8
// 007bc6a8  21c5                 and ebp, eax
// 007bc6aa  7b00                 jnp 0x7bc6ac
// 007bc6ac  e7c4                 out 0xc4, eax
// 007bc6ae  7b00                 jnp 0x7bc6b0
// 007bc6b0  3cc5                 cmp al, 0xc5
// 007bc6b2  7b00                 jnp 0x7bc6b4
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPCommandBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp