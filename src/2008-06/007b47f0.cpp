// roc 2008-06 007b47f0  unit: G3D::Sky  size: 2349 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b47f0
//
// 007b47f0  6aff                 push -1
// 007b47f2  6831e27e00           push 0x7ee231
// 007b47f7  64a100000000         mov eax, dword ptr fs:[0]
// 007b47fd  50                   push eax
// 007b47fe  64892500000000       mov dword ptr fs:[0], esp
// 007b4805  81ec58010000         sub esp, 0x158
// 007b480b  53                   push ebx
// 007b480c  55                   push ebp
// 007b480d  56                   push esi
// 007b480e  8bf1                 mov esi, ecx
// 007b4810  33db                 xor ebx, ebx
// 007b4812  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 007b4818  895e04               mov dword ptr [esi + 4], ebx
// 007b481b  57                   push edi
// 007b481c  89742478             mov dword ptr [esp + 0x78], esi
// 007b4820  895e08               mov dword ptr [esi + 8], ebx
// 007b4823  68702a5000           push 0x502a70
// 007b4828  6810084f00           push 0x4f0810
// 007b482d  6a06                 push 6
// 007b482f  6a04                 push 4
// 007b4831  8d7e0c               lea edi, [esi + 0xc]
// 007b4834  57                   push edi
// 007b4835  899c2484010000       mov dword ptr [esp + 0x184], ebx
// 007b483c  c7069c598700         mov dword ptr [esi], 0x87599c
// 007b4842  e851cdeeff           call 0x6a1598
// 007b4847  8d4e24               lea ecx, [esi + 0x24]
// 007b484a  8919                 mov dword ptr [ecx], ebx
// 007b484c  895e28               mov dword ptr [esi + 0x28], ebx
// 007b484f  895e2c               mov dword ptr [esi + 0x2c], ebx
// 007b4852  895e30               mov dword ptr [esi + 0x30], ebx
// 007b4855  895e34               mov dword ptr [esi + 0x34], ebx
// 007b4858  895e3c               mov dword ptr [esi + 0x3c], ebx
// 007b485b  895e40               mov dword ptr [esi + 0x40], ebx
// 007b485e  895e38               mov dword ptr [esi + 0x38], ebx
// 007b4861  895e48               mov dword ptr [esi + 0x48], ebx
// 007b4864  895e4c               mov dword ptr [esi + 0x4c], ebx
// 007b4867  895e44               mov dword ptr [esi + 0x44], ebx
// 007b486a  8a842488010000       mov al, byte ptr [esp + 0x188]
// 007b4871  8b942478010000       mov edx, dword ptr [esp + 0x178]
// 007b4878  c684247001000008     mov byte ptr [esp + 0x170], 8
// 007b4880  884650               mov byte ptr [esi + 0x50], al
// 007b4883  895654               mov dword ptr [esi + 0x54], edx
// 007b4886  389c2484010000       cmp byte ptr [esp + 0x184], bl
// 007b488d  7411                 je 0x7b48a0
// 007b488f  8b84247c010000       mov eax, dword ptr [esp + 0x17c]
// 007b4896  8b10                 mov edx, dword ptr [eax]
// 007b4898  52                   push edx
// 007b4899  e80247deff           call 0x598fa0
// 007b489e  eb6e                 jmp 0x7b490e
// 007b48a0  895c2414             mov dword ptr [esp + 0x14], ebx
// 007b48a4  eb0a                 jmp 0x7b48b0
// 007b48a6  8da42400000000       lea esp, [esp]
// 007b48ad  8d4900               lea ecx, [ecx]
// 007b48b0  8b84247c010000       mov eax, dword ptr [esp + 0x17c]
// 007b48b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b48bb  8b2c88               mov ebp, dword ptr [eax + ecx*4]
// 007b48be  8b07                 mov eax, dword ptr [edi]
// 007b48c0  3be8                 cmp ebp, eax
// 007b48c2  7439                 je 0x7b48fd
// 007b48c4  3bc3                 cmp eax, ebx
// 007b48c6  7425                 je 0x7b48ed
// 007b48c8  83c004               add eax, 4
// 007b48cb  50                   push eax
// 007b48cc  ff15ac218000         call dword ptr [0x8021ac]
// 007b48d2  85c0                 test eax, eax
// 007b48d4  7515                 jne 0x7b48eb
// 007b48d6  8b0f                 mov ecx, dword ptr [edi]
// 007b48d8  e8b364caff           call 0x45ad90
// 007b48dd  8b0f                 mov ecx, dword ptr [edi]
// 007b48df  3bcb                 cmp ecx, ebx
// 007b48e1  7408                 je 0x7b48eb
// 007b48e3  8b11                 mov edx, dword ptr [ecx]
// 007b48e5  8b02                 mov eax, dword ptr [edx]
// 007b48e7  6a01                 push 1
// 007b48e9  ffd0                 call eax
// 007b48eb  891f                 mov dword ptr [edi], ebx
// 007b48ed  3beb                 cmp ebp, ebx
// 007b48ef  740c                 je 0x7b48fd
// 007b48f1  892f                 mov dword ptr [edi], ebp
// 007b48f3  83c504               add ebp, 4
// 007b48f6  55                   push ebp
// 007b48f7  ff15b0218000         call dword ptr [0x8021b0]
// 007b48fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b4901  40                   inc eax
// 007b4902  83c704               add edi, 4
// 007b4905  83f806               cmp eax, 6
// 007b4908  89442414             mov dword ptr [esp + 0x14], eax
// 007b490c  7ca2                 jl 0x7b48b0
// 007b490e  dd05b85a8700         fld qword ptr [0x875ab8]
// 007b4914  dd84248c010000       fld qword ptr [esp + 0x18c]
// 007b491b  d8d1                 fcom st(1)
// 007b491d  dfe0                 fnstsw ax
// 007b491f  ddd9                 fstp st(1)
// 007b4921  f6c441               test ah, 0x41
// 007b4924  7518                 jne 0x7b493e
// 007b4926  8b0db0fa9600         mov ecx, dword ptr [0x96fab0]
// 007b492c  ddd8                 fstp st(0)
// 007b492e  8b15a8fa9600         mov edx, dword ptr [0x96faa8]
// 007b4934  894c2414             mov dword ptr [esp + 0x14], ecx
// 007b4938  89542418             mov dword ptr [esp + 0x18], edx
// 007b493c  eb2b                 jmp 0x7b4969
// 007b493e  dc1db05a8700         fcomp qword ptr [0x875ab0]
// 007b4944  dfe0                 fnstsw ax
// 007b4946  f6c441               test ah, 0x41
// 007b4949  7511                 jne 0x7b495c
// 007b494b  8b0d78fa9600         mov ecx, dword ptr [0x96fa78]
// 007b4951  a158fa9600           mov eax, dword ptr [0x96fa58]
// 007b4956  894c2418             mov dword ptr [esp + 0x18], ecx
// 007b495a  eb09                 jmp 0x7b4965
// 007b495c  a1bcfa9600           mov eax, dword ptr [0x96fabc]
// 007b4961  89442418             mov dword ptr [esp + 0x18], eax
// 007b4965  89442414             mov dword ptr [esp + 0x14], eax
// 007b4969  807e5000             cmp byte ptr [esi + 0x50], 0
// 007b496d  0f848d070000         je 0x7b5100
// 007b4973  8bac2480010000       mov ebp, dword ptr [esp + 0x180]
// 007b497a  8b1de4238000         mov ebx, dword ptr [0x8023e4]
// 007b4980  68a05a8700           push 0x875aa0
// 007b4985  8d9424fc000000       lea edx, [esp + 0xfc]
// 007b498c  55                   push ebp
// 007b498d  52                   push edx
// 007b498e  ffd3                 call ebx
// 007b4990  8bf8                 mov edi, eax
// 007b4992  6864e78400           push 0x84e764
// 007b4997  8d84245c010000       lea eax, [esp + 0x15c]
// 007b499e  55                   push ebp
// 007b499f  50                   push eax
// 007b49a0  c684248801000009     mov byte ptr [esp + 0x188], 9
// 007b49a8  ffd3                 call ebx
// 007b49aa  d9e8                 fld1 
// 007b49ac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b49b0  d95c2414             fstp dword ptr [esp + 0x14]
// 007b49b4  83c414               add esp, 0x14
// 007b49b7  6a00                 push 0
// 007b49b9  6a02                 push 2
// 007b49bb  6a02                 push 2
// 007b49bd  6a02                 push 2
// 007b49bf  51                   push ecx
// 007b49c0  57                   push edi
// 007b49c1  50                   push eax
// 007b49c2  8d54243c             lea edx, [esp + 0x3c]
// 007b49c6  52                   push edx
// 007b49c7  c68424940100000a     mov byte ptr [esp + 0x194], 0xa
// 007b49cf  e83c0bccff           call 0x475510
// 007b49d4  83c424               add esp, 0x24
// 007b49d7  8b38                 mov edi, dword ptr [eax]
// 007b49d9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007b49dc  c68424700100000b     mov byte ptr [esp + 0x170], 0xb
// 007b49e4  3bf8                 cmp edi, eax
// 007b49e6  7441                 je 0x7b4a29
// 007b49e8  85c0                 test eax, eax
// 007b49ea  742c                 je 0x7b4a18
// 007b49ec  83c004               add eax, 4
// 007b49ef  50                   push eax
// 007b49f0  ff15ac218000         call dword ptr [0x8021ac]
// 007b49f6  85c0                 test eax, eax
// 007b49f8  7517                 jne 0x7b4a11
// 007b49fa  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007b49fd  e88e63caff           call 0x45ad90
// 007b4a02  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007b4a05  85c9                 test ecx, ecx
// 007b4a07  7408                 je 0x7b4a11
// 007b4a09  8b01                 mov eax, dword ptr [ecx]
// 007b4a0b  8b10                 mov edx, dword ptr [eax]
// 007b4a0d  6a01                 push 1
// 007b4a0f  ffd2                 call edx
// 007b4a11  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 007b4a18  85ff                 test edi, edi
// 007b4a1a  740d                 je 0x7b4a29
// 007b4a1c  897e2c               mov dword ptr [esi + 0x2c], edi
// 007b4a1f  83c704               add edi, 4
// 007b4a22  57                   push edi
// 007b4a23  ff15b0218000         call dword ptr [0x8021b0]
// 007b4a29  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b4a2d  c68424700100000a     mov byte ptr [esp + 0x170], 0xa
// 007b4a35  85c0                 test eax, eax
// 007b4a37  742f                 je 0x7b4a68
// 007b4a39  83c004               add eax, 4
// 007b4a3c  50                   push eax
// 007b4a3d  ff15ac218000         call dword ptr [0x8021ac]
// 007b4a43  85c0                 test eax, eax
// 007b4a45  7519                 jne 0x7b4a60
// 007b4a47  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b4a4b  e84063caff           call 0x45ad90
// 007b4a50  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b4a54  85c9                 test ecx, ecx
// 007b4a56  7408                 je 0x7b4a60
// 007b4a58  8b01                 mov eax, dword ptr [ecx]
// 007b4a5a  8b10                 mov edx, dword ptr [eax]
// 007b4a5c  6a01                 push 1
// 007b4a5e  ffd2                 call edx
// 007b4a60  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007b4a68  8d8c244c010000       lea ecx, [esp + 0x14c]
// 007b4a6f  c684247001000009     mov byte ptr [esp + 0x170], 9
// 007b4a77  ff1568248000         call dword ptr [0x802468]
// 007b4a7d  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 007b4a84  c684247001000008     mov byte ptr [esp + 0x170], 8
// 007b4a8c  ff1568248000         call dword ptr [0x802468]
// 007b4a92  685ce78400           push 0x84e75c
// 007b4a97  8d8424c4000000       lea eax, [esp + 0xc4]
// 007b4a9e  55                   push ebp
// 007b4a9f  50                   push eax
// 007b4aa0  ffd3                 call ebx
// 007b4aa2  d9e8                 fld1 
// 007b4aa4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b4aa8  d9542408             fst dword ptr [esp + 8]
// 007b4aac  83c404               add esp, 4
// 007b4aaf  d91c24               fstp dword ptr [esp]
// 007b4ab2  d9e8                 fld1 
// 007b4ab4  6a00                 push 0
// 007b4ab6  83ec08               sub esp, 8
// 007b4ab9  dd1c24               fstp qword ptr [esp]
// 007b4abc  8d542434             lea edx, [esp + 0x34]
// 007b4ac0  6a02                 push 2
// 007b4ac2  6a02                 push 2
// 007b4ac4  6a02                 push 2
// 007b4ac6  51                   push ecx
// 007b4ac7  50                   push eax
// 007b4ac8  52                   push edx
// 007b4ac9  c684249c0100000c     mov byte ptr [esp + 0x19c], 0xc
// 007b4ad1  e8ea08ccff           call 0x4753c0
// 007b4ad6  83c42c               add esp, 0x2c
// 007b4ad9  8b38                 mov edi, dword ptr [eax]
// 007b4adb  8b4628               mov eax, dword ptr [esi + 0x28]
// 007b4ade  c68424700100000d     mov byte ptr [esp + 0x170], 0xd
// 007b4ae6  3bf8                 cmp edi, eax
// 007b4ae8  7441                 je 0x7b4b2b
// 007b4aea  85c0                 test eax, eax
// 007b4aec  742c                 je 0x7b4b1a
// 007b4aee  83c004               add eax, 4
// 007b4af1  50                   push eax
// 007b4af2  ff15ac218000         call dword ptr [0x8021ac]
// 007b4af8  85c0                 test eax, eax
// 007b4afa  7517                 jne 0x7b4b13
// 007b4afc  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007b4aff  e88c62caff           call 0x45ad90
// 007b4b04  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007b4b07  85c9                 test ecx, ecx
// 007b4b09  7408                 je 0x7b4b13
// 007b4b0b  8b01                 mov eax, dword ptr [ecx]
// 007b4b0d  8b10                 mov edx, dword ptr [eax]
// 007b4b0f  6a01                 push 1
// 007b4b11  ffd2                 call edx
// 007b4b13  c7462800000000       mov dword ptr [esi + 0x28], 0
// 007b4b1a  85ff                 test edi, edi
// 007b4b1c  740d                 je 0x7b4b2b
// 007b4b1e  897e28               mov dword ptr [esi + 0x28], edi
// 007b4b21  83c704               add edi, 4
// 007b4b24  57                   push edi
// 007b4b25  ff15b0218000         call dword ptr [0x8021b0]
// 007b4b2b  8b442420             mov eax, dword ptr [esp + 0x20]
// 007b4b2f  c68424700100000c     mov byte ptr [esp + 0x170], 0xc
// 007b4b37  85c0                 test eax, eax
// 007b4b39  742f                 je 0x7b4b6a
// 007b4b3b  83c004               add eax, 4
// 007b4b3e  50                   push eax
// 007b4b3f  ff15ac218000         call dword ptr [0x8021ac]
// 007b4b45  85c0                 test eax, eax
// 007b4b47  7519                 jne 0x7b4b62
// 007b4b49  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b4b4d  e83e62caff           call 0x45ad90
// 007b4b52  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b4b56  85c9                 test ecx, ecx
// 007b4b58  7408                 je 0x7b4b62
// 007b4b5a  8b01                 mov eax, dword ptr [ecx]
// 007b4b5c  8b10                 mov edx, dword ptr [eax]
// 007b4b5e  6a01                 push 1
// 007b4b60  ffd2                 call edx
// 007b4b62  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007b4b6a  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 007b4b71  c684247001000008     mov byte ptr [esp + 0x170], 8
// 007b4b79  ff1568248000         call dword ptr [0x802468]
// 007b4b7f  68905a8700           push 0x875a90
// 007b4b84  8d842434010000       lea eax, [esp + 0x134]
// 007b4b8b  55                   push ebp
// 007b4b8c  50                   push eax
// 007b4b8d  ffd3                 call ebx
// 007b4b8f  d9e8                 fld1 
// 007b4b91  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b4b95  d9542408             fst dword ptr [esp + 8]
// 007b4b99  83c404               add esp, 4
// 007b4b9c  d91c24               fstp dword ptr [esp]
// 007b4b9f  d9e8                 fld1 
// 007b4ba1  6a00                 push 0
// 007b4ba3  83ec08               sub esp, 8
// 007b4ba6  dd1c24               fstp qword ptr [esp]
// 007b4ba9  8d542424             lea edx, [esp + 0x24]
// 007b4bad  6a02                 push 2
// 007b4baf  6a02                 push 2
// 007b4bb1  6a02                 push 2
// 007b4bb3  51                   push ecx
// 007b4bb4  50                   push eax
// 007b4bb5  52                   push edx
// 007b4bb6  c684249c0100000e     mov byte ptr [esp + 0x19c], 0xe
// 007b4bbe  e8fd07ccff           call 0x4753c0
// 007b4bc3  83c42c               add esp, 0x2c
// 007b4bc6  8b38                 mov edi, dword ptr [eax]
// 007b4bc8  8b4630               mov eax, dword ptr [esi + 0x30]
// 007b4bcb  c68424700100000f     mov byte ptr [esp + 0x170], 0xf
// 007b4bd3  3bf8                 cmp edi, eax
// 007b4bd5  7441                 je 0x7b4c18
// 007b4bd7  85c0                 test eax, eax
// 007b4bd9  742c                 je 0x7b4c07
// 007b4bdb  83c004               add eax, 4
// 007b4bde  50                   push eax
// 007b4bdf  ff15ac218000         call dword ptr [0x8021ac]
// 007b4be5  85c0                 test eax, eax
// 007b4be7  7517                 jne 0x7b4c00
// 007b4be9  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007b4bec  e89f61caff           call 0x45ad90
// 007b4bf1  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007b4bf4  85c9                 test ecx, ecx
// 007b4bf6  7408                 je 0x7b4c00
// 007b4bf8  8b01                 mov eax, dword ptr [ecx]
// 007b4bfa  8b10                 mov edx, dword ptr [eax]
// 007b4bfc  6a01                 push 1
// 007b4bfe  ffd2                 call edx
// 007b4c00  c7463000000000       mov dword ptr [esi + 0x30], 0
// 007b4c07  85ff                 test edi, edi
// 007b4c09  740d                 je 0x7b4c18
// 007b4c0b  897e30               mov dword ptr [esi + 0x30], edi
// 007b4c0e  83c704               add edi, 4
// 007b4c11  57                   push edi
// 007b4c12  ff15b0218000         call dword ptr [0x8021b0]
// 007b4c18  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b4c1c  c68424700100000e     mov byte ptr [esp + 0x170], 0xe
// 007b4c24  85c0                 test eax, eax
// 007b4c26  742f                 je 0x7b4c57
// 007b4c28  83c004               add eax, 4
// 007b4c2b  50                   push eax
// 007b4c2c  ff15ac218000         call dword ptr [0x8021ac]
// 007b4c32  85c0                 test eax, eax
// 007b4c34  7519                 jne 0x7b4c4f
// 007b4c36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b4c3a  e85161caff           call 0x45ad90
// 007b4c3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b4c43  85c9                 test ecx, ecx
// 007b4c45  7408                 je 0x7b4c4f
// 007b4c47  8b01                 mov eax, dword ptr [ecx]
// 007b4c49  8b10                 mov edx, dword ptr [eax]
// 007b4c4b  6a01                 push 1
// 007b4c4d  ffd2                 call edx
// 007b4c4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007b4c57  8d8c2430010000       lea ecx, [esp + 0x130]
// 007b4c5e  c684247001000008     mov byte ptr [esp + 0x170], 8
// 007b4c66  ff1568248000         call dword ptr [0x802468]
// 007b4c6c  684ce78400           push 0x84e74c
// 007b4c71  8d84248c000000       lea eax, [esp + 0x8c]
// 007b4c78  55                   push ebp
// 007b4c79  50                   push eax
// 007b4c7a  ffd3                 call ebx
// 007b4c7c  d9e8                 fld1 
// 007b4c7e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b4c82  d9542408             fst dword ptr [esp + 8]
// 007b4c86  83c404               add esp, 4
// 007b4c89  d91c24               fstp dword ptr [esp]
// 007b4c8c  d9e8                 fld1 
// 007b4c8e  6a00                 push 0
// 007b4c90  83ec08               sub esp, 8
// 007b4c93  dd1c24               fstp qword ptr [esp]
// 007b4c96  8d542438             lea edx, [esp + 0x38]
// 007b4c9a  6a02                 push 2
// 007b4c9c  6a02                 push 2
// 007b4c9e  6a02                 push 2
// 007b4ca0  51                   push ecx
// 007b4ca1  50                   push eax
// 007b4ca2  52                   push edx
// 007b4ca3  c684249c01000010     mov byte ptr [esp + 0x19c], 0x10
// 007b4cab  e81007ccff           call 0x4753c0
// 007b4cb0  83c42c               add esp, 0x2c
// 007b4cb3  8b38                 mov edi, dword ptr [eax]
// 007b4cb5  8b4634               mov eax, dword ptr [esi + 0x34]
// 007b4cb8  c684247001000011     mov byte ptr [esp + 0x170], 0x11
// 007b4cc0  3bf8                 cmp edi, eax
// 007b4cc2  7441                 je 0x7b4d05
// 007b4cc4  85c0                 test eax, eax
// 007b4cc6  742c                 je 0x7b4cf4
// 007b4cc8  83c004               add eax, 4
// 007b4ccb  50                   push eax
// 007b4ccc  ff15ac218000         call dword ptr [0x8021ac]
// 007b4cd2  85c0                 test eax, eax
// 007b4cd4  7517                 jne 0x7b4ced
// 007b4cd6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007b4cd9  e8b260caff           call 0x45ad90
// 007b4cde  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007b4ce1  85c9                 test ecx, ecx
// 007b4ce3  7408                 je 0x7b4ced
// 007b4ce5  8b01                 mov eax, dword ptr [ecx]
// 007b4ce7  8b10                 mov edx, dword ptr [eax]
// 007b4ce9  6a01                 push 1
// 007b4ceb  ffd2                 call edx
// 007b4ced  c7463400000000       mov dword ptr [esi + 0x34], 0
// 007b4cf4  85ff                 test edi, edi
// 007b4cf6  740d                 je 0x7b4d05
// 007b4cf8  897e34               mov dword ptr [esi + 0x34], edi
// 007b4cfb  83c704               add edi, 4
// 007b4cfe  57                   push edi
// 007b4cff  ff15b0218000         call dword ptr [0x8021b0]
// 007b4d05  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b4d09  c684247001000010     mov byte ptr [esp + 0x170], 0x10
// 007b4d11  85c0                 test eax, eax
// 007b4d13  742f                 je 0x7b4d44
// 007b4d15  83c004               add eax, 4
// 007b4d18  50                   push eax
// 007b4d19  ff15ac218000         call dword ptr [0x8021ac]
// 007b4d1f  85c0                 test eax, eax
// 007b4d21  7519                 jne 0x7b4d3c
// 007b4d23  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b4d27  e86460caff           call 0x45ad90
// 007b4d2c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b4d30  85c9                 test ecx, ecx
// 007b4d32  7408                 je 0x7b4d3c
// 007b4d34  8b01                 mov eax, dword ptr [ecx]
// 007b4d36  8b10                 mov edx, dword ptr [eax]
// 007b4d38  6a01                 push 1
// 007b4d3a  ffd2                 call edx
// 007b4d3c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007b4d44  8d8c2488000000       lea ecx, [esp + 0x88]
// 007b4d4b  c684247001000008     mov byte ptr [esp + 0x170], 8
// 007b4d53  ff1568248000         call dword ptr [0x802468]
// 007b4d59  68f0e68400           push 0x84e6f0
// 007b4d5e  8d8424a8000000       lea eax, [esp + 0xa8]
// 007b4d65  55                   push ebp
// 007b4d66  50                   push eax
// 007b4d67  ffd3                 call ebx
// 007b4d69  50                   push eax
// 007b4d6a  c684248001000012     mov byte ptr [esp + 0x180], 0x12
// 007b4d72  e81900d6ff           call 0x514d90
// 007b4d77  83c410               add esp, 0x10
// 007b4d7a  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 007b4d81  88442410             mov byte ptr [esp + 0x10], al
// 007b4d85  c684247001000008     mov byte ptr [esp + 0x170], 8
// 007b4d8d  ff1568248000         call dword ptr [0x802468]
// 007b4d93  807c241000           cmp byte ptr [esp + 0x10], 0
// 007b4d98  0f84de020000         je 0x7b507c
// 007b4d9e  68f0e68400           push 0x84e6f0
// 007b4da3  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 007b4daa  55                   push ebp
// 007b4dab  51                   push ecx
// 007b4dac  ffd3                 call ebx
// 007b4dae  83c40c               add esp, 0xc
// 007b4db1  6a01                 push 1
// 007b4db3  6a01                 push 1
// 007b4db5  50                   push eax
// 007b4db6  8d4c2438             lea ecx, [esp + 0x38]
// 007b4dba  c684247c01000013     mov byte ptr [esp + 0x17c], 0x13
// 007b4dc2  e8390cd6ff           call 0x515a00
// 007b4dc7  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 007b4dce  c684247001000015     mov byte ptr [esp + 0x170], 0x15
// 007b4dd6  ff1568248000         call dword ptr [0x802468]
// 007b4ddc  6a05                 push 5
// 007b4dde  8d942418010000       lea edx, [esp + 0x118]
// 007b4de5  52                   push edx
// 007b4de6  8d4c2434             lea ecx, [esp + 0x34]
// 007b4dea  e8610fd6ff           call 0x515d50
// 007b4def  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b4df3  8d4802               lea ecx, [eax + 2]
// 007b4df6  3b4c2468             cmp ecx, dword ptr [esp + 0x68]
// 007b4dfa  c684247001000016     mov byte ptr [esp + 0x170], 0x16
// 007b4e02  7e16                 jle 0x7b4e1a
// 007b4e04  8b542460             mov edx, dword ptr [esp + 0x60]
// 007b4e08  6a02                 push 2
// 007b4e0a  03d0                 add edx, eax
// 007b4e0c  52                   push edx
// 007b4e0d  8d4c2434             lea ecx, [esp + 0x34]
// 007b4e11  e8ba09d6ff           call 0x5157d0
// 007b4e16  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b4e1a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007b4e1e  83c002               add eax, 2
// 007b4e21  807c245000           cmp byte ptr [esp + 0x50], 0
// 007b4e26  89442470             mov dword ptr [esp + 0x70], eax
// 007b4e2a  7417                 je 0x7b4e43
// 007b4e2c  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 007b4e30  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 007b4e34  88542410             mov byte ptr [esp + 0x10], dl
// 007b4e38  88442411             mov byte ptr [esp + 0x11], al
// 007b4e3c  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 007b4e41  eb05                 jmp 0x7b4e48
// 007b4e43  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 007b4e48  0fbfe8               movsx ebp, ax
// 007b4e4b  6a01                 push 1
// 007b4e4d  55                   push ebp
// 007b4e4e  8d4e38               lea ecx, [esi + 0x38]
// 007b4e51  e8fabfd5ff           call 0x510e50
// 007b4e56  6a01                 push 1
// 007b4e58  55                   push ebp
// 007b4e59  8d4e44               lea ecx, [esi + 0x44]
// 007b4e5c  e80fafccff           call 0x47fd70
// 007b4e61  33ff                 xor edi, edi
// 007b4e63  85ed                 test ebp, ebp
// 007b4e65  0f8ee6010000         jle 0x7b5051
// 007b4e6b  33db                 xor ebx, ebx
// 007b4e6d  8d4900               lea ecx, [ecx]
// 007b4e70  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b4e74  8d5002               lea edx, [eax + 2]
// 007b4e77  3b542468             cmp edx, dword ptr [esp + 0x68]
// 007b4e7b  7e16                 jle 0x7b4e93
// 007b4e7d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b4e81  03c8                 add ecx, eax
// 007b4e83  6a02                 push 2
// 007b4e85  51                   push ecx
// 007b4e86  8d4c2434             lea ecx, [esp + 0x34]
// 007b4e8a  e84109d6ff           call 0x5157d0
// 007b4e8f  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b4e93  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007b4e97  83c002               add eax, 2
// 007b4e9a  807c245000           cmp byte ptr [esp + 0x50], 0
// 007b4e9f  89442470             mov dword ptr [esp + 0x70], eax
// 007b4ea3  7419                 je 0x7b4ebe
// 007b4ea5  0fb65401ff           movzx edx, byte ptr [ecx + eax - 1]
// 007b4eaa  88542410             mov byte ptr [esp + 0x10], dl
// 007b4eae  0fb65401fe           movzx edx, byte ptr [ecx + eax - 2]
// 007b4eb3  88542411             mov byte ptr [esp + 0x11], dl
// 007b4eb7  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 007b4ebc  eb05                 jmp 0x7b4ec3
// 007b4ebe  0fb75401fe           movzx edx, word ptr [ecx + eax - 2]
// 007b4ec3  0fbfd2               movsx edx, dx
// 007b4ec6  89542418             mov dword ptr [esp + 0x18], edx
// 007b4eca  8d5002               lea edx, [eax + 2]
// 007b4ecd  3b542468             cmp edx, dword ptr [esp + 0x68]
// 007b4ed1  db442418             fild dword ptr [esp + 0x18]
// 007b4ed5  dcc0                 fadd st(0), st(0)
// 007b4ed7  d80594748200         fadd dword ptr [0x827494]
// 007b4edd  d80dece68400         fmul dword ptr [0x84e6ec]
// 007b4ee3  d95c2424             fstp dword ptr [esp + 0x24]
// 007b4ee7  7e1a                 jle 0x7b4f03
// 007b4ee9  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b4eed  03c8                 add ecx, eax
// 007b4eef  6a02                 push 2
// 007b4ef1  51                   push ecx
// 007b4ef2  8d4c2434             lea ecx, [esp + 0x34]
// 007b4ef6  e8d508d6ff           call 0x5157d0
// 007b4efb  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b4eff  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007b4f03  83c002               add eax, 2
// 007b4f06  807c245000           cmp byte ptr [esp + 0x50], 0
// 007b4f0b  89442470             mov dword ptr [esp + 0x70], eax
// 007b4f0f  7419                 je 0x7b4f2a
// 007b4f11  0fb65401ff           movzx edx, byte ptr [ecx + eax - 1]
// 007b4f16  88542420             mov byte ptr [esp + 0x20], dl
// 007b4f1a  0fb65401fe           movzx edx, byte ptr [ecx + eax - 2]
// 007b4f1f  88542421             mov byte ptr [esp + 0x21], dl
// 007b4f23  0fb7542420           movzx edx, word ptr [esp + 0x20]
// 007b4f28  eb05                 jmp 0x7b4f2f
// 007b4f2a  0fb75401fe           movzx edx, word ptr [ecx + eax - 2]
// 007b4f2f  0fbfd2               movsx edx, dx
// 007b4f32  89542418             mov dword ptr [esp + 0x18], edx
// 007b4f36  8d5002               lea edx, [eax + 2]
// 007b4f39  3b542468             cmp edx, dword ptr [esp + 0x68]
// 007b4f3d  db442418             fild dword ptr [esp + 0x18]
// 007b4f41  dcc0                 fadd st(0), st(0)
// 007b4f43  d80594748200         fadd dword ptr [0x827494]
// 007b4f49  d80dece68400         fmul dword ptr [0x84e6ec]
// 007b4f4f  d95c2428             fstp dword ptr [esp + 0x28]
// 007b4f53  7e1a                 jle 0x7b4f6f
// 007b4f55  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b4f59  03c8                 add ecx, eax
// 007b4f5b  6a02                 push 2
// 007b4f5d  51                   push ecx
// 007b4f5e  8d4c2434             lea ecx, [esp + 0x34]
// 007b4f62  e86908d6ff           call 0x5157d0
// 007b4f67  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b4f6b  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007b4f6f  83c002               add eax, 2
// 007b4f72  807c245000           cmp byte ptr [esp + 0x50], 0
// 007b4f77  89442470             mov dword ptr [esp + 0x70], eax
// 007b4f7b  7417                 je 0x7b4f94
// 007b4f7d  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 007b4f81  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 007b4f85  8854241c             mov byte ptr [esp + 0x1c], dl
// 007b4f89  8844241d             mov byte ptr [esp + 0x1d], al
// 007b4f8d  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 007b4f92  eb05                 jmp 0x7b4f99
// 007b4f94  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 007b4f99  0fbfc8               movsx ecx, ax
// 007b4f9c  8b4638               mov eax, dword ptr [esi + 0x38]
// 007b4f9f  894c2418             mov dword ptr [esp + 0x18], ecx
// 007b4fa3  03c3                 add eax, ebx
// 007b4fa5  db442418             fild dword ptr [esp + 0x18]
// 007b4fa9  dcc0                 fadd st(0), st(0)
// 007b4fab  d80594748200         fadd dword ptr [0x827494]
// 007b4fb1  d80dece68400         fmul dword ptr [0x84e6ec]
// 007b4fb7  d9442424             fld dword ptr [esp + 0x24]
// 007b4fbb  d918                 fstp dword ptr [eax]
// 007b4fbd  d9442428             fld dword ptr [esp + 0x28]
// 007b4fc1  d95804               fstp dword ptr [eax + 4]
// 007b4fc4  d95808               fstp dword ptr [eax + 8]
// 007b4fc7  d9ee                 fldz 
// 007b4fc9  d9580c               fstp dword ptr [eax + 0xc]
// 007b4fcc  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b4fd0  8d5002               lea edx, [eax + 2]
// 007b4fd3  3b542468             cmp edx, dword ptr [esp + 0x68]
// 007b4fd7  7e16                 jle 0x7b4fef
// 007b4fd9  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b4fdd  03c8                 add ecx, eax
// 007b4fdf  6a02                 push 2
// 007b4fe1  51                   push ecx
// 007b4fe2  8d4c2434             lea ecx, [esp + 0x34]
// 007b4fe6  e8e507d6ff           call 0x5157d0
// 007b4feb  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b4fef  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007b4ff3  83c002               add eax, 2
// 007b4ff6  807c245000           cmp byte ptr [esp + 0x50], 0
// 007b4ffb  89442470             mov dword ptr [esp + 0x70], eax
// 007b4fff  7417                 je 0x7b5018
// 007b5001  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 007b5005  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 007b5009  88542414             mov byte ptr [esp + 0x14], dl
// 007b500d  88442415             mov byte ptr [esp + 0x15], al
// 007b5011  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 007b5016  eb05                 jmp 0x7b501d
// 007b5018  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 007b501d  0fbfd0               movsx edx, ax
// 007b5020  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b5023  89542428             mov dword ptr [esp + 0x28], edx
// 007b5027  47                   inc edi
// 007b5028  83c310               add ebx, 0x10
// 007b502b  3bfd                 cmp edi, ebp
// 007b502d  db442428             fild dword ptr [esp + 0x28]
// 007b5031  dcc0                 fadd st(0), st(0)
// 007b5033  d80594748200         fadd dword ptr [0x827494]
// 007b5039  d80dece68400         fmul dword ptr [0x84e6ec]
// 007b503f  dcc8                 fmul st(0), st(0)
// 007b5041  dc05001e8200         fadd qword ptr [0x821e00]
// 007b5047  d95cb8fc             fstp dword ptr [eax + edi*4 - 4]
// 007b504b  0f8c1ffeffff         jl 0x7b4e70
// 007b5051  8d8c2414010000       lea ecx, [esp + 0x114]
// 007b5058  c684247001000015     mov byte ptr [esp + 0x170], 0x15
// 007b5060  ff1568248000         call dword ptr [0x802468]
// 007b5066  8d4c242c             lea ecx, [esp + 0x2c]
// 007b506a  c684247001000008     mov byte ptr [esp + 0x170], 8
// 007b5072  e8a90bd6ff           call 0x515c20
// 007b5077  e984000000           jmp 0x7b5100
// 007b507c  6a01                 push 1
// 007b507e  68b80b0000           push 0xbb8
// 007b5083  8d4e38               lea ecx, [esi + 0x38]
// 007b5086  e8c5bdd5ff           call 0x510e50
// 007b508b  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007b508e  6a01                 push 1
// 007b5090  51                   push ecx
// 007b5091  8d4e44               lea ecx, [esi + 0x44]
// 007b5094  e8d7acccff           call 0x47fd70
// 007b5099  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 007b509c  83ef01               sub edi, 1
// 007b509f  785f                 js 0x7b5100
// 007b50a1  8b1db0278000         mov ebx, dword ptr [0x8027b0]
// 007b50a7  8bef                 mov ebp, edi
// 007b50a9  c1e504               shl ebp, 4
// 007b50ac  8d642400             lea esp, [esp]
// 007b50b0  8d54247c             lea edx, [esp + 0x7c]
// 007b50b4  52                   push edx
// 007b50b5  e89635d6ff           call 0x518650
// 007b50ba  d900                 fld dword ptr [eax]
// 007b50bc  d94004               fld dword ptr [eax + 4]
// 007b50bf  83c404               add esp, 4
// 007b50c2  d94008               fld dword ptr [eax + 8]
// 007b50c5  8b4638               mov eax, dword ptr [esi + 0x38]
// 007b50c8  03c5                 add eax, ebp
// 007b50ca  d9ca                 fxch st(2)
// 007b50cc  d918                 fstp dword ptr [eax]
// 007b50ce  d95804               fstp dword ptr [eax + 4]
// 007b50d1  d95808               fstp dword ptr [eax + 8]
// 007b50d4  d9ee                 fldz 
// 007b50d6  d9580c               fstp dword ptr [eax + 0xc]
// 007b50d9  ffd3                 call ebx
// 007b50db  89442428             mov dword ptr [esp + 0x28], eax
// 007b50df  db442428             fild dword ptr [esp + 0x28]
// 007b50e3  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b50e6  4f                   dec edi
// 007b50e7  83ed10               sub ebp, 0x10
// 007b50ea  d80d406e8200         fmul dword ptr [0x826e40]
// 007b50f0  dcc8                 fmul st(0), st(0)
// 007b50f2  dc05001e8200         fadd qword ptr [0x821e00]
// 007b50f8  d95cb804             fstp dword ptr [eax + edi*4 + 4]
// 007b50fc  85ff                 test edi, edi
// 007b50fe  7db0                 jge 0x7b50b0
// 007b5100  8b8c2468010000       mov ecx, dword ptr [esp + 0x168]
// 007b5107  5f                   pop edi
// 007b5108  8bc6                 mov eax, esi
// 007b510a  5e                   pop esi
// 007b510b  5d                   pop ebp
// 007b510c  5b                   pop ebx
// 007b510d  64890d00000000       mov dword ptr fs:[0], ecx
// 007b5114  81c464010000         add esp, 0x164
// 007b511a  c21c00               ret 0x1c
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??0Sky@G3D@@AAE@PAVRenderDevice@1@QAV?$ReferenceCountedPointer@VTexture@G3D@@@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
