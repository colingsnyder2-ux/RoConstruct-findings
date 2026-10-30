// roc 2012-06 00996990  unit: CXTPCommandBar  size: 1124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00996990
//
// 00996990  55                   push ebp
// 00996991  56                   push esi
// 00996992  8bf1                 mov esi, ecx
// 00996994  e857c3ffff           call 0x992cf0
// 00996999  8be8                 mov ebp, eax
// 0099699b  85ed                 test ebp, ebp
// 0099699d  7410                 je 0x9969af
// 0099699f  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 009969a3  740a                 je 0x9969af
// 009969a5  5e                   pop esi
// 009969a6  b802000000           mov eax, 2
// 009969ab  5d                   pop ebp
// 009969ac  c20800               ret 8
// 009969af  8bce                 mov ecx, esi
// 009969b1  e8baffffff           call 0x996970
// 009969b6  85c0                 test eax, eax
// 009969b8  75eb                 jne 0x9969a5
// 009969ba  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 009969c0  7e0a                 jle 0x9969cc
// 009969c2  5e                   pop esi
// 009969c3  b801000000           mov eax, 1
// 009969c8  5d                   pop ebp
// 009969c9  c20800               ret 8
// 009969cc  8d4604               lea eax, [esi + 4]
// 009969cf  50                   push eax
// 009969d0  ff159821b200         call dword ptr [0xb22198]
// 009969d6  8bce                 mov ecx, esi
// 009969d8  e863efffff           call 0x995940
// 009969dd  8b5020               mov edx, dword ptr [eax + 0x20]
// 009969e0  56                   push esi
// 009969e1  8d4c2410             lea ecx, [esp + 0x10]
// 009969e5  51                   push ecx
// 009969e6  685a280000           push 0x285a
// 009969eb  52                   push edx
// 009969ec  ff15043cb200         call dword ptr [0xb23c04]
// 009969f2  8bce                 mov ecx, esi
// 009969f4  e891bcfeff           call 0x98268a
// 009969f9  85c0                 test eax, eax
// 009969fb  74c5                 je 0x9969c2
// 009969fd  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00996a03  57                   push edi
// 00996a04  50                   push eax
// 00996a05  8bce                 mov ecx, esi
// 00996a07  e804d1ffff           call 0x993b10
// 00996a0c  8bf8                 mov edi, eax
// 00996a0e  85ff                 test edi, edi
// 00996a10  7435                 je 0x996a47
// 00996a12  8b17                 mov edx, dword ptr [edi]
// 00996a14  8b4274               mov eax, dword ptr [edx + 0x74]
// 00996a17  8bcf                 mov ecx, edi
// 00996a19  ffd0                 call eax
// 00996a1b  85c0                 test eax, eax
// 00996a1d  7428                 je 0x996a47
// 00996a1f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00996a23  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00996a27  8b17                 mov edx, dword ptr [edi]
// 00996a29  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00996a2f  50                   push eax
// 00996a30  51                   push ecx
// 00996a31  8bcf                 mov ecx, edi
// 00996a33  ffd2                 call edx
// 00996a35  83f801               cmp eax, 1
// 00996a38  0f84cc000000         je 0x996b0a
// 00996a3e  83f802               cmp eax, 2
// 00996a41  0f84c3000000         je 0x996b0a
// 00996a47  837e2000             cmp dword ptr [esi + 0x20], 0
// 00996a4b  0f8452030000         je 0x996da3
// 00996a51  8b442410             mov eax, dword ptr [esp + 0x10]
// 00996a55  83c0f7               add eax, -9
// 00996a58  83f817               cmp eax, 0x17
// 00996a5b  0f8716010000         ja 0x996b77
// 00996a61  0fb680c46d9900       movzx eax, byte ptr [eax + 0x996dc4]
// 00996a68  ff2485b06d9900       jmp dword ptr [eax*4 + 0x996db0]
// 00996a6f  53                   push ebx
// 00996a70  8b1d843ab200         mov ebx, dword ptr [0xb23a84]
// 00996a76  6a11                 push 0x11
// 00996a78  ffd3                 call ebx
// 00996a7a  6685c0               test ax, ax
// 00996a7d  7d3d                 jge 0x996abc
// 00996a7f  85ed                 test ebp, ebp
// 00996a81  7439                 je 0x996abc
// 00996a83  8bce                 mov ecx, esi
// 00996a85  e836c2ffff           call 0x992cc0
// 00996a8a  8bf8                 mov edi, eax
// 00996a8c  57                   push edi
// 00996a8d  e88e880000           call 0x99f320
// 00996a92  50                   push eax
// 00996a93  e84ebafeff           call 0x9824e6
// 00996a98  83c408               add esp, 8
// 00996a9b  85c0                 test eax, eax
// 00996a9d  741d                 je 0x996abc
// 00996a9f  6a10                 push 0x10
// 00996aa1  ffd3                 call ebx
// 00996aa3  33c9                 xor ecx, ecx
// 00996aa5  6685c0               test ax, ax
// 00996aa8  0f9dc1               setge cl
// 00996aab  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 00996aaf  51                   push ecx
// 00996ab0  57                   push edi
// 00996ab1  8bcd                 mov ecx, ebp
// 00996ab3  e828e20000           call 0x9a4ce0
// 00996ab8  85c0                 test eax, eax
// 00996aba  7548                 jne 0x996b04
// 00996abc  8b3e                 mov edi, dword ptr [esi]
// 00996abe  6a10                 push 0x10
// 00996ac0  ffd3                 call ebx
// 00996ac2  33d2                 xor edx, edx
// 00996ac4  6685c0               test ax, ax
// 00996ac7  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 00996acd  0f9cc2               setl dl
// 00996ad0  8bce                 mov ecx, esi
// 00996ad2  52                   push edx
// 00996ad3  ffd0                 call eax
// 00996ad5  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00996adb  51                   push ecx
// 00996adc  8bce                 mov ecx, esi
// 00996ade  e82dd0ffff           call 0x993b10
// 00996ae3  8bf0                 mov esi, eax
// 00996ae5  85f6                 test esi, esi
// 00996ae7  741b                 je 0x996b04
// 00996ae9  8b16                 mov edx, dword ptr [esi]
// 00996aeb  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00996af1  8bce                 mov ecx, esi
// 00996af3  ffd0                 call eax
// 00996af5  85c0                 test eax, eax
// 00996af7  740b                 je 0x996b04
// 00996af9  8b16                 mov edx, dword ptr [esi]
// 00996afb  8b4270               mov eax, dword ptr [edx + 0x70]
// 00996afe  6a01                 push 1
// 00996b00  8bce                 mov ecx, esi
// 00996b02  ffd0                 call eax
// 00996b04  b801000000           mov eax, 1
// 00996b09  5b                   pop ebx
// 00996b0a  5f                   pop edi
// 00996b0b  5e                   pop esi
// 00996b0c  5d                   pop ebp
// 00996b0d  c20800               ret 8
// 00996b10  8b16                 mov edx, dword ptr [esi]
// 00996b12  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 00996b18  6a05                 push 5
// 00996b1a  8bce                 mov ecx, esi
// 00996b1c  ffd0                 call eax
// 00996b1e  5f                   pop edi
// 00996b1f  5e                   pop esi
// 00996b20  5d                   pop ebp
// 00996b21  c20800               ret 8
// 00996b24  8b16                 mov edx, dword ptr [esi]
// 00996b26  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 00996b2c  6a04                 push 4
// 00996b2e  8bce                 mov ecx, esi
// 00996b30  ffd0                 call eax
// 00996b32  5f                   pop edi
// 00996b33  5e                   pop esi
// 00996b34  5d                   pop ebp
// 00996b35  c20800               ret 8
// 00996b38  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 00996b3f  7536                 jne 0x996b77
// 00996b41  8bce                 mov ecx, esi
// 00996b43  e8a8c1ffff           call 0x992cf0
// 00996b48  8bc8                 mov ecx, eax
// 00996b4a  e8e1d40000           call 0x9a4030
// 00996b4f  8bce                 mov ecx, esi
// 00996b51  e8eaedffff           call 0x995940
// 00996b56  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00996b59  6a20                 push 0x20
// 00996b5b  6800f10000           push 0xf100
// 00996b60  6812010000           push 0x112
// 00996b65  51                   push ecx
// 00996b66  ff15243cb200         call dword ptr [0xb23c24]
// 00996b6c  5f                   pop edi
// 00996b6d  5e                   pop esi
// 00996b6e  b801000000           mov eax, 1
// 00996b73  5d                   pop ebp
// 00996b74  c20800               ret 8
// 00996b77  8b3de83bb200         mov edi, dword ptr [0xb23be8]
// 00996b7d  ffd7                 call edi
// 00996b7f  85c0                 test eax, eax
// 00996b81  741c                 je 0x996b9f
// 00996b83  ffd7                 call edi
// 00996b85  8b5620               mov edx, dword ptr [esi + 0x20]
// 00996b88  50                   push eax
// 00996b89  52                   push edx
// 00996b8a  ff15143db200         call dword ptr [0xb23d14]
// 00996b90  85c0                 test eax, eax
// 00996b92  740b                 je 0x996b9f
// 00996b94  5f                   pop edi
// 00996b95  5e                   pop esi
// 00996b96  b802000000           mov eax, 2
// 00996b9b  5d                   pop ebp
// 00996b9c  c20800               ret 8
// 00996b9f  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00996ba5  85c0                 test eax, eax
// 00996ba7  741c                 je 0x996bc5
// 00996ba9  83f801               cmp eax, 1
// 00996bac  7417                 je 0x996bc5
// 00996bae  83f804               cmp eax, 4
// 00996bb1  7412                 je 0x996bc5
// 00996bb3  83f805               cmp eax, 5
// 00996bb6  7509                 jne 0x996bc1
// 00996bb8  83bef800000001       cmp dword ptr [esi + 0xf8], 1
// 00996bbf  7404                 je 0x996bc5
// 00996bc1  33ff                 xor edi, edi
// 00996bc3  eb05                 jmp 0x996bca
// 00996bc5  bf01000000           mov edi, 1
// 00996bca  8bce                 mov ecx, esi
// 00996bcc  e8dfc3ffff           call 0x992fb0
// 00996bd1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00996bd5  8d4add               lea ecx, [edx - 0x23]
// 00996bd8  83f905               cmp ecx, 5
// 00996bdb  0f87dd000000         ja 0x996cbe
// 00996be1  ff248ddc6d9900       jmp dword ptr [ecx*4 + 0x996ddc]
// 00996be8  85ff                 test edi, edi
// 00996bea  741c                 je 0x996c08
// 00996bec  8b16                 mov edx, dword ptr [esi]
// 00996bee  33c9                 xor ecx, ecx
// 00996bf0  85c0                 test eax, eax
// 00996bf2  0f94c1               sete cl
// 00996bf5  8bc1                 mov eax, ecx
// 00996bf7  50                   push eax
// 00996bf8  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 00996bfe  8bce                 mov ecx, esi
// 00996c00  ffd0                 call eax
// 00996c02  5f                   pop edi
// 00996c03  5e                   pop esi
// 00996c04  5d                   pop ebp
// 00996c05  c20800               ret 8
// 00996c08  33d2                 xor edx, edx
// 00996c0a  85c0                 test eax, eax
// 00996c0c  0f95c2               setne dl
// 00996c0f  8bce                 mov ecx, esi
// 00996c11  83c202               add edx, 2
// 00996c14  8bc2                 mov eax, edx
// 00996c16  8b16                 mov edx, dword ptr [esi]
// 00996c18  50                   push eax
// 00996c19  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 00996c1f  ffd0                 call eax
// 00996c21  5f                   pop edi
// 00996c22  5e                   pop esi
// 00996c23  5d                   pop ebp
// 00996c24  c20800               ret 8
// 00996c27  85ff                 test edi, edi
// 00996c29  741c                 je 0x996c47
// 00996c2b  8b16                 mov edx, dword ptr [esi]
// 00996c2d  33c9                 xor ecx, ecx
// 00996c2f  85c0                 test eax, eax
// 00996c31  0f95c1               setne cl
// 00996c34  8bc1                 mov eax, ecx
// 00996c36  50                   push eax
// 00996c37  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 00996c3d  8bce                 mov ecx, esi
// 00996c3f  ffd0                 call eax
// 00996c41  5f                   pop edi
// 00996c42  5e                   pop esi
// 00996c43  5d                   pop ebp
// 00996c44  c20800               ret 8
// 00996c47  8b16                 mov edx, dword ptr [esi]
// 00996c49  f7d8                 neg eax
// 00996c4b  1bc0                 sbb eax, eax
// 00996c4d  83c003               add eax, 3
// 00996c50  50                   push eax
// 00996c51  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 00996c57  8bce                 mov ecx, esi
// 00996c59  ffd0                 call eax
// 00996c5b  5f                   pop edi
// 00996c5c  5e                   pop esi
// 00996c5d  5d                   pop ebp
// 00996c5e  c20800               ret 8
// 00996c61  8b16                 mov edx, dword ptr [esi]
// 00996c63  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 00996c69  33c0                 xor eax, eax
// 00996c6b  85ff                 test edi, edi
// 00996c6d  0f95c0               setne al
// 00996c70  8bce                 mov ecx, esi
// 00996c72  40                   inc eax
// 00996c73  50                   push eax
// 00996c74  ffd2                 call edx
// 00996c76  5f                   pop edi
// 00996c77  5e                   pop esi
// 00996c78  5d                   pop ebp
// 00996c79  c20800               ret 8
// 00996c7c  8b06                 mov eax, dword ptr [esi]
// 00996c7e  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 00996c84  f7df                 neg edi
// 00996c86  1bff                 sbb edi, edi
// 00996c88  83e703               and edi, 3
// 00996c8b  57                   push edi
// 00996c8c  8bce                 mov ecx, esi
// 00996c8e  ffd2                 call edx
// 00996c90  5f                   pop edi
// 00996c91  5e                   pop esi
// 00996c92  5d                   pop ebp
// 00996c93  c20800               ret 8
// 00996c96  8b06                 mov eax, dword ptr [esi]
// 00996c98  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 00996c9e  6a06                 push 6
// 00996ca0  8bce                 mov ecx, esi
// 00996ca2  ffd2                 call edx
// 00996ca4  5f                   pop edi
// 00996ca5  5e                   pop esi
// 00996ca6  5d                   pop ebp
// 00996ca7  c20800               ret 8
// 00996caa  8b06                 mov eax, dword ptr [esi]
// 00996cac  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 00996cb2  6a07                 push 7
// 00996cb4  8bce                 mov ecx, esi
// 00996cb6  ffd2                 call edx
// 00996cb8  5f                   pop edi
// 00996cb9  5e                   pop esi
// 00996cba  5d                   pop ebp
// 00996cbb  c20800               ret 8
// 00996cbe  85d2                 test edx, edx
// 00996cc0  0f84dd000000         je 0x996da3
// 00996cc6  6a02                 push 2
// 00996cc8  52                   push edx
// 00996cc9  ff15103db200         call dword ptr [0xb23d10]
// 00996ccf  85c0                 test eax, eax
// 00996cd1  0f84cc000000         je 0x996da3
// 00996cd7  8bce                 mov ecx, esi
// 00996cd9  e822b80000           call 0x9a2500
// 00996cde  8b3d843ab200         mov edi, dword ptr [0xb23a84]
// 00996ce4  85c0                 test eax, eax
// 00996ce6  7420                 je 0x996d08
// 00996ce8  6a11                 push 0x11
// 00996cea  ffd7                 call edi
// 00996cec  6685c0               test ax, ax
// 00996cef  7c17                 jl 0x996d08
// 00996cf1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00996cf5  50                   push eax
// 00996cf6  8bce                 mov ecx, esi
// 00996cf8  e893e7ffff           call 0x995490
// 00996cfd  5f                   pop edi
// 00996cfe  5e                   pop esi
// 00996cff  b801000000           mov eax, 1
// 00996d04  5d                   pop ebp
// 00996d05  c20800               ret 8
// 00996d08  85ed                 test ebp, ebp
// 00996d0a  7423                 je 0x996d2f
// 00996d0c  56                   push esi
// 00996d0d  e80e860000           call 0x99f320
// 00996d12  50                   push eax
// 00996d13  e8ceb7feff           call 0x9824e6
// 00996d18  83c408               add esp, 8
// 00996d1b  85c0                 test eax, eax
// 00996d1d  7410                 je 0x996d2f
// 00996d1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00996d23  51                   push ecx
// 00996d24  8bcd                 mov ecx, ebp
// 00996d26  e835d30000           call 0x9a4060
// 00996d2b  85c0                 test eax, eax
// 00996d2d  7574                 jne 0x996da3
// 00996d2f  6a11                 push 0x11
// 00996d31  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00996d39  ffd7                 call edi
// 00996d3b  6685c0               test ax, ax
// 00996d3e  7c4d                 jl 0x996d8d
// 00996d40  8b442410             mov eax, dword ptr [esp + 0x10]
// 00996d44  8d542414             lea edx, [esp + 0x14]
// 00996d48  52                   push edx
// 00996d49  50                   push eax
// 00996d4a  8bce                 mov ecx, esi
// 00996d4c  e8afd1ffff           call 0x993f00
// 00996d51  8bf8                 mov edi, eax
// 00996d53  83ffff               cmp edi, -1
// 00996d56  7435                 je 0x996d8d
// 00996d58  8b16                 mov edx, dword ptr [esi]
// 00996d5a  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00996d60  6a02                 push 2
// 00996d62  57                   push edi
// 00996d63  8bce                 mov ecx, esi
// 00996d65  ffd0                 call eax
// 00996d67  837c241400           cmp dword ptr [esp + 0x14], 0
// 00996d6c  7514                 jne 0x996d82
// 00996d6e  57                   push edi
// 00996d6f  8bce                 mov ecx, esi
// 00996d71  e89acdffff           call 0x993b10
// 00996d76  8b10                 mov edx, dword ptr [eax]
// 00996d78  8bc8                 mov ecx, eax
// 00996d7a  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00996d80  ffd0                 call eax
// 00996d82  5f                   pop edi
// 00996d83  5e                   pop esi
// 00996d84  b801000000           mov eax, 1
// 00996d89  5d                   pop ebp
// 00996d8a  c20800               ret 8
// 00996d8d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00996d91  83f810               cmp eax, 0x10
// 00996d94  740d                 je 0x996da3
// 00996d96  83f811               cmp eax, 0x11
// 00996d99  7408                 je 0x996da3
// 00996d9b  6a00                 push 0
// 00996d9d  ff15683bb200         call dword ptr [0xb23b68]
// 00996da3  5f                   pop edi
// 00996da4  5e                   pop esi
// 00996da5  b801000000           mov eax, 1
// 00996daa  5d                   pop ebp
// 00996dab  c20800               ret 8
// 00996dae  8bff                 mov edi, edi
// 00996db0  6f                   outsd dx, dword ptr [esi]
// 00996db1  6a99                 push -0x67
// 00996db3  0010                 add byte ptr [eax], dl
// 00996db5  6b9900246b9900       imul ebx, dword ptr [ecx - 0x6694dc00], 0
// 00996dbc  386b99               cmp byte ptr [ebx - 0x67], ch
// 00996dbf  00776b               add byte ptr [edi + 0x6b], dh
// 00996dc2  99                   cdq 
// 00996dc3  0000                 add byte ptr [eax], al
// 00996dc5  0404                 add al, 4
// 00996dc7  0401                 add al, 1
// 00996dc9  0404                 add al, 4
// 00996dcb  0404                 add al, 4
// 00996dcd  0404                 add al, 4
// 00996dcf  0404                 add al, 4
// 00996dd1  0404                 add al, 4
// 00996dd3  0404                 add al, 4
// 00996dd5  0402                 add al, 2
// 00996dd7  0404                 add al, 4
// 00996dd9  0404                 add al, 4
// 00996ddb  03aa6c990096         add ebp, dword ptr [edx - 0x69ff6694]
// 00996de1  6c                   insb byte ptr es:[edi], dx
// 00996de2  99                   cdq 
// 00996de3  00e8                 add al, ch
// 00996de5  6b9900616c9900       imul ebx, dword ptr [ecx - 0x66939f00], 0
// 00996dec  27                   daa 
// 00996ded  6c                   insb byte ptr es:[edi], dx
// 00996dee  99                   cdq 
// 00996def  007c6c99             add byte ptr [esp + ebp*2 - 0x67], bh
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPCommandBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp