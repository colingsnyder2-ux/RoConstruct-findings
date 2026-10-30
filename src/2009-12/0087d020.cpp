// roc 2009-12 0087d020  unit: XTPPaintThemes::CXTPDefaultTheme  size: 2068 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087d020
//
// 0087d020  6aff                 push -1
// 0087d022  68c9039600           push 0x9603c9
// 0087d027  64a100000000         mov eax, dword ptr fs:[0]
// 0087d02d  50                   push eax
// 0087d02e  83ec78               sub esp, 0x78
// 0087d031  53                   push ebx
// 0087d032  55                   push ebp
// 0087d033  56                   push esi
// 0087d034  57                   push edi
// 0087d035  a10052b600           mov eax, dword ptr [0xb65200]
// 0087d03a  33c4                 xor eax, esp
// 0087d03c  50                   push eax
// 0087d03d  8d84248c000000       lea eax, [esp + 0x8c]
// 0087d044  64a300000000         mov dword ptr fs:[0], eax
// 0087d04a  8bf1                 mov esi, ecx
// 0087d04c  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 0087d053  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 0087d059  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0087d05f  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 0087d065  8baffc000000         mov ebp, dword ptr [edi + 0xfc]
// 0087d06b  894c246c             mov dword ptr [esp + 0x6c], ecx
// 0087d06f  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 0087d075  89442424             mov dword ptr [esp + 0x24], eax
// 0087d079  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 0087d07f  894c2478             mov dword ptr [esp + 0x78], ecx
// 0087d083  8bcf                 mov ecx, edi
// 0087d085  89542470             mov dword ptr [esp + 0x70], edx
// 0087d089  89442474             mov dword ptr [esp + 0x74], eax
// 0087d08d  896c2428             mov dword ptr [esp + 0x28], ebp
// 0087d091  e8fa8bf7ff           call 0x7f5c90
// 0087d096  85c0                 test eax, eax
// 0087d098  740d                 je 0x87d0a7
// 0087d09a  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0087d0a2  83f801               cmp eax, 1
// 0087d0a5  7408                 je 0x87d0af
// 0087d0a7  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0087d0af  8b17                 mov edx, dword ptr [edi]
// 0087d0b1  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0087d0b4  8bcf                 mov ecx, edi
// 0087d0b6  ffd0                 call eax
// 0087d0b8  8944242c             mov dword ptr [esp + 0x2c], eax
// 0087d0bc  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 0087d0c2  83f8ff               cmp eax, -1
// 0087d0c5  7517                 jne 0x87d0de
// 0087d0c7  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 0087d0cd  85c9                 test ecx, ecx
// 0087d0cf  740d                 je 0x87d0de
// 0087d0d1  e8da94f7ff           call 0x7f65b0
// 0087d0d6  8bd8                 mov ebx, eax
// 0087d0d8  895c2414             mov dword ptr [esp + 0x14], ebx
// 0087d0dc  eb06                 jmp 0x87d0e4
// 0087d0de  8bd8                 mov ebx, eax
// 0087d0e0  89442414             mov dword ptr [esp + 0x14], eax
// 0087d0e4  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 0087d0ea  83f9ff               cmp ecx, -1
// 0087d0ed  750d                 jne 0x87d0fc
// 0087d0ef  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0087d0f5  85c0                 test eax, eax
// 0087d0f7  7403                 je 0x87d0fc
// 0087d0f9  8b4838               mov ecx, dword ptr [eax + 0x38]
// 0087d0fc  8b17                 mov edx, dword ptr [edi]
// 0087d0fe  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0087d104  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087d108  8bcf                 mov ecx, edi
// 0087d10a  ffd0                 call eax
// 0087d10c  89442434             mov dword ptr [esp + 0x34], eax
// 0087d110  83fd04               cmp ebp, 4
// 0087d113  750c                 jne 0x87d121
// 0087d115  3bdd                 cmp ebx, ebp
// 0087d117  7508                 jne 0x87d121
// 0087d119  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0087d121  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0087d125  8bcd                 mov ecx, ebp
// 0087d127  e85476f8ff           call 0x804780
// 0087d12c  8b5500               mov edx, dword ptr [ebp]
// 0087d12f  8bd8                 mov ebx, eax
// 0087d131  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 0087d137  8bcd                 mov ecx, ebp
// 0087d139  ffd0                 call eax
// 0087d13b  85c0                 test eax, eax
// 0087d13d  740c                 je 0x87d14b
// 0087d13f  8b8d10020000         mov ecx, dword ptr [ebp + 0x210]
// 0087d145  894c2424             mov dword ptr [esp + 0x24], ecx
// 0087d149  eb08                 jmp 0x87d153
// 0087d14b  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0087d153  8b17                 mov edx, dword ptr [edi]
// 0087d155  8b5258               mov edx, dword ptr [edx + 0x58]
// 0087d158  8d442438             lea eax, [esp + 0x38]
// 0087d15c  50                   push eax
// 0087d15d  8bcf                 mov ecx, edi
// 0087d15f  ffd2                 call edx
// 0087d161  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 0087d16c  85db                 test ebx, ebx
// 0087d16e  7411                 je 0x87d181
// 0087d170  8b06                 mov eax, dword ptr [esi]
// 0087d172  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 0087d178  8d4c2438             lea ecx, [esp + 0x38]
// 0087d17c  51                   push ecx
// 0087d17d  8bce                 mov ecx, esi
// 0087d17f  ffd2                 call edx
// 0087d181  57                   push edi
// 0087d182  8d442440             lea eax, [esp + 0x40]
// 0087d186  50                   push eax
// 0087d187  8bce                 mov ecx, esi
// 0087d189  e8520df8ff           call 0x7fdee0
// 0087d18e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087d192  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0087d198  83c004               add eax, 4
// 0087d19b  3bc1                 cmp eax, ecx
// 0087d19d  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087d1a1  7f04                 jg 0x87d1a7
// 0087d1a3  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0087d1a7  83bc24a800000000     cmp dword ptr [esp + 0xa8], 0
// 0087d1af  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 0087d1b6  0f8430060000         je 0x87d7ec
// 0087d1bc  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0087d1c0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087d1c4  8b542474             mov edx, dword ptr [esp + 0x74]
// 0087d1c8  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 0087d1cc  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 0087d1d0  03c1                 add eax, ecx
// 0087d1d2  89442464             mov dword ptr [esp + 0x64], eax
// 0087d1d6  2bc1                 sub eax, ecx
// 0087d1d8  89542454             mov dword ptr [esp + 0x54], edx
// 0087d1dc  99                   cdq 
// 0087d1dd  2bc2                 sub eax, edx
// 0087d1df  d1f8                 sar eax, 1
// 0087d1e1  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0087d1e5  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0087d1e9  8d4c08f6             lea ecx, [eax + ecx - 0xa]
// 0087d1ed  8bc5                 mov eax, ebp
// 0087d1ef  2bc3                 sub eax, ebx
// 0087d1f1  99                   cdq 
// 0087d1f2  2bc2                 sub eax, edx
// 0087d1f4  894c2444             mov dword ptr [esp + 0x44], ecx
// 0087d1f8  d1f8                 sar eax, 1
// 0087d1fa  83c114               add ecx, 0x14
// 0087d1fd  895c2450             mov dword ptr [esp + 0x50], ebx
// 0087d201  895c2460             mov dword ptr [esp + 0x60], ebx
// 0087d205  8d5c18f6             lea ebx, [eax + ebx - 0xa]
// 0087d209  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0087d210  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0087d217  895c2448             mov dword ptr [esp + 0x48], ebx
// 0087d21b  83c314               add ebx, 0x14
// 0087d21e  83b90401000000       cmp dword ptr [ecx + 0x104], 0
// 0087d225  896c2458             mov dword ptr [esp + 0x58], ebp
// 0087d229  896c2468             mov dword ptr [esp + 0x68], ebp
// 0087d22d  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 0087d234  7416                 je 0x87d24c
// 0087d236  6a16                 push 0x16
// 0087d238  8bce                 mov ecx, esi
// 0087d23a  e80104f8ff           call 0x7fd640
// 0087d23f  50                   push eax
// 0087d240  8d542470             lea edx, [esp + 0x70]
// 0087d244  52                   push edx
// 0087d245  8bcf                 mov ecx, edi
// 0087d247  e8b273f7ff           call 0x7f45fe
// 0087d24c  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0087d253  8b06                 mov eax, dword ptr [esi]
// 0087d255  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0087d258  51                   push ecx
// 0087d259  8bce                 mov ecx, esi
// 0087d25b  ffd2                 call edx
// 0087d25d  8b17                 mov edx, dword ptr [edi]
// 0087d25f  89442420             mov dword ptr [esp + 0x20], eax
// 0087d263  50                   push eax
// 0087d264  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087d267  8bcf                 mov ecx, edi
// 0087d269  ffd0                 call eax
// 0087d26b  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d272  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0087d276  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0087d27a  7440                 je 0x87d2bc
// 0087d27c  85ed                 test ebp, ebp
// 0087d27e  743c                 je 0x87d2bc
// 0087d280  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0087d284  8b16                 mov edx, dword ptr [esi]
// 0087d286  6a05                 push 5
// 0087d288  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087d28e  6a02                 push 2
// 0087d290  6a00                 push 0
// 0087d292  6a00                 push 0
// 0087d294  6a01                 push 1
// 0087d296  6a00                 push 0
// 0087d298  55                   push ebp
// 0087d299  83ec10               sub esp, 0x10
// 0087d29c  8bc4                 mov eax, esp
// 0087d29e  8918                 mov dword ptr [eax], ebx
// 0087d2a0  894804               mov dword ptr [eax + 4], ecx
// 0087d2a3  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0087d2aa  894808               mov dword ptr [eax + 8], ecx
// 0087d2ad  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087d2b4  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d2b7  57                   push edi
// 0087d2b8  8bce                 mov ecx, esi
// 0087d2ba  ffd2                 call edx
// 0087d2bc  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087d2c1  7457                 je 0x87d31a
// 0087d2c3  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d2ca  754e                 jne 0x87d31a
// 0087d2cc  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087d2d0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087d2d4  6a05                 push 5
// 0087d2d6  8b16                 mov edx, dword ptr [esi]
// 0087d2d8  6a01                 push 1
// 0087d2da  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087d2e0  6a00                 push 0
// 0087d2e2  50                   push eax
// 0087d2e3  51                   push ecx
// 0087d2e4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0087d2e8  6a00                 push 0
// 0087d2ea  55                   push ebp
// 0087d2eb  83ec10               sub esp, 0x10
// 0087d2ee  8bc4                 mov eax, esp
// 0087d2f0  8908                 mov dword ptr [eax], ecx
// 0087d2f2  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0087d2f9  894804               mov dword ptr [eax + 4], ecx
// 0087d2fc  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0087d303  894808               mov dword ptr [eax + 8], ecx
// 0087d306  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0087d30d  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d310  57                   push edi
// 0087d311  8bce                 mov ecx, esi
// 0087d313  ffd2                 call edx
// 0087d315  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0087d319  43                   inc ebx
// 0087d31a  837c242400           cmp dword ptr [esp + 0x24], 0
// 0087d31f  7413                 je 0x87d334
// 0087d321  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087d325  6a00                 push 0
// 0087d327  40                   inc eax
// 0087d328  50                   push eax
// 0087d329  8d4c2464             lea ecx, [esp + 0x64]
// 0087d32d  51                   push ecx
// 0087d32e  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087d334  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 0087d33b  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 0087d341  85c0                 test eax, eax
// 0087d343  752e                 jne 0x87d373
// 0087d345  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0087d34b  85c0                 test eax, eax
// 0087d34d  7f24                 jg 0x87d373
// 0087d34f  8b8a5c010000         mov ecx, dword ptr [edx + 0x15c]
// 0087d355  85c9                 test ecx, ecx
// 0087d357  740c                 je 0x87d365
// 0087d359  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0087d35c  85c0                 test eax, eax
// 0087d35e  7f13                 jg 0x87d373
// 0087d360  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0087d363  eb06                 jmp 0x87d36b
// 0087d365  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 0087d36b  85c0                 test eax, eax
// 0087d36d  0f8454010000         je 0x87d4c7
// 0087d373  837c243000           cmp dword ptr [esp + 0x30], 0
// 0087d378  0f8449010000         je 0x87d4c7
// 0087d37e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087d382  8bca                 mov ecx, edx
// 0087d384  8b11                 mov edx, dword ptr [ecx]
// 0087d386  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 0087d38c  50                   push eax
// 0087d38d  ffd2                 call edx
// 0087d38f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087d393  85c0                 test eax, eax
// 0087d395  0f84f1000000         je 0x87d48c
// 0087d39b  8bc8                 mov ecx, eax
// 0087d39d  e8ce84c5ff           call 0x4d5870
// 0087d3a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087d3a6  8bd8                 mov ebx, eax
// 0087d3a8  0faf5c243c           imul ebx, dword ptr [esp + 0x3c]
// 0087d3ad  e8ce08fdff           call 0x84dc80
// 0087d3b2  8bc8                 mov ecx, eax
// 0087d3b4  8bc3                 mov eax, ebx
// 0087d3b6  99                   cdq 
// 0087d3b7  f7f9                 idiv ecx
// 0087d3b9  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d3c0  89442440             mov dword ptr [esp + 0x40], eax
// 0087d3c4  7553                 jne 0x87d419
// 0087d3c6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087d3ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087d3ce  6a05                 push 5
// 0087d3d0  8b16                 mov edx, dword ptr [esi]
// 0087d3d2  f7d8                 neg eax
// 0087d3d4  6a01                 push 1
// 0087d3d6  1bc0                 sbb eax, eax
// 0087d3d8  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087d3de  6a00                 push 0
// 0087d3e0  f7d0                 not eax
// 0087d3e2  23442424             and eax, dword ptr [esp + 0x24]
// 0087d3e6  50                   push eax
// 0087d3e7  51                   push ecx
// 0087d3e8  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0087d3ec  6a00                 push 0
// 0087d3ee  55                   push ebp
// 0087d3ef  83ec10               sub esp, 0x10
// 0087d3f2  8bc4                 mov eax, esp
// 0087d3f4  8908                 mov dword ptr [eax], ecx
// 0087d3f6  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0087d3fd  894804               mov dword ptr [eax + 4], ecx
// 0087d400  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0087d407  894808               mov dword ptr [eax + 8], ecx
// 0087d40a  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0087d411  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d414  57                   push edi
// 0087d415  8bce                 mov ecx, esi
// 0087d417  ffd2                 call edx
// 0087d419  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0087d41d  8b442464             mov eax, dword ptr [esp + 0x64]
// 0087d421  2bc3                 sub eax, ebx
// 0087d423  99                   cdq 
// 0087d424  2bc2                 sub eax, edx
// 0087d426  8bc8                 mov ecx, eax
// 0087d428  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087d42c  99                   cdq 
// 0087d42d  2bc2                 sub eax, edx
// 0087d42f  d1f8                 sar eax, 1
// 0087d431  d1f9                 sar ecx, 1
// 0087d433  2bc8                 sub ecx, eax
// 0087d435  8b442468             mov eax, dword ptr [esp + 0x68]
// 0087d439  2b442460             sub eax, dword ptr [esp + 0x60]
// 0087d43d  03cb                 add ecx, ebx
// 0087d43f  99                   cdq 
// 0087d440  2bc2                 sub eax, edx
// 0087d442  8bd8                 mov ebx, eax
// 0087d444  8b442440             mov eax, dword ptr [esp + 0x40]
// 0087d448  6a00                 push 0
// 0087d44a  6a00                 push 0
// 0087d44c  99                   cdq 
// 0087d44d  2bc2                 sub eax, edx
// 0087d44f  8b542420             mov edx, dword ptr [esp + 0x20]
// 0087d453  52                   push edx
// 0087d454  8b542420             mov edx, dword ptr [esp + 0x20]
// 0087d458  52                   push edx
// 0087d459  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0087d45d  6a00                 push 0
// 0087d45f  55                   push ebp
// 0087d460  52                   push edx
// 0087d461  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0087d465  d1f8                 sar eax, 1
// 0087d467  52                   push edx
// 0087d468  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0087d46c  d1fb                 sar ebx, 1
// 0087d46e  2bd8                 sub ebx, eax
// 0087d470  039c2480000000       add ebx, dword ptr [esp + 0x80]
// 0087d477  8b06                 mov eax, dword ptr [esi]
// 0087d479  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0087d47f  52                   push edx
// 0087d480  53                   push ebx
// 0087d481  51                   push ecx
// 0087d482  57                   push edi
// 0087d483  8bce                 mov ecx, esi
// 0087d485  ffd0                 call eax
// 0087d487  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0087d48b  43                   inc ebx
// 0087d48c  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087d491  0f84bb000000         je 0x87d552
// 0087d497  837c242400           cmp dword ptr [esp + 0x24], 0
// 0087d49c  750b                 jne 0x87d4a9
// 0087d49e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0087d4a3  0f85a9000000         jne 0x87d552
// 0087d4a9  837c24280b           cmp dword ptr [esp + 0x28], 0xb
// 0087d4ae  7445                 je 0x87d4f5
// 0087d4b0  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d4b7  7418                 je 0x87d4d1
// 0087d4b9  8b16                 mov edx, dword ptr [esi]
// 0087d4bb  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087d4bf  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 0087d4c5  eb5f                 jmp 0x87d526
// 0087d4c7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0087d4cf  ebbb                 jmp 0x87d48c
// 0087d4d1  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087d4d6  b811000000           mov eax, 0x11
// 0087d4db  7406                 je 0x87d4e3
// 0087d4dd  8b865c040000         mov eax, dword ptr [esi + 0x45c]
// 0087d4e3  50                   push eax
// 0087d4e4  8bce                 mov ecx, esi
// 0087d4e6  e85501f8ff           call 0x7fd640
// 0087d4eb  8b16                 mov edx, dword ptr [esi]
// 0087d4ed  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 0087d4f3  eb31                 jmp 0x87d526
// 0087d4f5  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d4fc  7406                 je 0x87d504
// 0087d4fe  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087d502  eb1a                 jmp 0x87d51e
// 0087d504  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087d509  b811000000           mov eax, 0x11
// 0087d50e  7406                 je 0x87d516
// 0087d510  8b865c040000         mov eax, dword ptr [esi + 0x45c]
// 0087d516  50                   push eax
// 0087d517  8bce                 mov ecx, esi
// 0087d519  e82201f8ff           call 0x7fd640
// 0087d51e  8b16                 mov edx, dword ptr [esi]
// 0087d520  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0087d526  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087d52a  50                   push eax
// 0087d52b  83ec10               sub esp, 0x10
// 0087d52e  8bc4                 mov eax, esp
// 0087d530  8908                 mov dword ptr [eax], ecx
// 0087d532  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0087d536  894804               mov dword ptr [eax + 4], ecx
// 0087d539  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0087d540  894808               mov dword ptr [eax + 8], ecx
// 0087d543  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0087d54a  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d54d  57                   push edi
// 0087d54e  8bce                 mov ecx, esi
// 0087d550  ffd2                 call edx
// 0087d552  6a01                 push 1
// 0087d554  8bcf                 mov ecx, edi
// 0087d556  e8358f0a00           call 0x926490
// 0087d55b  837c242802           cmp dword ptr [esp + 0x28], 2
// 0087d560  7412                 je 0x87d574
// 0087d562  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087d566  83f803               cmp eax, 3
// 0087d569  7409                 je 0x87d574
// 0087d56b  83f804               cmp eax, 4
// 0087d56e  0f852f020000         jne 0x87d7a3
// 0087d574  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0087d578  8b542470             mov edx, dword ptr [esp + 0x70]
// 0087d57c  8d41f5               lea eax, [ecx - 0xb]
// 0087d57f  89442444             mov dword ptr [esp + 0x44], eax
// 0087d583  8b442478             mov eax, dword ptr [esp + 0x78]
// 0087d587  03c2                 add eax, edx
// 0087d589  99                   cdq 
// 0087d58a  2bc2                 sub eax, edx
// 0087d58c  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 0087d593  d1f8                 sar eax, 1
// 0087d595  83bafc00000004       cmp dword ptr [edx + 0xfc], 4
// 0087d59c  89442448             mov dword ptr [esp + 0x48], eax
// 0087d5a0  0f8585010000         jne 0x87d72b
// 0087d5a6  837c243400           cmp dword ptr [esp + 0x34], 0
// 0087d5ab  0f8493000000         je 0x87d644
// 0087d5b1  85ed                 test ebp, ebp
// 0087d5b3  0f84d8000000         je 0x87d691
// 0087d5b9  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087d5be  0f8480000000         je 0x87d644
// 0087d5c4  836c245414           sub dword ptr [esp + 0x54], 0x14
// 0087d5c9  6a14                 push 0x14
// 0087d5cb  6a10                 push 0x10
// 0087d5cd  8d51ec               lea edx, [ecx - 0x14]
// 0087d5d0  83ec10               sub esp, 0x10
// 0087d5d3  8bc4                 mov eax, esp
// 0087d5d5  8910                 mov dword ptr [eax], edx
// 0087d5d7  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0087d5de  895004               mov dword ptr [eax + 4], edx
// 0087d5e1  894808               mov dword ptr [eax + 8], ecx
// 0087d5e4  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0087d5eb  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d5ee  57                   push edi
// 0087d5ef  8bce                 mov ecx, esi
// 0087d5f1  e84a02f8ff           call 0x7fd840
// 0087d5f6  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d5fd  0f85cf000000         jne 0x87d6d2
// 0087d603  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0087d607  8b16                 mov edx, dword ptr [esi]
// 0087d609  6a05                 push 5
// 0087d60b  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087d611  6a02                 push 2
// 0087d613  6a00                 push 0
// 0087d615  6a00                 push 0
// 0087d617  6a01                 push 1
// 0087d619  6a00                 push 0
// 0087d61b  55                   push ebp
// 0087d61c  83ec10               sub esp, 0x10
// 0087d61f  8bc4                 mov eax, esp
// 0087d621  8918                 mov dword ptr [eax], ebx
// 0087d623  894804               mov dword ptr [eax + 4], ecx
// 0087d626  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0087d62d  894808               mov dword ptr [eax + 8], ecx
// 0087d630  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087d637  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d63a  57                   push edi
// 0087d63b  8bce                 mov ecx, esi
// 0087d63d  ffd2                 call edx
// 0087d63f  e98e000000           jmp 0x87d6d2
// 0087d644  85ed                 test ebp, ebp
// 0087d646  7449                 je 0x87d691
// 0087d648  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d64f  7540                 jne 0x87d691
// 0087d651  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0087d655  8b16                 mov edx, dword ptr [esi]
// 0087d657  6a05                 push 5
// 0087d659  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087d65f  6a02                 push 2
// 0087d661  6a00                 push 0
// 0087d663  6a00                 push 0
// 0087d665  6a01                 push 1
// 0087d667  6a00                 push 0
// 0087d669  55                   push ebp
// 0087d66a  83ec10               sub esp, 0x10
// 0087d66d  8bc4                 mov eax, esp
// 0087d66f  8918                 mov dword ptr [eax], ebx
// 0087d671  894804               mov dword ptr [eax + 4], ecx
// 0087d674  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0087d67b  894808               mov dword ptr [eax + 8], ecx
// 0087d67e  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087d685  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d688  57                   push edi
// 0087d689  8bce                 mov ecx, esi
// 0087d68b  ffd2                 call edx
// 0087d68d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0087d691  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087d696  7506                 jne 0x87d69e
// 0087d698  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087d69c  eb1b                 jmp 0x87d6b9
// 0087d69e  b810000000           mov eax, 0x10
// 0087d6a3  85ed                 test ebp, ebp
// 0087d6a5  7506                 jne 0x87d6ad
// 0087d6a7  8b865c040000         mov eax, dword ptr [esi + 0x45c]
// 0087d6ad  50                   push eax
// 0087d6ae  8bce                 mov ecx, esi
// 0087d6b0  e88bfff7ff           call 0x7fd640
// 0087d6b5  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0087d6b9  8b542470             mov edx, dword ptr [esp + 0x70]
// 0087d6bd  50                   push eax
// 0087d6be  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 0087d6c2  48                   dec eax
// 0087d6c3  50                   push eax
// 0087d6c4  42                   inc edx
// 0087d6c5  52                   push edx
// 0087d6c6  83c1ec               add ecx, -0x14
// 0087d6c9  51                   push ecx
// 0087d6ca  57                   push edi
// 0087d6cb  8bce                 mov ecx, esi
// 0087d6cd  e8ce01f8ff           call 0x7fd8a0
// 0087d6d2  837c243400           cmp dword ptr [esp + 0x34], 0
// 0087d6d7  7418                 je 0x87d6f1
// 0087d6d9  85ed                 test ebp, ebp
// 0087d6db  7414                 je 0x87d6f1
// 0087d6dd  8b865c040000         mov eax, dword ptr [esi + 0x45c]
// 0087d6e3  50                   push eax
// 0087d6e4  8bce                 mov ecx, esi
// 0087d6e6  e855fff7ff           call 0x7fd640
// 0087d6eb  89442434             mov dword ptr [esp + 0x34], eax
// 0087d6ef  eb08                 jmp 0x87d6f9
// 0087d6f1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087d6f5  894c2434             mov dword ptr [esp + 0x34], ecx
// 0087d6f9  8b542448             mov edx, dword ptr [esp + 0x48]
// 0087d6fd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087d701  8d42fd               lea eax, [edx - 3]
// 0087d704  89442448             mov dword ptr [esp + 0x48], eax
// 0087d708  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087d70c  50                   push eax
// 0087d70d  8d5a03               lea ebx, [edx + 3]
// 0087d710  53                   push ebx
// 0087d711  51                   push ecx
// 0087d712  52                   push edx
// 0087d713  8b542458             mov edx, dword ptr [esp + 0x58]
// 0087d717  8d6903               lea ebp, [ecx + 3]
// 0087d71a  55                   push ebp
// 0087d71b  52                   push edx
// 0087d71c  51                   push ecx
// 0087d71d  57                   push edi
// 0087d71e  e86d0ff8ff           call 0x7fe690
// 0087d723  83c420               add esp, 0x20
// 0087d726  e9c1000000           jmp 0x87d7ec
// 0087d72b  85ed                 test ebp, ebp
// 0087d72d  7445                 je 0x87d774
// 0087d72f  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d736  753c                 jne 0x87d774
// 0087d738  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0087d73c  8b16                 mov edx, dword ptr [esi]
// 0087d73e  6a05                 push 5
// 0087d740  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087d746  6a02                 push 2
// 0087d748  6a00                 push 0
// 0087d74a  6a00                 push 0
// 0087d74c  6a01                 push 1
// 0087d74e  6a00                 push 0
// 0087d750  55                   push ebp
// 0087d751  83ec10               sub esp, 0x10
// 0087d754  8bc4                 mov eax, esp
// 0087d756  8918                 mov dword ptr [eax], ebx
// 0087d758  894804               mov dword ptr [eax + 4], ecx
// 0087d75b  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0087d762  894808               mov dword ptr [eax + 8], ecx
// 0087d765  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087d76c  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d76f  57                   push edi
// 0087d770  8bce                 mov ecx, esi
// 0087d772  ffd2                 call edx
// 0087d774  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0087d778  8b442444             mov eax, dword ptr [esp + 0x44]
// 0087d77c  8d69fd               lea ebp, [ecx - 3]
// 0087d77f  896c2448             mov dword ptr [esp + 0x48], ebp
// 0087d783  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0087d787  55                   push ebp
// 0087d788  8d5103               lea edx, [ecx + 3]
// 0087d78b  52                   push edx
// 0087d78c  50                   push eax
// 0087d78d  51                   push ecx
// 0087d78e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0087d792  8d5803               lea ebx, [eax + 3]
// 0087d795  53                   push ebx
// 0087d796  51                   push ecx
// 0087d797  50                   push eax
// 0087d798  57                   push edi
// 0087d799  e8f20ef8ff           call 0x7fe690
// 0087d79e  83c420               add esp, 0x20
// 0087d7a1  eb49                 jmp 0x87d7ec
// 0087d7a3  85ed                 test ebp, ebp
// 0087d7a5  7445                 je 0x87d7ec
// 0087d7a7  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0087d7ae  753c                 jne 0x87d7ec
// 0087d7b0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0087d7b4  8b16                 mov edx, dword ptr [esi]
// 0087d7b6  6a05                 push 5
// 0087d7b8  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087d7be  6a02                 push 2
// 0087d7c0  6a00                 push 0
// 0087d7c2  6a00                 push 0
// 0087d7c4  6a01                 push 1
// 0087d7c6  6a00                 push 0
// 0087d7c8  55                   push ebp
// 0087d7c9  83ec10               sub esp, 0x10
// 0087d7cc  8bc4                 mov eax, esp
// 0087d7ce  8918                 mov dword ptr [eax], ebx
// 0087d7d0  894804               mov dword ptr [eax + 4], ecx
// 0087d7d3  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0087d7da  894808               mov dword ptr [eax + 8], ecx
// 0087d7dd  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087d7e4  89480c               mov dword ptr [eax + 0xc], ecx
// 0087d7e7  57                   push edi
// 0087d7e8  8bce                 mov ecx, esi
// 0087d7ea  ffd2                 call edx
// 0087d7ec  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 0087d7f3  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0087d7fa  50                   push eax
// 0087d7fb  51                   push ecx
// 0087d7fc  57                   push edi
// 0087d7fd  8bbc24a8000000       mov edi, dword ptr [esp + 0xa8]
// 0087d804  57                   push edi
// 0087d805  8bce                 mov ecx, esi
// 0087d807  e8f43df8ff           call 0x801600
// 0087d80c  8d4c2438             lea ecx, [esp + 0x38]
// 0087d810  ff15c0de9800         call dword ptr [0x98dec0]
// 0087d816  8bc7                 mov eax, edi
// 0087d818  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0087d81f  64890d00000000       mov dword ptr fs:[0], ecx
// 0087d826  59                   pop ecx
// 0087d827  5f                   pop edi
// 0087d828  5e                   pop esi
// 0087d829  5d                   pop ebp
// 0087d82a  5b                   pop ebx
// 0087d82b  81c484000000         add esp, 0x84
// 0087d831  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlPopupParent@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDefaultTheme.cpp