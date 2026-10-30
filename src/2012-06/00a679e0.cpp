// roc 2012-06 00a679e0  unit: CXTColorSelectorCtrl  size: 1620 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a679e0
//
// 00a679e0  6aff                 push -1
// 00a679e2  68cd84ae00           push 0xae84cd
// 00a679e7  64a100000000         mov eax, dword ptr fs:[0]
// 00a679ed  50                   push eax
// 00a679ee  83ec38               sub esp, 0x38
// 00a679f1  53                   push ebx
// 00a679f2  55                   push ebp
// 00a679f3  56                   push esi
// 00a679f4  57                   push edi
// 00a679f5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a679fa  33c4                 xor eax, esp
// 00a679fc  50                   push eax
// 00a679fd  8d44244c             lea eax, [esp + 0x4c]
// 00a67a01  64a300000000         mov dword ptr fs:[0], eax
// 00a67a07  8bf1                 mov esi, ecx
// 00a67a09  e8d0acf1ff           call 0x9826de
// 00a67a0e  83f8ff               cmp eax, -1
// 00a67a11  7507                 jne 0xa67a1a
// 00a67a13  0bc0                 or eax, eax
// 00a67a15  e904060000           jmp 0xa6801e
// 00a67a1a  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00a67a20  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00a67a26  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00a67a2c  6a00                 push 0
// 00a67a2e  56                   push esi
// 00a67a2f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00a67a37  c644241f00           mov byte ptr [esp + 0x1f], 0
// 00a67a3c  ffd2                 call edx
// 00a67a3e  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a67a44  6a00                 push 0
// 00a67a46  6a01                 push 1
// 00a67a48  6801040000           push 0x401
// 00a67a4d  50                   push eax
// 00a67a4e  ff15043cb200         call dword ptr [0xb23c04]
// 00a67a54  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a67a58  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00a67a5b  2b869c000000         sub eax, dword ptr [esi + 0x9c]
// 00a67a61  8bbe94000000         mov edi, dword ptr [esi + 0x94]
// 00a67a67  8b9e98000000         mov ebx, dword ptr [esi + 0x98]
// 00a67a6d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a67a71  897c2428             mov dword ptr [esp + 0x28], edi
// 00a67a75  89442438             mov dword ptr [esp + 0x38], eax
// 00a67a79  ff158447b200         call dword ptr [0xb24784]
// 00a67a7f  8d4c2420             lea ecx, [esp + 0x20]
// 00a67a83  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00a67a8b  ff158447b200         call dword ptr [0xb24784]
// 00a67a91  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00a67a97  c644245401           mov byte ptr [esp + 0x54], 1
// 00a67a9c  a810                 test al, 0x10
// 00a67a9e  0f855c010000         jne 0xa67c00
// 00a67aa4  2401                 and al, 1
// 00a67aa6  0fb6e8               movzx ebp, al
// 00a67aa9  f7dd                 neg ebp
// 00a67aab  1bed                 sbb ebp, ebp
// 00a67aad  81c5dc260000         add ebp, 0x26dc
// 00a67ab3  896c2434             mov dword ptr [esp + 0x34], ebp
// 00a67ab7  e8340af9ff           call 0x9f84f0
// 00a67abc  8b10                 mov edx, dword ptr [eax]
// 00a67abe  8b5208               mov edx, dword ptr [edx + 8]
// 00a67ac1  55                   push ebp
// 00a67ac2  8d4c2420             lea ecx, [esp + 0x20]
// 00a67ac6  51                   push ecx
// 00a67ac7  8bc8                 mov ecx, eax
// 00a67ac9  ffd2                 call edx
// 00a67acb  6a00                 push 0
// 00a67acd  6a0a                 push 0xa
// 00a67acf  8d4c2424             lea ecx, [esp + 0x24]
// 00a67ad3  ff15f447b200         call dword ptr [0xb247f4]
// 00a67ad9  8bf8                 mov edi, eax
// 00a67adb  85ff                 test edi, edi
// 00a67add  7e3f                 jle 0xa67b1e
// 00a67adf  8d4701               lea eax, [edi + 1]
// 00a67ae2  50                   push eax
// 00a67ae3  8d4c2460             lea ecx, [esp + 0x60]
// 00a67ae7  51                   push ecx
// 00a67ae8  8d4c2424             lea ecx, [esp + 0x24]
// 00a67aec  ff15f047b200         call dword ptr [0xb247f0]
// 00a67af2  50                   push eax
// 00a67af3  8d4c2424             lea ecx, [esp + 0x24]
// 00a67af7  c644245802           mov byte ptr [esp + 0x58], 2
// 00a67afc  ff152045b200         call dword ptr [0xb24520]
// 00a67b02  8d4c245c             lea ecx, [esp + 0x5c]
// 00a67b06  c644245401           mov byte ptr [esp + 0x54], 1
// 00a67b0b  ff15d047b200         call dword ptr [0xb247d0]
// 00a67b11  57                   push edi
// 00a67b12  8d4c2420             lea ecx, [esp + 0x20]
// 00a67b16  ff15b043b200         call dword ptr [0xb243b0]
// 00a67b1c  eb0f                 jmp 0xa67b2d
// 00a67b1e  8d54241c             lea edx, [esp + 0x1c]
// 00a67b22  52                   push edx
// 00a67b23  8d4c2424             lea ecx, [esp + 0x24]
// 00a67b27  ff152045b200         call dword ptr [0xb24520]
// 00a67b2d  6824010000           push 0x124
// 00a67b32  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a67b3a  e8dba5f1ff           call 0x98211a
// 00a67b3f  83c404               add esp, 4
// 00a67b42  8d4c241c             lea ecx, [esp + 0x1c]
// 00a67b46  8bf8                 mov edi, eax
// 00a67b48  ff159847b200         call dword ptr [0xb24798]
// 00a67b4e  50                   push eax
// 00a67b4f  8d4720               lea eax, [edi + 0x20]
// 00a67b52  6800010000           push 0x100
// 00a67b57  50                   push eax
// 00a67b58  ff15d82ab200         call dword ptr [0xb22ad8]
// 00a67b5e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a67b62  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a67b66  892f                 mov dword ptr [edi], ebp
// 00a67b68  894f0c               mov dword ptr [edi + 0xc], ecx
// 00a67b6b  8d6f0c               lea ebp, [edi + 0xc]
// 00a67b6e  895d04               mov dword ptr [ebp + 4], ebx
// 00a67b71  895508               mov dword ptr [ebp + 8], edx
// 00a67b74  8d4317               lea eax, [ebx + 0x17]
// 00a67b77  89450c               mov dword ptr [ebp + 0xc], eax
// 00a67b7a  c7470400000000       mov dword ptr [edi + 4], 0
// 00a67b81  c6470800             mov byte ptr [edi + 8], 0
// 00a67b85  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00a67b8b  89471c               mov dword ptr [edi + 0x1c], eax
// 00a67b8e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00a67b94  83c40c               add esp, 0xc
// 00a67b97  898f20010000         mov dword ptr [edi + 0x120], ecx
// 00a67b9d  57                   push edi
// 00a67b9e  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00a67ba4  e8b70afeff           call 0xa48660
// 00a67ba9  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a67bad  52                   push edx
// 00a67bae  55                   push ebp
// 00a67baf  8d4c2428             lea ecx, [esp + 0x28]
// 00a67bb3  ff159847b200         call dword ptr [0xb24798]
// 00a67bb9  50                   push eax
// 00a67bba  56                   push esi
// 00a67bbb  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00a67bc1  e846220300           call 0xa99e0c
// 00a67bc6  f686a400000001       test byte ptr [esi + 0xa4], 1
// 00a67bcd  750e                 jne 0xa67bdd
// 00a67bcf  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00a67bd5  3b86b4000000         cmp eax, dword ptr [esi + 0xb4]
// 00a67bdb  eb11                 jmp 0xa67bee
// 00a67bdd  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00a67be3  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 00a67be9  750e                 jne 0xa67bf9
// 00a67beb  83f8ff               cmp eax, -1
// 00a67bee  7509                 jne 0xa67bf9
// 00a67bf0  c6470801             mov byte ptr [edi + 8], 1
// 00a67bf4  c644241701           mov byte ptr [esp + 0x17], 1
// 00a67bf9  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a67bfd  83c31b               add ebx, 0x1b
// 00a67c00  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00a67c06  83e002               and eax, 2
// 00a67c09  741a                 je 0xa67c25
// 00a67c0b  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00a67c11  85c9                 test ecx, ecx
// 00a67c13  7406                 je 0xa67c1b
// 00a67c15  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a67c19  eb12                 jmp 0xa67c2d
// 00a67c1b  c7442430087ae000     mov dword ptr [esp + 0x30], 0xe07a08
// 00a67c23  eb08                 jmp 0xa67c2d
// 00a67c25  c74424308879e000     mov dword ptr [esp + 0x30], 0xe07988
// 00a67c2d  85c0                 test eax, eax
// 00a67c2f  741f                 je 0xa67c50
// 00a67c31  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 00a67c38  740c                 je 0xa67c46
// 00a67c3a  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 00a67c40  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a67c44  eb12                 jmp 0xa67c58
// 00a67c46  c744242c28000000     mov dword ptr [esp + 0x2c], 0x28
// 00a67c4e  eb08                 jmp 0xa67c58
// 00a67c50  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 00a67c58  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00a67c5b  f7d8                 neg eax
// 00a67c5d  1bc0                 sbb eax, eax
// 00a67c5f  83e0ea               and eax, 0xffffffea
// 00a67c62  83c016               add eax, 0x16
// 00a67c65  03d8                 add ebx, eax
// 00a67c67  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00a67c6d  03cf                 add ecx, edi
// 00a67c6f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00a67c73  33c9                 xor ecx, ecx
// 00a67c75  03c3                 add eax, ebx
// 00a67c77  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 00a67c7b  895c2424             mov dword ptr [esp + 0x24], ebx
// 00a67c7f  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a67c83  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a67c87  89442448             mov dword ptr [esp + 0x48], eax
// 00a67c8b  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a67c8f  0f8e1f010000         jle 0xa67db4
// 00a67c95  eb04                 jmp 0xa67c9b
// 00a67c97  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a67c9b  85c9                 test ecx, ecx
// 00a67c9d  7e2b                 jle 0xa67cca
// 00a67c9f  8bc1                 mov eax, ecx
// 00a67ca1  99                   cdq 
// 00a67ca2  f77e6c               idiv dword ptr [esi + 0x6c]
// 00a67ca5  85d2                 test edx, edx
// 00a67ca7  7521                 jne 0xa67cca
// 00a67ca9  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00a67caf  03d8                 add ebx, eax
// 00a67cb1  8d1418               lea edx, [eax + ebx]
// 00a67cb4  03c7                 add eax, edi
// 00a67cb6  895c2424             mov dword ptr [esp + 0x24], ebx
// 00a67cba  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a67cbe  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a67cc2  89442444             mov dword ptr [esp + 0x44], eax
// 00a67cc6  89542448             mov dword ptr [esp + 0x48], edx
// 00a67cca  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a67cce  8b14c8               mov edx, dword ptr [eax + ecx*8]
// 00a67cd1  ff442418             inc dword ptr [esp + 0x18]
// 00a67cd5  8b5cc804             mov ebx, dword ptr [eax + ecx*8 + 4]
// 00a67cd9  6824010000           push 0x124
// 00a67cde  89542438             mov dword ptr [esp + 0x38], edx
// 00a67ce2  e833a4f1ff           call 0x98211a
// 00a67ce7  8bf8                 mov edi, eax
// 00a67ce9  c6472000             mov byte ptr [edi + 0x20], 0
// 00a67ced  891f                 mov dword ptr [edi], ebx
// 00a67cef  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a67cf3  89470c               mov dword ptr [edi + 0xc], eax
// 00a67cf6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a67cfa  8d6f0c               lea ebp, [edi + 0xc]
// 00a67cfd  894d04               mov dword ptr [ebp + 4], ecx
// 00a67d00  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a67d04  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a67d08  895508               mov dword ptr [ebp + 8], edx
// 00a67d0b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a67d0f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a67d13  83c404               add esp, 4
// 00a67d16  894f04               mov dword ptr [edi + 4], ecx
// 00a67d19  57                   push edi
// 00a67d1a  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00a67d20  89450c               mov dword ptr [ebp + 0xc], eax
// 00a67d23  c6470800             mov byte ptr [edi + 8], 0
// 00a67d27  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 00a67d2e  899720010000         mov dword ptr [edi + 0x120], edx
// 00a67d34  e82709feff           call 0xa48660
// 00a67d39  e8b207f9ff           call 0x9f84f0
// 00a67d3e  8b10                 mov edx, dword ptr [eax]
// 00a67d40  8b5208               mov edx, dword ptr [edx + 8]
// 00a67d43  53                   push ebx
// 00a67d44  8d4c2424             lea ecx, [esp + 0x24]
// 00a67d48  51                   push ecx
// 00a67d49  8bc8                 mov ecx, eax
// 00a67d4b  ffd2                 call edx
// 00a67d4d  53                   push ebx
// 00a67d4e  55                   push ebp
// 00a67d4f  8d4c2428             lea ecx, [esp + 0x28]
// 00a67d53  ff159847b200         call dword ptr [0xb24798]
// 00a67d59  50                   push eax
// 00a67d5a  56                   push esi
// 00a67d5b  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00a67d61  e8a6200300           call 0xa99e0c
// 00a67d66  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a67d6a  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 00a67d70  7516                 jne 0xa67d88
// 00a67d72  807c241700           cmp byte ptr [esp + 0x17], 0
// 00a67d77  750f                 jne 0xa67d88
// 00a67d79  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a67d7c  c6470801             mov byte ptr [edi + 8], 1
// 00a67d80  c644241701           mov byte ptr [esp + 0x17], 1
// 00a67d85  894e70               mov dword ptr [esi + 0x70], ecx
// 00a67d88  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00a67d8b  6a00                 push 0
// 00a67d8d  50                   push eax
// 00a67d8e  8d542444             lea edx, [esp + 0x44]
// 00a67d92  52                   push edx
// 00a67d93  ff15f43ab200         call dword ptr [0xb23af4]
// 00a67d99  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a67d9d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00a67da1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a67da5  40                   inc eax
// 00a67da6  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00a67daa  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a67dae  0f8ce3feffff         jl 0xa67c97
// 00a67db4  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00a67dba  03d8                 add ebx, eax
// 00a67dbc  8d0c18               lea ecx, [eax + ebx]
// 00a67dbf  03c7                 add eax, edi
// 00a67dc1  f686a400000004       test byte ptr [esi + 0xa4], 4
// 00a67dc8  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a67dcc  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a67dd0  89442444             mov dword ptr [esp + 0x44], eax
// 00a67dd4  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a67dd8  0f8423020000         je 0xa68001
// 00a67dde  833d04a4e50000       cmp dword ptr [0xe5a404], 0
// 00a67de5  0f8e35010000         jle 0xa67f20
// 00a67deb  6a04                 push 4
// 00a67ded  6a00                 push 0
// 00a67def  8d442444             lea eax, [esp + 0x44]
// 00a67df3  50                   push eax
// 00a67df4  ff15f43ab200         call dword ptr [0xb23af4]
// 00a67dfa  33c0                 xor eax, eax
// 00a67dfc  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a67e00  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a67e03  8b1504a4e500         mov edx, dword ptr [0xe5a404]
// 00a67e09  3bd1                 cmp edx, ecx
// 00a67e0b  7d02                 jge 0xa67e0f
// 00a67e0d  8bca                 mov ecx, edx
// 00a67e0f  3bc1                 cmp eax, ecx
// 00a67e11  0f8df7000000         jge 0xa67f0e
// 00a67e17  ff442418             inc dword ptr [esp + 0x18]
// 00a67e1b  85c0                 test eax, eax
// 00a67e1d  0f8ce6000000         jl 0xa67f09
// 00a67e23  3bc2                 cmp eax, edx
// 00a67e25  0f8dde000000         jge 0xa67f09
// 00a67e2b  8b0d00a4e500         mov ecx, dword ptr [0xe5a400]
// 00a67e31  8b1481               mov edx, dword ptr [ecx + eax*4]
// 00a67e34  6824010000           push 0x124
// 00a67e39  89542434             mov dword ptr [esp + 0x34], edx
// 00a67e3d  e8d8a2f1ff           call 0x98211a
// 00a67e42  8bf8                 mov edi, eax
// 00a67e44  c6472000             mov byte ptr [edi + 0x20], 0
// 00a67e48  c70700000000         mov dword ptr [edi], 0
// 00a67e4e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a67e52  89470c               mov dword ptr [edi + 0xc], eax
// 00a67e55  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a67e59  8d6f0c               lea ebp, [edi + 0xc]
// 00a67e5c  894d04               mov dword ptr [ebp + 4], ecx
// 00a67e5f  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a67e63  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a67e67  895508               mov dword ptr [ebp + 8], edx
// 00a67e6a  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a67e6e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a67e72  83c404               add esp, 4
// 00a67e75  894f04               mov dword ptr [edi + 4], ecx
// 00a67e78  57                   push edi
// 00a67e79  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00a67e7f  89450c               mov dword ptr [ebp + 0xc], eax
// 00a67e82  c6470800             mov byte ptr [edi + 8], 0
// 00a67e86  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 00a67e8d  899720010000         mov dword ptr [edi + 0x120], edx
// 00a67e93  e8c807feff           call 0xa48660
// 00a67e98  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a67e9c  50                   push eax
// 00a67e9d  8d4c2430             lea ecx, [esp + 0x30]
// 00a67ea1  51                   push ecx
// 00a67ea2  e8090ff8ff           call 0x9e8db0
// 00a67ea7  83c408               add esp, 8
// 00a67eaa  6a01                 push 1
// 00a67eac  55                   push ebp
// 00a67ead  8bc8                 mov ecx, eax
// 00a67eaf  c644245c03           mov byte ptr [esp + 0x5c], 3
// 00a67eb4  ff159847b200         call dword ptr [0xb24798]
// 00a67eba  50                   push eax
// 00a67ebb  56                   push esi
// 00a67ebc  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00a67ec2  e8451f0300           call 0xa99e0c
// 00a67ec7  8d4c242c             lea ecx, [esp + 0x2c]
// 00a67ecb  c644245401           mov byte ptr [esp + 0x54], 1
// 00a67ed0  ff15d047b200         call dword ptr [0xb247d0]
// 00a67ed6  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a67eda  3996b0000000         cmp dword ptr [esi + 0xb0], edx
// 00a67ee0  7509                 jne 0xa67eeb
// 00a67ee2  c644241701           mov byte ptr [esp + 0x17], 1
// 00a67ee7  c6470801             mov byte ptr [edi + 8], 1
// 00a67eeb  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00a67eee  6a00                 push 0
// 00a67ef0  50                   push eax
// 00a67ef1  8d4c2444             lea ecx, [esp + 0x44]
// 00a67ef5  51                   push ecx
// 00a67ef6  ff15f43ab200         call dword ptr [0xb23af4]
// 00a67efc  ff44245c             inc dword ptr [esp + 0x5c]
// 00a67f00  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a67f04  e9f7feffff           jmp 0xa67e00
// 00a67f09  e8b2a4f1ff           call 0x9823c0
// 00a67f0e  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a67f12  2b542440             sub edx, dword ptr [esp + 0x40]
// 00a67f16  8d441304             lea eax, [ebx + edx + 4]
// 00a67f1a  89442424             mov dword ptr [esp + 0x24], eax
// 00a67f1e  8bd8                 mov ebx, eax
// 00a67f20  83c304               add ebx, 4
// 00a67f23  e8c805f9ff           call 0x9f84f0
// 00a67f28  8b10                 mov edx, dword ptr [eax]
// 00a67f2a  8b5208               mov edx, dword ptr [edx + 8]
// 00a67f2d  68dd260000           push 0x26dd
// 00a67f32  8d4c2420             lea ecx, [esp + 0x20]
// 00a67f36  51                   push ecx
// 00a67f37  8bc8                 mov ecx, eax
// 00a67f39  ffd2                 call edx
// 00a67f3b  ff442418             inc dword ptr [esp + 0x18]
// 00a67f3f  6824010000           push 0x124
// 00a67f44  e8d1a1f1ff           call 0x98211a
// 00a67f49  83c404               add esp, 4
// 00a67f4c  8d4c241c             lea ecx, [esp + 0x1c]
// 00a67f50  8bf8                 mov edi, eax
// 00a67f52  ff159847b200         call dword ptr [0xb24798]
// 00a67f58  50                   push eax
// 00a67f59  8d4720               lea eax, [edi + 0x20]
// 00a67f5c  6800010000           push 0x100
// 00a67f61  50                   push eax
// 00a67f62  ff15d82ab200         call dword ptr [0xb22ad8]
// 00a67f68  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a67f6c  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a67f70  8d6f0c               lea ebp, [edi + 0xc]
// 00a67f73  894d00               mov dword ptr [ebp], ecx
// 00a67f76  895d04               mov dword ptr [ebp + 4], ebx
// 00a67f79  895508               mov dword ptr [ebp + 8], edx
// 00a67f7c  8d4317               lea eax, [ebx + 0x17]
// 00a67f7f  89450c               mov dword ptr [ebp + 0xc], eax
// 00a67f82  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a67f86  c707dd260000         mov dword ptr [edi], 0x26dd
// 00a67f8c  894704               mov dword ptr [edi + 4], eax
// 00a67f8f  c6470800             mov byte ptr [edi + 8], 0
// 00a67f93  c7471c04000000       mov dword ptr [edi + 0x1c], 4
// 00a67f9a  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 00a67fa0  83c40c               add esp, 0xc
// 00a67fa3  8d54241c             lea edx, [esp + 0x1c]
// 00a67fa7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 00a67fad  52                   push edx
// 00a67fae  8d4c2438             lea ecx, [esp + 0x38]
// 00a67fb2  ff158047b200         call dword ptr [0xb24780]
// 00a67fb8  57                   push edi
// 00a67fb9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00a67fbf  c644245804           mov byte ptr [esp + 0x58], 4
// 00a67fc4  e89706feff           call 0xa48660
// 00a67fc9  6a01                 push 1
// 00a67fcb  55                   push ebp
// 00a67fcc  8d4c243c             lea ecx, [esp + 0x3c]
// 00a67fd0  ff159847b200         call dword ptr [0xb24798]
// 00a67fd6  50                   push eax
// 00a67fd7  56                   push esi
// 00a67fd8  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00a67fde  e8291e0300           call 0xa99e0c
// 00a67fe3  83beb0000000ff       cmp dword ptr [esi + 0xb0], -1
// 00a67fea  740b                 je 0xa67ff7
// 00a67fec  807c241700           cmp byte ptr [esp + 0x17], 0
// 00a67ff1  7504                 jne 0xa67ff7
// 00a67ff3  c6470801             mov byte ptr [edi + 8], 1
// 00a67ff7  8d4c2434             lea ecx, [esp + 0x34]
// 00a67ffb  ff15d047b200         call dword ptr [0xb247d0]
// 00a68001  8d4c2420             lea ecx, [esp + 0x20]
// 00a68005  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 00a6800c  ff15d047b200         call dword ptr [0xb247d0]
// 00a68012  8d4c241c             lea ecx, [esp + 0x1c]
// 00a68016  ff15d047b200         call dword ptr [0xb247d0]
// 00a6801c  33c0                 xor eax, eax
// 00a6801e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a68022  64890d00000000       mov dword ptr fs:[0], ecx
// 00a68029  59                   pop ecx
// 00a6802a  5f                   pop edi
// 00a6802b  5e                   pop esi
// 00a6802c  5d                   pop ebp
// 00a6802d  5b                   pop ebx
// 00a6802e  83c444               add esp, 0x44
// 00a68031  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorSelectorCtrl@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp