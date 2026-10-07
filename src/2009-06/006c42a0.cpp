// roc 2009-06 006c42a0  unit: lua_exception  size: 1011 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c42a0
//
// 006c42a0  51                   push ecx
// 006c42a1  53                   push ebx
// 006c42a2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006c42a6  55                   push ebp
// 006c42a7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006c42ab  3beb                 cmp ebp, ebx
// 006c42ad  0f8ddc030000         jge 0x6c468f
// 006c42b3  56                   push esi
// 006c42b4  8b742414             mov esi, dword ptr [esp + 0x14]
// 006c42b8  57                   push edi
// 006c42b9  eb0d                 jmp 0x6c42c8
// 006c42bb  eb03                 jmp 0x6c42c0
// 006c42bd  8d4900               lea ecx, [ecx]
// 006c42c0  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006c42c4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006c42c8  55                   push ebp
// 006c42c9  6a01                 push 1
// 006c42cb  56                   push esi
// 006c42cc  e89f53ffff           call 0x6b9670
// 006c42d1  53                   push ebx
// 006c42d2  6a01                 push 1
// 006c42d4  56                   push esi
// 006c42d5  e89653ffff           call 0x6b9670
// 006c42da  6a02                 push 2
// 006c42dc  56                   push esi
// 006c42dd  e88e4cffff           call 0x6b8f70
// 006c42e2  83c420               add esp, 0x20
// 006c42e5  85c0                 test eax, eax
// 006c42e7  743b                 je 0x6c4324
// 006c42e9  6a02                 push 2
// 006c42eb  56                   push esi
// 006c42ec  e84f4cffff           call 0x6b8f40
// 006c42f1  6afe                 push -2
// 006c42f3  56                   push esi
// 006c42f4  e8474cffff           call 0x6b8f40
// 006c42f9  6afc                 push -4
// 006c42fb  56                   push esi
// 006c42fc  e83f4cffff           call 0x6b8f40
// 006c4301  6a01                 push 1
// 006c4303  6a02                 push 2
// 006c4305  56                   push esi
// 006c4306  e89557ffff           call 0x6b9aa0
// 006c430b  6aff                 push -1
// 006c430d  56                   push esi
// 006c430e  e83d4effff           call 0x6b9150
// 006c4313  6afe                 push -2
// 006c4315  56                   push esi
// 006c4316  8bf8                 mov edi, eax
// 006c4318  e8734affff           call 0x6b8d90
// 006c431d  83c434               add esp, 0x34
// 006c4320  8bc7                 mov eax, edi
// 006c4322  eb0d                 jmp 0x6c4331
// 006c4324  6afe                 push -2
// 006c4326  6aff                 push -1
// 006c4328  56                   push esi
// 006c4329  e8624dffff           call 0x6b9090
// 006c432e  83c40c               add esp, 0xc
// 006c4331  85c0                 test eax, eax
// 006c4333  7417                 je 0x6c434c
// 006c4335  55                   push ebp
// 006c4336  6a01                 push 1
// 006c4338  56                   push esi
// 006c4339  e8b255ffff           call 0x6b98f0
// 006c433e  53                   push ebx
// 006c433f  6a01                 push 1
// 006c4341  56                   push esi
// 006c4342  e8a955ffff           call 0x6b98f0
// 006c4347  83c418               add esp, 0x18
// 006c434a  eb0b                 jmp 0x6c4357
// 006c434c  6afd                 push -3
// 006c434e  56                   push esi
// 006c434f  e83c4affff           call 0x6b8d90
// 006c4354  83c408               add esp, 8
// 006c4357  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c435b  8beb                 mov ebp, ebx
// 006c435d  2be8                 sub ebp, eax
// 006c435f  83fd01               cmp ebp, 1
// 006c4362  0f8425030000         je 0x6c468d
// 006c4368  03c3                 add eax, ebx
// 006c436a  99                   cdq 
// 006c436b  2bc2                 sub eax, edx
// 006c436d  8bf8                 mov edi, eax
// 006c436f  d1ff                 sar edi, 1
// 006c4371  57                   push edi
// 006c4372  6a01                 push 1
// 006c4374  56                   push esi
// 006c4375  e8f652ffff           call 0x6b9670
// 006c437a  8b442428             mov eax, dword ptr [esp + 0x28]
// 006c437e  50                   push eax
// 006c437f  6a01                 push 1
// 006c4381  56                   push esi
// 006c4382  e8e952ffff           call 0x6b9670
// 006c4387  6a02                 push 2
// 006c4389  56                   push esi
// 006c438a  e8e14bffff           call 0x6b8f70
// 006c438f  83c420               add esp, 0x20
// 006c4392  85c0                 test eax, eax
// 006c4394  743f                 je 0x6c43d5
// 006c4396  6a02                 push 2
// 006c4398  56                   push esi
// 006c4399  e8a24bffff           call 0x6b8f40
// 006c439e  6afd                 push -3
// 006c43a0  56                   push esi
// 006c43a1  e89a4bffff           call 0x6b8f40
// 006c43a6  6afd                 push -3
// 006c43a8  56                   push esi
// 006c43a9  e8924bffff           call 0x6b8f40
// 006c43ae  6a01                 push 1
// 006c43b0  6a02                 push 2
// 006c43b2  56                   push esi
// 006c43b3  e8e856ffff           call 0x6b9aa0
// 006c43b8  6aff                 push -1
// 006c43ba  56                   push esi
// 006c43bb  e8904dffff           call 0x6b9150
// 006c43c0  6afe                 push -2
// 006c43c2  56                   push esi
// 006c43c3  8bd8                 mov ebx, eax
// 006c43c5  e8c649ffff           call 0x6b8d90
// 006c43ca  8bc3                 mov eax, ebx
// 006c43cc  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 006c43d0  83c434               add esp, 0x34
// 006c43d3  eb0d                 jmp 0x6c43e2
// 006c43d5  6aff                 push -1
// 006c43d7  6afe                 push -2
// 006c43d9  56                   push esi
// 006c43da  e8b14cffff           call 0x6b9090
// 006c43df  83c40c               add esp, 0xc
// 006c43e2  85c0                 test eax, eax
// 006c43e4  741e                 je 0x6c4404
// 006c43e6  57                   push edi
// 006c43e7  6a01                 push 1
// 006c43e9  56                   push esi
// 006c43ea  e80155ffff           call 0x6b98f0
// 006c43ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006c43f3  51                   push ecx
// 006c43f4  6a01                 push 1
// 006c43f6  56                   push esi
// 006c43f7  e8f454ffff           call 0x6b98f0
// 006c43fc  83c418               add esp, 0x18
// 006c43ff  e992000000           jmp 0x6c4496
// 006c4404  6afe                 push -2
// 006c4406  56                   push esi
// 006c4407  e88449ffff           call 0x6b8d90
// 006c440c  53                   push ebx
// 006c440d  6a01                 push 1
// 006c440f  56                   push esi
// 006c4410  e85b52ffff           call 0x6b9670
// 006c4415  6a02                 push 2
// 006c4417  56                   push esi
// 006c4418  e8534bffff           call 0x6b8f70
// 006c441d  83c41c               add esp, 0x1c
// 006c4420  85c0                 test eax, eax
// 006c4422  743f                 je 0x6c4463
// 006c4424  6a02                 push 2
// 006c4426  56                   push esi
// 006c4427  e8144bffff           call 0x6b8f40
// 006c442c  6afe                 push -2
// 006c442e  56                   push esi
// 006c442f  e80c4bffff           call 0x6b8f40
// 006c4434  6afc                 push -4
// 006c4436  56                   push esi
// 006c4437  e8044bffff           call 0x6b8f40
// 006c443c  6a01                 push 1
// 006c443e  6a02                 push 2
// 006c4440  56                   push esi
// 006c4441  e85a56ffff           call 0x6b9aa0
// 006c4446  6aff                 push -1
// 006c4448  56                   push esi
// 006c4449  e8024dffff           call 0x6b9150
// 006c444e  6afe                 push -2
// 006c4450  56                   push esi
// 006c4451  8bd8                 mov ebx, eax
// 006c4453  e83849ffff           call 0x6b8d90
// 006c4458  8bc3                 mov eax, ebx
// 006c445a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 006c445e  83c434               add esp, 0x34
// 006c4461  eb0d                 jmp 0x6c4470
// 006c4463  6afe                 push -2
// 006c4465  6aff                 push -1
// 006c4467  56                   push esi
// 006c4468  e8234cffff           call 0x6b9090
// 006c446d  83c40c               add esp, 0xc
// 006c4470  85c0                 test eax, eax
// 006c4472  7417                 je 0x6c448b
// 006c4474  57                   push edi
// 006c4475  6a01                 push 1
// 006c4477  56                   push esi
// 006c4478  e87354ffff           call 0x6b98f0
// 006c447d  53                   push ebx
// 006c447e  6a01                 push 1
// 006c4480  56                   push esi
// 006c4481  e86a54ffff           call 0x6b98f0
// 006c4486  83c418               add esp, 0x18
// 006c4489  eb0b                 jmp 0x6c4496
// 006c448b  6afd                 push -3
// 006c448d  56                   push esi
// 006c448e  e8fd48ffff           call 0x6b8d90
// 006c4493  83c408               add esp, 8
// 006c4496  83fd02               cmp ebp, 2
// 006c4499  0f84ee010000         je 0x6c468d
// 006c449f  57                   push edi
// 006c44a0  6a01                 push 1
// 006c44a2  56                   push esi
// 006c44a3  e8c851ffff           call 0x6b9670
// 006c44a8  6aff                 push -1
// 006c44aa  56                   push esi
// 006c44ab  e8904affff           call 0x6b8f40
// 006c44b0  8d6bff               lea ebp, [ebx - 1]
// 006c44b3  55                   push ebp
// 006c44b4  6a01                 push 1
// 006c44b6  56                   push esi
// 006c44b7  896c2430             mov dword ptr [esp + 0x30], ebp
// 006c44bb  e8b051ffff           call 0x6b9670
// 006c44c0  57                   push edi
// 006c44c1  6a01                 push 1
// 006c44c3  56                   push esi
// 006c44c4  e82754ffff           call 0x6b98f0
// 006c44c9  55                   push ebp
// 006c44ca  6a01                 push 1
// 006c44cc  56                   push esi
// 006c44cd  e81e54ffff           call 0x6b98f0
// 006c44d2  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 006c44d6  83c438               add esp, 0x38
// 006c44d9  8da42400000000       lea esp, [esp]
// 006c44e0  43                   inc ebx
// 006c44e1  53                   push ebx
// 006c44e2  6a01                 push 1
// 006c44e4  56                   push esi
// 006c44e5  e88651ffff           call 0x6b9670
// 006c44ea  6a02                 push 2
// 006c44ec  56                   push esi
// 006c44ed  e87e4affff           call 0x6b8f70
// 006c44f2  83c414               add esp, 0x14
// 006c44f5  85c0                 test eax, eax
// 006c44f7  743b                 je 0x6c4534
// 006c44f9  6a02                 push 2
// 006c44fb  56                   push esi
// 006c44fc  e83f4affff           call 0x6b8f40
// 006c4501  6afe                 push -2
// 006c4503  56                   push esi
// 006c4504  e8374affff           call 0x6b8f40
// 006c4509  6afc                 push -4
// 006c450b  56                   push esi
// 006c450c  e82f4affff           call 0x6b8f40
// 006c4511  6a01                 push 1
// 006c4513  6a02                 push 2
// 006c4515  56                   push esi
// 006c4516  e88555ffff           call 0x6b9aa0
// 006c451b  6aff                 push -1
// 006c451d  56                   push esi
// 006c451e  e82d4cffff           call 0x6b9150
// 006c4523  6afe                 push -2
// 006c4525  56                   push esi
// 006c4526  8bf8                 mov edi, eax
// 006c4528  e86348ffff           call 0x6b8d90
// 006c452d  83c434               add esp, 0x34
// 006c4530  8bc7                 mov eax, edi
// 006c4532  eb0d                 jmp 0x6c4541
// 006c4534  6afe                 push -2
// 006c4536  6aff                 push -1
// 006c4538  56                   push esi
// 006c4539  e8524bffff           call 0x6b9090
// 006c453e  83c40c               add esp, 0xc
// 006c4541  85c0                 test eax, eax
// 006c4543  742b                 je 0x6c4570
// 006c4545  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 006c4549  7e0e                 jle 0x6c4559
// 006c454b  684cb88e00           push 0x8eb84c
// 006c4550  56                   push esi
// 006c4551  e8ea5cffff           call 0x6ba240
// 006c4556  83c408               add esp, 8
// 006c4559  6afe                 push -2
// 006c455b  56                   push esi
// 006c455c  e82f48ffff           call 0x6b8d90
// 006c4561  83c408               add esp, 8
// 006c4564  e977ffffff           jmp 0x6c44e0
// 006c4569  8da42400000000       lea esp, [esp]
// 006c4570  4d                   dec ebp
// 006c4571  55                   push ebp
// 006c4572  6a01                 push 1
// 006c4574  56                   push esi
// 006c4575  e8f650ffff           call 0x6b9670
// 006c457a  6a02                 push 2
// 006c457c  56                   push esi
// 006c457d  e8ee49ffff           call 0x6b8f70
// 006c4582  83c414               add esp, 0x14
// 006c4585  85c0                 test eax, eax
// 006c4587  743b                 je 0x6c45c4
// 006c4589  6a02                 push 2
// 006c458b  56                   push esi
// 006c458c  e8af49ffff           call 0x6b8f40
// 006c4591  6afc                 push -4
// 006c4593  56                   push esi
// 006c4594  e8a749ffff           call 0x6b8f40
// 006c4599  6afd                 push -3
// 006c459b  56                   push esi
// 006c459c  e89f49ffff           call 0x6b8f40
// 006c45a1  6a01                 push 1
// 006c45a3  6a02                 push 2
// 006c45a5  56                   push esi
// 006c45a6  e8f554ffff           call 0x6b9aa0
// 006c45ab  6aff                 push -1
// 006c45ad  56                   push esi
// 006c45ae  e89d4bffff           call 0x6b9150
// 006c45b3  6afe                 push -2
// 006c45b5  56                   push esi
// 006c45b6  8bf8                 mov edi, eax
// 006c45b8  e8d347ffff           call 0x6b8d90
// 006c45bd  83c434               add esp, 0x34
// 006c45c0  8bc7                 mov eax, edi
// 006c45c2  eb0d                 jmp 0x6c45d1
// 006c45c4  6aff                 push -1
// 006c45c6  6afd                 push -3
// 006c45c8  56                   push esi
// 006c45c9  e8c24affff           call 0x6b9090
// 006c45ce  83c40c               add esp, 0xc
// 006c45d1  85c0                 test eax, eax
// 006c45d3  7424                 je 0x6c45f9
// 006c45d5  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 006c45d9  7d0e                 jge 0x6c45e9
// 006c45db  684cb88e00           push 0x8eb84c
// 006c45e0  56                   push esi
// 006c45e1  e85a5cffff           call 0x6ba240
// 006c45e6  83c408               add esp, 8
// 006c45e9  6afe                 push -2
// 006c45eb  56                   push esi
// 006c45ec  e89f47ffff           call 0x6b8d90
// 006c45f1  83c408               add esp, 8
// 006c45f4  e977ffffff           jmp 0x6c4570
// 006c45f9  3beb                 cmp ebp, ebx
// 006c45fb  7c1a                 jl 0x6c4617
// 006c45fd  53                   push ebx
// 006c45fe  6a01                 push 1
// 006c4600  56                   push esi
// 006c4601  e8ea52ffff           call 0x6b98f0
// 006c4606  55                   push ebp
// 006c4607  6a01                 push 1
// 006c4609  56                   push esi
// 006c460a  e8e152ffff           call 0x6b98f0
// 006c460f  83c418               add esp, 0x18
// 006c4612  e9c9feffff           jmp 0x6c44e0
// 006c4617  6afc                 push -4
// 006c4619  56                   push esi
// 006c461a  e87147ffff           call 0x6b8d90
// 006c461f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c4623  57                   push edi
// 006c4624  6a01                 push 1
// 006c4626  56                   push esi
// 006c4627  e84450ffff           call 0x6b9670
// 006c462c  53                   push ebx
// 006c462d  6a01                 push 1
// 006c462f  56                   push esi
// 006c4630  e83b50ffff           call 0x6b9670
// 006c4635  57                   push edi
// 006c4636  6a01                 push 1
// 006c4638  56                   push esi
// 006c4639  e8b252ffff           call 0x6b98f0
// 006c463e  53                   push ebx
// 006c463f  6a01                 push 1
// 006c4641  56                   push esi
// 006c4642  e8a952ffff           call 0x6b98f0
// 006c4647  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 006c464b  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 006c464f  8bd5                 mov edx, ebp
// 006c4651  8bc3                 mov eax, ebx
// 006c4653  2bd3                 sub edx, ebx
// 006c4655  2bc7                 sub eax, edi
// 006c4657  83c438               add esp, 0x38
// 006c465a  3bc2                 cmp eax, edx
// 006c465c  7d0e                 jge 0x6c466c
// 006c465e  4b                   dec ebx
// 006c465f  8d4b02               lea ecx, [ebx + 2]
// 006c4662  8bc7                 mov eax, edi
// 006c4664  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006c4668  8bf9                 mov edi, ecx
// 006c466a  eb0e                 jmp 0x6c467a
// 006c466c  8d4301               lea eax, [ebx + 1]
// 006c466f  8d50fe               lea edx, [eax - 2]
// 006c4672  8bdd                 mov ebx, ebp
// 006c4674  89542420             mov dword ptr [esp + 0x20], edx
// 006c4678  8bea                 mov ebp, edx
// 006c467a  53                   push ebx
// 006c467b  50                   push eax
// 006c467c  56                   push esi
// 006c467d  e81efcffff           call 0x6c42a0
// 006c4682  83c40c               add esp, 0xc
// 006c4685  3bfd                 cmp edi, ebp
// 006c4687  0f8c33fcffff         jl 0x6c42c0
// 006c468d  5f                   pop edi
// 006c468e  5e                   pop esi
// 006c468f  5d                   pop ebp
// 006c4690  5b                   pop ebx
// 006c4691  59                   pop ecx
// 006c4692  c3                   ret 
// library lua-5.1.4/ltablib.c (function _auxsort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
