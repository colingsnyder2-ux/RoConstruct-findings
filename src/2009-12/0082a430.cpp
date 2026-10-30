// roc 2009-12 0082a430  unit: CXTPReportHeader  size: 1155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082a430
//
// 0082a430  6aff                 push -1
// 0082a432  683ab99500           push 0x95b93a
// 0082a437  64a100000000         mov eax, dword ptr fs:[0]
// 0082a43d  50                   push eax
// 0082a43e  83ec58               sub esp, 0x58
// 0082a441  53                   push ebx
// 0082a442  55                   push ebp
// 0082a443  56                   push esi
// 0082a444  57                   push edi
// 0082a445  a10052b600           mov eax, dword ptr [0xb65200]
// 0082a44a  33c4                 xor eax, esp
// 0082a44c  50                   push eax
// 0082a44d  8d44246c             lea eax, [esp + 0x6c]
// 0082a451  64a300000000         mov dword ptr fs:[0], eax
// 0082a457  8bf1                 mov esi, ecx
// 0082a459  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082a45c  8bb8c0010000         mov edi, dword ptr [eax + 0x1c0]
// 0082a462  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0082a469  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0082a470  8b16                 mov edx, dword ptr [esi]
// 0082a472  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0082a478  50                   push eax
// 0082a479  51                   push ecx
// 0082a47a  8bce                 mov ecx, esi
// 0082a47c  ffd2                 call edx
// 0082a47e  50                   push eax
// 0082a47f  8bce                 mov ecx, esi
// 0082a481  e80af1ffff           call 0x829590
// 0082a486  33db                 xor ebx, ebx
// 0082a488  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 0082a48e  7439                 je 0x82a4c9
// 0082a490  3bfb                 cmp edi, ebx
// 0082a492  7405                 je 0x82a499
// 0082a494  83ff01               cmp edi, 1
// 0082a497  7530                 jne 0x82a4c9
// 0082a499  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0082a4a0  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0082a4a7  50                   push eax
// 0082a4a8  51                   push ecx
// 0082a4a9  8bce                 mov ecx, esi
// 0082a4ab  e860feffff           call 0x82a310
// 0082a4b0  85c0                 test eax, eax
// 0082a4b2  7415                 je 0x82a4c9
// 0082a4b4  3bfb                 cmp edi, ebx
// 0082a4b6  750a                 jne 0x82a4c2
// 0082a4b8  8b5678               mov edx, dword ptr [esi + 0x78]
// 0082a4bb  52                   push edx
// 0082a4bc  ff1520ca9800         call dword ptr [0x98ca20]
// 0082a4c2  6a01                 push 1
// 0082a4c4  e9cc030000           jmp 0x82a895
// 0082a4c9  83ff02               cmp edi, 2
// 0082a4cc  0f852d010000         jne 0x82a5ff
// 0082a4d2  8bce                 mov ecx, esi
// 0082a4d4  e8a75ff1ff           call 0x740480
// 0082a4d9  8bf8                 mov edi, eax
// 0082a4db  3bfb                 cmp edi, ebx
// 0082a4dd  0f84ba030000         je 0x82a89d
// 0082a4e3  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 0082a4e9  7519                 jne 0x82a504
// 0082a4eb  395e7c               cmp dword ptr [esi + 0x7c], ebx
// 0082a4ee  7405                 je 0x82a4f5
// 0082a4f0  395f54               cmp dword ptr [edi + 0x54], ebx
// 0082a4f3  750f                 jne 0x82a504
// 0082a4f5  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082a4f8  3998b8010000         cmp dword ptr [eax + 0x1b8], ebx
// 0082a4fe  0f8499030000         je 0x82a89d
// 0082a504  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0082a50b  2b4670               sub eax, dword ptr [esi + 0x70]
// 0082a50e  99                   cdq 
// 0082a50f  8bc8                 mov ecx, eax
// 0082a511  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0082a518  2b4674               sub eax, dword ptr [esi + 0x74]
// 0082a51b  33ca                 xor ecx, edx
// 0082a51d  2bca                 sub ecx, edx
// 0082a51f  99                   cdq 
// 0082a520  33c2                 xor eax, edx
// 0082a522  2bc2                 sub eax, edx
// 0082a524  03c1                 add eax, ecx
// 0082a526  83f804               cmp eax, 4
// 0082a529  0f8c6e030000         jl 0x82a89d
// 0082a52f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a532  395f50               cmp dword ptr [edi + 0x50], ebx
// 0082a535  7516                 jne 0x82a54d
// 0082a537  53                   push ebx
// 0082a538  895e38               mov dword ptr [esi + 0x38], ebx
// 0082a53b  e8503fffff           call 0x81e490
// 0082a540  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a543  e8384fffff           call 0x81f480
// 0082a548  e92f030000           jmp 0x82a87c
// 0082a54d  6a03                 push 3
// 0082a54f  e83c3fffff           call 0x81e490
// 0082a554  33c9                 xor ecx, ecx
// 0082a556  395e40               cmp dword ptr [esi + 0x40], ebx
// 0082a559  6a60                 push 0x60
// 0082a55b  0f94c1               sete cl
// 0082a55e  8d4c0902             lea ecx, [ecx + ecx + 2]
// 0082a562  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 0082a568  e8f392fcff           call 0x7f3860
// 0082a56d  83c404               add esp, 4
// 0082a570  89442414             mov dword ptr [esp + 0x14], eax
// 0082a574  895c2474             mov dword ptr [esp + 0x74], ebx
// 0082a578  3bc3                 cmp eax, ebx
// 0082a57a  7409                 je 0x82a585
// 0082a57c  8bc8                 mov ecx, eax
// 0082a57e  e8fdc70700           call 0x8a6d80
// 0082a583  eb02                 jmp 0x82a587
// 0082a585  33c0                 xor eax, eax
// 0082a587  8d54241c             lea edx, [esp + 0x1c]
// 0082a58b  52                   push edx
// 0082a58c  8bcf                 mov ecx, edi
// 0082a58e  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 0082a596  894630               mov dword ptr [esi + 0x30], eax
// 0082a599  e832d5ffff           call 0x827ad0
// 0082a59e  395e40               cmp dword ptr [esi + 0x40], ebx
// 0082a5a1  7511                 jne 0x82a5b4
// 0082a5a3  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 0082a5a9  2b477c               sub eax, dword ptr [edi + 0x7c]
// 0082a5ac  0344241c             add eax, dword ptr [esp + 0x1c]
// 0082a5b0  89442424             mov dword ptr [esp + 0x24], eax
// 0082a5b4  8d4c241c             lea ecx, [esp + 0x1c]
// 0082a5b8  51                   push ecx
// 0082a5b9  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a5bc  e83998fcff           call 0x7f3dfa
// 0082a5c1  8b5630               mov edx, dword ptr [esi + 0x30]
// 0082a5c4  8b1a                 mov ebx, dword ptr [edx]
// 0082a5c6  57                   push edi
// 0082a5c7  8bce                 mov ecx, esi
// 0082a5c9  e852ddffff           call 0x828320
// 0082a5ce  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082a5d2  50                   push eax
// 0082a5d3  56                   push esi
// 0082a5d4  83ec10               sub esp, 0x10
// 0082a5d7  8bc4                 mov eax, esp
// 0082a5d9  8908                 mov dword ptr [eax], ecx
// 0082a5db  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0082a5df  894804               mov dword ptr [eax + 4], ecx
// 0082a5e2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0082a5e6  894808               mov dword ptr [eax + 8], ecx
// 0082a5e9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0082a5ed  89480c               mov dword ptr [eax + 0xc], ecx
// 0082a5f0  8bca                 mov ecx, edx
// 0082a5f2  8b9344010000         mov edx, dword ptr [ebx + 0x144]
// 0082a5f8  ffd2                 call edx
// 0082a5fa  e99e020000           jmp 0x82a89d
// 0082a5ff  83ff03               cmp edi, 3
// 0082a602  0f8570020000         jne 0x82a878
// 0082a608  395e38               cmp dword ptr [esi + 0x38], ebx
// 0082a60b  0f848c020000         je 0x82a89d
// 0082a611  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0082a618  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0082a61f  89442414             mov dword ptr [esp + 0x14], eax
// 0082a623  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082a626  8d542414             lea edx, [esp + 0x14]
// 0082a62a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0082a62e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0082a631  52                   push edx
// 0082a632  51                   push ecx
// 0082a633  ff1554cc9800         call dword ptr [0x98cc54]
// 0082a639  8b4630               mov eax, dword ptr [esi + 0x30]
// 0082a63c  3bc3                 cmp eax, ebx
// 0082a63e  7447                 je 0x82a687
// 0082a640  8b4020               mov eax, dword ptr [eax + 0x20]
// 0082a643  8d54244c             lea edx, [esp + 0x4c]
// 0082a647  52                   push edx
// 0082a648  50                   push eax
// 0082a649  ff1570cc9800         call dword ptr [0x98cc70]
// 0082a64f  8b542454             mov edx, dword ptr [esp + 0x54]
// 0082a653  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 0082a657  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082a65b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082a65f  d1fa                 sar edx, 1
// 0082a661  8944241c             mov dword ptr [esp + 0x1c], eax
// 0082a665  2bc2                 sub eax, edx
// 0082a667  8b542458             mov edx, dword ptr [esp + 0x58]
// 0082a66b  2b542450             sub edx, dword ptr [esp + 0x50]
// 0082a66f  6a51                 push 0x51
// 0082a671  53                   push ebx
// 0082a672  d1fa                 sar edx, 1
// 0082a674  53                   push ebx
// 0082a675  2bca                 sub ecx, edx
// 0082a677  51                   push ecx
// 0082a678  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0082a67b  50                   push eax
// 0082a67c  a180d79800           mov eax, dword ptr [0x98d780]
// 0082a681  50                   push eax
// 0082a682  e8a595fcff           call 0x7f3c2c
// 0082a687  8b4648               mov eax, dword ptr [esi + 0x48]
// 0082a68a  3bc3                 cmp eax, ebx
// 0082a68c  7474                 je 0x82a702
// 0082a68e  395820               cmp dword ptr [eax + 0x20], ebx
// 0082a691  746f                 je 0x82a702
// 0082a693  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0082a696  51                   push ecx
// 0082a697  ff1564ca9800         call dword ptr [0x98ca64]
// 0082a69d  85c0                 test eax, eax
// 0082a69f  7461                 je 0x82a702
// 0082a6a1  8b542418             mov edx, dword ptr [esp + 0x18]
// 0082a6a5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082a6a9  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0082a6ac  52                   push edx
// 0082a6ad  50                   push eax
// 0082a6ae  51                   push ecx
// 0082a6af  8d4c2458             lea ecx, [esp + 0x58]
// 0082a6b3  e8b80b0200           call 0x84b270
// 0082a6b8  8bc8                 mov ecx, eax
// 0082a6ba  e8f17fc2ff           call 0x4526b0
// 0082a6bf  85c0                 test eax, eax
// 0082a6c1  743f                 je 0x82a702
// 0082a6c3  bf08000000           mov edi, 8
// 0082a6c8  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0082a6ce  0f84c9010000         je 0x82a89d
// 0082a6d4  e84594fcff           call 0x7f3b1e
// 0082a6d9  68007f0000           push 0x7f00
// 0082a6de  53                   push ebx
// 0082a6df  ff1548ca9800         call dword ptr [0x98ca48]
// 0082a6e5  50                   push eax
// 0082a6e6  ff1520ca9800         call dword ptr [0x98ca20]
// 0082a6ec  6a01                 push 1
// 0082a6ee  6aff                 push -1
// 0082a6f0  8bce                 mov ecx, esi
// 0082a6f2  e8e9eaffff           call 0x8291e0
// 0082a6f7  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 0082a6fd  e99b010000           jmp 0x82a89d
// 0082a702  8b5624               mov edx, dword ptr [esi + 0x24]
// 0082a705  52                   push edx
// 0082a706  8d4c2460             lea ecx, [esp + 0x60]
// 0082a70a  e8c10b0200           call 0x84b2d0
// 0082a70f  8b4660               mov eax, dword ptr [esi + 0x60]
// 0082a712  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0082a715  8b5668               mov edx, dword ptr [esi + 0x68]
// 0082a718  8d7e60               lea edi, [esi + 0x60]
// 0082a71b  8944242c             mov dword ptr [esp + 0x2c], eax
// 0082a71f  8b470c               mov eax, dword ptr [edi + 0xc]
// 0082a722  894c2430             mov dword ptr [esp + 0x30], ecx
// 0082a726  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0082a729  89542434             mov dword ptr [esp + 0x34], edx
// 0082a72d  89442438             mov dword ptr [esp + 0x38], eax
// 0082a731  395948               cmp dword ptr [ecx + 0x48], ebx
// 0082a734  7410                 je 0x82a746
// 0082a736  8d5650               lea edx, [esi + 0x50]
// 0082a739  52                   push edx
// 0082a73a  57                   push edi
// 0082a73b  8d442434             lea eax, [esp + 0x34]
// 0082a73f  50                   push eax
// 0082a740  ff1530cb9800         call dword ptr [0x98cb30]
// 0082a746  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0082a74a  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0082a751  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0082a758  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 0082a75e  52                   push edx
// 0082a75f  894c2438             mov dword ptr [esp + 0x38], ecx
// 0082a763  50                   push eax
// 0082a764  8d4c2434             lea ecx, [esp + 0x34]
// 0082a768  51                   push ecx
// 0082a769  ffd5                 call ebp
// 0082a76b  85c0                 test eax, eax
// 0082a76d  0f84cf000000         je 0x82a842
// 0082a773  8b17                 mov edx, dword ptr [edi]
// 0082a775  8b4f08               mov ecx, dword ptr [edi + 8]
// 0082a778  8b4704               mov eax, dword ptr [edi + 4]
// 0082a77b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0082a77f  8b570c               mov edx, dword ptr [edi + 0xc]
// 0082a782  894c2444             mov dword ptr [esp + 0x44], ecx
// 0082a786  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0082a78d  89442440             mov dword ptr [esp + 0x40], eax
// 0082a791  8b442464             mov eax, dword ptr [esp + 0x64]
// 0082a795  89542448             mov dword ptr [esp + 0x48], edx
// 0082a799  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0082a7a0  51                   push ecx
// 0082a7a1  89442448             mov dword ptr [esp + 0x48], eax
// 0082a7a5  52                   push edx
// 0082a7a6  8d442444             lea eax, [esp + 0x44]
// 0082a7aa  50                   push eax
// 0082a7ab  ffd5                 call ebp
// 0082a7ad  8bf8                 mov edi, eax
// 0082a7af  3bfb                 cmp edi, ebx
// 0082a7b1  746e                 je 0x82a821
// 0082a7b3  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0082a7ba  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0082a7c1  8b16                 mov edx, dword ptr [esi]
// 0082a7c3  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0082a7c9  50                   push eax
// 0082a7ca  51                   push ecx
// 0082a7cb  8bce                 mov ecx, esi
// 0082a7cd  ffd2                 call edx
// 0082a7cf  8be8                 mov ebp, eax
// 0082a7d1  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 0082a7d7  7508                 jne 0x82a7e1
// 0082a7d9  395e40               cmp dword ptr [esi + 0x40], ebx
// 0082a7dc  7403                 je 0x82a7e1
// 0082a7de  83cdff               or ebp, 0xffffffff
// 0082a7e1  33c9                 xor ecx, ecx
// 0082a7e3  3bfb                 cmp edi, ebx
// 0082a7e5  0f94c1               sete cl
// 0082a7e8  f686a000000006       test byte ptr [esi + 0xa0], 6
// 0082a7ef  8d4c0902             lea ecx, [ecx + ecx + 2]
// 0082a7f3  8bd9                 mov ebx, ecx
// 0082a7f5  7519                 jne 0x82a810
// 0082a7f7  e82293fcff           call 0x7f3b1e
// 0082a7fc  68007f0000           push 0x7f00
// 0082a801  6a00                 push 0
// 0082a803  ff1548ca9800         call dword ptr [0x98ca48]
// 0082a809  50                   push eax
// 0082a80a  ff1520ca9800         call dword ptr [0x98ca20]
// 0082a810  57                   push edi
// 0082a811  55                   push ebp
// 0082a812  8bce                 mov ecx, esi
// 0082a814  e8c7e9ffff           call 0x8291e0
// 0082a819  899ea0000000         mov dword ptr [esi + 0xa0], ebx
// 0082a81f  eb7c                 jmp 0x82a89d
// 0082a821  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0082a828  8b06                 mov eax, dword ptr [esi]
// 0082a82a  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0082a831  8b8088000000         mov eax, dword ptr [eax + 0x88]
// 0082a837  53                   push ebx
// 0082a838  51                   push ecx
// 0082a839  52                   push edx
// 0082a83a  8bce                 mov ecx, esi
// 0082a83c  ffd0                 call eax
// 0082a83e  8be8                 mov ebp, eax
// 0082a840  eb9f                 jmp 0x82a7e1
// 0082a842  bf01000000           mov edi, 1
// 0082a847  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0082a84d  744e                 je 0x82a89d
// 0082a84f  395e7c               cmp dword ptr [esi + 0x7c], ebx
// 0082a852  7412                 je 0x82a866
// 0082a854  8b5638               mov edx, dword ptr [esi + 0x38]
// 0082a857  395a54               cmp dword ptr [edx + 0x54], ebx
// 0082a85a  740a                 je 0x82a866
// 0082a85c  8b4634               mov eax, dword ptr [esi + 0x34]
// 0082a85f  50                   push eax
// 0082a860  ff1520ca9800         call dword ptr [0x98ca20]
// 0082a866  57                   push edi
// 0082a867  6aff                 push -1
// 0082a869  8bce                 mov ecx, esi
// 0082a86b  e870e9ffff           call 0x8291e0
// 0082a870  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 0082a876  eb25                 jmp 0x82a89d
// 0082a878  3bfb                 cmp edi, ebx
// 0082a87a  7421                 je 0x82a89d
// 0082a87c  e89d92fcff           call 0x7f3b1e
// 0082a881  68007f0000           push 0x7f00
// 0082a886  53                   push ebx
// 0082a887  ff1548ca9800         call dword ptr [0x98ca48]
// 0082a88d  50                   push eax
// 0082a88e  ff1520ca9800         call dword ptr [0x98ca20]
// 0082a894  53                   push ebx
// 0082a895  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a898  e8f33bffff           call 0x81e490
// 0082a89d  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0082a8a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0082a8a8  59                   pop ecx
// 0082a8a9  5f                   pop edi
// 0082a8aa  5e                   pop esi
// 0082a8ab  5d                   pop ebp
// 0082a8ac  5b                   pop ebx
// 0082a8ad  83c464               add esp, 0x64
// 0082a8b0  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPReportHeader@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp