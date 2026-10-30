// roc 2009-12 0087e2c0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 1636 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087e2c0
//
// 0087e2c0  6aff                 push -1
// 0087e2c2  6841049600           push 0x960441
// 0087e2c7  64a100000000         mov eax, dword ptr fs:[0]
// 0087e2cd  50                   push eax
// 0087e2ce  83ec68               sub esp, 0x68
// 0087e2d1  53                   push ebx
// 0087e2d2  55                   push ebp
// 0087e2d3  56                   push esi
// 0087e2d4  57                   push edi
// 0087e2d5  a10052b600           mov eax, dword ptr [0xb65200]
// 0087e2da  33c4                 xor eax, esp
// 0087e2dc  50                   push eax
// 0087e2dd  8d44247c             lea eax, [esp + 0x7c]
// 0087e2e1  64a300000000         mov dword ptr fs:[0], eax
// 0087e2e7  8bf9                 mov edi, ecx
// 0087e2e9  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0087e2f0  85c0                 test eax, eax
// 0087e2f2  7414                 je 0x87e308
// 0087e2f4  8b4074               mov eax, dword ptr [eax + 0x74]
// 0087e2f7  83787400             cmp dword ptr [eax + 0x74], 0
// 0087e2fb  7506                 jne 0x87e303
// 0087e2fd  83787800             cmp dword ptr [eax + 0x78], 0
// 0087e301  7405                 je 0x87e308
// 0087e303  83c074               add eax, 0x74
// 0087e306  eb0c                 jmp 0x87e314
// 0087e308  6a00                 push 0
// 0087e30a  8d442428             lea eax, [esp + 0x28]
// 0087e30e  50                   push eax
// 0087e30f  e83cfdf7ff           call 0x7fe050
// 0087e314  8b10                 mov edx, dword ptr [eax]
// 0087e316  8b4004               mov eax, dword ptr [eax + 4]
// 0087e319  8d4804               lea ecx, [eax + 4]
// 0087e31c  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 0087e322  3bc8                 cmp ecx, eax
// 0087e324  8954242c             mov dword ptr [esp + 0x2c], edx
// 0087e328  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087e32c  7f04                 jg 0x87e332
// 0087e32e  89442418             mov dword ptr [esp + 0x18], eax
// 0087e332  8d4a04               lea ecx, [edx + 4]
// 0087e335  3bc8                 cmp ecx, eax
// 0087e337  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087e33b  7f04                 jg 0x87e341
// 0087e33d  89442414             mov dword ptr [esp + 0x14], eax
// 0087e341  83bc24ac00000000     cmp dword ptr [esp + 0xac], 0
// 0087e349  0f84ab050000         je 0x87e8fa
// 0087e34f  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 0087e356  6a0f                 push 0xf
// 0087e358  8bcf                 mov ecx, edi
// 0087e35a  e8e1f2f7ff           call 0x7fd640
// 0087e35f  50                   push eax
// 0087e360  85ed                 test ebp, ebp
// 0087e362  7525                 jne 0x87e389
// 0087e364  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0087e36b  51                   push ecx
// 0087e36c  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0087e373  e88662f7ff           call 0x7f45fe
// 0087e378  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0087e37f  8928                 mov dword ptr [eax], ebp
// 0087e381  896804               mov dword ptr [eax + 4], ebp
// 0087e384  e985050000           jmp 0x87e90e
// 0087e389  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 0087e390  8d94249c000000       lea edx, [esp + 0x9c]
// 0087e397  52                   push edx
// 0087e398  8bce                 mov ecx, esi
// 0087e39a  e85f62f7ff           call 0x7f45fe
// 0087e39f  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0087e3a6  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0087e3ad  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0087e3b4  8b9dfc000000         mov ebx, dword ptr [ebp + 0xfc]
// 0087e3ba  48                   dec eax
// 0087e3bb  41                   inc ecx
// 0087e3bc  89442424             mov dword ptr [esp + 0x24], eax
// 0087e3c0  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0087e3c7  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0087e3cb  8bcd                 mov ecx, ebp
// 0087e3cd  89542460             mov dword ptr [esp + 0x60], edx
// 0087e3d1  89442468             mov dword ptr [esp + 0x68], eax
// 0087e3d5  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 0087e3dc  e8af78f7ff           call 0x7f5c90
// 0087e3e1  85c0                 test eax, eax
// 0087e3e3  7534                 jne 0x87e419
// 0087e3e5  83fb02               cmp ebx, 2
// 0087e3e8  7439                 je 0x87e423
// 0087e3ea  ba01000000           mov edx, 1
// 0087e3ef  8b8590000000         mov eax, dword ptr [ebp + 0x90]
// 0087e3f5  85c0                 test eax, eax
// 0087e3f7  753c                 jne 0x87e435
// 0087e3f9  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 0087e3ff  85c0                 test eax, eax
// 0087e401  7f32                 jg 0x87e435
// 0087e403  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 0087e409  85c9                 test ecx, ecx
// 0087e40b  741a                 je 0x87e427
// 0087e40d  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0087e410  85c0                 test eax, eax
// 0087e412  7f21                 jg 0x87e435
// 0087e414  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0087e417  eb14                 jmp 0x87e42d
// 0087e419  83f802               cmp eax, 2
// 0087e41c  74cc                 je 0x87e3ea
// 0087e41e  83f803               cmp eax, 3
// 0087e421  74c7                 je 0x87e3ea
// 0087e423  33d2                 xor edx, edx
// 0087e425  ebc8                 jmp 0x87e3ef
// 0087e427  8b8584000000         mov eax, dword ptr [ebp + 0x84]
// 0087e42d  85c0                 test eax, eax
// 0087e42f  0f841c010000         je 0x87e551
// 0087e435  85d2                 test edx, edx
// 0087e437  0f8414010000         je 0x87e551
// 0087e43d  8b5500               mov edx, dword ptr [ebp]
// 0087e440  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087e444  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 0087e44a  50                   push eax
// 0087e44b  8bcd                 mov ecx, ebp
// 0087e44d  ffd2                 call edx
// 0087e44f  8bd8                 mov ebx, eax
// 0087e451  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0087e455  85db                 test ebx, ebx
// 0087e457  0f84f4000000         je 0x87e551
// 0087e45d  8bcb                 mov ecx, ebx
// 0087e45f  e80c74c5ff           call 0x4d5870
// 0087e464  8be8                 mov ebp, eax
// 0087e466  0faf6c242c           imul ebp, dword ptr [esp + 0x2c]
// 0087e46b  8bcb                 mov ecx, ebx
// 0087e46d  e80ef8fcff           call 0x84dc80
// 0087e472  8bc8                 mov ecx, eax
// 0087e474  8bc5                 mov eax, ebp
// 0087e476  99                   cdq 
// 0087e477  f7f9                 idiv ecx
// 0087e479  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 0087e480  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0087e487  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087e48b  6a05                 push 5
// 0087e48d  6a01                 push 1
// 0087e48f  6a00                 push 0
// 0087e491  6a00                 push 0
// 0087e493  6a01                 push 1
// 0087e495  6a00                 push 0
// 0087e497  8d1c2a               lea ebx, [edx + ebp]
// 0087e49a  8b17                 mov edx, dword ptr [edi]
// 0087e49c  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087e4a2  894c2468             mov dword ptr [esp + 0x68], ecx
// 0087e4a6  896c2464             mov dword ptr [esp + 0x64], ebp
// 0087e4aa  89442448             mov dword ptr [esp + 0x48], eax
// 0087e4ae  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 0087e4b5  89442470             mov dword ptr [esp + 0x70], eax
// 0087e4b9  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 0087e4c0  50                   push eax
// 0087e4c1  83ec10               sub esp, 0x10
// 0087e4c4  8bc4                 mov eax, esp
// 0087e4c6  8928                 mov dword ptr [eax], ebp
// 0087e4c8  894804               mov dword ptr [eax + 4], ecx
// 0087e4cb  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087e4d2  895808               mov dword ptr [eax + 8], ebx
// 0087e4d5  89480c               mov dword ptr [eax + 0xc], ecx
// 0087e4d8  56                   push esi
// 0087e4d9  8bcf                 mov ecx, edi
// 0087e4db  ffd2                 call edx
// 0087e4dd  8b442458             mov eax, dword ptr [esp + 0x58]
// 0087e4e1  2b442450             sub eax, dword ptr [esp + 0x50]
// 0087e4e5  6a00                 push 0
// 0087e4e7  99                   cdq 
// 0087e4e8  2bc2                 sub eax, edx
// 0087e4ea  8bc8                 mov ecx, eax
// 0087e4ec  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087e4f0  99                   cdq 
// 0087e4f1  2bc2                 sub eax, edx
// 0087e4f3  d1f8                 sar eax, 1
// 0087e4f5  d1f9                 sar ecx, 1
// 0087e4f7  2bc8                 sub ecx, eax
// 0087e4f9  034c2454             add ecx, dword ptr [esp + 0x54]
// 0087e4fd  8bc3                 mov eax, ebx
// 0087e4ff  2bc5                 sub eax, ebp
// 0087e501  99                   cdq 
// 0087e502  2bc2                 sub eax, edx
// 0087e504  6a00                 push 0
// 0087e506  8be8                 mov ebp, eax
// 0087e508  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087e50c  6a00                 push 0
// 0087e50e  6a01                 push 1
// 0087e510  99                   cdq 
// 0087e511  2bc2                 sub eax, edx
// 0087e513  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0087e51a  6a00                 push 0
// 0087e51c  52                   push edx
// 0087e51d  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087e521  52                   push edx
// 0087e522  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0087e526  52                   push edx
// 0087e527  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0087e52b  d1f8                 sar eax, 1
// 0087e52d  d1fd                 sar ebp, 1
// 0087e52f  2be8                 sub ebp, eax
// 0087e531  036c246c             add ebp, dword ptr [esp + 0x6c]
// 0087e535  8b07                 mov eax, dword ptr [edi]
// 0087e537  52                   push edx
// 0087e538  51                   push ecx
// 0087e539  55                   push ebp
// 0087e53a  56                   push esi
// 0087e53b  8bcf                 mov ecx, edi
// 0087e53d  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0087e543  ffd0                 call eax
// 0087e545  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 0087e54c  43                   inc ebx
// 0087e54d  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0087e551  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 0087e558  85db                 test ebx, ebx
// 0087e55a  742f                 je 0x87e58b
// 0087e55c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0087e560  8b542460             mov edx, dword ptr [esp + 0x60]
// 0087e564  6a0d                 push 0xd
// 0087e566  6a0d                 push 0xd
// 0087e568  83ec10               sub esp, 0x10
// 0087e56b  8bc4                 mov eax, esp
// 0087e56d  8908                 mov dword ptr [eax], ecx
// 0087e56f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0087e573  895004               mov dword ptr [eax + 4], edx
// 0087e576  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0087e57d  894808               mov dword ptr [eax + 8], ecx
// 0087e580  56                   push esi
// 0087e581  8bcf                 mov ecx, edi
// 0087e583  89500c               mov dword ptr [eax + 0xc], edx
// 0087e586  e8d501f8ff           call 0x7fe760
// 0087e58b  33c0                 xor eax, eax
// 0087e58d  85db                 test ebx, ebx
// 0087e58f  0f94c0               sete al
// 0087e592  8bcf                 mov ecx, edi
// 0087e594  8d04850e000000       lea eax, [eax*4 + 0xe]
// 0087e59b  50                   push eax
// 0087e59c  89442428             mov dword ptr [esp + 0x28], eax
// 0087e5a0  e89bf0f7ff           call 0x7fd640
// 0087e5a5  8b16                 mov edx, dword ptr [esi]
// 0087e5a7  89842494000000       mov dword ptr [esp + 0x94], eax
// 0087e5ae  50                   push eax
// 0087e5af  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087e5b2  8bce                 mov ecx, esi
// 0087e5b4  ffd0                 call eax
// 0087e5b6  6a01                 push 1
// 0087e5b8  8bce                 mov ecx, esi
// 0087e5ba  e8d17e0a00           call 0x926490
// 0087e5bf  8b5500               mov edx, dword ptr [ebp]
// 0087e5c2  8b5258               mov edx, dword ptr [edx + 0x58]
// 0087e5c5  8d8424ac000000       lea eax, [esp + 0xac]
// 0087e5cc  50                   push eax
// 0087e5cd  8bcd                 mov ecx, ebp
// 0087e5cf  ffd2                 call edx
// 0087e5d1  8d8424ac000000       lea eax, [esp + 0xac]
// 0087e5d8  50                   push eax
// 0087e5d9  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 0087e5e4  e8e7f2f7ff           call 0x7fd8d0
// 0087e5e9  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0087e5f0  83c404               add esp, 4
// 0087e5f3  85c9                 test ecx, ecx
// 0087e5f5  741d                 je 0x87e614
// 0087e5f7  e8a45df9ff           call 0x8143a0
// 0087e5fc  85c0                 test eax, eax
// 0087e5fe  7414                 je 0x87e614
// 0087e600  8b17                 mov edx, dword ptr [edi]
// 0087e602  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 0087e608  8d8424ac000000       lea eax, [esp + 0xac]
// 0087e60f  50                   push eax
// 0087e610  8bcf                 mov ecx, edi
// 0087e612  ffd2                 call edx
// 0087e614  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0087e61b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087e61f  8d540104             lea edx, [ecx + eax + 4]
// 0087e623  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0087e62a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0087e631  89442440             mov dword ptr [esp + 0x40], eax
// 0087e635  8d87f0000000         lea eax, [edi + 0xf0]
// 0087e63b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0087e63f  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 0087e646  50                   push eax
// 0087e647  894c2448             mov dword ptr [esp + 0x48], ecx
// 0087e64b  56                   push esi
// 0087e64c  8d4c2474             lea ecx, [esp + 0x74]
// 0087e650  89542450             mov dword ptr [esp + 0x50], edx
// 0087e654  e807d0fcff           call 0x84b660
// 0087e659  8b2e                 mov ebp, dword ptr [esi]
// 0087e65b  6824880000           push 0x8824
// 0087e660  8d4c2440             lea ecx, [esp + 0x40]
// 0087e664  51                   push ecx
// 0087e665  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0087e66c  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 0087e674  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0087e67a  50                   push eax
// 0087e67b  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0087e682  ff1580de9800         call dword ptr [0x98de80]
// 0087e688  8b5570               mov edx, dword ptr [ebp + 0x70]
// 0087e68b  50                   push eax
// 0087e68c  8bce                 mov ecx, esi
// 0087e68e  ffd2                 call edx
// 0087e690  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0087e697  83f802               cmp eax, 2
// 0087e69a  740e                 je 0x87e6aa
// 0087e69c  83f803               cmp eax, 3
// 0087e69f  7409                 je 0x87e6aa
// 0087e6a1  83f804               cmp eax, 4
// 0087e6a4  0f858e000000         jne 0x87e738
// 0087e6aa  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0087e6b1  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0087e6b8  03c1                 add eax, ecx
// 0087e6ba  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0087e6c1  99                   cdq 
// 0087e6c2  2bc2                 sub eax, edx
// 0087e6c4  d1f8                 sar eax, 1
// 0087e6c6  8d58fb               lea ebx, [eax - 5]
// 0087e6c9  899c24b0000000       mov dword ptr [esp + 0xb0], ebx
// 0087e6d0  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 0087e6d7  53                   push ebx
// 0087e6d8  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 0087e6df  83c1f9               add ecx, -7
// 0087e6e2  8d6805               lea ebp, [eax + 5]
// 0087e6e5  55                   push ebp
// 0087e6e6  8d51fb               lea edx, [ecx - 5]
// 0087e6e9  52                   push edx
// 0087e6ea  53                   push ebx
// 0087e6eb  52                   push edx
// 0087e6ec  50                   push eax
// 0087e6ed  51                   push ecx
// 0087e6ee  56                   push esi
// 0087e6ef  e89cfff7ff           call 0x7fe690
// 0087e6f4  83c420               add esp, 0x20
// 0087e6f7  83bc249000000004     cmp dword ptr [esp + 0x90], 4
// 0087e6ff  7530                 jne 0x87e731
// 0087e701  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087e705  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0087e70c  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0087e713  52                   push edx
// 0087e714  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0087e71b  49                   dec ecx
// 0087e71c  51                   push ecx
// 0087e71d  83c0ec               add eax, -0x14
// 0087e720  50                   push eax
// 0087e721  42                   inc edx
// 0087e722  52                   push edx
// 0087e723  50                   push eax
// 0087e724  56                   push esi
// 0087e725  8bcf                 mov ecx, edi
// 0087e727  e87404f8ff           call 0x7feba0
// 0087e72c  e9ab010000           jmp 0x87e8dc
// 0087e731  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0087e738  83f805               cmp eax, 5
// 0087e73b  7409                 je 0x87e746
// 0087e73d  83f806               cmp eax, 6
// 0087e740  0f8596010000         jne 0x87e8dc
// 0087e746  8d44243c             lea eax, [esp + 0x3c]
// 0087e74a  50                   push eax
// 0087e74b  ff159cca9800         call dword ptr [0x98ca9c]
// 0087e751  8b1e                 mov ebx, dword ptr [esi]
// 0087e753  6820040000           push 0x420
// 0087e758  8d4c2440             lea ecx, [esp + 0x40]
// 0087e75c  51                   push ecx
// 0087e75d  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0087e764  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0087e76a  50                   push eax
// 0087e76b  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0087e772  ff1580de9800         call dword ptr [0x98de80]
// 0087e778  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0087e77b  50                   push eax
// 0087e77c  8bce                 mov ecx, esi
// 0087e77e  ffd2                 call edx
// 0087e780  8b4e08               mov ecx, dword ptr [esi + 8]
// 0087e783  8d44241c             lea eax, [esp + 0x1c]
// 0087e787  50                   push eax
// 0087e788  6a01                 push 1
// 0087e78a  6868619a00           push 0x9a6168
// 0087e78f  51                   push ecx
// 0087e790  ff156cb19800         call dword ptr [0x98b16c]
// 0087e796  8b542444             mov edx, dword ptr [esp + 0x44]
// 0087e79a  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 0087e79e  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0087e7a5  03542414             add edx, dword ptr [esp + 0x14]
// 0087e7a9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087e7ad  8d540a09             lea edx, [edx + ecx + 9]
// 0087e7b1  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0087e7b8  83c002               add eax, 2
// 0087e7bb  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 0087e7c2  8be9                 mov ebp, ecx
// 0087e7c4  2be8                 sub ebp, eax
// 0087e7c6  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0087e7cd  89442438             mov dword ptr [esp + 0x38], eax
// 0087e7d1  33c0                 xor eax, eax
// 0087e7d3  398424a8000000       cmp dword ptr [esp + 0xa8], eax
// 0087e7da  6a05                 push 5
// 0087e7dc  0f94c0               sete al
// 0087e7df  894c2438             mov dword ptr [esp + 0x38], ecx
// 0087e7e3  8d44000d             lea eax, [eax + eax + 0xd]
// 0087e7e7  50                   push eax
// 0087e7e8  83ec10               sub esp, 0x10
// 0087e7eb  8bc4                 mov eax, esp
// 0087e7ed  8910                 mov dword ptr [eax], edx
// 0087e7ef  8bd3                 mov edx, ebx
// 0087e7f1  895004               mov dword ptr [eax + 4], edx
// 0087e7f4  894808               mov dword ptr [eax + 8], ecx
// 0087e7f7  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 0087e7fe  89480c               mov dword ptr [eax + 0xc], ecx
// 0087e801  56                   push esi
// 0087e802  8bcf                 mov ecx, edi
// 0087e804  e857fff7ff           call 0x7fe760
// 0087e809  83bc249000000005     cmp dword ptr [esp + 0x90], 5
// 0087e811  0f85c5000000         jne 0x87e8dc
// 0087e817  83bc24a800000000     cmp dword ptr [esp + 0xa8], 0
// 0087e81f  6a0f                 push 0xf
// 0087e821  7549                 jne 0x87e86c
// 0087e823  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087e827  2bc3                 sub eax, ebx
// 0087e829  898424ac000000       mov dword ptr [esp + 0xac], eax
// 0087e830  8b442438             mov eax, dword ptr [esp + 0x38]
// 0087e834  2bc5                 sub eax, ebp
// 0087e836  8bcf                 mov ecx, edi
// 0087e838  89842494000000       mov dword ptr [esp + 0x94], eax
// 0087e83f  e8fcedf7ff           call 0x7fd640
// 0087e844  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0087e84b  50                   push eax
// 0087e84c  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0087e853  83c2fc               add edx, -4
// 0087e856  52                   push edx
// 0087e857  83c0fc               add eax, -4
// 0087e85a  50                   push eax
// 0087e85b  8d4b02               lea ecx, [ebx + 2]
// 0087e85e  51                   push ecx
// 0087e85f  8d5502               lea edx, [ebp + 2]
// 0087e862  52                   push edx
// 0087e863  8bce                 mov ecx, esi
// 0087e865  e82c7c0a00           call 0x926496
// 0087e86a  eb22                 jmp 0x87e88e
// 0087e86c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087e870  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0087e874  6a0d                 push 0xd
// 0087e876  83ec10               sub esp, 0x10
// 0087e879  8bc4                 mov eax, esp
// 0087e87b  8928                 mov dword ptr [eax], ebp
// 0087e87d  895804               mov dword ptr [eax + 4], ebx
// 0087e880  894808               mov dword ptr [eax + 8], ecx
// 0087e883  56                   push esi
// 0087e884  8bcf                 mov ecx, edi
// 0087e886  89500c               mov dword ptr [eax + 0xc], edx
// 0087e889  e8d2fef7ff           call 0x7fe760
// 0087e88e  b801000000           mov eax, 1
// 0087e893  29442434             sub dword ptr [esp + 0x34], eax
// 0087e897  29442438             sub dword ptr [esp + 0x38], eax
// 0087e89b  03e8                 add ebp, eax
// 0087e89d  03d8                 add ebx, eax
// 0087e89f  8b07                 mov eax, dword ptr [edi]
// 0087e8a1  6a12                 push 0x12
// 0087e8a3  8bcf                 mov ecx, edi
// 0087e8a5  898424ac000000       mov dword ptr [esp + 0xac], eax
// 0087e8ac  e88fedf7ff           call 0x7fd640
// 0087e8b1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087e8b5  8b542438             mov edx, dword ptr [esp + 0x38]
// 0087e8b9  50                   push eax
// 0087e8ba  83ec10               sub esp, 0x10
// 0087e8bd  8bc4                 mov eax, esp
// 0087e8bf  8928                 mov dword ptr [eax], ebp
// 0087e8c1  895804               mov dword ptr [eax + 4], ebx
// 0087e8c4  894808               mov dword ptr [eax + 8], ecx
// 0087e8c7  89500c               mov dword ptr [eax + 0xc], edx
// 0087e8ca  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 0087e8d1  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 0087e8d7  56                   push esi
// 0087e8d8  8bcf                 mov ecx, edi
// 0087e8da  ffd2                 call edx
// 0087e8dc  8d4c246c             lea ecx, [esp + 0x6c]
// 0087e8e0  c684248400000000     mov byte ptr [esp + 0x84], 0
// 0087e8e8  e8f3cdfcff           call 0x84b6e0
// 0087e8ed  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0087e8f4  ff15c0de9800         call dword ptr [0x98dec0]
// 0087e8fa  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0087e901  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087e905  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087e909  8908                 mov dword ptr [eax], ecx
// 0087e90b  895004               mov dword ptr [eax + 4], edx
// 0087e90e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0087e912  64890d00000000       mov dword ptr fs:[0], ecx
// 0087e919  59                   pop ecx
// 0087e91a  5f                   pop edi
// 0087e91b  5e                   pop esi
// 0087e91c  5d                   pop ebp
// 0087e91d  5b                   pop ebx
// 0087e91e  83c474               add esp, 0x74
// 0087e921  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDefaultTheme.cpp