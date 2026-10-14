// roc 2008-06 006b89c0  unit: CXTPCommandBar  size: 1124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b89c0
//
// 006b89c0  55                   push ebp
// 006b89c1  56                   push esi
// 006b89c2  8bf1                 mov esi, ecx
// 006b89c4  e847c4ffff           call 0x6b4e10
// 006b89c9  8be8                 mov ebp, eax
// 006b89cb  85ed                 test ebp, ebp
// 006b89cd  7410                 je 0x6b89df
// 006b89cf  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 006b89d3  740a                 je 0x6b89df
// 006b89d5  5e                   pop esi
// 006b89d6  b802000000           mov eax, 2
// 006b89db  5d                   pop ebp
// 006b89dc  c20800               ret 8
// 006b89df  8bce                 mov ecx, esi
// 006b89e1  e8baffffff           call 0x6b89a0
// 006b89e6  85c0                 test eax, eax
// 006b89e8  75eb                 jne 0x6b89d5
// 006b89ea  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 006b89f0  7e0a                 jle 0x6b89fc
// 006b89f2  5e                   pop esi
// 006b89f3  b801000000           mov eax, 1
// 006b89f8  5d                   pop ebp
// 006b89f9  c20800               ret 8
// 006b89fc  8d4604               lea eax, [esi + 4]
// 006b89ff  50                   push eax
// 006b8a00  ff15b0218000         call dword ptr [0x8021b0]
// 006b8a06  8bce                 mov ecx, esi
// 006b8a08  e8b3efffff           call 0x6b79c0
// 006b8a0d  8b5020               mov edx, dword ptr [eax + 0x20]
// 006b8a10  56                   push esi
// 006b8a11  8d4c2410             lea ecx, [esp + 0x10]
// 006b8a15  51                   push ecx
// 006b8a16  685a280000           push 0x285a
// 006b8a1b  52                   push edx
// 006b8a1c  ff15142e8000         call dword ptr [0x802e14]
// 006b8a22  8bce                 mov ecx, esi
// 006b8a24  e8bb81feff           call 0x6a0be4
// 006b8a29  85c0                 test eax, eax
// 006b8a2b  74c5                 je 0x6b89f2
// 006b8a2d  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 006b8a33  57                   push edi
// 006b8a34  50                   push eax
// 006b8a35  8bce                 mov ecx, esi
// 006b8a37  e874d1ffff           call 0x6b5bb0
// 006b8a3c  8bf8                 mov edi, eax
// 006b8a3e  85ff                 test edi, edi
// 006b8a40  7435                 je 0x6b8a77
// 006b8a42  8b17                 mov edx, dword ptr [edi]
// 006b8a44  8b4274               mov eax, dword ptr [edx + 0x74]
// 006b8a47  8bcf                 mov ecx, edi
// 006b8a49  ffd0                 call eax
// 006b8a4b  85c0                 test eax, eax
// 006b8a4d  7428                 je 0x6b8a77
// 006b8a4f  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b8a53  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b8a57  8b17                 mov edx, dword ptr [edi]
// 006b8a59  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 006b8a5f  50                   push eax
// 006b8a60  51                   push ecx
// 006b8a61  8bcf                 mov ecx, edi
// 006b8a63  ffd2                 call edx
// 006b8a65  83f801               cmp eax, 1
// 006b8a68  0f84cc000000         je 0x6b8b3a
// 006b8a6e  83f802               cmp eax, 2
// 006b8a71  0f84c3000000         je 0x6b8b3a
// 006b8a77  837e2000             cmp dword ptr [esi + 0x20], 0
// 006b8a7b  0f8452030000         je 0x6b8dd3
// 006b8a81  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b8a85  83c0f7               add eax, -9
// 006b8a88  83f817               cmp eax, 0x17
// 006b8a8b  0f8716010000         ja 0x6b8ba7
// 006b8a91  0fb680f48d6b00       movzx eax, byte ptr [eax + 0x6b8df4]
// 006b8a98  ff2485e08d6b00       jmp dword ptr [eax*4 + 0x6b8de0]
// 006b8a9f  53                   push ebx
// 006b8aa0  8b1da42d8000         mov ebx, dword ptr [0x802da4]
// 006b8aa6  6a11                 push 0x11
// 006b8aa8  ffd3                 call ebx
// 006b8aaa  6685c0               test ax, ax
// 006b8aad  7d3d                 jge 0x6b8aec
// 006b8aaf  85ed                 test ebp, ebp
// 006b8ab1  7439                 je 0x6b8aec
// 006b8ab3  8bce                 mov ecx, esi
// 006b8ab5  e826c3ffff           call 0x6b4de0
// 006b8aba  8bf8                 mov edi, eax
// 006b8abc  57                   push edi
// 006b8abd  e84e900000           call 0x6c1b10
// 006b8ac2  50                   push eax
// 006b8ac3  e85e81feff           call 0x6a0c26
// 006b8ac8  83c408               add esp, 8
// 006b8acb  85c0                 test eax, eax
// 006b8acd  741d                 je 0x6b8aec
// 006b8acf  6a10                 push 0x10
// 006b8ad1  ffd3                 call ebx
// 006b8ad3  33c9                 xor ecx, ecx
// 006b8ad5  6685c0               test ax, ax
// 006b8ad8  0f9dc1               setge cl
// 006b8adb  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 006b8adf  51                   push ecx
// 006b8ae0  57                   push edi
// 006b8ae1  8bcd                 mov ecx, ebp
// 006b8ae3  e898cbfeff           call 0x6a5680
// 006b8ae8  85c0                 test eax, eax
// 006b8aea  7548                 jne 0x6b8b34
// 006b8aec  8b3e                 mov edi, dword ptr [esi]
// 006b8aee  6a10                 push 0x10
// 006b8af0  ffd3                 call ebx
// 006b8af2  33d2                 xor edx, edx
// 006b8af4  6685c0               test ax, ax
// 006b8af7  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 006b8afd  0f9cc2               setl dl
// 006b8b00  8bce                 mov ecx, esi
// 006b8b02  52                   push edx
// 006b8b03  ffd0                 call eax
// 006b8b05  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 006b8b0b  51                   push ecx
// 006b8b0c  8bce                 mov ecx, esi
// 006b8b0e  e89dd0ffff           call 0x6b5bb0
// 006b8b13  8bf0                 mov esi, eax
// 006b8b15  85f6                 test esi, esi
// 006b8b17  741b                 je 0x6b8b34
// 006b8b19  8b16                 mov edx, dword ptr [esi]
// 006b8b1b  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 006b8b21  8bce                 mov ecx, esi
// 006b8b23  ffd0                 call eax
// 006b8b25  85c0                 test eax, eax
// 006b8b27  740b                 je 0x6b8b34
// 006b8b29  8b16                 mov edx, dword ptr [esi]
// 006b8b2b  8b4270               mov eax, dword ptr [edx + 0x70]
// 006b8b2e  6a01                 push 1
// 006b8b30  8bce                 mov ecx, esi
// 006b8b32  ffd0                 call eax
// 006b8b34  b801000000           mov eax, 1
// 006b8b39  5b                   pop ebx
// 006b8b3a  5f                   pop edi
// 006b8b3b  5e                   pop esi
// 006b8b3c  5d                   pop ebp
// 006b8b3d  c20800               ret 8
// 006b8b40  8b16                 mov edx, dword ptr [esi]
// 006b8b42  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 006b8b48  6a05                 push 5
// 006b8b4a  8bce                 mov ecx, esi
// 006b8b4c  ffd0                 call eax
// 006b8b4e  5f                   pop edi
// 006b8b4f  5e                   pop esi
// 006b8b50  5d                   pop ebp
// 006b8b51  c20800               ret 8
// 006b8b54  8b16                 mov edx, dword ptr [esi]
// 006b8b56  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 006b8b5c  6a04                 push 4
// 006b8b5e  8bce                 mov ecx, esi
// 006b8b60  ffd0                 call eax
// 006b8b62  5f                   pop edi
// 006b8b63  5e                   pop esi
// 006b8b64  5d                   pop ebp
// 006b8b65  c20800               ret 8
// 006b8b68  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 006b8b6f  7536                 jne 0x6b8ba7
// 006b8b71  8bce                 mov ecx, esi
// 006b8b73  e898c2ffff           call 0x6b4e10
// 006b8b78  8bc8                 mov ecx, eax
// 006b8b7a  e8d1bdfeff           call 0x6a4950
// 006b8b7f  8bce                 mov ecx, esi
// 006b8b81  e83aeeffff           call 0x6b79c0
// 006b8b86  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006b8b89  6a20                 push 0x20
// 006b8b8b  6800f10000           push 0xf100
// 006b8b90  6812010000           push 0x112
// 006b8b95  51                   push ecx
// 006b8b96  ff150c2e8000         call dword ptr [0x802e0c]
// 006b8b9c  5f                   pop edi
// 006b8b9d  5e                   pop esi
// 006b8b9e  b801000000           mov eax, 1
// 006b8ba3  5d                   pop ebp
// 006b8ba4  c20800               ret 8
// 006b8ba7  8b3d102e8000         mov edi, dword ptr [0x802e10]
// 006b8bad  ffd7                 call edi
// 006b8baf  85c0                 test eax, eax
// 006b8bb1  741c                 je 0x6b8bcf
// 006b8bb3  ffd7                 call edi
// 006b8bb5  8b5620               mov edx, dword ptr [esi + 0x20]
// 006b8bb8  50                   push eax
// 006b8bb9  52                   push edx
// 006b8bba  ff15742b8000         call dword ptr [0x802b74]
// 006b8bc0  85c0                 test eax, eax
// 006b8bc2  740b                 je 0x6b8bcf
// 006b8bc4  5f                   pop edi
// 006b8bc5  5e                   pop esi
// 006b8bc6  b802000000           mov eax, 2
// 006b8bcb  5d                   pop ebp
// 006b8bcc  c20800               ret 8
// 006b8bcf  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006b8bd5  85c0                 test eax, eax
// 006b8bd7  741c                 je 0x6b8bf5
// 006b8bd9  83f801               cmp eax, 1
// 006b8bdc  7417                 je 0x6b8bf5
// 006b8bde  83f804               cmp eax, 4
// 006b8be1  7412                 je 0x6b8bf5
// 006b8be3  83f805               cmp eax, 5
// 006b8be6  7509                 jne 0x6b8bf1
// 006b8be8  83bef800000001       cmp dword ptr [esi + 0xf8], 1
// 006b8bef  7404                 je 0x6b8bf5
// 006b8bf1  33ff                 xor edi, edi
// 006b8bf3  eb05                 jmp 0x6b8bfa
// 006b8bf5  bf01000000           mov edi, 1
// 006b8bfa  8bce                 mov ecx, esi
// 006b8bfc  e8cfc4ffff           call 0x6b50d0
// 006b8c01  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b8c05  8d4add               lea ecx, [edx - 0x23]
// 006b8c08  83f905               cmp ecx, 5
// 006b8c0b  0f87dd000000         ja 0x6b8cee
// 006b8c11  ff248d0c8e6b00       jmp dword ptr [ecx*4 + 0x6b8e0c]
// 006b8c18  85ff                 test edi, edi
// 006b8c1a  741c                 je 0x6b8c38
// 006b8c1c  8b16                 mov edx, dword ptr [esi]
// 006b8c1e  33c9                 xor ecx, ecx
// 006b8c20  85c0                 test eax, eax
// 006b8c22  0f94c1               sete cl
// 006b8c25  8bc1                 mov eax, ecx
// 006b8c27  50                   push eax
// 006b8c28  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 006b8c2e  8bce                 mov ecx, esi
// 006b8c30  ffd0                 call eax
// 006b8c32  5f                   pop edi
// 006b8c33  5e                   pop esi
// 006b8c34  5d                   pop ebp
// 006b8c35  c20800               ret 8
// 006b8c38  33d2                 xor edx, edx
// 006b8c3a  85c0                 test eax, eax
// 006b8c3c  0f95c2               setne dl
// 006b8c3f  8bce                 mov ecx, esi
// 006b8c41  83c202               add edx, 2
// 006b8c44  8bc2                 mov eax, edx
// 006b8c46  8b16                 mov edx, dword ptr [esi]
// 006b8c48  50                   push eax
// 006b8c49  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 006b8c4f  ffd0                 call eax
// 006b8c51  5f                   pop edi
// 006b8c52  5e                   pop esi
// 006b8c53  5d                   pop ebp
// 006b8c54  c20800               ret 8
// 006b8c57  85ff                 test edi, edi
// 006b8c59  741c                 je 0x6b8c77
// 006b8c5b  8b16                 mov edx, dword ptr [esi]
// 006b8c5d  33c9                 xor ecx, ecx
// 006b8c5f  85c0                 test eax, eax
// 006b8c61  0f95c1               setne cl
// 006b8c64  8bc1                 mov eax, ecx
// 006b8c66  50                   push eax
// 006b8c67  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 006b8c6d  8bce                 mov ecx, esi
// 006b8c6f  ffd0                 call eax
// 006b8c71  5f                   pop edi
// 006b8c72  5e                   pop esi
// 006b8c73  5d                   pop ebp
// 006b8c74  c20800               ret 8
// 006b8c77  8b16                 mov edx, dword ptr [esi]
// 006b8c79  f7d8                 neg eax
// 006b8c7b  1bc0                 sbb eax, eax
// 006b8c7d  83c003               add eax, 3
// 006b8c80  50                   push eax
// 006b8c81  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 006b8c87  8bce                 mov ecx, esi
// 006b8c89  ffd0                 call eax
// 006b8c8b  5f                   pop edi
// 006b8c8c  5e                   pop esi
// 006b8c8d  5d                   pop ebp
// 006b8c8e  c20800               ret 8
// 006b8c91  8b16                 mov edx, dword ptr [esi]
// 006b8c93  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 006b8c99  33c0                 xor eax, eax
// 006b8c9b  85ff                 test edi, edi
// 006b8c9d  0f95c0               setne al
// 006b8ca0  8bce                 mov ecx, esi
// 006b8ca2  40                   inc eax
// 006b8ca3  50                   push eax
// 006b8ca4  ffd2                 call edx
// 006b8ca6  5f                   pop edi
// 006b8ca7  5e                   pop esi
// 006b8ca8  5d                   pop ebp
// 006b8ca9  c20800               ret 8
// 006b8cac  8b06                 mov eax, dword ptr [esi]
// 006b8cae  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 006b8cb4  f7df                 neg edi
// 006b8cb6  1bff                 sbb edi, edi
// 006b8cb8  83e703               and edi, 3
// 006b8cbb  57                   push edi
// 006b8cbc  8bce                 mov ecx, esi
// 006b8cbe  ffd2                 call edx
// 006b8cc0  5f                   pop edi
// 006b8cc1  5e                   pop esi
// 006b8cc2  5d                   pop ebp
// 006b8cc3  c20800               ret 8
// 006b8cc6  8b06                 mov eax, dword ptr [esi]
// 006b8cc8  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 006b8cce  6a06                 push 6
// 006b8cd0  8bce                 mov ecx, esi
// 006b8cd2  ffd2                 call edx
// 006b8cd4  5f                   pop edi
// 006b8cd5  5e                   pop esi
// 006b8cd6  5d                   pop ebp
// 006b8cd7  c20800               ret 8
// 006b8cda  8b06                 mov eax, dword ptr [esi]
// 006b8cdc  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 006b8ce2  6a07                 push 7
// 006b8ce4  8bce                 mov ecx, esi
// 006b8ce6  ffd2                 call edx
// 006b8ce8  5f                   pop edi
// 006b8ce9  5e                   pop esi
// 006b8cea  5d                   pop ebp
// 006b8ceb  c20800               ret 8
// 006b8cee  85d2                 test edx, edx
// 006b8cf0  0f84dd000000         je 0x6b8dd3
// 006b8cf6  6a02                 push 2
// 006b8cf8  52                   push edx
// 006b8cf9  ff151c2d8000         call dword ptr [0x802d1c]
// 006b8cff  85c0                 test eax, eax
// 006b8d01  0f84cc000000         je 0x6b8dd3
// 006b8d07  8bce                 mov ecx, esi
// 006b8d09  e8e29efeff           call 0x6a2bf0
// 006b8d0e  8b3da42d8000         mov edi, dword ptr [0x802da4]
// 006b8d14  85c0                 test eax, eax
// 006b8d16  7420                 je 0x6b8d38
// 006b8d18  6a11                 push 0x11
// 006b8d1a  ffd7                 call edi
// 006b8d1c  6685c0               test ax, ax
// 006b8d1f  7c17                 jl 0x6b8d38
// 006b8d21  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b8d25  50                   push eax
// 006b8d26  8bce                 mov ecx, esi
// 006b8d28  e8e3e7ffff           call 0x6b7510
// 006b8d2d  5f                   pop edi
// 006b8d2e  5e                   pop esi
// 006b8d2f  b801000000           mov eax, 1
// 006b8d34  5d                   pop ebp
// 006b8d35  c20800               ret 8
// 006b8d38  85ed                 test ebp, ebp
// 006b8d3a  7423                 je 0x6b8d5f
// 006b8d3c  56                   push esi
// 006b8d3d  e8ce8d0000           call 0x6c1b10
// 006b8d42  50                   push eax
// 006b8d43  e8de7efeff           call 0x6a0c26
// 006b8d48  83c408               add esp, 8
// 006b8d4b  85c0                 test eax, eax
// 006b8d4d  7410                 je 0x6b8d5f
// 006b8d4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b8d53  51                   push ecx
// 006b8d54  8bcd                 mov ecx, ebp
// 006b8d56  e825bcfeff           call 0x6a4980
// 006b8d5b  85c0                 test eax, eax
// 006b8d5d  7574                 jne 0x6b8dd3
// 006b8d5f  6a11                 push 0x11
// 006b8d61  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006b8d69  ffd7                 call edi
// 006b8d6b  6685c0               test ax, ax
// 006b8d6e  7c4d                 jl 0x6b8dbd
// 006b8d70  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b8d74  8d542414             lea edx, [esp + 0x14]
// 006b8d78  52                   push edx
// 006b8d79  50                   push eax
// 006b8d7a  8bce                 mov ecx, esi
// 006b8d7c  e81fd2ffff           call 0x6b5fa0
// 006b8d81  8bf8                 mov edi, eax
// 006b8d83  83ffff               cmp edi, -1
// 006b8d86  7435                 je 0x6b8dbd
// 006b8d88  8b16                 mov edx, dword ptr [esi]
// 006b8d8a  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 006b8d90  6a02                 push 2
// 006b8d92  57                   push edi
// 006b8d93  8bce                 mov ecx, esi
// 006b8d95  ffd0                 call eax
// 006b8d97  837c241400           cmp dword ptr [esp + 0x14], 0
// 006b8d9c  7514                 jne 0x6b8db2
// 006b8d9e  57                   push edi
// 006b8d9f  8bce                 mov ecx, esi
// 006b8da1  e80aceffff           call 0x6b5bb0
// 006b8da6  8b10                 mov edx, dword ptr [eax]
// 006b8da8  8bc8                 mov ecx, eax
// 006b8daa  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 006b8db0  ffd0                 call eax
// 006b8db2  5f                   pop edi
// 006b8db3  5e                   pop esi
// 006b8db4  b801000000           mov eax, 1
// 006b8db9  5d                   pop ebp
// 006b8dba  c20800               ret 8
// 006b8dbd  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b8dc1  83f810               cmp eax, 0x10
// 006b8dc4  740d                 je 0x6b8dd3
// 006b8dc6  83f811               cmp eax, 0x11
// 006b8dc9  7408                 je 0x6b8dd3
// 006b8dcb  6a00                 push 0
// 006b8dcd  ff15142d8000         call dword ptr [0x802d14]
// 006b8dd3  5f                   pop edi
// 006b8dd4  5e                   pop esi
// 006b8dd5  b801000000           mov eax, 1
// 006b8dda  5d                   pop ebp
// 006b8ddb  c20800               ret 8
// 006b8dde  8bff                 mov edi, edi
// 006b8de0  9f                   lahf 
// 006b8de1  8a6b00               mov ch, byte ptr [ebx]
// 006b8de4  40                   inc eax
// 006b8de5  8b6b00               mov ebp, dword ptr [ebx]
// 006b8de8  54                   push esp
// 006b8de9  8b6b00               mov ebp, dword ptr [ebx]
// 006b8dec  688b6b00a7           push 0xa7006b8b
// 006b8df1  8b6b00               mov ebp, dword ptr [ebx]
// 006b8df4  000404               add byte ptr [esp + eax], al
// 006b8df7  0401                 add al, 1
// 006b8df9  0404                 add al, 4
// 006b8dfb  0404                 add al, 4
// 006b8dfd  0404                 add al, 4
// 006b8dff  0404                 add al, 4
// 006b8e01  0404                 add al, 4
// 006b8e03  0404                 add al, 4
// 006b8e05  0402                 add al, 2
// 006b8e07  0404                 add al, 4
// 006b8e09  0404                 add al, 4
// 006b8e0b  03da                 add ebx, edx
// 006b8e0d  8c6b00               mov word ptr [ebx], gs
// library xtp-11.2.2-lib-strlen/Source\CommandBars\XTPCommandBar.cpp (function ?OnHookKeyDown@CXTPCommandBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/CommandBars/XTPCommandBar.cpp
