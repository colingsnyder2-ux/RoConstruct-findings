// roc 2009-12 008c9e40  unit: CXTPPropertyGridPaintManager  size: 1667 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9e40
//
// 008c9e40  6aff                 push -1
// 008c9e42  68164a9600           push 0x964a16
// 008c9e47  64a100000000         mov eax, dword ptr fs:[0]
// 008c9e4d  50                   push eax
// 008c9e4e  81ec80000000         sub esp, 0x80
// 008c9e54  53                   push ebx
// 008c9e55  55                   push ebp
// 008c9e56  56                   push esi
// 008c9e57  57                   push edi
// 008c9e58  a10052b600           mov eax, dword ptr [0xb65200]
// 008c9e5d  33c4                 xor eax, esp
// 008c9e5f  50                   push eax
// 008c9e60  8d842494000000       lea eax, [esp + 0x94]
// 008c9e67  64a300000000         mov dword ptr fs:[0], eax
// 008c9e6d  8bf9                 mov edi, ecx
// 008c9e6f  897c2424             mov dword ptr [esp + 0x24], edi
// 008c9e73  33db                 xor ebx, ebx
// 008c9e75  399c24b8000000       cmp dword ptr [esp + 0xb8], ebx
// 008c9e7c  7511                 jne 0x8c9e8f
// 008c9e7e  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008c9e86  399c24bc000000       cmp dword ptr [esp + 0xbc], ebx
// 008c9e8d  7404                 je 0x8c9e93
// 008c9e8f  895c2428             mov dword ptr [esp + 0x28], ebx
// 008c9e93  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 008c9e9a  8d4764               lea eax, [edi + 0x64]
// 008c9e9d  50                   push eax
// 008c9e9e  56                   push esi
// 008c9e9f  8d4c247c             lea ecx, [esp + 0x7c]
// 008c9ea3  e8b817f8ff           call 0x84b660
// 008c9ea8  6afc                 push -4
// 008c9eaa  6afa                 push -6
// 008c9eac  8d8424b0000000       lea eax, [esp + 0xb0]
// 008c9eb3  50                   push eax
// 008c9eb4  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 008c9ebb  ff1558ca9800         call dword ptr [0x98ca58]
// 008c9ec1  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008c9ec4  8b8938010000         mov ecx, dword ptr [ecx + 0x138]
// 008c9eca  e8b13df8ff           call 0x84dc80
// 008c9ecf  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 008c9ed6  8b4e08               mov ecx, dword ptr [esi + 8]
// 008c9ed9  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 008c9ee0  8bd8                 mov ebx, eax
// 008c9ee2  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008c9ee9  2bc5                 sub eax, ebp
// 008c9eeb  89442434             mov dword ptr [esp + 0x34], eax
// 008c9eef  8d44243c             lea eax, [esp + 0x3c]
// 008c9ef3  50                   push eax
// 008c9ef4  6a03                 push 3
// 008c9ef6  684419a000           push 0xa01944
// 008c9efb  51                   push ecx
// 008c9efc  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008c9f00  89542428             mov dword ptr [esp + 0x28], edx
// 008c9f04  ff156cb19800         call dword ptr [0x98b16c]
// 008c9f0a  33c0                 xor eax, eax
// 008c9f0c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008c9f10  85db                 test ebx, ebx
// 008c9f12  7f40                 jg 0x8c9f54
// 008c9f14  8d4c2474             lea ecx, [esp + 0x74]
// 008c9f18  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008c9f23  e8b817f8ff           call 0x84b6e0
// 008c9f28  83c8ff               or eax, 0xffffffff
// 008c9f2b  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008c9f32  64890d00000000       mov dword ptr fs:[0], ecx
// 008c9f39  59                   pop ecx
// 008c9f3a  5f                   pop edi
// 008c9f3b  5e                   pop esi
// 008c9f3c  5d                   pop ebp
// 008c9f3d  5b                   pop ebx
// 008c9f3e  81c48c000000         add esp, 0x8c
// 008c9f44  c21c00               ret 0x1c
// 008c9f47  eb07                 jmp 0x8c9f50
// 008c9f49  8da42400000000       lea esp, [esp]
// 008c9f50  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008c9f54  8b5760               mov edx, dword ptr [edi + 0x60]
// 008c9f57  8b8a38010000         mov ecx, dword ptr [edx + 0x138]
// 008c9f5d  85c0                 test eax, eax
// 008c9f5f  0f8c59050000         jl 0x8ca4be
// 008c9f65  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008c9f68  0f8d50050000         jge 0x8ca4be
// 008c9f6e  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008c9f71  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 008c9f74  8d0481               lea eax, [ecx + eax*4]
// 008c9f77  8d542414             lea edx, [esp + 0x14]
// 008c9f7b  52                   push edx
// 008c9f7c  8bcb                 mov ecx, ebx
// 008c9f7e  e81df6ffff           call 0x8c95a0
// 008c9f83  8d4c2414             lea ecx, [esp + 0x14]
// 008c9f87  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 008c9f8f  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c9f95  84c0                 test al, al
// 008c9f97  0f8531040000         jne 0x8ca3ce
// 008c9f9d  8d442444             lea eax, [esp + 0x44]
// 008c9fa1  50                   push eax
// 008c9fa2  8d4c2418             lea ecx, [esp + 0x18]
// 008c9fa6  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c9fac  50                   push eax
// 008c9fad  8d4c241c             lea ecx, [esp + 0x1c]
// 008c9fb1  ff1580de9800         call dword ptr [0x98de80]
// 008c9fb7  8b4e08               mov ecx, dword ptr [esi + 8]
// 008c9fba  50                   push eax
// 008c9fbb  51                   push ecx
// 008c9fbc  ff156cb19800         call dword ptr [0x98b16c]
// 008c9fc2  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008c9fc6  8d142f               lea edx, [edi + ebp]
// 008c9fc9  3b542434             cmp edx, dword ptr [esp + 0x34]
// 008c9fcd  0f8cb6020000         jl 0x8ca289
// 008c9fd3  8d4c2414             lea ecx, [esp + 0x14]
// 008c9fd7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c9fdd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008c9fe1  48                   dec eax
// 008c9fe2  2bcd                 sub ecx, ebp
// 008c9fe4  0fafc1               imul eax, ecx
// 008c9fe7  99                   cdq 
// 008c9fe8  f7ff                 idiv edi
// 008c9fea  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008c9ff1  83f801               cmp eax, 1
// 008c9ff4  89442438             mov dword ptr [esp + 0x38], eax
// 008c9ff8  8bf8                 mov edi, eax
// 008c9ffa  7d08                 jge 0x8ca004
// 008c9ffc  3be9                 cmp ebp, ecx
// 008c9ffe  0f84bd030000         je 0x8ca3c1
// 008ca004  85c0                 test eax, eax
// 008ca006  7c45                 jl 0x8ca04d
// 008ca008  eb06                 jmp 0x8ca010
// 008ca00a  8d9b00000000         lea ebx, [ebx]
// 008ca010  57                   push edi
// 008ca011  8d4c2418             lea ecx, [esp + 0x18]
// 008ca015  ff1510d59800         call dword ptr [0x98d510]
// 008ca01b  3c20                 cmp al, 0x20
// 008ca01d  7423                 je 0x8ca042
// 008ca01f  57                   push edi
// 008ca020  8d4c2418             lea ecx, [esp + 0x18]
// 008ca024  ff1510d59800         call dword ptr [0x98d510]
// 008ca02a  3c2c                 cmp al, 0x2c
// 008ca02c  7414                 je 0x8ca042
// 008ca02e  57                   push edi
// 008ca02f  8d4c2418             lea ecx, [esp + 0x18]
// 008ca033  ff1510d59800         call dword ptr [0x98d510]
// 008ca039  3c2d                 cmp al, 0x2d
// 008ca03b  7405                 je 0x8ca042
// 008ca03d  83ef01               sub edi, 1
// 008ca040  79ce                 jns 0x8ca010
// 008ca042  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008ca049  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ca04d  85ff                 test edi, edi
// 008ca04f  7f15                 jg 0x8ca066
// 008ca051  3be9                 cmp ebp, ecx
// 008ca053  740f                 je 0x8ca064
// 008ca055  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ca059  01542418             add dword ptr [esp + 0x18], edx
// 008ca05d  8be9                 mov ebp, ecx
// 008ca05f  e9a3010000           jmp 0x8ca207
// 008ca064  8bf8                 mov edi, eax
// 008ca066  47                   inc edi
// 008ca067  57                   push edi
// 008ca068  8d442424             lea eax, [esp + 0x24]
// 008ca06c  50                   push eax
// 008ca06d  8d4c241c             lea ecx, [esp + 0x1c]
// 008ca071  ff1544cf9800         call dword ptr [0x98cf44]
// 008ca077  57                   push edi
// 008ca078  8d4c2434             lea ecx, [esp + 0x34]
// 008ca07c  51                   push ecx
// 008ca07d  8d4c241c             lea ecx, [esp + 0x1c]
// 008ca081  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 008ca089  ff157cd69800         call dword ptr [0x98d67c]
// 008ca08f  8d54244c             lea edx, [esp + 0x4c]
// 008ca093  52                   push edx
// 008ca094  8d4c2424             lea ecx, [esp + 0x24]
// 008ca098  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 008ca0a0  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008ca0a6  50                   push eax
// 008ca0a7  8d4c2428             lea ecx, [esp + 0x28]
// 008ca0ab  ff1580de9800         call dword ptr [0x98de80]
// 008ca0b1  50                   push eax
// 008ca0b2  8b4608               mov eax, dword ptr [esi + 8]
// 008ca0b5  50                   push eax
// 008ca0b6  ff156cb19800         call dword ptr [0x98b16c]
// 008ca0bc  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008ca0c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ca0c4  8d3c01               lea edi, [ecx + eax]
// 008ca0c7  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008ca0ce  3bf9                 cmp edi, ecx
// 008ca0d0  897c2418             mov dword ptr [esp + 0x18], edi
// 008ca0d4  8bd7                 mov edx, edi
// 008ca0d6  7c02                 jl 0x8ca0da
// 008ca0d8  8bd1                 mov edx, ecx
// 008ca0da  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008ca0de  03cd                 add ecx, ebp
// 008ca0e0  3b8c24b0000000       cmp ecx, dword ptr [esp + 0xb0]
// 008ca0e7  7c07                 jl 0x8ca0f0
// 008ca0e9  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008ca0f0  837c242800           cmp dword ptr [esp + 0x28], 0
// 008ca0f5  896c2454             mov dword ptr [esp + 0x54], ebp
// 008ca0f9  89442458             mov dword ptr [esp + 0x58], eax
// 008ca0fd  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008ca101  89542460             mov dword ptr [esp + 0x60], edx
// 008ca105  0f8424010000         je 0x8ca22f
// 008ca10b  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 008ca10e  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008ca112  894330               mov dword ptr [ebx + 0x30], eax
// 008ca115  894b34               mov dword ptr [ebx + 0x34], ecx
// 008ca118  895338               mov dword ptr [ebx + 0x38], edx
// 008ca11b  8b4574               mov eax, dword ptr [ebp + 0x74]
// 008ca11e  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 008ca124  0588000000           add eax, 0x88
// 008ca129  83f9ff               cmp ecx, -1
// 008ca12c  7505                 jne 0x8ca133
// 008ca12e  8b4004               mov eax, dword ptr [eax + 4]
// 008ca131  eb02                 jmp 0x8ca135
// 008ca133  8bc1                 mov eax, ecx
// 008ca135  8b16                 mov edx, dword ptr [esi]
// 008ca137  50                   push eax
// 008ca138  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ca13b  8bce                 mov ecx, esi
// 008ca13d  ffd0                 call eax
// 008ca13f  8b3e                 mov edi, dword ptr [esi]
// 008ca141  6820080000           push 0x820
// 008ca146  8d4c2458             lea ecx, [esp + 0x58]
// 008ca14a  51                   push ecx
// 008ca14b  8d4c2428             lea ecx, [esp + 0x28]
// 008ca14f  83c770               add edi, 0x70
// 008ca152  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008ca158  50                   push eax
// 008ca159  8d4c242c             lea ecx, [esp + 0x2c]
// 008ca15d  ff1580de9800         call dword ptr [0x98de80]
// 008ca163  8b17                 mov edx, dword ptr [edi]
// 008ca165  50                   push eax
// 008ca166  8bce                 mov ecx, esi
// 008ca168  ffd2                 call edx
// 008ca16a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 008ca16d  8b4034               mov eax, dword ptr [eax + 0x34]
// 008ca170  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 008ca173  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 008ca179  7552                 jne 0x8ca1cd
// 008ca17b  85c0                 test eax, eax
// 008ca17d  7504                 jne 0x8ca183
// 008ca17f  33ff                 xor edi, edi
// 008ca181  eb03                 jmp 0x8ca186
// 008ca183  8b7820               mov edi, dword ptr [eax + 0x20]
// 008ca186  ff15eccb9800         call dword ptr [0x98cbec]
// 008ca18c  3bc7                 cmp eax, edi
// 008ca18e  753d                 jne 0x8ca1cd
// 008ca190  8b4574               mov eax, dword ptr [ebp + 0x74]
// 008ca193  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008ca196  83c034               add eax, 0x34
// 008ca199  83f9ff               cmp ecx, -1
// 008ca19c  7505                 jne 0x8ca1a3
// 008ca19e  8b4004               mov eax, dword ptr [eax + 4]
// 008ca1a1  eb02                 jmp 0x8ca1a5
// 008ca1a3  8bc1                 mov eax, ecx
// 008ca1a5  8b16                 mov edx, dword ptr [esi]
// 008ca1a7  50                   push eax
// 008ca1a8  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ca1ab  8bce                 mov ecx, esi
// 008ca1ad  ffd0                 call eax
// 008ca1af  8b16                 mov edx, dword ptr [esi]
// 008ca1b1  8b4234               mov eax, dword ptr [edx + 0x34]
// 008ca1b4  6a00                 push 0
// 008ca1b6  8bce                 mov ecx, esi
// 008ca1b8  ffd0                 call eax
// 008ca1ba  8b5604               mov edx, dword ptr [esi + 4]
// 008ca1bd  ff442460             inc dword ptr [esp + 0x60]
// 008ca1c1  8d4c2454             lea ecx, [esp + 0x54]
// 008ca1c5  51                   push ecx
// 008ca1c6  52                   push edx
// 008ca1c7  ff15d4ca9800         call dword ptr [0x98cad4]
// 008ca1cd  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008ca1d1  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 008ca1d8  8d442430             lea eax, [esp + 0x30]
// 008ca1dc  50                   push eax
// 008ca1dd  8d4c2418             lea ecx, [esp + 0x18]
// 008ca1e1  897c241c             mov dword ptr [esp + 0x1c], edi
// 008ca1e5  ff1538d59800         call dword ptr [0x98d538]
// 008ca1eb  8d4c2430             lea ecx, [esp + 0x30]
// 008ca1ef  ff15c0de9800         call dword ptr [0x98dec0]
// 008ca1f5  8d4c2420             lea ecx, [esp + 0x20]
// 008ca1f9  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 008ca201  ff15c0de9800         call dword ptr [0x98dec0]
// 008ca207  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ca20b  3b8c24b4000000       cmp ecx, dword ptr [esp + 0xb4]
// 008ca212  0f8d97020000         jge 0x8ca4af
// 008ca218  8d4c2414             lea ecx, [esp + 0x14]
// 008ca21c  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008ca222  84c0                 test al, al
// 008ca224  0f8473fdffff         je 0x8c9f9d
// 008ca22a  e99b010000           jmp 0x8ca3ca
// 008ca22f  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 008ca236  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008ca23d  50                   push eax
// 008ca23e  51                   push ecx
// 008ca23f  8d54245c             lea edx, [esp + 0x5c]
// 008ca243  52                   push edx
// 008ca244  ff155cca9800         call dword ptr [0x98ca5c]
// 008ca24a  85c0                 test eax, eax
// 008ca24c  7483                 je 0x8ca1d1
// 008ca24e  8d4c2430             lea ecx, [esp + 0x30]
// 008ca252  ff15c0de9800         call dword ptr [0x98dec0]
// 008ca258  8d4c2420             lea ecx, [esp + 0x20]
// 008ca25c  ff15c0de9800         call dword ptr [0x98dec0]
// 008ca262  8d4c2414             lea ecx, [esp + 0x14]
// 008ca266  ff15c0de9800         call dword ptr [0x98dec0]
// 008ca26c  8d4c2474             lea ecx, [esp + 0x74]
// 008ca270  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008ca27b  e86014f8ff           call 0x84b6e0
// 008ca280  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ca284  e9a2fcffff           jmp 0x8c9f2b
// 008ca289  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ca28d  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ca291  8d0c02               lea ecx, [edx + eax]
// 008ca294  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 008ca29b  3bca                 cmp ecx, edx
// 008ca29d  7d02                 jge 0x8ca2a1
// 008ca29f  8bd1                 mov edx, ecx
// 008ca2a1  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008ca2a8  03fd                 add edi, ebp
// 008ca2aa  3bf9                 cmp edi, ecx
// 008ca2ac  897c2438             mov dword ptr [esp + 0x38], edi
// 008ca2b0  7d02                 jge 0x8ca2b4
// 008ca2b2  8bcf                 mov ecx, edi
// 008ca2b4  837c242800           cmp dword ptr [esp + 0x28], 0
// 008ca2b9  896c2464             mov dword ptr [esp + 0x64], ebp
// 008ca2bd  89442468             mov dword ptr [esp + 0x68], eax
// 008ca2c1  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008ca2c5  89542470             mov dword ptr [esp + 0x70], edx
// 008ca2c9  0f84cb000000         je 0x8ca39a
// 008ca2cf  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ca2d3  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 008ca2d6  894330               mov dword ptr [ebx + 0x30], eax
// 008ca2d9  894b34               mov dword ptr [ebx + 0x34], ecx
// 008ca2dc  895338               mov dword ptr [ebx + 0x38], edx
// 008ca2df  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ca2e2  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 008ca2e8  0588000000           add eax, 0x88
// 008ca2ed  83f9ff               cmp ecx, -1
// 008ca2f0  7505                 jne 0x8ca2f7
// 008ca2f2  8b4004               mov eax, dword ptr [eax + 4]
// 008ca2f5  eb02                 jmp 0x8ca2f9
// 008ca2f7  8bc1                 mov eax, ecx
// 008ca2f9  8b16                 mov edx, dword ptr [esi]
// 008ca2fb  50                   push eax
// 008ca2fc  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ca2ff  8bce                 mov ecx, esi
// 008ca301  ffd0                 call eax
// 008ca303  8b2e                 mov ebp, dword ptr [esi]
// 008ca305  6820080000           push 0x820
// 008ca30a  8d4c2468             lea ecx, [esp + 0x68]
// 008ca30e  51                   push ecx
// 008ca30f  8d4c241c             lea ecx, [esp + 0x1c]
// 008ca313  83c570               add ebp, 0x70
// 008ca316  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008ca31c  50                   push eax
// 008ca31d  8d4c2420             lea ecx, [esp + 0x20]
// 008ca321  ff1580de9800         call dword ptr [0x98de80]
// 008ca327  8b5500               mov edx, dword ptr [ebp]
// 008ca32a  50                   push eax
// 008ca32b  8bce                 mov ecx, esi
// 008ca32d  ffd2                 call edx
// 008ca32f  8b4344               mov eax, dword ptr [ebx + 0x44]
// 008ca332  8b4034               mov eax, dword ptr [eax + 0x34]
// 008ca335  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 008ca338  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 008ca33e  7552                 jne 0x8ca392
// 008ca340  85c0                 test eax, eax
// 008ca342  7504                 jne 0x8ca348
// 008ca344  33db                 xor ebx, ebx
// 008ca346  eb03                 jmp 0x8ca34b
// 008ca348  8b5820               mov ebx, dword ptr [eax + 0x20]
// 008ca34b  ff15eccb9800         call dword ptr [0x98cbec]
// 008ca351  3bc3                 cmp eax, ebx
// 008ca353  753d                 jne 0x8ca392
// 008ca355  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ca358  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008ca35b  83c034               add eax, 0x34
// 008ca35e  83f9ff               cmp ecx, -1
// 008ca361  7505                 jne 0x8ca368
// 008ca363  8b4004               mov eax, dword ptr [eax + 4]
// 008ca366  eb02                 jmp 0x8ca36a
// 008ca368  8bc1                 mov eax, ecx
// 008ca36a  8b16                 mov edx, dword ptr [esi]
// 008ca36c  50                   push eax
// 008ca36d  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ca370  8bce                 mov ecx, esi
// 008ca372  ffd0                 call eax
// 008ca374  8b16                 mov edx, dword ptr [esi]
// 008ca376  8b4234               mov eax, dword ptr [edx + 0x34]
// 008ca379  6a00                 push 0
// 008ca37b  8bce                 mov ecx, esi
// 008ca37d  ffd0                 call eax
// 008ca37f  8b5604               mov edx, dword ptr [esi + 4]
// 008ca382  ff442470             inc dword ptr [esp + 0x70]
// 008ca386  8d4c2464             lea ecx, [esp + 0x64]
// 008ca38a  51                   push ecx
// 008ca38b  52                   push edx
// 008ca38c  ff15d4ca9800         call dword ptr [0x98cad4]
// 008ca392  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008ca396  8bef                 mov ebp, edi
// 008ca398  eb30                 jmp 0x8ca3ca
// 008ca39a  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 008ca3a1  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008ca3a8  50                   push eax
// 008ca3a9  51                   push ecx
// 008ca3aa  8d54246c             lea edx, [esp + 0x6c]
// 008ca3ae  52                   push edx
// 008ca3af  ff155cca9800         call dword ptr [0x98ca5c]
// 008ca3b5  85c0                 test eax, eax
// 008ca3b7  0f85a5feffff         jne 0x8ca262
// 008ca3bd  8bef                 mov ebp, edi
// 008ca3bf  eb09                 jmp 0x8ca3ca
// 008ca3c1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ca3c5  48                   dec eax
// 008ca3c6  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ca3ca  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ca3ce  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008ca3d2  3b9c24b4000000       cmp ebx, dword ptr [esp + 0xb4]
// 008ca3d9  0f8dd0000000         jge 0x8ca4af
// 008ca3df  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008ca3e3  49                   dec ecx
// 008ca3e4  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 008ca3e8  0f84c1000000         je 0x8ca4af
// 008ca3ee  837c242800           cmp dword ptr [esp + 0x28], 0
// 008ca3f3  0f8489000000         je 0x8ca482
// 008ca3f9  8d576c               lea edx, [edi + 0x6c]
// 008ca3fc  52                   push edx
// 008ca3fd  8d4c2478             lea ecx, [esp + 0x78]
// 008ca401  e87afdf7ff           call 0x84a180
// 008ca406  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ca409  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008ca40c  83c040               add eax, 0x40
// 008ca40f  83f9ff               cmp ecx, -1
// 008ca412  7505                 jne 0x8ca419
// 008ca414  8b4004               mov eax, dword ptr [eax + 4]
// 008ca417  eb02                 jmp 0x8ca41b
// 008ca419  8bc1                 mov eax, ecx
// 008ca41b  8b16                 mov edx, dword ptr [esi]
// 008ca41d  50                   push eax
// 008ca41e  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ca421  8bce                 mov ecx, esi
// 008ca423  ffd0                 call eax
// 008ca425  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008ca429  8d0419               lea eax, [ecx + ebx]
// 008ca42c  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008ca433  3bc1                 cmp eax, ecx
// 008ca435  7c02                 jl 0x8ca439
// 008ca437  8bc1                 mov eax, ecx
// 008ca439  6820080000           push 0x820
// 008ca43e  8d8c2488000000       lea ecx, [esp + 0x88]
// 008ca445  51                   push ecx
// 008ca446  8d5508               lea edx, [ebp + 8]
// 008ca449  89842498000000       mov dword ptr [esp + 0x98], eax
// 008ca450  8b06                 mov eax, dword ptr [esi]
// 008ca452  6a01                 push 1
// 008ca454  89942498000000       mov dword ptr [esp + 0x98], edx
// 008ca45b  8b5070               mov edx, dword ptr [eax + 0x70]
// 008ca45e  689c1f9b00           push 0x9b1f9c
// 008ca463  8bce                 mov ecx, esi
// 008ca465  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 008ca46c  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 008ca473  ffd2                 call edx
// 008ca475  8d4764               lea eax, [edi + 0x64]
// 008ca478  50                   push eax
// 008ca479  8d4c2478             lea ecx, [esp + 0x78]
// 008ca47d  e8fefcf7ff           call 0x84a180
// 008ca482  8d4c2414             lea ecx, [esp + 0x14]
// 008ca486  83c508               add ebp, 8
// 008ca489  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 008ca491  ff15c0de9800         call dword ptr [0x98dec0]
// 008ca497  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ca49b  40                   inc eax
// 008ca49c  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008ca4a0  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ca4a4  0f8ca6faffff         jl 0x8c9f50
// 008ca4aa  e965faffff           jmp 0x8c9f14
// 008ca4af  8d4c2414             lea ecx, [esp + 0x14]
// 008ca4b3  ff15c0de9800         call dword ptr [0x98dec0]
// 008ca4b9  e956faffff           jmp 0x8c9f14
// 008ca4be  e84996f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?HitTestVerbs@CXTPPropertyGridPaintManager@@QAEHPAVCDC@@VCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp