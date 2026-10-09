// roc 2010-06 00530230  unit: RBX::PartChunk  size: 796 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00530230
//
// 00530230  6aff                 push -1
// 00530232  68e22f9a00           push 0x9a2fe2
// 00530237  64a100000000         mov eax, dword ptr fs:[0]
// 0053023d  50                   push eax
// 0053023e  64892500000000       mov dword ptr fs:[0], esp
// 00530245  83ec48               sub esp, 0x48
// 00530248  8b442460             mov eax, dword ptr [esp + 0x60]
// 0053024c  80782900             cmp byte ptr [eax + 0x29], 0
// 00530250  53                   push ebx
// 00530251  8bd9                 mov ebx, ecx
// 00530253  895c2404             mov dword ptr [esp + 4], ebx
// 00530257  7459                 je 0x5302b2
// 00530259  688c00a000           push 0xa0008c
// 0053025e  8d4c240c             lea ecx, [esp + 0xc]
// 00530262  ff1510a49e00         call dword ptr [0x9ea410]
// 00530268  8d4c2424             lea ecx, [esp + 0x24]
// 0053026c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00530274  ff1518a99e00         call dword ptr [0x9ea918]
// 0053027a  8d442408             lea eax, [esp + 8]
// 0053027e  50                   push eax
// 0053027f  8d4c2434             lea ecx, [esp + 0x34]
// 00530283  c644245801           mov byte ptr [esp + 0x58], 1
// 00530288  c74424282c00a000     mov dword ptr [esp + 0x28], 0xa0002c
// 00530290  ff150ca49e00         call dword ptr [0x9ea40c]
// 00530296  68081bb000           push 0xb01b08
// 0053029b  8d4c2428             lea ecx, [esp + 0x28]
// 0053029f  51                   push ecx
// 005302a0  c644245c00           mov byte ptr [esp + 0x5c], 0
// 005302a5  c744242c4400a000     mov dword ptr [esp + 0x2c], 0xa00044
// 005302ad  e800872700           call 0x7a89b2
// 005302b2  55                   push ebp
// 005302b3  56                   push esi
// 005302b4  57                   push edi
// 005302b5  8d4c246c             lea ecx, [esp + 0x6c]
// 005302b9  8be8                 mov ebp, eax
// 005302bb  e8f0f22300           call 0x76f5b0
// 005302c0  8b4d00               mov ecx, dword ptr [ebp]
// 005302c3  80792900             cmp byte ptr [ecx + 0x29], 0
// 005302c7  7405                 je 0x5302ce
// 005302c9  8b7d08               mov edi, dword ptr [ebp + 8]
// 005302cc  eb1b                 jmp 0x5302e9
// 005302ce  8b5508               mov edx, dword ptr [ebp + 8]
// 005302d1  807a2900             cmp byte ptr [edx + 0x29], 0
// 005302d5  7404                 je 0x5302db
// 005302d7  8bf9                 mov edi, ecx
// 005302d9  eb0e                 jmp 0x5302e9
// 005302db  8b442470             mov eax, dword ptr [esp + 0x70]
// 005302df  8b7808               mov edi, dword ptr [eax + 8]
// 005302e2  8d5008               lea edx, [eax + 8]
// 005302e5  3bc5                 cmp eax, ebp
// 005302e7  7567                 jne 0x530350
// 005302e9  807f2900             cmp byte ptr [edi + 0x29], 0
// 005302ed  8b7504               mov esi, dword ptr [ebp + 4]
// 005302f0  7503                 jne 0x5302f5
// 005302f2  897704               mov dword ptr [edi + 4], esi
// 005302f5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005302f8  396804               cmp dword ptr [eax + 4], ebp
// 005302fb  7505                 jne 0x530302
// 005302fd  897804               mov dword ptr [eax + 4], edi
// 00530300  eb0b                 jmp 0x53030d
// 00530302  392e                 cmp dword ptr [esi], ebp
// 00530304  7504                 jne 0x53030a
// 00530306  893e                 mov dword ptr [esi], edi
// 00530308  eb03                 jmp 0x53030d
// 0053030a  897e08               mov dword ptr [esi + 8], edi
// 0053030d  8b5b18               mov ebx, dword ptr [ebx + 0x18]
// 00530310  392b                 cmp dword ptr [ebx], ebp
// 00530312  7515                 jne 0x530329
// 00530314  807f2900             cmp byte ptr [edi + 0x29], 0
// 00530318  7404                 je 0x53031e
// 0053031a  8bc6                 mov eax, esi
// 0053031c  eb09                 jmp 0x530327
// 0053031e  57                   push edi
// 0053031f  e80c68ffff           call 0x526b30
// 00530324  83c404               add esp, 4
// 00530327  8903                 mov dword ptr [ebx], eax
// 00530329  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053032d  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00530330  396b08               cmp dword ptr [ebx + 8], ebp
// 00530333  7578                 jne 0x5303ad
// 00530335  807f2900             cmp byte ptr [edi + 0x29], 0
// 00530339  7407                 je 0x530342
// 0053033b  8bc6                 mov eax, esi
// 0053033d  894308               mov dword ptr [ebx + 8], eax
// 00530340  eb6b                 jmp 0x5303ad
// 00530342  57                   push edi
// 00530343  e848c2ffff           call 0x52c590
// 00530348  83c404               add esp, 4
// 0053034b  894308               mov dword ptr [ebx + 8], eax
// 0053034e  eb5d                 jmp 0x5303ad
// 00530350  894104               mov dword ptr [ecx + 4], eax
// 00530353  8b4d00               mov ecx, dword ptr [ebp]
// 00530356  8908                 mov dword ptr [eax], ecx
// 00530358  3b4508               cmp eax, dword ptr [ebp + 8]
// 0053035b  7504                 jne 0x530361
// 0053035d  8bf0                 mov esi, eax
// 0053035f  eb19                 jmp 0x53037a
// 00530361  807f2900             cmp byte ptr [edi + 0x29], 0
// 00530365  8b7004               mov esi, dword ptr [eax + 4]
// 00530368  7503                 jne 0x53036d
// 0053036a  897704               mov dword ptr [edi + 4], esi
// 0053036d  893e                 mov dword ptr [esi], edi
// 0053036f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00530372  890a                 mov dword ptr [edx], ecx
// 00530374  8b5508               mov edx, dword ptr [ebp + 8]
// 00530377  894204               mov dword ptr [edx + 4], eax
// 0053037a  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0053037d  396904               cmp dword ptr [ecx + 4], ebp
// 00530380  7505                 jne 0x530387
// 00530382  894104               mov dword ptr [ecx + 4], eax
// 00530385  eb0e                 jmp 0x530395
// 00530387  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0053038a  3929                 cmp dword ptr [ecx], ebp
// 0053038c  7504                 jne 0x530392
// 0053038e  8901                 mov dword ptr [ecx], eax
// 00530390  eb03                 jmp 0x530395
// 00530392  894108               mov dword ptr [ecx + 8], eax
// 00530395  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00530398  894804               mov dword ptr [eax + 4], ecx
// 0053039b  8d4d28               lea ecx, [ebp + 0x28]
// 0053039e  83c028               add eax, 0x28
// 005303a1  3bc1                 cmp eax, ecx
// 005303a3  7408                 je 0x5303ad
// 005303a5  8a19                 mov bl, byte ptr [ecx]
// 005303a7  8a10                 mov dl, byte ptr [eax]
// 005303a9  8818                 mov byte ptr [eax], bl
// 005303ab  8811                 mov byte ptr [ecx], dl
// 005303ad  bb01000000           mov ebx, 1
// 005303b2  385d28               cmp byte ptr [ebp + 0x28], bl
// 005303b5  0f8504010000         jne 0x5304bf
// 005303bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005303bf  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005303c2  3b7a04               cmp edi, dword ptr [edx + 4]
// 005303c5  0f84f1000000         je 0x5304bc
// 005303cb  eb03                 jmp 0x5303d0
// 005303cd  8d4900               lea ecx, [ecx]
// 005303d0  385f28               cmp byte ptr [edi + 0x28], bl
// 005303d3  0f85e3000000         jne 0x5304bc
// 005303d9  8b06                 mov eax, dword ptr [esi]
// 005303db  3bf8                 cmp edi, eax
// 005303dd  7567                 jne 0x530446
// 005303df  8b4608               mov eax, dword ptr [esi + 8]
// 005303e2  80782800             cmp byte ptr [eax + 0x28], 0
// 005303e6  7514                 jne 0x5303fc
// 005303e8  885828               mov byte ptr [eax + 0x28], bl
// 005303eb  56                   push esi
// 005303ec  c6462800             mov byte ptr [esi + 0x28], 0
// 005303f0  e8db6bffff           call 0x526fd0
// 005303f5  8b4608               mov eax, dword ptr [esi + 8]
// 005303f8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005303fc  80782900             cmp byte ptr [eax + 0x29], 0
// 00530400  7576                 jne 0x530478
// 00530402  8b10                 mov edx, dword ptr [eax]
// 00530404  385a28               cmp byte ptr [edx + 0x28], bl
// 00530407  7508                 jne 0x530411
// 00530409  8b5008               mov edx, dword ptr [eax + 8]
// 0053040c  385a28               cmp byte ptr [edx + 0x28], bl
// 0053040f  7463                 je 0x530474
// 00530411  8b5008               mov edx, dword ptr [eax + 8]
// 00530414  385a28               cmp byte ptr [edx + 0x28], bl
// 00530417  7516                 jne 0x53042f
// 00530419  8b10                 mov edx, dword ptr [eax]
// 0053041b  885a28               mov byte ptr [edx + 0x28], bl
// 0053041e  50                   push eax
// 0053041f  c6402800             mov byte ptr [eax + 0x28], 0
// 00530423  e8486bffff           call 0x526f70
// 00530428  8b4608               mov eax, dword ptr [esi + 8]
// 0053042b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053042f  8a5628               mov dl, byte ptr [esi + 0x28]
// 00530432  885028               mov byte ptr [eax + 0x28], dl
// 00530435  885e28               mov byte ptr [esi + 0x28], bl
// 00530438  8b4008               mov eax, dword ptr [eax + 8]
// 0053043b  56                   push esi
// 0053043c  885828               mov byte ptr [eax + 0x28], bl
// 0053043f  e88c6bffff           call 0x526fd0
// 00530444  eb76                 jmp 0x5304bc
// 00530446  80782800             cmp byte ptr [eax + 0x28], 0
// 0053044a  7513                 jne 0x53045f
// 0053044c  885828               mov byte ptr [eax + 0x28], bl
// 0053044f  56                   push esi
// 00530450  c6462800             mov byte ptr [esi + 0x28], 0
// 00530454  e8176bffff           call 0x526f70
// 00530459  8b06                 mov eax, dword ptr [esi]
// 0053045b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053045f  80782900             cmp byte ptr [eax + 0x29], 0
// 00530463  7513                 jne 0x530478
// 00530465  8b5008               mov edx, dword ptr [eax + 8]
// 00530468  385a28               cmp byte ptr [edx + 0x28], bl
// 0053046b  751e                 jne 0x53048b
// 0053046d  8b10                 mov edx, dword ptr [eax]
// 0053046f  385a28               cmp byte ptr [edx + 0x28], bl
// 00530472  7517                 jne 0x53048b
// 00530474  c6402800             mov byte ptr [eax + 0x28], 0
// 00530478  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0053047b  8bfe                 mov edi, esi
// 0053047d  8b7604               mov esi, dword ptr [esi + 4]
// 00530480  3b7804               cmp edi, dword ptr [eax + 4]
// 00530483  0f8547ffffff         jne 0x5303d0
// 00530489  eb31                 jmp 0x5304bc
// 0053048b  8b10                 mov edx, dword ptr [eax]
// 0053048d  385a28               cmp byte ptr [edx + 0x28], bl
// 00530490  7516                 jne 0x5304a8
// 00530492  8b5008               mov edx, dword ptr [eax + 8]
// 00530495  885a28               mov byte ptr [edx + 0x28], bl
// 00530498  50                   push eax
// 00530499  c6402800             mov byte ptr [eax + 0x28], 0
// 0053049d  e82e6bffff           call 0x526fd0
// 005304a2  8b06                 mov eax, dword ptr [esi]
// 005304a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005304a8  8a5628               mov dl, byte ptr [esi + 0x28]
// 005304ab  885028               mov byte ptr [eax + 0x28], dl
// 005304ae  885e28               mov byte ptr [esi + 0x28], bl
// 005304b1  8b00                 mov eax, dword ptr [eax]
// 005304b3  56                   push esi
// 005304b4  885828               mov byte ptr [eax + 0x28], bl
// 005304b7  e8b46affff           call 0x526f70
// 005304bc  885f28               mov byte ptr [edi + 0x28], bl
// 005304bf  8b4524               mov eax, dword ptr [ebp + 0x24]
// 005304c2  85c0                 test eax, eax
// 005304c4  744a                 je 0x530510
// 005304c6  83c004               add eax, 4
// 005304c9  50                   push eax
// 005304ca  ff157ca39e00         call dword ptr [0x9ea37c]
// 005304d0  85c0                 test eax, eax
// 005304d2  7535                 jne 0x530509
// 005304d4  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 005304d7  8b7108               mov esi, dword ptr [ecx + 8]
// 005304da  85f6                 test esi, esi
// 005304dc  741d                 je 0x5304fb
// 005304de  8bff                 mov edi, edi
// 005304e0  8b0e                 mov ecx, dword ptr [esi]
// 005304e2  8b11                 mov edx, dword ptr [ecx]
// 005304e4  8b4204               mov eax, dword ptr [edx + 4]
// 005304e7  ffd0                 call eax
// 005304e9  8bc6                 mov eax, esi
// 005304eb  8b7604               mov esi, dword ptr [esi + 4]
// 005304ee  50                   push eax
// 005304ef  e8a6742700           call 0x7a799a
// 005304f4  83c404               add esp, 4
// 005304f7  85f6                 test esi, esi
// 005304f9  75e5                 jne 0x5304e0
// 005304fb  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 005304fe  85c9                 test ecx, ecx
// 00530500  7407                 je 0x530509
// 00530502  8b11                 mov edx, dword ptr [ecx]
// 00530504  8b02                 mov eax, dword ptr [edx]
// 00530506  53                   push ebx
// 00530507  ffd0                 call eax
// 00530509  c7452400000000       mov dword ptr [ebp + 0x24], 0
// 00530510  55                   push ebp
// 00530511  e884742700           call 0x7a799a
// 00530516  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053051a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0053051d  83c404               add esp, 4
// 00530520  5f                   pop edi
// 00530521  5e                   pop esi
// 00530522  5d                   pop ebp
// 00530523  85c0                 test eax, eax
// 00530525  7604                 jbe 0x53052b
// 00530527  48                   dec eax
// 00530528  89421c               mov dword ptr [edx + 0x1c], eax
// 0053052b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0053052f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00530533  8b12                 mov edx, dword ptr [edx]
// 00530535  894804               mov dword ptr [eax + 4], ecx
// 00530538  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0053053c  8910                 mov dword ptr [eax], edx
// 0053053e  5b                   pop ebx
// 0053053f  64890d00000000       mov dword ptr fs:[0], ecx
// 00530546  83c454               add esp, 0x54
// 00530549  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
