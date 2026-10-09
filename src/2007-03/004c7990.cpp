// roc 2007-03 004c7990  unit: seg_004c0000  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c7990
//
// 004c7990  6aff                 push -1
// 004c7992  68926f7500           push 0x756f92
// 004c7997  64a100000000         mov eax, dword ptr fs:[0]
// 004c799d  50                   push eax
// 004c799e  64892500000000       mov dword ptr fs:[0], esp
// 004c79a5  83ec4c               sub esp, 0x4c
// 004c79a8  8b442464             mov eax, dword ptr [esp + 0x64]
// 004c79ac  80782900             cmp byte ptr [eax + 0x29], 0
// 004c79b0  890c24               mov dword ptr [esp], ecx
// 004c79b3  7459                 je 0x4c7a0e
// 004c79b5  68dc3e7800           push 0x783edc
// 004c79ba  8d4c240c             lea ecx, [esp + 0xc]
// 004c79be  ff1578e77700         call dword ptr [0x77e778]
// 004c79c4  8d4c2424             lea ecx, [esp + 0x24]
// 004c79c8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004c79d0  ff1560e97700         call dword ptr [0x77e960]
// 004c79d6  8d442408             lea eax, [esp + 8]
// 004c79da  50                   push eax
// 004c79db  8d4c2434             lea ecx, [esp + 0x34]
// 004c79df  c644245801           mov byte ptr [esp + 0x58], 1
// 004c79e4  c7442428383e7800     mov dword ptr [esp + 0x28], 0x783e38
// 004c79ec  ff157ce77700         call dword ptr [0x77e77c]
// 004c79f2  68ccf38300           push 0x83f3cc
// 004c79f7  8d4c2428             lea ecx, [esp + 0x28]
// 004c79fb  51                   push ecx
// 004c79fc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004c7a01  c744242c503e7800     mov dword ptr [esp + 0x2c], 0x783e50
// 004c7a09  e820761500           call 0x61f02e
// 004c7a0e  53                   push ebx
// 004c7a0f  55                   push ebp
// 004c7a10  56                   push esi
// 004c7a11  8bd8                 mov ebx, eax
// 004c7a13  57                   push edi
// 004c7a14  8d4c2470             lea ecx, [esp + 0x70]
// 004c7a18  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c7a1c  e81fd2ffff           call 0x4c4c40
// 004c7a21  8b03                 mov eax, dword ptr [ebx]
// 004c7a23  80782900             cmp byte ptr [eax + 0x29], 0
// 004c7a27  7405                 je 0x4c7a2e
// 004c7a29  8b7b08               mov edi, dword ptr [ebx + 8]
// 004c7a2c  eb18                 jmp 0x4c7a46
// 004c7a2e  8b5308               mov edx, dword ptr [ebx + 8]
// 004c7a31  807a2900             cmp byte ptr [edx + 0x29], 0
// 004c7a35  7404                 je 0x4c7a3b
// 004c7a37  8bf8                 mov edi, eax
// 004c7a39  eb0b                 jmp 0x4c7a46
// 004c7a3b  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 004c7a3f  3beb                 cmp ebp, ebx
// 004c7a41  8b7d08               mov edi, dword ptr [ebp + 8]
// 004c7a44  756d                 jne 0x4c7ab3
// 004c7a46  807f2900             cmp byte ptr [edi + 0x29], 0
// 004c7a4a  8b7304               mov esi, dword ptr [ebx + 4]
// 004c7a4d  7503                 jne 0x4c7a52
// 004c7a4f  897704               mov dword ptr [edi + 4], esi
// 004c7a52  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c7a56  8b4104               mov eax, dword ptr [ecx + 4]
// 004c7a59  395804               cmp dword ptr [eax + 4], ebx
// 004c7a5c  7505                 jne 0x4c7a63
// 004c7a5e  897804               mov dword ptr [eax + 4], edi
// 004c7a61  eb0b                 jmp 0x4c7a6e
// 004c7a63  391e                 cmp dword ptr [esi], ebx
// 004c7a65  7504                 jne 0x4c7a6b
// 004c7a67  893e                 mov dword ptr [esi], edi
// 004c7a69  eb03                 jmp 0x4c7a6e
// 004c7a6b  897e08               mov dword ptr [esi + 8], edi
// 004c7a6e  8b6904               mov ebp, dword ptr [ecx + 4]
// 004c7a71  395d00               cmp dword ptr [ebp], ebx
// 004c7a74  7516                 jne 0x4c7a8c
// 004c7a76  807f2900             cmp byte ptr [edi + 0x29], 0
// 004c7a7a  7404                 je 0x4c7a80
// 004c7a7c  8bc6                 mov eax, esi
// 004c7a7e  eb09                 jmp 0x4c7a89
// 004c7a80  57                   push edi
// 004c7a81  e8ea0a1500           call 0x618570
// 004c7a86  83c404               add esp, 4
// 004c7a89  894500               mov dword ptr [ebp], eax
// 004c7a8c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c7a90  8b6804               mov ebp, dword ptr [eax + 4]
// 004c7a93  395d08               cmp dword ptr [ebp + 8], ebx
// 004c7a96  7577                 jne 0x4c7b0f
// 004c7a98  807f2900             cmp byte ptr [edi + 0x29], 0
// 004c7a9c  7407                 je 0x4c7aa5
// 004c7a9e  8bc6                 mov eax, esi
// 004c7aa0  894508               mov dword ptr [ebp + 8], eax
// 004c7aa3  eb6a                 jmp 0x4c7b0f
// 004c7aa5  57                   push edi
// 004c7aa6  e835ccffff           call 0x4c46e0
// 004c7aab  83c404               add esp, 4
// 004c7aae  894508               mov dword ptr [ebp + 8], eax
// 004c7ab1  eb5c                 jmp 0x4c7b0f
// 004c7ab3  896804               mov dword ptr [eax + 4], ebp
// 004c7ab6  8b0b                 mov ecx, dword ptr [ebx]
// 004c7ab8  894d00               mov dword ptr [ebp], ecx
// 004c7abb  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 004c7abe  7504                 jne 0x4c7ac4
// 004c7ac0  8bf5                 mov esi, ebp
// 004c7ac2  eb1a                 jmp 0x4c7ade
// 004c7ac4  807f2900             cmp byte ptr [edi + 0x29], 0
// 004c7ac8  8b7504               mov esi, dword ptr [ebp + 4]
// 004c7acb  7503                 jne 0x4c7ad0
// 004c7acd  897704               mov dword ptr [edi + 4], esi
// 004c7ad0  893e                 mov dword ptr [esi], edi
// 004c7ad2  8b5308               mov edx, dword ptr [ebx + 8]
// 004c7ad5  895508               mov dword ptr [ebp + 8], edx
// 004c7ad8  8b4308               mov eax, dword ptr [ebx + 8]
// 004c7adb  896804               mov dword ptr [eax + 4], ebp
// 004c7ade  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c7ae2  8b4104               mov eax, dword ptr [ecx + 4]
// 004c7ae5  395804               cmp dword ptr [eax + 4], ebx
// 004c7ae8  7505                 jne 0x4c7aef
// 004c7aea  896804               mov dword ptr [eax + 4], ebp
// 004c7aed  eb0e                 jmp 0x4c7afd
// 004c7aef  8b4304               mov eax, dword ptr [ebx + 4]
// 004c7af2  3918                 cmp dword ptr [eax], ebx
// 004c7af4  7504                 jne 0x4c7afa
// 004c7af6  8928                 mov dword ptr [eax], ebp
// 004c7af8  eb03                 jmp 0x4c7afd
// 004c7afa  896808               mov dword ptr [eax + 8], ebp
// 004c7afd  8b5304               mov edx, dword ptr [ebx + 4]
// 004c7b00  895504               mov dword ptr [ebp + 4], edx
// 004c7b03  8a4b28               mov cl, byte ptr [ebx + 0x28]
// 004c7b06  8a4528               mov al, byte ptr [ebp + 0x28]
// 004c7b09  884d28               mov byte ptr [ebp + 0x28], cl
// 004c7b0c  884328               mov byte ptr [ebx + 0x28], al
// 004c7b0f  8b542414             mov edx, dword ptr [esp + 0x14]
// 004c7b13  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004c7b17  bb01000000           mov ebx, 1
// 004c7b1c  385a28               cmp byte ptr [edx + 0x28], bl
// 004c7b1f  0f85f7000000         jne 0x4c7c1c
// 004c7b25  8b4504               mov eax, dword ptr [ebp + 4]
// 004c7b28  3b7804               cmp edi, dword ptr [eax + 4]
// 004c7b2b  0f84e8000000         je 0x4c7c19
// 004c7b31  385f28               cmp byte ptr [edi + 0x28], bl
// 004c7b34  0f85df000000         jne 0x4c7c19
// 004c7b3a  8b06                 mov eax, dword ptr [esi]
// 004c7b3c  3bf8                 cmp edi, eax
// 004c7b3e  7565                 jne 0x4c7ba5
// 004c7b40  8b4608               mov eax, dword ptr [esi + 8]
// 004c7b43  80782800             cmp byte ptr [eax + 0x28], 0
// 004c7b47  7512                 jne 0x4c7b5b
// 004c7b49  885828               mov byte ptr [eax + 0x28], bl
// 004c7b4c  56                   push esi
// 004c7b4d  8bcd                 mov ecx, ebp
// 004c7b4f  c6462800             mov byte ptr [esi + 0x28], 0
// 004c7b53  e898d0ffff           call 0x4c4bf0
// 004c7b58  8b4608               mov eax, dword ptr [esi + 8]
// 004c7b5b  80782900             cmp byte ptr [eax + 0x29], 0
// 004c7b5f  7574                 jne 0x4c7bd5
// 004c7b61  8b08                 mov ecx, dword ptr [eax]
// 004c7b63  385928               cmp byte ptr [ecx + 0x28], bl
// 004c7b66  7508                 jne 0x4c7b70
// 004c7b68  8b5008               mov edx, dword ptr [eax + 8]
// 004c7b6b  385a28               cmp byte ptr [edx + 0x28], bl
// 004c7b6e  7461                 je 0x4c7bd1
// 004c7b70  8b4808               mov ecx, dword ptr [eax + 8]
// 004c7b73  385928               cmp byte ptr [ecx + 0x28], bl
// 004c7b76  7514                 jne 0x4c7b8c
// 004c7b78  8b10                 mov edx, dword ptr [eax]
// 004c7b7a  885a28               mov byte ptr [edx + 0x28], bl
// 004c7b7d  50                   push eax
// 004c7b7e  8bcd                 mov ecx, ebp
// 004c7b80  c6402800             mov byte ptr [eax + 0x28], 0
// 004c7b84  e8f7caffff           call 0x4c4680
// 004c7b89  8b4608               mov eax, dword ptr [esi + 8]
// 004c7b8c  8a4e28               mov cl, byte ptr [esi + 0x28]
// 004c7b8f  884828               mov byte ptr [eax + 0x28], cl
// 004c7b92  885e28               mov byte ptr [esi + 0x28], bl
// 004c7b95  8b5008               mov edx, dword ptr [eax + 8]
// 004c7b98  56                   push esi
// 004c7b99  8bcd                 mov ecx, ebp
// 004c7b9b  885a28               mov byte ptr [edx + 0x28], bl
// 004c7b9e  e84dd0ffff           call 0x4c4bf0
// 004c7ba3  eb74                 jmp 0x4c7c19
// 004c7ba5  80782800             cmp byte ptr [eax + 0x28], 0
// 004c7ba9  7511                 jne 0x4c7bbc
// 004c7bab  885828               mov byte ptr [eax + 0x28], bl
// 004c7bae  56                   push esi
// 004c7baf  8bcd                 mov ecx, ebp
// 004c7bb1  c6462800             mov byte ptr [esi + 0x28], 0
// 004c7bb5  e8c6caffff           call 0x4c4680
// 004c7bba  8b06                 mov eax, dword ptr [esi]
// 004c7bbc  80782900             cmp byte ptr [eax + 0x29], 0
// 004c7bc0  7513                 jne 0x4c7bd5
// 004c7bc2  8b4808               mov ecx, dword ptr [eax + 8]
// 004c7bc5  385928               cmp byte ptr [ecx + 0x28], bl
// 004c7bc8  751e                 jne 0x4c7be8
// 004c7bca  8b10                 mov edx, dword ptr [eax]
// 004c7bcc  385a28               cmp byte ptr [edx + 0x28], bl
// 004c7bcf  7517                 jne 0x4c7be8
// 004c7bd1  c6402800             mov byte ptr [eax + 0x28], 0
// 004c7bd5  8b4504               mov eax, dword ptr [ebp + 4]
// 004c7bd8  8bfe                 mov edi, esi
// 004c7bda  3b7804               cmp edi, dword ptr [eax + 4]
// 004c7bdd  8b7604               mov esi, dword ptr [esi + 4]
// 004c7be0  0f854bffffff         jne 0x4c7b31
// 004c7be6  eb31                 jmp 0x4c7c19
// 004c7be8  8b08                 mov ecx, dword ptr [eax]
// 004c7bea  385928               cmp byte ptr [ecx + 0x28], bl
// 004c7bed  7514                 jne 0x4c7c03
// 004c7bef  8b5008               mov edx, dword ptr [eax + 8]
// 004c7bf2  885a28               mov byte ptr [edx + 0x28], bl
// 004c7bf5  50                   push eax
// 004c7bf6  8bcd                 mov ecx, ebp
// 004c7bf8  c6402800             mov byte ptr [eax + 0x28], 0
// 004c7bfc  e8efcfffff           call 0x4c4bf0
// 004c7c01  8b06                 mov eax, dword ptr [esi]
// 004c7c03  8a4e28               mov cl, byte ptr [esi + 0x28]
// 004c7c06  884828               mov byte ptr [eax + 0x28], cl
// 004c7c09  885e28               mov byte ptr [esi + 0x28], bl
// 004c7c0c  8b10                 mov edx, dword ptr [eax]
// 004c7c0e  56                   push esi
// 004c7c0f  8bcd                 mov ecx, ebp
// 004c7c11  885a28               mov byte ptr [edx + 0x28], bl
// 004c7c14  e867caffff           call 0x4c4680
// 004c7c19  885f28               mov byte ptr [edi + 0x28], bl
// 004c7c1c  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c7c20  8b4024               mov eax, dword ptr [eax + 0x24]
// 004c7c23  85c0                 test eax, eax
// 004c7c25  744c                 je 0x4c7c73
// 004c7c27  83c004               add eax, 4
// 004c7c2a  50                   push eax
// 004c7c2b  ff15a8d27700         call dword ptr [0x77d2a8]
// 004c7c31  85c0                 test eax, eax
// 004c7c33  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c7c37  7533                 jne 0x4c7c6c
// 004c7c39  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004c7c3c  8b7108               mov esi, dword ptr [ecx + 8]
// 004c7c3f  85f6                 test esi, esi
// 004c7c41  741b                 je 0x4c7c5e
// 004c7c43  8b0e                 mov ecx, dword ptr [esi]
// 004c7c45  8b11                 mov edx, dword ptr [ecx]
// 004c7c47  8b4204               mov eax, dword ptr [edx + 4]
// 004c7c4a  ffd0                 call eax
// 004c7c4c  8bc6                 mov eax, esi
// 004c7c4e  8b7604               mov esi, dword ptr [esi + 4]
// 004c7c51  50                   push eax
// 004c7c52  e899641500           call 0x61e0f0
// 004c7c57  83c404               add esp, 4
// 004c7c5a  85f6                 test esi, esi
// 004c7c5c  75e5                 jne 0x4c7c43
// 004c7c5e  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004c7c61  85c9                 test ecx, ecx
// 004c7c63  7407                 je 0x4c7c6c
// 004c7c65  8b11                 mov edx, dword ptr [ecx]
// 004c7c67  8b02                 mov eax, dword ptr [edx]
// 004c7c69  53                   push ebx
// 004c7c6a  ffd0                 call eax
// 004c7c6c  c7472400000000       mov dword ptr [edi + 0x24], 0
// 004c7c73  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c7c77  51                   push ecx
// 004c7c78  e873641500           call 0x61e0f0
// 004c7c7d  8b4508               mov eax, dword ptr [ebp + 8]
// 004c7c80  83c404               add esp, 4
// 004c7c83  85c0                 test eax, eax
// 004c7c85  7606                 jbe 0x4c7c8d
// 004c7c87  83c0ff               add eax, -1
// 004c7c8a  894508               mov dword ptr [ebp + 8], eax
// 004c7c8d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 004c7c91  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004c7c95  8b542470             mov edx, dword ptr [esp + 0x70]
// 004c7c99  5f                   pop edi
// 004c7c9a  5e                   pop esi
// 004c7c9b  894804               mov dword ptr [eax + 4], ecx
// 004c7c9e  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004c7ca2  5d                   pop ebp
// 004c7ca3  8910                 mov dword ptr [eax], edx
// 004c7ca5  5b                   pop ebx
// 004c7ca6  64890d00000000       mov dword ptr fs:[0], ecx
// 004c7cad  83c458               add esp, 0x58
// 004c7cb0  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
