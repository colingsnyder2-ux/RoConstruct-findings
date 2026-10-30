// roc 2011-06 008f4270  unit: CXTPScrollBase  size: 1013 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f4270
//
// 008f4270  83ec34               sub esp, 0x34
// 008f4273  53                   push ebx
// 008f4274  55                   push ebp
// 008f4275  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008f4279  8bd9                 mov ebx, ecx
// 008f427b  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008f427f  56                   push esi
// 008f4280  57                   push edi
// 008f4281  7504                 jne 0x8f4287
// 008f4283  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008f4287  6a38                 push 0x38
// 008f4289  e8d05df1ff           call 0x80a05e
// 008f428e  6a38                 push 0x38
// 008f4290  8bf0                 mov esi, eax
// 008f4292  6a00                 push 0
// 008f4294  56                   push esi
// 008f4295  e84a70f1ff           call 0x80b2e4
// 008f429a  8b442458             mov eax, dword ptr [esp + 0x58]
// 008f429e  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 008f42a2  83c410               add esp, 0x10
// 008f42a5  c74614ffffffff       mov dword ptr [esi + 0x14], 0xffffffff
// 008f42ac  c7463000000000       mov dword ptr [esi + 0x30], 0
// 008f42b3  897e34               mov dword ptr [esi + 0x34], edi
// 008f42b6  89462c               mov dword ptr [esi + 0x2c], eax
// 008f42b9  68b0cb8000           push 0x80cbb0
// 008f42be  b9e88ed100           mov ecx, 0xd18ee8
// 008f42c3  897360               mov dword ptr [ebx + 0x60], esi
// 008f42c6  e8f9820d00           call 0x9cc5c4
// 008f42cb  89442454             mov dword ptr [esp + 0x54], eax
// 008f42cf  85c0                 test eax, eax
// 008f42d1  7505                 jne 0x8f42d8
// 008f42d3  e83260f1ff           call 0x80a30a
// 008f42d8  837f5800             cmp dword ptr [edi + 0x58], 0
// 008f42dc  8d4c2418             lea ecx, [esp + 0x18]
// 008f42e0  8d44241c             lea eax, [esp + 0x1c]
// 008f42e4  7506                 jne 0x8f42ec
// 008f42e6  8bc8                 mov ecx, eax
// 008f42e8  8d442418             lea eax, [esp + 0x18]
// 008f42ec  3b6f24               cmp ebp, dword ptr [edi + 0x24]
// 008f42ef  8b5718               mov edx, dword ptr [edi + 0x18]
// 008f42f2  8911                 mov dword ptr [ecx], edx
// 008f42f4  8b5710               mov edx, dword ptr [edi + 0x10]
// 008f42f7  8910                 mov dword ptr [eax], edx
// 008f42f9  8b571c               mov edx, dword ptr [edi + 0x1c]
// 008f42fc  895108               mov dword ptr [ecx + 8], edx
// 008f42ff  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 008f4302  894808               mov dword ptr [eax + 8], ecx
// 008f4305  7d16                 jge 0x8f431d
// 008f4307  c747543c000000       mov dword ptr [edi + 0x54], 0x3c
// 008f430e  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008f4315  8b5724               mov edx, dword ptr [edi + 0x24]
// 008f4318  895008               mov dword ptr [eax + 8], edx
// 008f431b  eb5c                 jmp 0x8f4379
// 008f431d  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 008f4320  7c15                 jl 0x8f4337
// 008f4322  c747543d000000       mov dword ptr [edi + 0x54], 0x3d
// 008f4329  c7461401000000       mov dword ptr [esi + 0x14], 1
// 008f4330  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 008f4333  8908                 mov dword ptr [eax], ecx
// 008f4335  eb42                 jmp 0x8f4379
// 008f4337  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 008f433a  7d16                 jge 0x8f4352
// 008f433c  c747543e000000       mov dword ptr [edi + 0x54], 0x3e
// 008f4343  c7461402000000       mov dword ptr [esi + 0x14], 2
// 008f434a  8b5724               mov edx, dword ptr [edi + 0x24]
// 008f434d  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008f4350  eb22                 jmp 0x8f4374
// 008f4352  3b6f30               cmp ebp, dword ptr [edi + 0x30]
// 008f4355  7d09                 jge 0x8f4360
// 008f4357  c7475440000000       mov dword ptr [edi + 0x54], 0x40
// 008f435e  eb3d                 jmp 0x8f439d
// 008f4360  c747543f000000       mov dword ptr [edi + 0x54], 0x3f
// 008f4367  c7461403000000       mov dword ptr [esi + 0x14], 3
// 008f436e  8b5730               mov edx, dword ptr [edi + 0x30]
// 008f4371  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 008f4374  894808               mov dword ptr [eax + 8], ecx
// 008f4377  8910                 mov dword ptr [eax], edx
// 008f4379  837c245800           cmp dword ptr [esp + 0x58], 0
// 008f437e  0f849a000000         je 0x8f441e
// 008f4384  8b4614               mov eax, dword ptr [esi + 0x14]
// 008f4387  85c0                 test eax, eax
// 008f4389  0f848f000000         je 0x8f441e
// 008f438f  83f801               cmp eax, 1
// 008f4392  0f8486000000         je 0x8f441e
// 008f4398  83f804               cmp eax, 4
// 008f439b  7474                 je 0x8f4411
// 008f439d  8b5728               mov edx, dword ptr [edi + 0x28]
// 008f43a0  2b5724               sub edx, dword ptr [edi + 0x24]
// 008f43a3  3b5720               cmp edx, dword ptr [edi + 0x20]
// 008f43a6  7e4c                 jle 0x8f43f4
// 008f43a8  56                   push esi
// 008f43a9  8bcb                 mov ecx, ebx
// 008f43ab  c7461404000000       mov dword ptr [esi + 0x14], 4
// 008f43b2  e859fdffff           call 0x8f4110
// 008f43b7  8b4734               mov eax, dword ptr [edi + 0x34]
// 008f43ba  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008f43be  89472c               mov dword ptr [edi + 0x2c], eax
// 008f43c1  894620               mov dword ptr [esi + 0x20], eax
// 008f43c4  8b470c               mov eax, dword ptr [edi + 0xc]
// 008f43c7  894624               mov dword ptr [esi + 0x24], eax
// 008f43ca  894628               mov dword ptr [esi + 0x28], eax
// 008f43cd  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008f43d0  2bc5                 sub eax, ebp
// 008f43d2  51                   push ecx
// 008f43d3  89461c               mov dword ptr [esi + 0x1c], eax
// 008f43d6  c7463001000000       mov dword ptr [esi + 0x30], 1
// 008f43dd  ff15341ba400         call dword ptr [0xa41b34]
// 008f43e3  8b4624               mov eax, dword ptr [esi + 0x24]
// 008f43e6  8b13                 mov edx, dword ptr [ebx]
// 008f43e8  8b5218               mov edx, dword ptr [edx + 0x18]
// 008f43eb  50                   push eax
// 008f43ec  6a05                 push 5
// 008f43ee  8bcb                 mov ecx, ebx
// 008f43f0  ffd2                 call edx
// 008f43f2  eb85                 jmp 0x8f4379
// 008f43f4  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008f43f7  50                   push eax
// 008f43f8  e85b5cf1ff           call 0x80a058
// 008f43fd  83c404               add esp, 4
// 008f4400  5f                   pop edi
// 008f4401  5e                   pop esi
// 008f4402  5d                   pop ebp
// 008f4403  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 008f440a  5b                   pop ebx
// 008f440b  83c434               add esp, 0x34
// 008f440e  c21400               ret 0x14
// 008f4411  8b4720               mov eax, dword ptr [edi + 0x20]
// 008f4414  99                   cdq 
// 008f4415  2bc2                 sub eax, edx
// 008f4417  d1f8                 sar eax, 1
// 008f4419  f7d8                 neg eax
// 008f441b  89461c               mov dword ptr [esi + 0x1c], eax
// 008f441e  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008f4422  57                   push edi
// 008f4423  ff15341ba400         call dword ptr [0xa41b34]
// 008f4429  837e1404             cmp dword ptr [esi + 0x14], 4
// 008f442d  740f                 je 0x8f443e
// 008f442f  8d4c2418             lea ecx, [esp + 0x18]
// 008f4433  51                   push ecx
// 008f4434  8d5604               lea edx, [esi + 4]
// 008f4437  52                   push edx
// 008f4438  ff15681ca400         call dword ptr [0xa41c68]
// 008f443e  837e3000             cmp dword ptr [esi + 0x30], 0
// 008f4442  7518                 jne 0x8f445c
// 008f4444  8b442450             mov eax, dword ptr [esp + 0x50]
// 008f4448  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008f444c  50                   push eax
// 008f444d  51                   push ecx
// 008f444e  6801020000           push 0x201
// 008f4453  8bcb                 mov ecx, ebx
// 008f4455  e896fbffff           call 0x8f3ff0
// 008f445a  eb1f                 jmp 0x8f447b
// 008f445c  8b542450             mov edx, dword ptr [esp + 0x50]
// 008f4460  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008f4464  52                   push edx
// 008f4465  50                   push eax
// 008f4466  6801020000           push 0x201
// 008f446b  8bcb                 mov ecx, ebx
// 008f446d  e8defaffff           call 0x8f3f50
// 008f4472  8b13                 mov edx, dword ptr [ebx]
// 008f4474  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008f4477  8bcb                 mov ecx, ebx
// 008f4479  ffd0                 call eax
// 008f447b  8b442454             mov eax, dword ptr [esp + 0x54]
// 008f447f  ff4004               inc dword ptr [eax + 4]
// 008f4482  ff15381ba400         call dword ptr [0xa41b38]
// 008f4488  3bc7                 cmp eax, edi
// 008f448a  0f85e8000000         jne 0x8f4578
// 008f4490  6a00                 push 0
// 008f4492  6a00                 push 0
// 008f4494  6a00                 push 0
// 008f4496  8d4c2434             lea ecx, [esp + 0x34]
// 008f449a  51                   push ecx
// 008f449b  ff15281ca400         call dword ptr [0xa41c28]
// 008f44a1  85c0                 test eax, eax
// 008f44a3  0f84c5000000         je 0x8f456e
// 008f44a9  8b2dec1ba400         mov ebp, dword ptr [0xa41bec]
// 008f44af  57                   push edi
// 008f44b0  ffd5                 call ebp
// 008f44b2  85c0                 test eax, eax
// 008f44b4  0f84c4000000         je 0x8f457e
// 008f44ba  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008f44be  8be8                 mov ebp, eax
// 008f44c0  3d13010000           cmp eax, 0x113
// 008f44c5  7529                 jne 0x8f44f0
// 008f44c7  8b442430             mov eax, dword ptr [esp + 0x30]
// 008f44cb  3d315b0000           cmp eax, 0x5b31
// 008f44d0  750c                 jne 0x8f44de
// 008f44d2  8bcb                 mov ecx, ebx
// 008f44d4  e807fdffff           call 0x8f41e0
// 008f44d9  e980000000           jmp 0x8f455e
// 008f44de  3d325b0000           cmp eax, 0x5b32
// 008f44e3  7563                 jne 0x8f4548
// 008f44e5  8b13                 mov edx, dword ptr [ebx]
// 008f44e7  8b420c               mov eax, dword ptr [edx + 0xc]
// 008f44ea  8bcb                 mov ecx, ebx
// 008f44ec  ffd0                 call eax
// 008f44ee  eb6e                 jmp 0x8f455e
// 008f44f0  3d00020000           cmp eax, 0x200
// 008f44f5  7251                 jb 0x8f4548
// 008f44f7  3d0a020000           cmp eax, 0x20a
// 008f44fc  774a                 ja 0x8f4548
// 008f44fe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f4502  8b542440             mov edx, dword ptr [esp + 0x40]
// 008f4506  8d442410             lea eax, [esp + 0x10]
// 008f450a  50                   push eax
// 008f450b  57                   push edi
// 008f450c  894c2418             mov dword ptr [esp + 0x18], ecx
// 008f4510  8954241c             mov dword ptr [esp + 0x1c], edx
// 008f4514  ff15f419a400         call dword ptr [0xa419f4]
// 008f451a  837e3000             cmp dword ptr [esi + 0x30], 0
// 008f451e  7514                 jne 0x8f4534
// 008f4520  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f4524  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f4528  51                   push ecx
// 008f4529  52                   push edx
// 008f452a  55                   push ebp
// 008f452b  8bcb                 mov ecx, ebx
// 008f452d  e8befaffff           call 0x8f3ff0
// 008f4532  eb2a                 jmp 0x8f455e
// 008f4534  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f4538  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f453c  50                   push eax
// 008f453d  51                   push ecx
// 008f453e  55                   push ebp
// 008f453f  8bcb                 mov ecx, ebx
// 008f4541  e80afaffff           call 0x8f3f50
// 008f4546  eb16                 jmp 0x8f455e
// 008f4548  8d542428             lea edx, [esp + 0x28]
// 008f454c  52                   push edx
// 008f454d  ff15781ba400         call dword ptr [0xa41b78]
// 008f4553  8d442428             lea eax, [esp + 0x28]
// 008f4557  50                   push eax
// 008f4558  ff150c1aa400         call dword ptr [0xa41a0c]
// 008f455e  ff15381ba400         call dword ptr [0xa41b38]
// 008f4564  3bc7                 cmp eax, edi
// 008f4566  0f8424ffffff         je 0x8f4490
// 008f456c  eb0a                 jmp 0x8f4578
// 008f456e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f4572  51                   push ecx
// 008f4573  e8a6830d00           call 0x9cc91e
// 008f4578  8b2dec1ba400         mov ebp, dword ptr [0xa41bec]
// 008f457e  8b442454             mov eax, dword ptr [esp + 0x54]
// 008f4582  ff4804               dec dword ptr [eax + 4]
// 008f4585  8b7618               mov esi, dword ptr [esi + 0x18]
// 008f4588  85f6                 test esi, esi
// 008f458a  7408                 je 0x8f4594
// 008f458c  56                   push esi
// 008f458d  57                   push edi
// 008f458e  ff15d019a400         call dword ptr [0xa419d0]
// 008f4594  8b5360               mov edx, dword ptr [ebx + 0x60]
// 008f4597  52                   push edx
// 008f4598  e8bb5af1ff           call 0x80a058
// 008f459d  83c404               add esp, 4
// 008f45a0  57                   push edi
// 008f45a1  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 008f45a8  ffd5                 call ebp
// 008f45aa  85c0                 test eax, eax
// 008f45ac  7434                 je 0x8f45e2
// 008f45ae  8d44244c             lea eax, [esp + 0x4c]
// 008f45b2  50                   push eax
// 008f45b3  ff15c819a400         call dword ptr [0xa419c8]
// 008f45b9  8d4c244c             lea ecx, [esp + 0x4c]
// 008f45bd  51                   push ecx
// 008f45be  57                   push edi
// 008f45bf  ff15f419a400         call dword ptr [0xa419f4]
// 008f45c5  8b542450             mov edx, dword ptr [esp + 0x50]
// 008f45c9  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008f45cd  52                   push edx
// 008f45ce  50                   push eax
// 008f45cf  8bcb                 mov ecx, ebx
// 008f45d1  e86af7ffff           call 0x8f3d40
// 008f45d6  8b13                 mov edx, dword ptr [ebx]
// 008f45d8  894358               mov dword ptr [ebx + 0x58], eax
// 008f45db  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008f45de  8bcb                 mov ecx, ebx
// 008f45e0  ffd0                 call eax
// 008f45e2  57                   push edi
// 008f45e3  ffd5                 call ebp
// 008f45e5  85c0                 test eax, eax
// 008f45e7  7472                 je 0x8f465b
// 008f45e9  8da42400000000       lea esp, [esp]
// 008f45f0  837b6800             cmp dword ptr [ebx + 0x68], 0
// 008f45f4  7465                 je 0x8f465b
// 008f45f6  6a00                 push 0
// 008f45f8  6a00                 push 0
// 008f45fa  6a00                 push 0
// 008f45fc  8d4c2434             lea ecx, [esp + 0x34]
// 008f4600  51                   push ecx
// 008f4601  ff15281ca400         call dword ptr [0xa41c28]
// 008f4607  85c0                 test eax, eax
// 008f4609  7446                 je 0x8f4651
// 008f460b  817c242c13010000     cmp dword ptr [esp + 0x2c], 0x113
// 008f4613  7515                 jne 0x8f462a
// 008f4615  817c2430325b0000     cmp dword ptr [esp + 0x30], 0x5b32
// 008f461d  750b                 jne 0x8f462a
// 008f461f  8b13                 mov edx, dword ptr [ebx]
// 008f4621  8b420c               mov eax, dword ptr [edx + 0xc]
// 008f4624  8bcb                 mov ecx, ebx
// 008f4626  ffd0                 call eax
// 008f4628  eb16                 jmp 0x8f4640
// 008f462a  8d4c2428             lea ecx, [esp + 0x28]
// 008f462e  51                   push ecx
// 008f462f  ff15781ba400         call dword ptr [0xa41b78]
// 008f4635  8d542428             lea edx, [esp + 0x28]
// 008f4639  52                   push edx
// 008f463a  ff150c1aa400         call dword ptr [0xa41a0c]
// 008f4640  57                   push edi
// 008f4641  ffd5                 call ebp
// 008f4643  85c0                 test eax, eax
// 008f4645  75a9                 jne 0x8f45f0
// 008f4647  5f                   pop edi
// 008f4648  5e                   pop esi
// 008f4649  5d                   pop ebp
// 008f464a  5b                   pop ebx
// 008f464b  83c434               add esp, 0x34
// 008f464e  c21400               ret 0x14
// 008f4651  8b442430             mov eax, dword ptr [esp + 0x30]
// 008f4655  50                   push eax
// 008f4656  e8c3820d00           call 0x9cc91e
// 008f465b  5f                   pop edi
// 008f465c  5e                   pop esi
// 008f465d  5d                   pop ebp
// 008f465e  5b                   pop ebx
// 008f465f  83c434               add esp, 0x34
// 008f4662  c21400               ret 0x14
// copied from an identical function in another client (function ?PerformTrackInit@CXTPScrollBase@@QAEXPAUHWND__@@VCPoint@@PAUSCROLLBARPOSINFO@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPScrollBar.cpp