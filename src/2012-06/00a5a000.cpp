// roc 2012-06 00a5a000  unit: CXTPPropertyGridPaintManager  size: 1667 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5a000
//
// 00a5a000  6aff                 push -1
// 00a5a002  688677ae00           push 0xae7786
// 00a5a007  64a100000000         mov eax, dword ptr fs:[0]
// 00a5a00d  50                   push eax
// 00a5a00e  81ec80000000         sub esp, 0x80
// 00a5a014  53                   push ebx
// 00a5a015  55                   push ebp
// 00a5a016  56                   push esi
// 00a5a017  57                   push edi
// 00a5a018  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a5a01d  33c4                 xor eax, esp
// 00a5a01f  50                   push eax
// 00a5a020  8d842494000000       lea eax, [esp + 0x94]
// 00a5a027  64a300000000         mov dword ptr fs:[0], eax
// 00a5a02d  8bf9                 mov edi, ecx
// 00a5a02f  897c2424             mov dword ptr [esp + 0x24], edi
// 00a5a033  33db                 xor ebx, ebx
// 00a5a035  399c24b8000000       cmp dword ptr [esp + 0xb8], ebx
// 00a5a03c  7511                 jne 0xa5a04f
// 00a5a03e  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00a5a046  399c24bc000000       cmp dword ptr [esp + 0xbc], ebx
// 00a5a04d  7404                 je 0xa5a053
// 00a5a04f  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a5a053  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 00a5a05a  8d4764               lea eax, [edi + 0x64]
// 00a5a05d  50                   push eax
// 00a5a05e  56                   push esi
// 00a5a05f  8d4c247c             lea ecx, [esp + 0x7c]
// 00a5a063  e8c8b4f7ff           call 0x9d5530
// 00a5a068  6afc                 push -4
// 00a5a06a  6afa                 push -6
// 00a5a06c  8d8424b0000000       lea eax, [esp + 0xb0]
// 00a5a073  50                   push eax
// 00a5a074  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 00a5a07b  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a5a081  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a5a084  8b8938010000         mov ecx, dword ptr [ecx + 0x138]
// 00a5a08a  e8d115fdff           call 0xa2b660
// 00a5a08f  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 00a5a096  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a5a099  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00a5a0a0  8bd8                 mov ebx, eax
// 00a5a0a2  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00a5a0a9  2bc5                 sub eax, ebp
// 00a5a0ab  89442434             mov dword ptr [esp + 0x34], eax
// 00a5a0af  8d44243c             lea eax, [esp + 0x3c]
// 00a5a0b3  50                   push eax
// 00a5a0b4  6a03                 push 3
// 00a5a0b6  68d4b1c100           push 0xc1b1d4
// 00a5a0bb  51                   push ecx
// 00a5a0bc  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00a5a0c0  89542428             mov dword ptr [esp + 0x28], edx
// 00a5a0c4  ff154021b200         call dword ptr [0xb22140]
// 00a5a0ca  33c0                 xor eax, eax
// 00a5a0cc  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a5a0d0  85db                 test ebx, ebx
// 00a5a0d2  7f40                 jg 0xa5a114
// 00a5a0d4  8d4c2474             lea ecx, [esp + 0x74]
// 00a5a0d8  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00a5a0e3  e8c8b4f7ff           call 0x9d55b0
// 00a5a0e8  83c8ff               or eax, 0xffffffff
// 00a5a0eb  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a5a0f2  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5a0f9  59                   pop ecx
// 00a5a0fa  5f                   pop edi
// 00a5a0fb  5e                   pop esi
// 00a5a0fc  5d                   pop ebp
// 00a5a0fd  5b                   pop ebx
// 00a5a0fe  81c48c000000         add esp, 0x8c
// 00a5a104  c21c00               ret 0x1c
// 00a5a107  eb07                 jmp 0xa5a110
// 00a5a109  8da42400000000       lea esp, [esp]
// 00a5a110  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5a114  8b5760               mov edx, dword ptr [edi + 0x60]
// 00a5a117  8b8a38010000         mov ecx, dword ptr [edx + 0x138]
// 00a5a11d  85c0                 test eax, eax
// 00a5a11f  0f8c59050000         jl 0xa5a67e
// 00a5a125  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00a5a128  0f8d50050000         jge 0xa5a67e
// 00a5a12e  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00a5a131  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 00a5a134  8d0481               lea eax, [ecx + eax*4]
// 00a5a137  8d542414             lea edx, [esp + 0x14]
// 00a5a13b  52                   push edx
// 00a5a13c  8bcb                 mov ecx, ebx
// 00a5a13e  e81df6ffff           call 0xa59760
// 00a5a143  8d4c2414             lea ecx, [esp + 0x14]
// 00a5a147  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 00a5a14f  ff156046b200         call dword ptr [0xb24660]
// 00a5a155  84c0                 test al, al
// 00a5a157  0f8531040000         jne 0xa5a58e
// 00a5a15d  8d442444             lea eax, [esp + 0x44]
// 00a5a161  50                   push eax
// 00a5a162  8d4c2418             lea ecx, [esp + 0x18]
// 00a5a166  ff155846b200         call dword ptr [0xb24658]
// 00a5a16c  50                   push eax
// 00a5a16d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a5a171  ff159847b200         call dword ptr [0xb24798]
// 00a5a177  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a5a17a  50                   push eax
// 00a5a17b  51                   push ecx
// 00a5a17c  ff154021b200         call dword ptr [0xb22140]
// 00a5a182  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a5a186  8d142f               lea edx, [edi + ebp]
// 00a5a189  3b542434             cmp edx, dword ptr [esp + 0x34]
// 00a5a18d  0f8cb6020000         jl 0xa5a449
// 00a5a193  8d4c2414             lea ecx, [esp + 0x14]
// 00a5a197  ff155846b200         call dword ptr [0xb24658]
// 00a5a19d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5a1a1  48                   dec eax
// 00a5a1a2  2bcd                 sub ecx, ebp
// 00a5a1a4  0fafc1               imul eax, ecx
// 00a5a1a7  99                   cdq 
// 00a5a1a8  f7ff                 idiv edi
// 00a5a1aa  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00a5a1b1  83f801               cmp eax, 1
// 00a5a1b4  89442438             mov dword ptr [esp + 0x38], eax
// 00a5a1b8  8bf8                 mov edi, eax
// 00a5a1ba  7d08                 jge 0xa5a1c4
// 00a5a1bc  3be9                 cmp ebp, ecx
// 00a5a1be  0f84bd030000         je 0xa5a581
// 00a5a1c4  85c0                 test eax, eax
// 00a5a1c6  7c45                 jl 0xa5a20d
// 00a5a1c8  eb06                 jmp 0xa5a1d0
// 00a5a1ca  8d9b00000000         lea ebx, [ebx]
// 00a5a1d0  57                   push edi
// 00a5a1d1  8d4c2418             lea ecx, [esp + 0x18]
// 00a5a1d5  ff15e844b200         call dword ptr [0xb244e8]
// 00a5a1db  3c20                 cmp al, 0x20
// 00a5a1dd  7423                 je 0xa5a202
// 00a5a1df  57                   push edi
// 00a5a1e0  8d4c2418             lea ecx, [esp + 0x18]
// 00a5a1e4  ff15e844b200         call dword ptr [0xb244e8]
// 00a5a1ea  3c2c                 cmp al, 0x2c
// 00a5a1ec  7414                 je 0xa5a202
// 00a5a1ee  57                   push edi
// 00a5a1ef  8d4c2418             lea ecx, [esp + 0x18]
// 00a5a1f3  ff15e844b200         call dword ptr [0xb244e8]
// 00a5a1f9  3c2d                 cmp al, 0x2d
// 00a5a1fb  7405                 je 0xa5a202
// 00a5a1fd  83ef01               sub edi, 1
// 00a5a200  79ce                 jns 0xa5a1d0
// 00a5a202  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00a5a209  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a5a20d  85ff                 test edi, edi
// 00a5a20f  7f15                 jg 0xa5a226
// 00a5a211  3be9                 cmp ebp, ecx
// 00a5a213  740f                 je 0xa5a224
// 00a5a215  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a5a219  01542418             add dword ptr [esp + 0x18], edx
// 00a5a21d  8be9                 mov ebp, ecx
// 00a5a21f  e9a3010000           jmp 0xa5a3c7
// 00a5a224  8bf8                 mov edi, eax
// 00a5a226  47                   inc edi
// 00a5a227  57                   push edi
// 00a5a228  8d442424             lea eax, [esp + 0x24]
// 00a5a22c  50                   push eax
// 00a5a22d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a5a231  ff152850b200         call dword ptr [0xb25028]
// 00a5a237  57                   push edi
// 00a5a238  8d4c2434             lea ecx, [esp + 0x34]
// 00a5a23c  51                   push ecx
// 00a5a23d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a5a241  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 00a5a249  ff15f047b200         call dword ptr [0xb247f0]
// 00a5a24f  8d54244c             lea edx, [esp + 0x4c]
// 00a5a253  52                   push edx
// 00a5a254  8d4c2424             lea ecx, [esp + 0x24]
// 00a5a258  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 00a5a260  ff155846b200         call dword ptr [0xb24658]
// 00a5a266  50                   push eax
// 00a5a267  8d4c2428             lea ecx, [esp + 0x28]
// 00a5a26b  ff159847b200         call dword ptr [0xb24798]
// 00a5a271  50                   push eax
// 00a5a272  8b4608               mov eax, dword ptr [esi + 8]
// 00a5a275  50                   push eax
// 00a5a276  ff154021b200         call dword ptr [0xb22140]
// 00a5a27c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5a280  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5a284  8d3c01               lea edi, [ecx + eax]
// 00a5a287  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a5a28e  3bf9                 cmp edi, ecx
// 00a5a290  897c2418             mov dword ptr [esp + 0x18], edi
// 00a5a294  8bd7                 mov edx, edi
// 00a5a296  7c02                 jl 0xa5a29a
// 00a5a298  8bd1                 mov edx, ecx
// 00a5a29a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a5a29e  03cd                 add ecx, ebp
// 00a5a2a0  3b8c24b0000000       cmp ecx, dword ptr [esp + 0xb0]
// 00a5a2a7  7c07                 jl 0xa5a2b0
// 00a5a2a9  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00a5a2b0  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a5a2b5  896c2454             mov dword ptr [esp + 0x54], ebp
// 00a5a2b9  89442458             mov dword ptr [esp + 0x58], eax
// 00a5a2bd  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a5a2c1  89542460             mov dword ptr [esp + 0x60], edx
// 00a5a2c5  0f8424010000         je 0xa5a3ef
// 00a5a2cb  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 00a5a2ce  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00a5a2d2  894330               mov dword ptr [ebx + 0x30], eax
// 00a5a2d5  894b34               mov dword ptr [ebx + 0x34], ecx
// 00a5a2d8  895338               mov dword ptr [ebx + 0x38], edx
// 00a5a2db  8b4574               mov eax, dword ptr [ebp + 0x74]
// 00a5a2de  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 00a5a2e4  0588000000           add eax, 0x88
// 00a5a2e9  83f9ff               cmp ecx, -1
// 00a5a2ec  7505                 jne 0xa5a2f3
// 00a5a2ee  8b4004               mov eax, dword ptr [eax + 4]
// 00a5a2f1  eb02                 jmp 0xa5a2f5
// 00a5a2f3  8bc1                 mov eax, ecx
// 00a5a2f5  8b16                 mov edx, dword ptr [esi]
// 00a5a2f7  50                   push eax
// 00a5a2f8  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a5a2fb  8bce                 mov ecx, esi
// 00a5a2fd  ffd0                 call eax
// 00a5a2ff  8b3e                 mov edi, dword ptr [esi]
// 00a5a301  6820080000           push 0x820
// 00a5a306  8d4c2458             lea ecx, [esp + 0x58]
// 00a5a30a  51                   push ecx
// 00a5a30b  8d4c2428             lea ecx, [esp + 0x28]
// 00a5a30f  83c770               add edi, 0x70
// 00a5a312  ff155846b200         call dword ptr [0xb24658]
// 00a5a318  50                   push eax
// 00a5a319  8d4c242c             lea ecx, [esp + 0x2c]
// 00a5a31d  ff159847b200         call dword ptr [0xb24798]
// 00a5a323  8b17                 mov edx, dword ptr [edi]
// 00a5a325  50                   push eax
// 00a5a326  8bce                 mov ecx, esi
// 00a5a328  ffd2                 call edx
// 00a5a32a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00a5a32d  8b4034               mov eax, dword ptr [eax + 0x34]
// 00a5a330  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 00a5a333  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 00a5a339  7552                 jne 0xa5a38d
// 00a5a33b  85c0                 test eax, eax
// 00a5a33d  7504                 jne 0xa5a343
// 00a5a33f  33ff                 xor edi, edi
// 00a5a341  eb03                 jmp 0xa5a346
// 00a5a343  8b7820               mov edi, dword ptr [eax + 0x20]
// 00a5a346  ff15e83bb200         call dword ptr [0xb23be8]
// 00a5a34c  3bc7                 cmp eax, edi
// 00a5a34e  753d                 jne 0xa5a38d
// 00a5a350  8b4574               mov eax, dword ptr [ebp + 0x74]
// 00a5a353  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a5a356  83c034               add eax, 0x34
// 00a5a359  83f9ff               cmp ecx, -1
// 00a5a35c  7505                 jne 0xa5a363
// 00a5a35e  8b4004               mov eax, dword ptr [eax + 4]
// 00a5a361  eb02                 jmp 0xa5a365
// 00a5a363  8bc1                 mov eax, ecx
// 00a5a365  8b16                 mov edx, dword ptr [esi]
// 00a5a367  50                   push eax
// 00a5a368  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a5a36b  8bce                 mov ecx, esi
// 00a5a36d  ffd0                 call eax
// 00a5a36f  8b16                 mov edx, dword ptr [esi]
// 00a5a371  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a5a374  6a00                 push 0
// 00a5a376  8bce                 mov ecx, esi
// 00a5a378  ffd0                 call eax
// 00a5a37a  8b5604               mov edx, dword ptr [esi + 4]
// 00a5a37d  ff442460             inc dword ptr [esp + 0x60]
// 00a5a381  8d4c2454             lea ecx, [esp + 0x54]
// 00a5a385  51                   push ecx
// 00a5a386  52                   push edx
// 00a5a387  ff15d43cb200         call dword ptr [0xb23cd4]
// 00a5a38d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a5a391  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 00a5a398  8d442430             lea eax, [esp + 0x30]
// 00a5a39c  50                   push eax
// 00a5a39d  8d4c2418             lea ecx, [esp + 0x18]
// 00a5a3a1  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a5a3a5  ff152045b200         call dword ptr [0xb24520]
// 00a5a3ab  8d4c2430             lea ecx, [esp + 0x30]
// 00a5a3af  ff15d047b200         call dword ptr [0xb247d0]
// 00a5a3b5  8d4c2420             lea ecx, [esp + 0x20]
// 00a5a3b9  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 00a5a3c1  ff15d047b200         call dword ptr [0xb247d0]
// 00a5a3c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5a3cb  3b8c24b4000000       cmp ecx, dword ptr [esp + 0xb4]
// 00a5a3d2  0f8d97020000         jge 0xa5a66f
// 00a5a3d8  8d4c2414             lea ecx, [esp + 0x14]
// 00a5a3dc  ff156046b200         call dword ptr [0xb24660]
// 00a5a3e2  84c0                 test al, al
// 00a5a3e4  0f8473fdffff         je 0xa5a15d
// 00a5a3ea  e99b010000           jmp 0xa5a58a
// 00a5a3ef  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00a5a3f6  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00a5a3fd  50                   push eax
// 00a5a3fe  51                   push ecx
// 00a5a3ff  8d54245c             lea edx, [esp + 0x5c]
// 00a5a403  52                   push edx
// 00a5a404  ff15483bb200         call dword ptr [0xb23b48]
// 00a5a40a  85c0                 test eax, eax
// 00a5a40c  7483                 je 0xa5a391
// 00a5a40e  8d4c2430             lea ecx, [esp + 0x30]
// 00a5a412  ff15d047b200         call dword ptr [0xb247d0]
// 00a5a418  8d4c2420             lea ecx, [esp + 0x20]
// 00a5a41c  ff15d047b200         call dword ptr [0xb247d0]
// 00a5a422  8d4c2414             lea ecx, [esp + 0x14]
// 00a5a426  ff15d047b200         call dword ptr [0xb247d0]
// 00a5a42c  8d4c2474             lea ecx, [esp + 0x74]
// 00a5a430  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00a5a43b  e870b1f7ff           call 0x9d55b0
// 00a5a440  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5a444  e9a2fcffff           jmp 0xa5a0eb
// 00a5a449  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a5a44d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5a451  8d0c02               lea ecx, [edx + eax]
// 00a5a454  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 00a5a45b  3bca                 cmp ecx, edx
// 00a5a45d  7d02                 jge 0xa5a461
// 00a5a45f  8bd1                 mov edx, ecx
// 00a5a461  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00a5a468  03fd                 add edi, ebp
// 00a5a46a  3bf9                 cmp edi, ecx
// 00a5a46c  897c2438             mov dword ptr [esp + 0x38], edi
// 00a5a470  7d02                 jge 0xa5a474
// 00a5a472  8bcf                 mov ecx, edi
// 00a5a474  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a5a479  896c2464             mov dword ptr [esp + 0x64], ebp
// 00a5a47d  89442468             mov dword ptr [esp + 0x68], eax
// 00a5a481  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00a5a485  89542470             mov dword ptr [esp + 0x70], edx
// 00a5a489  0f84cb000000         je 0xa5a55a
// 00a5a48f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a5a493  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 00a5a496  894330               mov dword ptr [ebx + 0x30], eax
// 00a5a499  894b34               mov dword ptr [ebx + 0x34], ecx
// 00a5a49c  895338               mov dword ptr [ebx + 0x38], edx
// 00a5a49f  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a5a4a2  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 00a5a4a8  0588000000           add eax, 0x88
// 00a5a4ad  83f9ff               cmp ecx, -1
// 00a5a4b0  7505                 jne 0xa5a4b7
// 00a5a4b2  8b4004               mov eax, dword ptr [eax + 4]
// 00a5a4b5  eb02                 jmp 0xa5a4b9
// 00a5a4b7  8bc1                 mov eax, ecx
// 00a5a4b9  8b16                 mov edx, dword ptr [esi]
// 00a5a4bb  50                   push eax
// 00a5a4bc  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a5a4bf  8bce                 mov ecx, esi
// 00a5a4c1  ffd0                 call eax
// 00a5a4c3  8b2e                 mov ebp, dword ptr [esi]
// 00a5a4c5  6820080000           push 0x820
// 00a5a4ca  8d4c2468             lea ecx, [esp + 0x68]
// 00a5a4ce  51                   push ecx
// 00a5a4cf  8d4c241c             lea ecx, [esp + 0x1c]
// 00a5a4d3  83c570               add ebp, 0x70
// 00a5a4d6  ff155846b200         call dword ptr [0xb24658]
// 00a5a4dc  50                   push eax
// 00a5a4dd  8d4c2420             lea ecx, [esp + 0x20]
// 00a5a4e1  ff159847b200         call dword ptr [0xb24798]
// 00a5a4e7  8b5500               mov edx, dword ptr [ebp]
// 00a5a4ea  50                   push eax
// 00a5a4eb  8bce                 mov ecx, esi
// 00a5a4ed  ffd2                 call edx
// 00a5a4ef  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00a5a4f2  8b4034               mov eax, dword ptr [eax + 0x34]
// 00a5a4f5  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 00a5a4f8  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 00a5a4fe  7552                 jne 0xa5a552
// 00a5a500  85c0                 test eax, eax
// 00a5a502  7504                 jne 0xa5a508
// 00a5a504  33db                 xor ebx, ebx
// 00a5a506  eb03                 jmp 0xa5a50b
// 00a5a508  8b5820               mov ebx, dword ptr [eax + 0x20]
// 00a5a50b  ff15e83bb200         call dword ptr [0xb23be8]
// 00a5a511  3bc3                 cmp eax, ebx
// 00a5a513  753d                 jne 0xa5a552
// 00a5a515  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a5a518  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a5a51b  83c034               add eax, 0x34
// 00a5a51e  83f9ff               cmp ecx, -1
// 00a5a521  7505                 jne 0xa5a528
// 00a5a523  8b4004               mov eax, dword ptr [eax + 4]
// 00a5a526  eb02                 jmp 0xa5a52a
// 00a5a528  8bc1                 mov eax, ecx
// 00a5a52a  8b16                 mov edx, dword ptr [esi]
// 00a5a52c  50                   push eax
// 00a5a52d  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a5a530  8bce                 mov ecx, esi
// 00a5a532  ffd0                 call eax
// 00a5a534  8b16                 mov edx, dword ptr [esi]
// 00a5a536  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a5a539  6a00                 push 0
// 00a5a53b  8bce                 mov ecx, esi
// 00a5a53d  ffd0                 call eax
// 00a5a53f  8b5604               mov edx, dword ptr [esi + 4]
// 00a5a542  ff442470             inc dword ptr [esp + 0x70]
// 00a5a546  8d4c2464             lea ecx, [esp + 0x64]
// 00a5a54a  51                   push ecx
// 00a5a54b  52                   push edx
// 00a5a54c  ff15d43cb200         call dword ptr [0xb23cd4]
// 00a5a552  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a5a556  8bef                 mov ebp, edi
// 00a5a558  eb30                 jmp 0xa5a58a
// 00a5a55a  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00a5a561  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00a5a568  50                   push eax
// 00a5a569  51                   push ecx
// 00a5a56a  8d54246c             lea edx, [esp + 0x6c]
// 00a5a56e  52                   push edx
// 00a5a56f  ff15483bb200         call dword ptr [0xb23b48]
// 00a5a575  85c0                 test eax, eax
// 00a5a577  0f85a5feffff         jne 0xa5a422
// 00a5a57d  8bef                 mov ebp, edi
// 00a5a57f  eb09                 jmp 0xa5a58a
// 00a5a581  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a5a585  48                   dec eax
// 00a5a586  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a5a58a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a5a58e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a5a592  3b9c24b4000000       cmp ebx, dword ptr [esp + 0xb4]
// 00a5a599  0f8dd0000000         jge 0xa5a66f
// 00a5a59f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5a5a3  49                   dec ecx
// 00a5a5a4  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00a5a5a8  0f84c1000000         je 0xa5a66f
// 00a5a5ae  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a5a5b3  0f8489000000         je 0xa5a642
// 00a5a5b9  8d576c               lea edx, [edi + 0x6c]
// 00a5a5bc  52                   push edx
// 00a5a5bd  8d4c2478             lea ecx, [esp + 0x78]
// 00a5a5c1  e84a9af7ff           call 0x9d4010
// 00a5a5c6  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a5a5c9  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a5a5cc  83c040               add eax, 0x40
// 00a5a5cf  83f9ff               cmp ecx, -1
// 00a5a5d2  7505                 jne 0xa5a5d9
// 00a5a5d4  8b4004               mov eax, dword ptr [eax + 4]
// 00a5a5d7  eb02                 jmp 0xa5a5db
// 00a5a5d9  8bc1                 mov eax, ecx
// 00a5a5db  8b16                 mov edx, dword ptr [esi]
// 00a5a5dd  50                   push eax
// 00a5a5de  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a5a5e1  8bce                 mov ecx, esi
// 00a5a5e3  ffd0                 call eax
// 00a5a5e5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5a5e9  8d0419               lea eax, [ecx + ebx]
// 00a5a5ec  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a5a5f3  3bc1                 cmp eax, ecx
// 00a5a5f5  7c02                 jl 0xa5a5f9
// 00a5a5f7  8bc1                 mov eax, ecx
// 00a5a5f9  6820080000           push 0x820
// 00a5a5fe  8d8c2488000000       lea ecx, [esp + 0x88]
// 00a5a605  51                   push ecx
// 00a5a606  8d5508               lea edx, [ebp + 8]
// 00a5a609  89842498000000       mov dword ptr [esp + 0x98], eax
// 00a5a610  8b06                 mov eax, dword ptr [esi]
// 00a5a612  6a01                 push 1
// 00a5a614  89942498000000       mov dword ptr [esp + 0x98], edx
// 00a5a61b  8b5070               mov edx, dword ptr [eax + 0x70]
// 00a5a61e  68ec98b500           push 0xb598ec
// 00a5a623  8bce                 mov ecx, esi
// 00a5a625  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00a5a62c  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 00a5a633  ffd2                 call edx
// 00a5a635  8d4764               lea eax, [edi + 0x64]
// 00a5a638  50                   push eax
// 00a5a639  8d4c2478             lea ecx, [esp + 0x78]
// 00a5a63d  e8ce99f7ff           call 0x9d4010
// 00a5a642  8d4c2414             lea ecx, [esp + 0x14]
// 00a5a646  83c508               add ebp, 8
// 00a5a649  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 00a5a651  ff15d047b200         call dword ptr [0xb247d0]
// 00a5a657  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5a65b  40                   inc eax
// 00a5a65c  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00a5a660  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a5a664  0f8ca6faffff         jl 0xa5a110
// 00a5a66a  e965faffff           jmp 0xa5a0d4
// 00a5a66f  8d4c2414             lea ecx, [esp + 0x14]
// 00a5a673  ff15d047b200         call dword ptr [0xb247d0]
// 00a5a679  e956faffff           jmp 0xa5a0d4
// 00a5a67e  e83d7df2ff           call 0x9823c0
// copied from an identical function in another client (function ?HitTestVerbs@CXTPPropertyGridPaintManager@@QAEHPAVCDC@@VCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp