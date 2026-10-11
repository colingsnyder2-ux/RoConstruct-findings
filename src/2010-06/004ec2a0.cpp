// roc 2010-06 004ec2a0  unit: RBX::Network::DirectPhysicsReceiver  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ec2a0
//
// 004ec2a0  64a100000000         mov eax, dword ptr fs:[0]
// 004ec2a6  6aff                 push -1
// 004ec2a8  68e22f9a00           push 0x9a2fe2
// 004ec2ad  50                   push eax
// 004ec2ae  64892500000000       mov dword ptr fs:[0], esp
// 004ec2b5  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ec2b9  83ec48               sub esp, 0x48
// 004ec2bc  80781900             cmp byte ptr [eax + 0x19], 0
// 004ec2c0  55                   push ebp
// 004ec2c1  8be9                 mov ebp, ecx
// 004ec2c3  7459                 je 0x4ec31e
// 004ec2c5  688c00a000           push 0xa0008c
// 004ec2ca  8d4c240c             lea ecx, [esp + 0xc]
// 004ec2ce  ff1510a49e00         call dword ptr [0x9ea410]
// 004ec2d4  8d4c2424             lea ecx, [esp + 0x24]
// 004ec2d8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004ec2e0  ff1518a99e00         call dword ptr [0x9ea918]
// 004ec2e6  8d442408             lea eax, [esp + 8]
// 004ec2ea  50                   push eax
// 004ec2eb  8d4c2434             lea ecx, [esp + 0x34]
// 004ec2ef  c644245801           mov byte ptr [esp + 0x58], 1
// 004ec2f4  c74424282c00a000     mov dword ptr [esp + 0x28], 0xa0002c
// 004ec2fc  ff150ca49e00         call dword ptr [0x9ea40c]
// 004ec302  68081bb000           push 0xb01b08
// 004ec307  8d4c2428             lea ecx, [esp + 0x28]
// 004ec30b  51                   push ecx
// 004ec30c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004ec311  c744242c4400a000     mov dword ptr [esp + 0x2c], 0xa00044
// 004ec319  e894c62b00           call 0x7a89b2
// 004ec31e  53                   push ebx
// 004ec31f  56                   push esi
// 004ec320  8bd8                 mov ebx, eax
// 004ec322  57                   push edi
// 004ec323  8d4c246c             lea ecx, [esp + 0x6c]
// 004ec327  895c2410             mov dword ptr [esp + 0x10], ebx
// 004ec32b  e800a7ffff           call 0x4e6a30
// 004ec330  8b0b                 mov ecx, dword ptr [ebx]
// 004ec332  80791900             cmp byte ptr [ecx + 0x19], 0
// 004ec336  7405                 je 0x4ec33d
// 004ec338  8b7b08               mov edi, dword ptr [ebx + 8]
// 004ec33b  eb1b                 jmp 0x4ec358
// 004ec33d  8b5308               mov edx, dword ptr [ebx + 8]
// 004ec340  807a1900             cmp byte ptr [edx + 0x19], 0
// 004ec344  7404                 je 0x4ec34a
// 004ec346  8bf9                 mov edi, ecx
// 004ec348  eb0e                 jmp 0x4ec358
// 004ec34a  8b442470             mov eax, dword ptr [esp + 0x70]
// 004ec34e  8b7808               mov edi, dword ptr [eax + 8]
// 004ec351  8d5008               lea edx, [eax + 8]
// 004ec354  3bc3                 cmp eax, ebx
// 004ec356  756b                 jne 0x4ec3c3
// 004ec358  807f1900             cmp byte ptr [edi + 0x19], 0
// 004ec35c  8b7304               mov esi, dword ptr [ebx + 4]
// 004ec35f  7503                 jne 0x4ec364
// 004ec361  897704               mov dword ptr [edi + 4], esi
// 004ec364  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004ec367  395804               cmp dword ptr [eax + 4], ebx
// 004ec36a  7505                 jne 0x4ec371
// 004ec36c  897804               mov dword ptr [eax + 4], edi
// 004ec36f  eb0b                 jmp 0x4ec37c
// 004ec371  391e                 cmp dword ptr [esi], ebx
// 004ec373  7504                 jne 0x4ec379
// 004ec375  893e                 mov dword ptr [esi], edi
// 004ec377  eb03                 jmp 0x4ec37c
// 004ec379  897e08               mov dword ptr [esi + 8], edi
// 004ec37c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 004ec37f  8b03                 mov eax, dword ptr [ebx]
// 004ec381  3b442410             cmp eax, dword ptr [esp + 0x10]
// 004ec385  7515                 jne 0x4ec39c
// 004ec387  807f1900             cmp byte ptr [edi + 0x19], 0
// 004ec38b  7404                 je 0x4ec391
// 004ec38d  8bc6                 mov eax, esi
// 004ec38f  eb09                 jmp 0x4ec39a
// 004ec391  57                   push edi
// 004ec392  e8f996ffff           call 0x4e5a90
// 004ec397  83c404               add esp, 4
// 004ec39a  8903                 mov dword ptr [ebx], eax
// 004ec39c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 004ec39f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ec3a3  394b08               cmp dword ptr [ebx + 8], ecx
// 004ec3a6  7577                 jne 0x4ec41f
// 004ec3a8  807f1900             cmp byte ptr [edi + 0x19], 0
// 004ec3ac  7407                 je 0x4ec3b5
// 004ec3ae  8bc6                 mov eax, esi
// 004ec3b0  894308               mov dword ptr [ebx + 8], eax
// 004ec3b3  eb6a                 jmp 0x4ec41f
// 004ec3b5  57                   push edi
// 004ec3b6  e855621000           call 0x5f2610
// 004ec3bb  83c404               add esp, 4
// 004ec3be  894308               mov dword ptr [ebx + 8], eax
// 004ec3c1  eb5c                 jmp 0x4ec41f
// 004ec3c3  894104               mov dword ptr [ecx + 4], eax
// 004ec3c6  8b0b                 mov ecx, dword ptr [ebx]
// 004ec3c8  8908                 mov dword ptr [eax], ecx
// 004ec3ca  3b4308               cmp eax, dword ptr [ebx + 8]
// 004ec3cd  7504                 jne 0x4ec3d3
// 004ec3cf  8bf0                 mov esi, eax
// 004ec3d1  eb19                 jmp 0x4ec3ec
// 004ec3d3  807f1900             cmp byte ptr [edi + 0x19], 0
// 004ec3d7  8b7004               mov esi, dword ptr [eax + 4]
// 004ec3da  7503                 jne 0x4ec3df
// 004ec3dc  897704               mov dword ptr [edi + 4], esi
// 004ec3df  893e                 mov dword ptr [esi], edi
// 004ec3e1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004ec3e4  890a                 mov dword ptr [edx], ecx
// 004ec3e6  8b5308               mov edx, dword ptr [ebx + 8]
// 004ec3e9  894204               mov dword ptr [edx + 4], eax
// 004ec3ec  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 004ec3ef  395904               cmp dword ptr [ecx + 4], ebx
// 004ec3f2  7505                 jne 0x4ec3f9
// 004ec3f4  894104               mov dword ptr [ecx + 4], eax
// 004ec3f7  eb0e                 jmp 0x4ec407
// 004ec3f9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004ec3fc  3919                 cmp dword ptr [ecx], ebx
// 004ec3fe  7504                 jne 0x4ec404
// 004ec400  8901                 mov dword ptr [ecx], eax
// 004ec402  eb03                 jmp 0x4ec407
// 004ec404  894108               mov dword ptr [ecx + 8], eax
// 004ec407  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004ec40a  894804               mov dword ptr [eax + 4], ecx
// 004ec40d  8d4b18               lea ecx, [ebx + 0x18]
// 004ec410  83c018               add eax, 0x18
// 004ec413  3bc1                 cmp eax, ecx
// 004ec415  7408                 je 0x4ec41f
// 004ec417  8a19                 mov bl, byte ptr [ecx]
// 004ec419  8a10                 mov dl, byte ptr [eax]
// 004ec41b  8818                 mov byte ptr [eax], bl
// 004ec41d  8811                 mov byte ptr [ecx], dl
// 004ec41f  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ec423  b301                 mov bl, 1
// 004ec425  385a18               cmp byte ptr [edx + 0x18], bl
// 004ec428  0f85fd000000         jne 0x4ec52b
// 004ec42e  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004ec431  3b7804               cmp edi, dword ptr [eax + 4]
// 004ec434  0f84ee000000         je 0x4ec528
// 004ec43a  8d9b00000000         lea ebx, [ebx]
// 004ec440  385f18               cmp byte ptr [edi + 0x18], bl
// 004ec443  0f85df000000         jne 0x4ec528
// 004ec449  8b06                 mov eax, dword ptr [esi]
// 004ec44b  3bf8                 cmp edi, eax
// 004ec44d  7565                 jne 0x4ec4b4
// 004ec44f  8b4608               mov eax, dword ptr [esi + 8]
// 004ec452  80781800             cmp byte ptr [eax + 0x18], 0
// 004ec456  7512                 jne 0x4ec46a
// 004ec458  885818               mov byte ptr [eax + 0x18], bl
// 004ec45b  56                   push esi
// 004ec45c  8bcd                 mov ecx, ebp
// 004ec45e  c6461800             mov byte ptr [esi + 0x18], 0
// 004ec462  e879a4ffff           call 0x4e68e0
// 004ec467  8b4608               mov eax, dword ptr [esi + 8]
// 004ec46a  80781900             cmp byte ptr [eax + 0x19], 0
// 004ec46e  7574                 jne 0x4ec4e4
// 004ec470  8b08                 mov ecx, dword ptr [eax]
// 004ec472  385918               cmp byte ptr [ecx + 0x18], bl
// 004ec475  7508                 jne 0x4ec47f
// 004ec477  8b5008               mov edx, dword ptr [eax + 8]
// 004ec47a  385a18               cmp byte ptr [edx + 0x18], bl
// 004ec47d  7461                 je 0x4ec4e0
// 004ec47f  8b4808               mov ecx, dword ptr [eax + 8]
// 004ec482  385918               cmp byte ptr [ecx + 0x18], bl
// 004ec485  7514                 jne 0x4ec49b
// 004ec487  8b10                 mov edx, dword ptr [eax]
// 004ec489  885a18               mov byte ptr [edx + 0x18], bl
// 004ec48c  50                   push eax
// 004ec48d  8bcd                 mov ecx, ebp
// 004ec48f  c6401800             mov byte ptr [eax + 0x18], 0
// 004ec493  e818611000           call 0x5f25b0
// 004ec498  8b4608               mov eax, dword ptr [esi + 8]
// 004ec49b  8a4e18               mov cl, byte ptr [esi + 0x18]
// 004ec49e  884818               mov byte ptr [eax + 0x18], cl
// 004ec4a1  885e18               mov byte ptr [esi + 0x18], bl
// 004ec4a4  8b5008               mov edx, dword ptr [eax + 8]
// 004ec4a7  56                   push esi
// 004ec4a8  8bcd                 mov ecx, ebp
// 004ec4aa  885a18               mov byte ptr [edx + 0x18], bl
// 004ec4ad  e82ea4ffff           call 0x4e68e0
// 004ec4b2  eb74                 jmp 0x4ec528
// 004ec4b4  80781800             cmp byte ptr [eax + 0x18], 0
// 004ec4b8  7511                 jne 0x4ec4cb
// 004ec4ba  885818               mov byte ptr [eax + 0x18], bl
// 004ec4bd  56                   push esi
// 004ec4be  8bcd                 mov ecx, ebp
// 004ec4c0  c6461800             mov byte ptr [esi + 0x18], 0
// 004ec4c4  e8e7601000           call 0x5f25b0
// 004ec4c9  8b06                 mov eax, dword ptr [esi]
// 004ec4cb  80781900             cmp byte ptr [eax + 0x19], 0
// 004ec4cf  7513                 jne 0x4ec4e4
// 004ec4d1  8b4808               mov ecx, dword ptr [eax + 8]
// 004ec4d4  385918               cmp byte ptr [ecx + 0x18], bl
// 004ec4d7  751e                 jne 0x4ec4f7
// 004ec4d9  8b10                 mov edx, dword ptr [eax]
// 004ec4db  385a18               cmp byte ptr [edx + 0x18], bl
// 004ec4de  7517                 jne 0x4ec4f7
// 004ec4e0  c6401800             mov byte ptr [eax + 0x18], 0
// 004ec4e4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004ec4e7  8bfe                 mov edi, esi
// 004ec4e9  8b7604               mov esi, dword ptr [esi + 4]
// 004ec4ec  3b7804               cmp edi, dword ptr [eax + 4]
// 004ec4ef  0f854bffffff         jne 0x4ec440
// 004ec4f5  eb31                 jmp 0x4ec528
// 004ec4f7  8b08                 mov ecx, dword ptr [eax]
// 004ec4f9  385918               cmp byte ptr [ecx + 0x18], bl
// 004ec4fc  7514                 jne 0x4ec512
// 004ec4fe  8b5008               mov edx, dword ptr [eax + 8]
// 004ec501  885a18               mov byte ptr [edx + 0x18], bl
// 004ec504  50                   push eax
// 004ec505  8bcd                 mov ecx, ebp
// 004ec507  c6401800             mov byte ptr [eax + 0x18], 0
// 004ec50b  e8d0a3ffff           call 0x4e68e0
// 004ec510  8b06                 mov eax, dword ptr [esi]
// 004ec512  8a4e18               mov cl, byte ptr [esi + 0x18]
// 004ec515  884818               mov byte ptr [eax + 0x18], cl
// 004ec518  885e18               mov byte ptr [esi + 0x18], bl
// 004ec51b  8b10                 mov edx, dword ptr [eax]
// 004ec51d  56                   push esi
// 004ec51e  8bcd                 mov ecx, ebp
// 004ec520  885a18               mov byte ptr [edx + 0x18], bl
// 004ec523  e888601000           call 0x5f25b0
// 004ec528  885f18               mov byte ptr [edi + 0x18], bl
// 004ec52b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ec52f  8b7014               mov esi, dword ptr [eax + 0x14]
// 004ec532  85f6                 test esi, esi
// 004ec534  742a                 je 0x4ec560
// 004ec536  8d4e04               lea ecx, [esi + 4]
// 004ec539  83caff               or edx, 0xffffffff
// 004ec53c  f00fc111             lock xadd dword ptr [ecx], edx
// 004ec540  751e                 jne 0x4ec560
// 004ec542  8b06                 mov eax, dword ptr [esi]
// 004ec544  8b5004               mov edx, dword ptr [eax + 4]
// 004ec547  8bce                 mov ecx, esi
// 004ec549  ffd2                 call edx
// 004ec54b  8d4608               lea eax, [esi + 8]
// 004ec54e  83c9ff               or ecx, 0xffffffff
// 004ec551  f00fc108             lock xadd dword ptr [eax], ecx
// 004ec555  7509                 jne 0x4ec560
// 004ec557  8b16                 mov edx, dword ptr [esi]
// 004ec559  8b4208               mov eax, dword ptr [edx + 8]
// 004ec55c  8bce                 mov ecx, esi
// 004ec55e  ffd0                 call eax
// 004ec560  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ec564  51                   push ecx
// 004ec565  e830b42b00           call 0x7a799a
// 004ec56a  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 004ec56d  83c404               add esp, 4
// 004ec570  5f                   pop edi
// 004ec571  5e                   pop esi
// 004ec572  5b                   pop ebx
// 004ec573  85c0                 test eax, eax
// 004ec575  7604                 jbe 0x4ec57b
// 004ec577  48                   dec eax
// 004ec578  89451c               mov dword ptr [ebp + 0x1c], eax
// 004ec57b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004ec57f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004ec583  8b5500               mov edx, dword ptr [ebp]
// 004ec586  894804               mov dword ptr [eax + 4], ecx
// 004ec589  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004ec58d  8910                 mov dword ptr [eax], edx
// 004ec58f  5d                   pop ebp
// 004ec590  64890d00000000       mov dword ptr fs:[0], ecx
// 004ec597  83c454               add esp, 0x54
// 004ec59a  c20c00               ret 0xc
// library openrbx-client/App\reflection\signal.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
