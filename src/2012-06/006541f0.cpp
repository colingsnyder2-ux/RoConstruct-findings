// from server: 100% by auto
// roc 2012-06 006541f0  unit: seg_00650000  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006541f0
//
// 006541f0  53                   push ebx
// 006541f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006541f5  8b5304               mov edx, dword ptr [ebx + 4]
// 006541f8  8b4244               mov eax, dword ptr [edx + 0x44]
// 006541fb  55                   push ebp
// 006541fc  56                   push esi
// 006541fd  57                   push edi
// 006541fe  33f6                 xor esi, esi
// 00654200  33ff                 xor edi, edi
// 00654202  89542414             mov dword ptr [esp + 0x14], edx
// 00654206  85c0                 test eax, eax
// 00654208  7425                 je 0x65422f
// 0065420a  8d9b00000000         lea ebx, [ebx]
// 00654210  833800               cmp dword ptr [eax], 0
// 00654213  7513                 jne 0x654228
// 00654215  8b4808               mov ecx, dword ptr [eax + 8]
// 00654218  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0065421b  0fafe9               imul ebp, ecx
// 0065421e  03f5                 add esi, ebp
// 00654220  8b6804               mov ebp, dword ptr [eax + 4]
// 00654223  0fafe9               imul ebp, ecx
// 00654226  03fd                 add edi, ebp
// 00654228  8b4024               mov eax, dword ptr [eax + 0x24]
// 0065422b  85c0                 test eax, eax
// 0065422d  75e1                 jne 0x654210
// 0065422f  8b4248               mov eax, dword ptr [edx + 0x48]
// 00654232  85c0                 test eax, eax
// 00654234  7425                 je 0x65425b
// 00654236  833800               cmp dword ptr [eax], 0
// 00654239  7519                 jne 0x654254
// 0065423b  8b4808               mov ecx, dword ptr [eax + 8]
// 0065423e  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00654241  0fafe9               imul ebp, ecx
// 00654244  c1e507               shl ebp, 7
// 00654247  03f5                 add esi, ebp
// 00654249  8b6804               mov ebp, dword ptr [eax + 4]
// 0065424c  0fafe9               imul ebp, ecx
// 0065424f  c1e507               shl ebp, 7
// 00654252  03fd                 add edi, ebp
// 00654254  8b4024               mov eax, dword ptr [eax + 0x24]
// 00654257  85c0                 test eax, eax
// 00654259  75db                 jne 0x654236
// 0065425b  85f6                 test esi, esi
// 0065425d  0f8e1b010000         jle 0x65437e
// 00654263  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00654266  50                   push eax
// 00654267  57                   push edi
// 00654268  56                   push esi
// 00654269  53                   push ebx
// 0065426a  e841bd0000           call 0x65ffb0
// 0065426f  83c410               add esp, 0x10
// 00654272  3bc7                 cmp eax, edi
// 00654274  7c07                 jl 0x65427d
// 00654276  bd00ca9a3b           mov ebp, 0x3b9aca00
// 0065427b  eb0e                 jmp 0x65428b
// 0065427d  99                   cdq 
// 0065427e  f7fe                 idiv esi
// 00654280  8be8                 mov ebp, eax
// 00654282  85ed                 test ebp, ebp
// 00654284  7f05                 jg 0x65428b
// 00654286  bd01000000           mov ebp, 1
// 0065428b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065428f  8b7144               mov esi, dword ptr [ecx + 0x44]
// 00654292  85f6                 test esi, esi
// 00654294  746b                 je 0x654301
// 00654296  833e00               cmp dword ptr [esi], 0
// 00654299  755f                 jne 0x6542fa
// 0065429b  8b7e04               mov edi, dword ptr [esi + 4]
// 0065429e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006542a1  33d2                 xor edx, edx
// 006542a3  8d47ff               lea eax, [edi - 1]
// 006542a6  f7f1                 div ecx
// 006542a8  40                   inc eax
// 006542a9  3bc5                 cmp eax, ebp
// 006542ab  7f05                 jg 0x6542b2
// 006542ad  897e10               mov dword ptr [esi + 0x10], edi
// 006542b0  eb1e                 jmp 0x6542d0
// 006542b2  8b5608               mov edx, dword ptr [esi + 8]
// 006542b5  0fafcd               imul ecx, ebp
// 006542b8  0fafd7               imul edx, edi
// 006542bb  52                   push edx
// 006542bc  8d4628               lea eax, [esi + 0x28]
// 006542bf  50                   push eax
// 006542c0  53                   push ebx
// 006542c1  894e10               mov dword ptr [esi + 0x10], ecx
// 006542c4  e8e7bd0000           call 0x6600b0
// 006542c9  83c40c               add esp, 0xc
// 006542cc  c6462201             mov byte ptr [esi + 0x22], 1
// 006542d0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006542d3  8b5608               mov edx, dword ptr [esi + 8]
// 006542d6  51                   push ecx
// 006542d7  52                   push edx
// 006542d8  6a01                 push 1
// 006542da  53                   push ebx
// 006542db  e8d0fcffff           call 0x653fb0
// 006542e0  8906                 mov dword ptr [esi], eax
// 006542e2  8b442424             mov eax, dword ptr [esp + 0x24]
// 006542e6  8b4850               mov ecx, dword ptr [eax + 0x50]
// 006542e9  83c410               add esp, 0x10
// 006542ec  33c0                 xor eax, eax
// 006542ee  894e14               mov dword ptr [esi + 0x14], ecx
// 006542f1  894618               mov dword ptr [esi + 0x18], eax
// 006542f4  89461c               mov dword ptr [esi + 0x1c], eax
// 006542f7  884621               mov byte ptr [esi + 0x21], al
// 006542fa  8b7624               mov esi, dword ptr [esi + 0x24]
// 006542fd  85f6                 test esi, esi
// 006542ff  7595                 jne 0x654296
// 00654301  8b542414             mov edx, dword ptr [esp + 0x14]
// 00654305  8b7248               mov esi, dword ptr [edx + 0x48]
// 00654308  85f6                 test esi, esi
// 0065430a  7472                 je 0x65437e
// 0065430c  8d642400             lea esp, [esp]
// 00654310  833e00               cmp dword ptr [esi], 0
// 00654313  7562                 jne 0x654377
// 00654315  8b7e04               mov edi, dword ptr [esi + 4]
// 00654318  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0065431b  33d2                 xor edx, edx
// 0065431d  8d47ff               lea eax, [edi - 1]
// 00654320  f7f1                 div ecx
// 00654322  40                   inc eax
// 00654323  3bc5                 cmp eax, ebp
// 00654325  7f05                 jg 0x65432c
// 00654327  897e10               mov dword ptr [esi + 0x10], edi
// 0065432a  eb21                 jmp 0x65434d
// 0065432c  8b4608               mov eax, dword ptr [esi + 8]
// 0065432f  0fafcd               imul ecx, ebp
// 00654332  0fafc7               imul eax, edi
// 00654335  c1e007               shl eax, 7
// 00654338  894e10               mov dword ptr [esi + 0x10], ecx
// 0065433b  50                   push eax
// 0065433c  8d4e28               lea ecx, [esi + 0x28]
// 0065433f  51                   push ecx
// 00654340  53                   push ebx
// 00654341  e86abd0000           call 0x6600b0
// 00654346  83c40c               add esp, 0xc
// 00654349  c6462201             mov byte ptr [esi + 0x22], 1
// 0065434d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00654350  8b4608               mov eax, dword ptr [esi + 8]
// 00654353  52                   push edx
// 00654354  50                   push eax
// 00654355  6a01                 push 1
// 00654357  53                   push ebx
// 00654358  e803fdffff           call 0x654060
// 0065435d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00654361  8906                 mov dword ptr [esi], eax
// 00654363  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00654366  83c410               add esp, 0x10
// 00654369  33c0                 xor eax, eax
// 0065436b  895614               mov dword ptr [esi + 0x14], edx
// 0065436e  894618               mov dword ptr [esi + 0x18], eax
// 00654371  89461c               mov dword ptr [esi + 0x1c], eax
// 00654374  884621               mov byte ptr [esi + 0x21], al
// 00654377  8b7624               mov esi, dword ptr [esi + 0x24]
// 0065437a  85f6                 test esi, esi
// 0065437c  7592                 jne 0x654310
// 0065437e  5f                   pop edi
// 0065437f  5e                   pop esi
// 00654380  5d                   pop ebp
// 00654381  5b                   pop ebx
// 00654382  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _realize_virt_arrays)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
