// roc 2009-06 007c4030  unit: CXTPReportPaintManager  size: 1129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c4030
//
// 007c4030  6aff                 push -1
// 007c4032  685bdd8700           push 0x87dd5b
// 007c4037  64a100000000         mov eax, dword ptr fs:[0]
// 007c403d  50                   push eax
// 007c403e  83ec44               sub esp, 0x44
// 007c4041  53                   push ebx
// 007c4042  55                   push ebp
// 007c4043  56                   push esi
// 007c4044  57                   push edi
// 007c4045  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c404a  33c4                 xor eax, esp
// 007c404c  50                   push eax
// 007c404d  8d442458             lea eax, [esp + 0x58]
// 007c4051  64a300000000         mov dword ptr fs:[0], eax
// 007c4057  8bf1                 mov esi, ecx
// 007c4059  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c405d  8b5824               mov ebx, dword ptr [eax + 0x24]
// 007c4060  8b7810               mov edi, dword ptr [eax + 0x10]
// 007c4063  83c8ff               or eax, 0xffffffff
// 007c4066  89442424             mov dword ptr [esp + 0x24], eax
// 007c406a  89442428             mov dword ptr [esp + 0x28], eax
// 007c406e  8d442470             lea eax, [esp + 0x70]
// 007c4072  50                   push eax
// 007c4073  8d4c244c             lea ecx, [esp + 0x4c]
// 007c4077  51                   push ecx
// 007c4078  895c2428             mov dword ptr [esp + 0x28], ebx
// 007c407c  33ed                 xor ebp, ebp
// 007c407e  ff1500ee8900         call dword ptr [0x89ee00]
// 007c4084  8b17                 mov edx, dword ptr [edi]
// 007c4086  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 007c408c  8bcf                 mov ecx, edi
// 007c408e  ffd0                 call eax
// 007c4090  85c0                 test eax, eax
// 007c4092  7546                 jne 0x7c40da
// 007c4094  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007c409b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007c409f  8b33                 mov esi, dword ptr [ebx]
// 007c40a1  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 007c40a5  f7d8                 neg eax
// 007c40a7  1bc0                 sbb eax, eax
// 007c40a9  83e010               and eax, 0x10
// 007c40ac  0b4128               or eax, dword ptr [ecx + 0x28]
// 007c40af  8d542448             lea edx, [esp + 0x48]
// 007c40b3  0d00080400           or eax, 0x40800
// 007c40b8  50                   push eax
// 007c40b9  52                   push edx
// 007c40ba  8bcf                 mov ecx, edi
// 007c40bc  83c670               add esi, 0x70
// 007c40bf  ff1554fb8900         call dword ptr [0x89fb54]
// 007c40c5  50                   push eax
// 007c40c6  8bcf                 mov ecx, edi
// 007c40c8  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c40ce  50                   push eax
// 007c40cf  8b06                 mov eax, dword ptr [esi]
// 007c40d1  8bcb                 mov ecx, ebx
// 007c40d3  ffd0                 call eax
// 007c40d5  e9a9030000           jmp 0x7c4483
// 007c40da  8b5308               mov edx, dword ptr [ebx + 8]
// 007c40dd  8d4c2440             lea ecx, [esp + 0x40]
// 007c40e1  51                   push ecx
// 007c40e2  6a01                 push 1
// 007c40e4  68f8338b00           push 0x8b33f8
// 007c40e9  52                   push edx
// 007c40ea  ff1550e18900         call dword ptr [0x89e150]
// 007c40f0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007c40f4  68f8338b00           push 0x8b33f8
// 007c40f9  50                   push eax
// 007c40fa  8d4c2424             lea ecx, [esp + 0x24]
// 007c40fe  51                   push ecx
// 007c40ff  e81c8dc4ff           call 0x40ce20
// 007c4104  83c40c               add esp, 0xc
// 007c4107  6a20                 push 0x20
// 007c4109  33db                 xor ebx, ebx
// 007c410b  6a0d                 push 0xd
// 007c410d  8d4c2424             lea ecx, [esp + 0x24]
// 007c4111  895c2468             mov dword ptr [esp + 0x68], ebx
// 007c4115  ff1550f78900         call dword ptr [0x89f750]
// 007c411b  8b16                 mov edx, dword ptr [esi]
// 007c411d  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 007c4123  6a01                 push 1
// 007c4125  8d442420             lea eax, [esp + 0x20]
// 007c4129  50                   push eax
// 007c412a  57                   push edi
// 007c412b  8bce                 mov ecx, esi
// 007c412d  ffd2                 call edx
// 007c412f  8d4c2434             lea ecx, [esp + 0x34]
// 007c4133  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c4139  8d4c2418             lea ecx, [esp + 0x18]
// 007c413d  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c4143  8d4c241c             lea ecx, [esp + 0x1c]
// 007c4147  c644246002           mov byte ptr [esp + 0x60], 2
// 007c414c  ff1554fb8900         call dword ptr [0x89fb54]
// 007c4152  8d7801               lea edi, [eax + 1]
// 007c4155  57                   push edi
// 007c4156  8d4c2420             lea ecx, [esp + 0x20]
// 007c415a  ff1508f18900         call dword ptr [0x89f108]
// 007c4160  57                   push edi
// 007c4161  8d4c2438             lea ecx, [esp + 0x38]
// 007c4165  89442430             mov dword ptr [esp + 0x30], eax
// 007c4169  ff1508f18900         call dword ptr [0x89f108]
// 007c416f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007c4173  8bf8                 mov edi, eax
// 007c4175  8a02                 mov al, byte ptr [edx]
// 007c4177  897c2430             mov dword ptr [esp + 0x30], edi
// 007c417b  88442417             mov byte ptr [esp + 0x17], al
// 007c417f  84c0                 test al, al
// 007c4181  0f8471020000         je 0x7c43f8
// 007c4187  83c9ff               or ecx, 0xffffffff
// 007c418a  2bca                 sub ecx, edx
// 007c418c  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007c4190  eb04                 jmp 0x7c4196
// 007c4192  8a442417             mov al, byte ptr [esp + 0x17]
// 007c4196  45                   inc ebp
// 007c4197  3c20                 cmp al, 0x20
// 007c4199  7416                 je 0x7c41b1
// 007c419b  3c09                 cmp al, 9
// 007c419d  7412                 je 0x7c41b1
// 007c419f  3c0a                 cmp al, 0xa
// 007c41a1  740e                 je 0x7c41b1
// 007c41a3  88041f               mov byte ptr [edi + ebx], al
// 007c41a6  c6441f0100           mov byte ptr [edi + ebx + 1], 0
// 007c41ab  43                   inc ebx
// 007c41ac  e934020000           jmp 0x7c43e5
// 007c41b1  803f00               cmp byte ptr [edi], 0
// 007c41b4  7508                 jne 0x7c41be
// 007c41b6  3c0a                 cmp al, 0xa
// 007c41b8  0f8527020000         jne 0x7c43e5
// 007c41be  8d4c2418             lea ecx, [esp + 0x18]
// 007c41c2  ff155cfb8900         call dword ptr [0x89fb5c]
// 007c41c8  84c0                 test al, al
// 007c41ca  740c                 je 0x7c41d8
// 007c41cc  8bc5                 mov eax, ebp
// 007c41ce  2bc3                 sub eax, ebx
// 007c41d0  89442424             mov dword ptr [esp + 0x24], eax
// 007c41d4  896c2428             mov dword ptr [esp + 0x28], ebp
// 007c41d8  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c41dc  53                   push ebx
// 007c41dd  57                   push edi
// 007c41de  50                   push eax
// 007c41df  e8fcbbffff           call 0x7bfde0
// 007c41e4  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007c41eb  2b4c247c             sub ecx, dword ptr [esp + 0x7c]
// 007c41ef  83c40c               add esp, 0xc
// 007c41f2  3bc1                 cmp eax, ecx
// 007c41f4  89442438             mov dword ptr [esp + 0x38], eax
// 007c41f8  7e0a                 jle 0x7c4204
// 007c41fa  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 007c4202  750b                 jne 0x7c420f
// 007c4204  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 007c4209  0f85f7000000         jne 0x7c4306
// 007c420f  8d4c2418             lea ecx, [esp + 0x18]
// 007c4213  ff155cfb8900         call dword ptr [0x89fb5c]
// 007c4219  84c0                 test al, al
// 007c421b  756a                 jne 0x7c4287
// 007c421d  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c4221  8b3e                 mov edi, dword ptr [esi]
// 007c4223  8d542418             lea edx, [esp + 0x18]
// 007c4227  52                   push edx
// 007c4228  50                   push eax
// 007c4229  81c7ec000000         add edi, 0xec
// 007c422f  e8bcbaffff           call 0x7bfcf0
// 007c4234  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007c4238  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007c423c  83c408               add esp, 8
// 007c423f  50                   push eax
// 007c4240  49                   dec ecx
// 007c4241  51                   push ecx
// 007c4242  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007c4246  4a                   dec edx
// 007c4247  52                   push edx
// 007c4248  8b542458             mov edx, dword ptr [esp + 0x58]
// 007c424c  83ec10               sub esp, 0x10
// 007c424f  8bc4                 mov eax, esp
// 007c4251  8908                 mov dword ptr [eax], ecx
// 007c4253  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c4257  895004               mov dword ptr [eax + 4], edx
// 007c425a  8b542470             mov edx, dword ptr [esp + 0x70]
// 007c425e  894808               mov dword ptr [eax + 8], ecx
// 007c4261  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007c4268  89500c               mov dword ptr [eax + 0xc], edx
// 007c426b  8b17                 mov edx, dword ptr [edi]
// 007c426d  8d442438             lea eax, [esp + 0x38]
// 007c4271  50                   push eax
// 007c4272  51                   push ecx
// 007c4273  8bce                 mov ecx, esi
// 007c4275  ffd2                 call edx
// 007c4277  8b442444             mov eax, dword ptr [esp + 0x44]
// 007c427b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007c427f  0144244c             add dword ptr [esp + 0x4c], eax
// 007c4283  894c2448             mov dword ptr [esp + 0x48], ecx
// 007c4287  8b442438             mov eax, dword ptr [esp + 0x38]
// 007c428b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007c428f  50                   push eax
// 007c4290  8b442430             mov eax, dword ptr [esp + 0x30]
// 007c4294  03c8                 add ecx, eax
// 007c4296  8b16                 mov edx, dword ptr [esi]
// 007c4298  03cd                 add ecx, ebp
// 007c429a  51                   push ecx
// 007c429b  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 007c42a1  8bfd                 mov edi, ebp
// 007c42a3  2bfb                 sub edi, ebx
// 007c42a5  8d4fff               lea ecx, [edi - 1]
// 007c42a8  51                   push ecx
// 007c42a9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007c42ad  83ec10               sub esp, 0x10
// 007c42b0  8bc4                 mov eax, esp
// 007c42b2  8908                 mov dword ptr [eax], ecx
// 007c42b4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007c42b8  894804               mov dword ptr [eax + 4], ecx
// 007c42bb  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c42bf  894808               mov dword ptr [eax + 8], ecx
// 007c42c2  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007c42c6  89480c               mov dword ptr [eax + 0xc], ecx
// 007c42c9  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007c42d0  8d442438             lea eax, [esp + 0x38]
// 007c42d4  50                   push eax
// 007c42d5  51                   push ecx
// 007c42d6  8bce                 mov ecx, esi
// 007c42d8  ffd2                 call edx
// 007c42da  3bfd                 cmp edi, ebp
// 007c42dc  7410                 je 0x7c42ee
// 007c42de  8b442444             mov eax, dword ptr [esp + 0x44]
// 007c42e2  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007c42e6  0144244c             add dword ptr [esp + 0x4c], eax
// 007c42ea  894c2448             mov dword ptr [esp + 0x48], ecx
// 007c42ee  8d4c2418             lea ecx, [esp + 0x18]
// 007c42f2  ff15f4ff8900         call dword ptr [0x89fff4]
// 007c42f8  8b542430             mov edx, dword ptr [esp + 0x30]
// 007c42fc  c60200               mov byte ptr [edx], 0
// 007c42ff  8bfa                 mov edi, edx
// 007c4301  e9dd000000           jmp 0x7c43e3
// 007c4306  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007c430a  8d442418             lea eax, [esp + 0x18]
// 007c430e  50                   push eax
// 007c430f  51                   push ecx
// 007c4310  e8dbb9ffff           call 0x7bfcf0
// 007c4315  83c408               add esp, 8
// 007c4318  8d4c2418             lea ecx, [esp + 0x18]
// 007c431c  89442438             mov dword ptr [esp + 0x38], eax
// 007c4320  ff155cfb8900         call dword ptr [0x89fb5c]
// 007c4326  84c0                 test al, al
// 007c4328  750f                 jne 0x7c4339
// 007c432a  68f8338b00           push 0x8b33f8
// 007c432f  8d4c241c             lea ecx, [esp + 0x1c]
// 007c4333  ff15f0f08900         call dword ptr [0x89f0f0]
// 007c4339  57                   push edi
// 007c433a  8d4c241c             lea ecx, [esp + 0x1c]
// 007c433e  ff15f0f08900         call dword ptr [0x89f0f0]
// 007c4344  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c4348  8d542418             lea edx, [esp + 0x18]
// 007c434c  52                   push edx
// 007c434d  50                   push eax
// 007c434e  e89db9ffff           call 0x7bfcf0
// 007c4353  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007c435a  2b4c2478             sub ecx, dword ptr [esp + 0x78]
// 007c435e  83c408               add esp, 8
// 007c4361  3bc1                 cmp eax, ecx
// 007c4363  7e77                 jle 0x7c43dc
// 007c4365  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 007c436d  746d                 je 0x7c43dc
// 007c436f  8b442438             mov eax, dword ptr [esp + 0x38]
// 007c4373  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007c4377  8b16                 mov edx, dword ptr [esi]
// 007c4379  50                   push eax
// 007c437a  8b442428             mov eax, dword ptr [esp + 0x28]
// 007c437e  49                   dec ecx
// 007c437f  51                   push ecx
// 007c4380  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007c4384  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 007c438a  48                   dec eax
// 007c438b  50                   push eax
// 007c438c  83ec10               sub esp, 0x10
// 007c438f  8bc4                 mov eax, esp
// 007c4391  8908                 mov dword ptr [eax], ecx
// 007c4393  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007c4397  894804               mov dword ptr [eax + 4], ecx
// 007c439a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c439e  894808               mov dword ptr [eax + 8], ecx
// 007c43a1  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007c43a5  89480c               mov dword ptr [eax + 0xc], ecx
// 007c43a8  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007c43af  8d442438             lea eax, [esp + 0x38]
// 007c43b3  50                   push eax
// 007c43b4  51                   push ecx
// 007c43b5  8bce                 mov ecx, esi
// 007c43b7  ffd2                 call edx
// 007c43b9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007c43bd  8b442444             mov eax, dword ptr [esp + 0x44]
// 007c43c1  0144244c             add dword ptr [esp + 0x4c], eax
// 007c43c5  8bd5                 mov edx, ebp
// 007c43c7  894c2448             mov dword ptr [esp + 0x48], ecx
// 007c43cb  2bd3                 sub edx, ebx
// 007c43cd  57                   push edi
// 007c43ce  8d4c241c             lea ecx, [esp + 0x1c]
// 007c43d2  89542428             mov dword ptr [esp + 0x28], edx
// 007c43d6  ff15acfc8900         call dword ptr [0x89fcac]
// 007c43dc  896c2428             mov dword ptr [esp + 0x28], ebp
// 007c43e0  c60700               mov byte ptr [edi], 0
// 007c43e3  33db                 xor ebx, ebx
// 007c43e5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007c43e9  8a0428               mov al, byte ptr [eax + ebp]
// 007c43ec  88442417             mov byte ptr [esp + 0x17], al
// 007c43f0  84c0                 test al, al
// 007c43f2  0f859afdffff         jne 0x7c4192
// 007c43f8  8d4c2418             lea ecx, [esp + 0x18]
// 007c43fc  ff1554fb8900         call dword ptr [0x89fb54]
// 007c4402  85c0                 test eax, eax
// 007c4404  745f                 je 0x7c4465
// 007c4406  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c440a  8b3e                 mov edi, dword ptr [esi]
// 007c440c  8d4c2418             lea ecx, [esp + 0x18]
// 007c4410  51                   push ecx
// 007c4411  52                   push edx
// 007c4412  81c7ec000000         add edi, 0xec
// 007c4418  e8d3b8ffff           call 0x7bfcf0
// 007c441d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007c4421  83c408               add esp, 8
// 007c4424  50                   push eax
// 007c4425  ff1554fb8900         call dword ptr [0x89fb54]
// 007c442b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c442f  8b542450             mov edx, dword ptr [esp + 0x50]
// 007c4433  50                   push eax
// 007c4434  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007c4438  48                   dec eax
// 007c4439  50                   push eax
// 007c443a  83ec10               sub esp, 0x10
// 007c443d  8bc4                 mov eax, esp
// 007c443f  8908                 mov dword ptr [eax], ecx
// 007c4441  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c4445  895004               mov dword ptr [eax + 4], edx
// 007c4448  8b542470             mov edx, dword ptr [esp + 0x70]
// 007c444c  894808               mov dword ptr [eax + 8], ecx
// 007c444f  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007c4456  89500c               mov dword ptr [eax + 0xc], edx
// 007c4459  8b17                 mov edx, dword ptr [edi]
// 007c445b  8d442438             lea eax, [esp + 0x38]
// 007c445f  50                   push eax
// 007c4460  51                   push ecx
// 007c4461  8bce                 mov ecx, esi
// 007c4463  ffd2                 call edx
// 007c4465  8d4c2418             lea ecx, [esp + 0x18]
// 007c4469  ff1510fd8900         call dword ptr [0x89fd10]
// 007c446f  8d4c2434             lea ecx, [esp + 0x34]
// 007c4473  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4479  8d4c241c             lea ecx, [esp + 0x1c]
// 007c447d  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4483  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007c4487  64890d00000000       mov dword ptr fs:[0], ecx
// 007c448e  59                   pop ecx
// 007c448f  5f                   pop edi
// 007c4490  5e                   pop esi
// 007c4491  5d                   pop ebp
// 007c4492  5b                   pop ebx
// 007c4493  83c450               add esp, 0x50
// 007c4496  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawMultiLineText@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp