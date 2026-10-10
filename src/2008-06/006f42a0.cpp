// roc 2008-06 006f42a0  unit: CXTPControls  size: 996 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f42a0
//
// 006f42a0  83ec10               sub esp, 0x10
// 006f42a3  53                   push ebx
// 006f42a4  55                   push ebp
// 006f42a5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006f42a9  56                   push esi
// 006f42aa  8bf1                 mov esi, ecx
// 006f42ac  c7450000000000       mov dword ptr [ebp], 0
// 006f42b3  c7450400000000       mov dword ptr [ebp + 4], 0
// 006f42ba  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f42bd  57                   push edi
// 006f42be  e80d0cfcff           call 0x6b4ed0
// 006f42c3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f42c6  8b10                 mov edx, dword ptr [eax]
// 006f42c8  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 006f42ce  6a00                 push 0
// 006f42d0  6a00                 push 0
// 006f42d2  51                   push ecx
// 006f42d3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f42d7  51                   push ecx
// 006f42d8  8d4c2420             lea ecx, [esp + 0x20]
// 006f42dc  51                   push ecx
// 006f42dd  8bc8                 mov ecx, eax
// 006f42df  ffd2                 call edx
// 006f42e1  8b7e2c               mov edi, dword ptr [esi + 0x2c]
// 006f42e4  83ef01               sub edi, 1
// 006f42e7  782e                 js 0x6f4317
// 006f42e9  8da42400000000       lea esp, [esp]
// 006f42f0  85ff                 test edi, edi
// 006f42f2  7c0d                 jl 0x6f4301
// 006f42f4  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 006f42f7  7d08                 jge 0x6f4301
// 006f42f9  8b4628               mov eax, dword ptr [esi + 0x28]
// 006f42fc  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 006f42ff  eb02                 jmp 0x6f4303
// 006f4301  33c9                 xor ecx, ecx
// 006f4303  8b11                 mov edx, dword ptr [ecx]
// 006f4305  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f4309  8b92a4000000         mov edx, dword ptr [edx + 0xa4]
// 006f430f  50                   push eax
// 006f4310  ffd2                 call edx
// 006f4312  83ef01               sub edi, 1
// 006f4315  79d9                 jns 0x6f42f0
// 006f4317  6a00                 push 0
// 006f4319  8bce                 mov ecx, esi
// 006f431b  e890e8ffff           call 0x6f2bb0
// 006f4320  85c0                 test eax, eax
// 006f4322  0f8e06030000         jle 0x6f462e
// 006f4328  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006f432b  33c9                 xor ecx, ecx
// 006f432d  ba40000000           mov edx, 0x40
// 006f4332  f7e2                 mul edx
// 006f4334  0f90c1               seto cl
// 006f4337  f7d9                 neg ecx
// 006f4339  0bc8                 or ecx, eax
// 006f433b  51                   push ecx
// 006f433c  e815c6faff           call 0x6a0956
// 006f4341  8bc8                 mov ecx, eax
// 006f4343  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006f4346  83c404               add esp, 4
// 006f4349  33ff                 xor edi, edi
// 006f434b  894c2424             mov dword ptr [esp + 0x24], ecx
// 006f434f  85c0                 test eax, eax
// 006f4351  7e35                 jle 0x6f4388
// 006f4353  8bd9                 mov ebx, ecx
// 006f4355  85ff                 test edi, edi
// 006f4357  7c11                 jl 0x6f436a
// 006f4359  3bf8                 cmp edi, eax
// 006f435b  7d0d                 jge 0x6f436a
// 006f435d  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 006f4360  7d3a                 jge 0x6f439c
// 006f4362  8b4628               mov eax, dword ptr [esi + 0x28]
// 006f4365  8b04b8               mov eax, dword ptr [eax + edi*4]
// 006f4368  eb02                 jmp 0x6f436c
// 006f436a  33c0                 xor eax, eax
// 006f436c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006f4370  50                   push eax
// 006f4371  51                   push ecx
// 006f4372  8bcb                 mov ecx, ebx
// 006f4374  e807dcffff           call 0x6f1f80
// 006f4379  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006f437c  47                   inc edi
// 006f437d  83c340               add ebx, 0x40
// 006f4380  3bf8                 cmp edi, eax
// 006f4382  7cd1                 jl 0x6f4355
// 006f4384  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006f4388  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f438c  f6c204               test dl, 4
// 006f438f  7410                 je 0x6f43a1
// 006f4391  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f4394  8b98c8000000         mov ebx, dword ptr [eax + 0xc8]
// 006f439a  eb09                 jmp 0x6f43a5
// 006f439c  e8a3c5faff           call 0x6a0944
// 006f43a1  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006f43a5  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f43a8  f780ec00000000002000 test dword ptr [eax + 0xec], 0x200000
// 006f43b2  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006f43b6  7459                 je 0x6f4411
// 006f43b8  f6c210               test dl, 0x10
// 006f43bb  7425                 je 0x6f43e2
// 006f43bd  8bc3                 mov eax, ebx
// 006f43bf  2b470c               sub eax, dword ptr [edi + 0xc]
// 006f43c2  8d542430             lea edx, [esp + 0x30]
// 006f43c6  2b4704               sub eax, dword ptr [edi + 4]
// 006f43c9  52                   push edx
// 006f43ca  50                   push eax
// 006f43cb  51                   push ecx
// 006f43cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f43d0  51                   push ecx
// 006f43d1  8d542428             lea edx, [esp + 0x28]
// 006f43d5  52                   push edx
// 006f43d6  8bce                 mov ecx, esi
// 006f43d8  e8f3fcffff           call 0x6f40d0
// 006f43dd  e940010000           jmp 0x6f4522
// 006f43e2  8bd3                 mov edx, ebx
// 006f43e4  2b5708               sub edx, dword ptr [edi + 8]
// 006f43e7  8d442430             lea eax, [esp + 0x30]
// 006f43eb  2b17                 sub edx, dword ptr [edi]
// 006f43ed  50                   push eax
// 006f43ee  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006f43f2  52                   push edx
// 006f43f3  51                   push ecx
// 006f43f4  50                   push eax
// 006f43f5  8d4c2428             lea ecx, [esp + 0x28]
// 006f43f9  51                   push ecx
// 006f43fa  8bce                 mov ecx, esi
// 006f43fc  e8cffcffff           call 0x6f40d0
// 006f4401  8b10                 mov edx, dword ptr [eax]
// 006f4403  895500               mov dword ptr [ebp], edx
// 006f4406  8b4004               mov eax, dword ptr [eax + 4]
// 006f4409  894504               mov dword ptr [ebp + 4], eax
// 006f440c  e91c010000           jmp 0x6f452d
// 006f4411  f7c200010000         test edx, 0x100
// 006f4417  747e                 je 0x6f4497
// 006f4419  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 006f441f  8d542410             lea edx, [esp + 0x10]
// 006f4423  52                   push edx
// 006f4424  8d542434             lea edx, [esp + 0x34]
// 006f4428  52                   push edx
// 006f4429  50                   push eax
// 006f442a  51                   push ecx
// 006f442b  8bce                 mov ecx, esi
// 006f442d  e88eddffff           call 0x6f21c0
// 006f4432  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f4436  6a00                 push 0
// 006f4438  8d4c2414             lea ecx, [esp + 0x14]
// 006f443c  51                   push ecx
// 006f443d  52                   push edx
// 006f443e  8d442424             lea eax, [esp + 0x24]
// 006f4442  50                   push eax
// 006f4443  8bce                 mov ecx, esi
// 006f4445  e8d6dbffff           call 0x6f2020
// 006f444a  8b442418             mov eax, dword ptr [esp + 0x18]
// 006f444e  8d0c40               lea ecx, [eax + eax*2]
// 006f4451  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 006f4455  7e27                 jle 0x6f447e
// 006f4457  8b5620               mov edx, dword ptr [esi + 0x20]
// 006f445a  83bac800000000       cmp dword ptr [edx + 0xc8], 0
// 006f4461  7f1b                 jg 0x6f447e
// 006f4463  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006f4467  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f446b  8d442410             lea eax, [esp + 0x10]
// 006f446f  50                   push eax
// 006f4470  51                   push ecx
// 006f4471  52                   push edx
// 006f4472  8bce                 mov ecx, esi
// 006f4474  e837dfffff           call 0x6f23b0
// 006f4479  e986000000           jmp 0x6f4504
// 006f447e  8d4c2410             lea ecx, [esp + 0x10]
// 006f4482  51                   push ecx
// 006f4483  8d542434             lea edx, [esp + 0x34]
// 006f4487  52                   push edx
// 006f4488  50                   push eax
// 006f4489  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f448d  50                   push eax
// 006f448e  8bce                 mov ecx, esi
// 006f4490  e82bddffff           call 0x6f21c0
// 006f4495  eb6d                 jmp 0x6f4504
// 006f4497  8a442430             mov al, byte ptr [esp + 0x30]
// 006f449b  a808                 test al, 8
// 006f449d  741c                 je 0x6f44bb
// 006f449f  8d542410             lea edx, [esp + 0x10]
// 006f44a3  52                   push edx
// 006f44a4  8bd3                 mov edx, ebx
// 006f44a6  2b5708               sub edx, dword ptr [edi + 8]
// 006f44a9  8d442434             lea eax, [esp + 0x34]
// 006f44ad  2b17                 sub edx, dword ptr [edi]
// 006f44af  50                   push eax
// 006f44b0  52                   push edx
// 006f44b1  51                   push ecx
// 006f44b2  8bce                 mov ecx, esi
// 006f44b4  e807ddffff           call 0x6f21c0
// 006f44b9  eb49                 jmp 0x6f4504
// 006f44bb  a810                 test al, 0x10
// 006f44bd  741d                 je 0x6f44dc
// 006f44bf  8d442410             lea eax, [esp + 0x10]
// 006f44c3  50                   push eax
// 006f44c4  8bc3                 mov eax, ebx
// 006f44c6  2b470c               sub eax, dword ptr [edi + 0xc]
// 006f44c9  8d542434             lea edx, [esp + 0x34]
// 006f44cd  2b4704               sub eax, dword ptr [edi + 4]
// 006f44d0  52                   push edx
// 006f44d1  50                   push eax
// 006f44d2  51                   push ecx
// 006f44d3  8bce                 mov ecx, esi
// 006f44d5  e8e6dcffff           call 0x6f21c0
// 006f44da  eb28                 jmp 0x6f4504
// 006f44dc  a820                 test al, 0x20
// 006f44de  7408                 je 0x6f44e8
// 006f44e0  8b470c               mov eax, dword ptr [edi + 0xc]
// 006f44e3  034704               add eax, dword ptr [edi + 4]
// 006f44e6  eb05                 jmp 0x6f44ed
// 006f44e8  8b4708               mov eax, dword ptr [edi + 8]
// 006f44eb  0307                 add eax, dword ptr [edi]
// 006f44ed  8d542410             lea edx, [esp + 0x10]
// 006f44f1  52                   push edx
// 006f44f2  8b542434             mov edx, dword ptr [esp + 0x34]
// 006f44f6  52                   push edx
// 006f44f7  8bd3                 mov edx, ebx
// 006f44f9  2bd0                 sub edx, eax
// 006f44fb  52                   push edx
// 006f44fc  51                   push ecx
// 006f44fd  8bce                 mov ecx, esi
// 006f44ff  e87cdfffff           call 0x6f2480
// 006f4504  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f4508  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f450c  83e010               and eax, 0x10
// 006f450f  50                   push eax
// 006f4510  8d4c2414             lea ecx, [esp + 0x14]
// 006f4514  51                   push ecx
// 006f4515  52                   push edx
// 006f4516  8d442424             lea eax, [esp + 0x24]
// 006f451a  50                   push eax
// 006f451b  8bce                 mov ecx, esi
// 006f451d  e8fedaffff           call 0x6f2020
// 006f4522  8b08                 mov ecx, dword ptr [eax]
// 006f4524  894d00               mov dword ptr [ebp], ecx
// 006f4527  8b5004               mov edx, dword ptr [eax + 4]
// 006f452a  895504               mov dword ptr [ebp + 4], edx
// 006f452d  8b442438             mov eax, dword ptr [esp + 0x38]
// 006f4531  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f4535  85c0                 test eax, eax
// 006f4537  7e2a                 jle 0x6f4563
// 006f4539  f6c208               test dl, 8
// 006f453c  7414                 je 0x6f4552
// 006f453e  2b470c               sub eax, dword ptr [edi + 0xc]
// 006f4541  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006f4544  2b4704               sub eax, dword ptr [edi + 4]
// 006f4547  3bc1                 cmp eax, ecx
// 006f4549  7f02                 jg 0x6f454d
// 006f454b  8bc1                 mov eax, ecx
// 006f454d  894504               mov dword ptr [ebp + 4], eax
// 006f4550  eb11                 jmp 0x6f4563
// 006f4552  2b4708               sub eax, dword ptr [edi + 8]
// 006f4555  8b4d00               mov ecx, dword ptr [ebp]
// 006f4558  2b07                 sub eax, dword ptr [edi]
// 006f455a  3bc1                 cmp eax, ecx
// 006f455c  7f02                 jg 0x6f4560
// 006f455e  8bc1                 mov eax, ecx
// 006f4560  894500               mov dword ptr [ebp], eax
// 006f4563  f6c201               test dl, 1
// 006f4566  742a                 je 0x6f4592
// 006f4568  f6c210               test dl, 0x10
// 006f456b  7414                 je 0x6f4581
// 006f456d  2b5f0c               sub ebx, dword ptr [edi + 0xc]
// 006f4570  8b4504               mov eax, dword ptr [ebp + 4]
// 006f4573  2b5f04               sub ebx, dword ptr [edi + 4]
// 006f4576  3bd8                 cmp ebx, eax
// 006f4578  7e02                 jle 0x6f457c
// 006f457a  8bc3                 mov eax, ebx
// 006f457c  894504               mov dword ptr [ebp + 4], eax
// 006f457f  eb11                 jmp 0x6f4592
// 006f4581  2b5f08               sub ebx, dword ptr [edi + 8]
// 006f4584  8b4500               mov eax, dword ptr [ebp]
// 006f4587  2b1f                 sub ebx, dword ptr [edi]
// 006f4589  3bd8                 cmp ebx, eax
// 006f458b  7e02                 jle 0x6f458f
// 006f458d  8bc3                 mov eax, ebx
// 006f458f  894500               mov dword ptr [ebp], eax
// 006f4592  8b0f                 mov ecx, dword ptr [edi]
// 006f4594  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006f4598  83ec10               sub esp, 0x10
// 006f459b  8bc4                 mov eax, esp
// 006f459d  8908                 mov dword ptr [eax], ecx
// 006f459f  8b4f04               mov ecx, dword ptr [edi + 4]
// 006f45a2  894804               mov dword ptr [eax + 4], ecx
// 006f45a5  8b4f08               mov ecx, dword ptr [edi + 8]
// 006f45a8  894808               mov dword ptr [eax + 8], ecx
// 006f45ab  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006f45ae  52                   push edx
// 006f45af  55                   push ebp
// 006f45b0  89480c               mov dword ptr [eax + 0xc], ecx
// 006f45b3  53                   push ebx
// 006f45b4  8bce                 mov ecx, esi
// 006f45b6  e885e1ffff           call 0x6f2740
// 006f45bb  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f45bf  a840                 test al, 0x40
// 006f45c1  7456                 je 0x6f4619
// 006f45c3  8b5620               mov edx, dword ptr [esi + 0x20]
// 006f45c6  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 006f45d0  752c                 jne 0x6f45fe
// 006f45d2  8b0f                 mov ecx, dword ptr [edi]
// 006f45d4  8b5704               mov edx, dword ptr [edi + 4]
// 006f45d7  50                   push eax
// 006f45d8  83ec10               sub esp, 0x10
// 006f45db  8bc4                 mov eax, esp
// 006f45dd  8908                 mov dword ptr [eax], ecx
// 006f45df  8b4f08               mov ecx, dword ptr [edi + 8]
// 006f45e2  895004               mov dword ptr [eax + 4], edx
// 006f45e5  8b570c               mov edx, dword ptr [edi + 0xc]
// 006f45e8  894808               mov dword ptr [eax + 8], ecx
// 006f45eb  8b4d00               mov ecx, dword ptr [ebp]
// 006f45ee  89500c               mov dword ptr [eax + 0xc], edx
// 006f45f1  8b4504               mov eax, dword ptr [ebp + 4]
// 006f45f4  50                   push eax
// 006f45f5  51                   push ecx
// 006f45f6  53                   push ebx
// 006f45f7  8bce                 mov ecx, esi
// 006f45f9  e8c2e2ffff           call 0x6f28c0
// 006f45fe  33ff                 xor edi, edi
// 006f4600  397e2c               cmp dword ptr [esi + 0x2c], edi
// 006f4603  7e14                 jle 0x6f4619
// 006f4605  8bcb                 mov ecx, ebx
// 006f4607  e844d4ffff           call 0x6f1a50
// 006f460c  47                   inc edi
// 006f460d  83c340               add ebx, 0x40
// 006f4610  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 006f4613  7cf0                 jl 0x6f4605
// 006f4615  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006f4619  53                   push ebx
// 006f461a  e82bc3faff           call 0x6a094a
// 006f461f  83c404               add esp, 4
// 006f4622  8bc5                 mov eax, ebp
// 006f4624  5f                   pop edi
// 006f4625  5e                   pop esi
// 006f4626  5d                   pop ebp
// 006f4627  5b                   pop ebx
// 006f4628  83c410               add esp, 0x10
// 006f462b  c21800               ret 0x18
// 006f462e  8b442434             mov eax, dword ptr [esp + 0x34]
// 006f4632  8b4808               mov ecx, dword ptr [eax + 8]
// 006f4635  0308                 add ecx, dword ptr [eax]
// 006f4637  8b500c               mov edx, dword ptr [eax + 0xc]
// 006f463a  035004               add edx, dword ptr [eax + 4]
// 006f463d  f644243008           test byte ptr [esp + 0x30], 8
// 006f4642  8d4117               lea eax, [ecx + 0x17]
// 006f4645  8d4a16               lea ecx, [edx + 0x16]
// 006f4648  894500               mov dword ptr [ebp], eax
// 006f464b  894d04               mov dword ptr [ebp + 4], ecx
// 006f464e  741b                 je 0x6f466b
// 006f4650  8bc1                 mov eax, ecx
// 006f4652  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006f4656  3bc8                 cmp ecx, eax
// 006f4658  7e02                 jle 0x6f465c
// 006f465a  8bc1                 mov eax, ecx
// 006f465c  894504               mov dword ptr [ebp + 4], eax
// 006f465f  8bc5                 mov eax, ebp
// 006f4661  5f                   pop edi
// 006f4662  5e                   pop esi
// 006f4663  5d                   pop ebp
// 006f4664  5b                   pop ebx
// 006f4665  83c410               add esp, 0x10
// 006f4668  c21800               ret 0x18
// 006f466b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006f466f  3bc8                 cmp ecx, eax
// 006f4671  7e02                 jle 0x6f4675
// 006f4673  8bc1                 mov eax, ecx
// 006f4675  5f                   pop edi
// 006f4676  894500               mov dword ptr [ebp], eax
// 006f4679  5e                   pop esi
// 006f467a  8bc5                 mov eax, ebp
// 006f467c  5d                   pop ebp
// 006f467d  5b                   pop ebx
// 006f467e  83c410               add esp, 0x10
// 006f4681  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?CalcDynamicSize@CXTPControls@@QAE?AVCSize@@PAVCDC@@HKABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
