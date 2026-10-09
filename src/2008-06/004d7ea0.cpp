// roc 2008-06 004d7ea0  unit: RBX::RenderBase::SimpleSceneManager  size: 796 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7ea0
//
// 004d7ea0  6aff                 push -1
// 004d7ea2  6842e87d00           push 0x7de842
// 004d7ea7  64a100000000         mov eax, dword ptr fs:[0]
// 004d7ead  50                   push eax
// 004d7eae  64892500000000       mov dword ptr fs:[0], esp
// 004d7eb5  83ec48               sub esp, 0x48
// 004d7eb8  8b442460             mov eax, dword ptr [esp + 0x60]
// 004d7ebc  80782100             cmp byte ptr [eax + 0x21], 0
// 004d7ec0  53                   push ebx
// 004d7ec1  8bd9                 mov ebx, ecx
// 004d7ec3  895c2404             mov dword ptr [esp + 4], ebx
// 004d7ec7  7459                 je 0x4d7f22
// 004d7ec9  6870b28000           push 0x80b270
// 004d7ece  8d4c240c             lea ecx, [esp + 0xc]
// 004d7ed2  ff1558248000         call dword ptr [0x802458]
// 004d7ed8  8d4c2424             lea ecx, [esp + 0x24]
// 004d7edc  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004d7ee4  ff1598288000         call dword ptr [0x802898]
// 004d7eea  8d442408             lea eax, [esp + 8]
// 004d7eee  50                   push eax
// 004d7eef  8d4c2434             lea ecx, [esp + 0x34]
// 004d7ef3  c644245801           mov byte ptr [esp + 0x58], 1
// 004d7ef8  c744242810b18000     mov dword ptr [esp + 0x28], 0x80b110
// 004d7f00  ff155c248000         call dword ptr [0x80245c]
// 004d7f06  683c0c8d00           push 0x8d0c3c
// 004d7f0b  8d4c2428             lea ecx, [esp + 0x28]
// 004d7f0f  51                   push ecx
// 004d7f10  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004d7f15  c744242c28b18000     mov dword ptr [esp + 0x2c], 0x80b128
// 004d7f1d  e86a961c00           call 0x6a158c
// 004d7f22  55                   push ebp
// 004d7f23  56                   push esi
// 004d7f24  57                   push edi
// 004d7f25  8d4c246c             lea ecx, [esp + 0x6c]
// 004d7f29  8be8                 mov ebp, eax
// 004d7f2b  e810f3ffff           call 0x4d7240
// 004d7f30  8b4d00               mov ecx, dword ptr [ebp]
// 004d7f33  80792100             cmp byte ptr [ecx + 0x21], 0
// 004d7f37  7405                 je 0x4d7f3e
// 004d7f39  8b7d08               mov edi, dword ptr [ebp + 8]
// 004d7f3c  eb1b                 jmp 0x4d7f59
// 004d7f3e  8b5508               mov edx, dword ptr [ebp + 8]
// 004d7f41  807a2100             cmp byte ptr [edx + 0x21], 0
// 004d7f45  7404                 je 0x4d7f4b
// 004d7f47  8bf9                 mov edi, ecx
// 004d7f49  eb0e                 jmp 0x4d7f59
// 004d7f4b  8b442470             mov eax, dword ptr [esp + 0x70]
// 004d7f4f  8b7808               mov edi, dword ptr [eax + 8]
// 004d7f52  8d5008               lea edx, [eax + 8]
// 004d7f55  3bc5                 cmp eax, ebp
// 004d7f57  7567                 jne 0x4d7fc0
// 004d7f59  807f2100             cmp byte ptr [edi + 0x21], 0
// 004d7f5d  8b7504               mov esi, dword ptr [ebp + 4]
// 004d7f60  7503                 jne 0x4d7f65
// 004d7f62  897704               mov dword ptr [edi + 4], esi
// 004d7f65  8b4318               mov eax, dword ptr [ebx + 0x18]
// 004d7f68  396804               cmp dword ptr [eax + 4], ebp
// 004d7f6b  7505                 jne 0x4d7f72
// 004d7f6d  897804               mov dword ptr [eax + 4], edi
// 004d7f70  eb0b                 jmp 0x4d7f7d
// 004d7f72  392e                 cmp dword ptr [esi], ebp
// 004d7f74  7504                 jne 0x4d7f7a
// 004d7f76  893e                 mov dword ptr [esi], edi
// 004d7f78  eb03                 jmp 0x4d7f7d
// 004d7f7a  897e08               mov dword ptr [esi + 8], edi
// 004d7f7d  8b5b18               mov ebx, dword ptr [ebx + 0x18]
// 004d7f80  392b                 cmp dword ptr [ebx], ebp
// 004d7f82  7515                 jne 0x4d7f99
// 004d7f84  807f2100             cmp byte ptr [edi + 0x21], 0
// 004d7f88  7404                 je 0x4d7f8e
// 004d7f8a  8bc6                 mov eax, esi
// 004d7f8c  eb09                 jmp 0x4d7f97
// 004d7f8e  57                   push edi
// 004d7f8f  e86cf2ffff           call 0x4d7200
// 004d7f94  83c404               add esp, 4
// 004d7f97  8903                 mov dword ptr [ebx], eax
// 004d7f99  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d7f9d  8b5818               mov ebx, dword ptr [eax + 0x18]
// 004d7fa0  396b08               cmp dword ptr [ebx + 8], ebp
// 004d7fa3  7578                 jne 0x4d801d
// 004d7fa5  807f2100             cmp byte ptr [edi + 0x21], 0
// 004d7fa9  7407                 je 0x4d7fb2
// 004d7fab  8bc6                 mov eax, esi
// 004d7fad  894308               mov dword ptr [ebx + 8], eax
// 004d7fb0  eb6b                 jmp 0x4d801d
// 004d7fb2  57                   push edi
// 004d7fb3  e868f2ffff           call 0x4d7220
// 004d7fb8  83c404               add esp, 4
// 004d7fbb  894308               mov dword ptr [ebx + 8], eax
// 004d7fbe  eb5d                 jmp 0x4d801d
// 004d7fc0  894104               mov dword ptr [ecx + 4], eax
// 004d7fc3  8b4d00               mov ecx, dword ptr [ebp]
// 004d7fc6  8908                 mov dword ptr [eax], ecx
// 004d7fc8  3b4508               cmp eax, dword ptr [ebp + 8]
// 004d7fcb  7504                 jne 0x4d7fd1
// 004d7fcd  8bf0                 mov esi, eax
// 004d7fcf  eb19                 jmp 0x4d7fea
// 004d7fd1  807f2100             cmp byte ptr [edi + 0x21], 0
// 004d7fd5  8b7004               mov esi, dword ptr [eax + 4]
// 004d7fd8  7503                 jne 0x4d7fdd
// 004d7fda  897704               mov dword ptr [edi + 4], esi
// 004d7fdd  893e                 mov dword ptr [esi], edi
// 004d7fdf  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004d7fe2  890a                 mov dword ptr [edx], ecx
// 004d7fe4  8b5508               mov edx, dword ptr [ebp + 8]
// 004d7fe7  894204               mov dword ptr [edx + 4], eax
// 004d7fea  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 004d7fed  396904               cmp dword ptr [ecx + 4], ebp
// 004d7ff0  7505                 jne 0x4d7ff7
// 004d7ff2  894104               mov dword ptr [ecx + 4], eax
// 004d7ff5  eb0e                 jmp 0x4d8005
// 004d7ff7  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004d7ffa  3929                 cmp dword ptr [ecx], ebp
// 004d7ffc  7504                 jne 0x4d8002
// 004d7ffe  8901                 mov dword ptr [ecx], eax
// 004d8000  eb03                 jmp 0x4d8005
// 004d8002  894108               mov dword ptr [ecx + 8], eax
// 004d8005  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004d8008  894804               mov dword ptr [eax + 4], ecx
// 004d800b  8d4d20               lea ecx, [ebp + 0x20]
// 004d800e  83c020               add eax, 0x20
// 004d8011  3bc1                 cmp eax, ecx
// 004d8013  7408                 je 0x4d801d
// 004d8015  8a19                 mov bl, byte ptr [ecx]
// 004d8017  8a10                 mov dl, byte ptr [eax]
// 004d8019  8818                 mov byte ptr [eax], bl
// 004d801b  8811                 mov byte ptr [ecx], dl
// 004d801d  bb01000000           mov ebx, 1
// 004d8022  385d20               cmp byte ptr [ebp + 0x20], bl
// 004d8025  0f8504010000         jne 0x4d812f
// 004d802b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d802f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004d8032  3b7a04               cmp edi, dword ptr [edx + 4]
// 004d8035  0f84f1000000         je 0x4d812c
// 004d803b  eb03                 jmp 0x4d8040
// 004d803d  8d4900               lea ecx, [ecx]
// 004d8040  385f20               cmp byte ptr [edi + 0x20], bl
// 004d8043  0f85e3000000         jne 0x4d812c
// 004d8049  8b06                 mov eax, dword ptr [esi]
// 004d804b  3bf8                 cmp edi, eax
// 004d804d  7567                 jne 0x4d80b6
// 004d804f  8b4608               mov eax, dword ptr [esi + 8]
// 004d8052  80782000             cmp byte ptr [eax + 0x20], 0
// 004d8056  7514                 jne 0x4d806c
// 004d8058  885820               mov byte ptr [eax + 0x20], bl
// 004d805b  56                   push esi
// 004d805c  c6462000             mov byte ptr [esi + 0x20], 0
// 004d8060  e88bf5ffff           call 0x4d75f0
// 004d8065  8b4608               mov eax, dword ptr [esi + 8]
// 004d8068  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d806c  80782100             cmp byte ptr [eax + 0x21], 0
// 004d8070  7576                 jne 0x4d80e8
// 004d8072  8b10                 mov edx, dword ptr [eax]
// 004d8074  385a20               cmp byte ptr [edx + 0x20], bl
// 004d8077  7508                 jne 0x4d8081
// 004d8079  8b5008               mov edx, dword ptr [eax + 8]
// 004d807c  385a20               cmp byte ptr [edx + 0x20], bl
// 004d807f  7463                 je 0x4d80e4
// 004d8081  8b5008               mov edx, dword ptr [eax + 8]
// 004d8084  385a20               cmp byte ptr [edx + 0x20], bl
// 004d8087  7516                 jne 0x4d809f
// 004d8089  8b10                 mov edx, dword ptr [eax]
// 004d808b  885a20               mov byte ptr [edx + 0x20], bl
// 004d808e  50                   push eax
// 004d808f  c6402000             mov byte ptr [eax + 0x20], 0
// 004d8093  e828ae0d00           call 0x5b2ec0
// 004d8098  8b4608               mov eax, dword ptr [esi + 8]
// 004d809b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d809f  8a5620               mov dl, byte ptr [esi + 0x20]
// 004d80a2  885020               mov byte ptr [eax + 0x20], dl
// 004d80a5  885e20               mov byte ptr [esi + 0x20], bl
// 004d80a8  8b4008               mov eax, dword ptr [eax + 8]
// 004d80ab  56                   push esi
// 004d80ac  885820               mov byte ptr [eax + 0x20], bl
// 004d80af  e83cf5ffff           call 0x4d75f0
// 004d80b4  eb76                 jmp 0x4d812c
// 004d80b6  80782000             cmp byte ptr [eax + 0x20], 0
// 004d80ba  7513                 jne 0x4d80cf
// 004d80bc  885820               mov byte ptr [eax + 0x20], bl
// 004d80bf  56                   push esi
// 004d80c0  c6462000             mov byte ptr [esi + 0x20], 0
// 004d80c4  e8f7ad0d00           call 0x5b2ec0
// 004d80c9  8b06                 mov eax, dword ptr [esi]
// 004d80cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d80cf  80782100             cmp byte ptr [eax + 0x21], 0
// 004d80d3  7513                 jne 0x4d80e8
// 004d80d5  8b5008               mov edx, dword ptr [eax + 8]
// 004d80d8  385a20               cmp byte ptr [edx + 0x20], bl
// 004d80db  751e                 jne 0x4d80fb
// 004d80dd  8b10                 mov edx, dword ptr [eax]
// 004d80df  385a20               cmp byte ptr [edx + 0x20], bl
// 004d80e2  7517                 jne 0x4d80fb
// 004d80e4  c6402000             mov byte ptr [eax + 0x20], 0
// 004d80e8  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004d80eb  8bfe                 mov edi, esi
// 004d80ed  8b7604               mov esi, dword ptr [esi + 4]
// 004d80f0  3b7804               cmp edi, dword ptr [eax + 4]
// 004d80f3  0f8547ffffff         jne 0x4d8040
// 004d80f9  eb31                 jmp 0x4d812c
// 004d80fb  8b10                 mov edx, dword ptr [eax]
// 004d80fd  385a20               cmp byte ptr [edx + 0x20], bl
// 004d8100  7516                 jne 0x4d8118
// 004d8102  8b5008               mov edx, dword ptr [eax + 8]
// 004d8105  885a20               mov byte ptr [edx + 0x20], bl
// 004d8108  50                   push eax
// 004d8109  c6402000             mov byte ptr [eax + 0x20], 0
// 004d810d  e8def4ffff           call 0x4d75f0
// 004d8112  8b06                 mov eax, dword ptr [esi]
// 004d8114  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d8118  8a5620               mov dl, byte ptr [esi + 0x20]
// 004d811b  885020               mov byte ptr [eax + 0x20], dl
// 004d811e  885e20               mov byte ptr [esi + 0x20], bl
// 004d8121  8b00                 mov eax, dword ptr [eax]
// 004d8123  56                   push esi
// 004d8124  885820               mov byte ptr [eax + 0x20], bl
// 004d8127  e894ad0d00           call 0x5b2ec0
// 004d812c  885f20               mov byte ptr [edi + 0x20], bl
// 004d812f  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 004d8132  85c0                 test eax, eax
// 004d8134  744a                 je 0x4d8180
// 004d8136  83c004               add eax, 4
// 004d8139  50                   push eax
// 004d813a  ff15ac218000         call dword ptr [0x8021ac]
// 004d8140  85c0                 test eax, eax
// 004d8142  7535                 jne 0x4d8179
// 004d8144  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 004d8147  8b7108               mov esi, dword ptr [ecx + 8]
// 004d814a  85f6                 test esi, esi
// 004d814c  741d                 je 0x4d816b
// 004d814e  8bff                 mov edi, edi
// 004d8150  8b0e                 mov ecx, dword ptr [esi]
// 004d8152  8b11                 mov edx, dword ptr [ecx]
// 004d8154  8b4204               mov eax, dword ptr [edx + 4]
// 004d8157  ffd0                 call eax
// 004d8159  8bc6                 mov eax, esi
// 004d815b  8b7604               mov esi, dword ptr [esi + 4]
// 004d815e  50                   push eax
// 004d815f  e816851c00           call 0x6a067a
// 004d8164  83c404               add esp, 4
// 004d8167  85f6                 test esi, esi
// 004d8169  75e5                 jne 0x4d8150
// 004d816b  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 004d816e  85c9                 test ecx, ecx
// 004d8170  7407                 je 0x4d8179
// 004d8172  8b11                 mov edx, dword ptr [ecx]
// 004d8174  8b02                 mov eax, dword ptr [edx]
// 004d8176  53                   push ebx
// 004d8177  ffd0                 call eax
// 004d8179  c7451c00000000       mov dword ptr [ebp + 0x1c], 0
// 004d8180  55                   push ebp
// 004d8181  e8f4841c00           call 0x6a067a
// 004d8186  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d818a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 004d818d  83c404               add esp, 4
// 004d8190  5f                   pop edi
// 004d8191  5e                   pop esi
// 004d8192  5d                   pop ebp
// 004d8193  85c0                 test eax, eax
// 004d8195  7604                 jbe 0x4d819b
// 004d8197  48                   dec eax
// 004d8198  89421c               mov dword ptr [edx + 0x1c], eax
// 004d819b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004d819f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004d81a3  8b12                 mov edx, dword ptr [edx]
// 004d81a5  894804               mov dword ptr [eax + 4], ecx
// 004d81a8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004d81ac  8910                 mov dword ptr [eax], edx
// 004d81ae  5b                   pop ebx
// 004d81af  64890d00000000       mov dword ptr fs:[0], ecx
// 004d81b6  83c454               add esp, 0x54
// 004d81b9  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
