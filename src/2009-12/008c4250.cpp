// roc 2009-12 008c4250  unit: CXTPImageEditorPicture  size: 1459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4250
//
// 008c4250  6aff                 push -1
// 008c4252  68de429600           push 0x9642de
// 008c4257  64a100000000         mov eax, dword ptr fs:[0]
// 008c425d  50                   push eax
// 008c425e  81ec0c020000         sub esp, 0x20c
// 008c4264  a10052b600           mov eax, dword ptr [0xb65200]
// 008c4269  33c4                 xor eax, esp
// 008c426b  89842408020000       mov dword ptr [esp + 0x208], eax
// 008c4272  53                   push ebx
// 008c4273  55                   push ebp
// 008c4274  56                   push esi
// 008c4275  57                   push edi
// 008c4276  a10052b600           mov eax, dword ptr [0xb65200]
// 008c427b  33c4                 xor eax, esp
// 008c427d  50                   push eax
// 008c427e  8d842420020000       lea eax, [esp + 0x220]
// 008c4285  64a300000000         mov dword ptr fs:[0], eax
// 008c428b  8bf1                 mov esi, ecx
// 008c428d  8d4c2434             lea ecx, [esp + 0x34]
// 008c4291  ff1574de9800         call dword ptr [0x98de74]
// 008c4297  33db                 xor ebx, ebx
// 008c4299  899c2428020000       mov dword ptr [esp + 0x228], ebx
// 008c42a0  e8fba5faff           call 0x86e8a0
// 008c42a5  8b10                 mov edx, dword ptr [eax]
// 008c42a7  8b5208               mov edx, dword ptr [edx + 8]
// 008c42aa  68da230000           push 0x23da
// 008c42af  8d4c2438             lea ecx, [esp + 0x38]
// 008c42b3  51                   push ecx
// 008c42b4  8bc8                 mov ecx, eax
// 008c42b6  ffd2                 call edx
// 008c42b8  6a01                 push 1
// 008c42ba  53                   push ebx
// 008c42bb  53                   push ebx
// 008c42bc  8d4c2440             lea ecx, [esp + 0x40]
// 008c42c0  ff1580de9800         call dword ptr [0x98de80]
// 008c42c6  50                   push eax
// 008c42c7  6a04                 push 4
// 008c42c9  53                   push ebx
// 008c42ca  53                   push ebx
// 008c42cb  6a01                 push 1
// 008c42cd  8d4c245c             lea ecx, [esp + 0x5c]
// 008c42d1  e87603f3ff           call 0x7f464c
// 008c42d6  8d4c243c             lea ecx, [esp + 0x3c]
// 008c42da  c684242802000001     mov byte ptr [esp + 0x228], 1
// 008c42e2  e85f03f3ff           call 0x7f4646
// 008c42e7  83f801               cmp eax, 1
// 008c42ea  0f85d1040000         jne 0x8c47c1
// 008c42f0  8d44241c             lea eax, [esp + 0x1c]
// 008c42f4  50                   push eax
// 008c42f5  8d4c2440             lea ecx, [esp + 0x40]
// 008c42f9  e83e2a0600           call 0x926d3c
// 008c42fe  8d4c241c             lea ecx, [esp + 0x1c]
// 008c4302  c684242802000002     mov byte ptr [esp + 0x228], 2
// 008c430a  ff1544d89800         call dword ptr [0x98d844]
// 008c4310  68d03e9b00           push 0x9b3ed0
// 008c4315  8d4c2420             lea ecx, [esp + 0x20]
// 008c4319  ff1584de9800         call dword ptr [0x98de84]
// 008c431f  85c0                 test eax, eax
// 008c4321  0f85fa010000         jne 0x8c4521
// 008c4327  8d4c2414             lea ecx, [esp + 0x14]
// 008c432b  51                   push ecx
// 008c432c  8d4c2440             lea ecx, [esp + 0x40]
// 008c4330  e80b03f3ff           call 0x7f4640
// 008c4335  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c4338  52                   push edx
// 008c4339  8bc8                 mov ecx, eax
// 008c433b  c684242c02000003     mov byte ptr [esp + 0x22c], 3
// 008c4343  ff1580de9800         call dword ptr [0x98de80]
// 008c4349  50                   push eax
// 008c434a  e80162f4ff           call 0x80a550
// 008c434f  83c408               add esp, 8
// 008c4352  8d4c2414             lea ecx, [esp + 0x14]
// 008c4356  8bf8                 mov edi, eax
// 008c4358  c684242802000002     mov byte ptr [esp + 0x228], 2
// 008c4360  ff15c0de9800         call dword ptr [0x98dec0]
// 008c4366  3bfb                 cmp edi, ebx
// 008c4368  0f850f010000         jne 0x8c447d
// 008c436e  8d442414             lea eax, [esp + 0x14]
// 008c4372  50                   push eax
// 008c4373  8d4c2440             lea ecx, [esp + 0x40]
// 008c4377  e8c402f3ff           call 0x7f4640
// 008c437c  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c437f  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c4382  6810200000           push 0x2010
// 008c4387  51                   push ecx
// 008c4388  52                   push edx
// 008c4389  6a01                 push 1
// 008c438b  8bc8                 mov ecx, eax
// 008c438d  ff1580de9800         call dword ptr [0x98de80]
// 008c4393  50                   push eax
// 008c4394  53                   push ebx
// 008c4395  ff150ccb9800         call dword ptr [0x98cb0c]
// 008c439b  8d4c2414             lea ecx, [esp + 0x14]
// 008c439f  8bf8                 mov edi, eax
// 008c43a1  ff15c0de9800         call dword ptr [0x98dec0]
// 008c43a7  3bfb                 cmp edi, ebx
// 008c43a9  0f8408040000         je 0x8c47b7
// 008c43af  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c43b2  6a0c                 push 0xc
// 008c43b4  894678               mov dword ptr [esi + 0x78], eax
// 008c43b7  e8a4f4f2ff           call 0x7f3860
// 008c43bc  83c404               add esp, 4
// 008c43bf  3bc3                 cmp eax, ebx
// 008c43c1  740e                 je 0x8c43d1
// 008c43c3  895804               mov dword ptr [eax + 4], ebx
// 008c43c6  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c43cc  895808               mov dword ptr [eax + 8], ebx
// 008c43cf  eb02                 jmp 0x8c43d3
// 008c43d1  33c0                 xor eax, eax
// 008c43d3  8d4c2424             lea ecx, [esp + 0x24]
// 008c43d7  89467c               mov dword ptr [esi + 0x7c], eax
// 008c43da  e8cf200600           call 0x9264ae
// 008c43df  53                   push ebx
// 008c43e0  c684242c02000004     mov byte ptr [esp + 0x22c], 4
// 008c43e8  ff1554b19800         call dword ptr [0x98b154]
// 008c43ee  50                   push eax
// 008c43ef  8d4c2428             lea ecx, [esp + 0x28]
// 008c43f3  e8a4200600           call 0x92649c
// 008c43f8  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c43fb  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c43fe  51                   push ecx
// 008c43ff  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008c4402  52                   push edx
// 008c4403  e8f8ccffff           call 0x8c1100
// 008c4408  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c440b  50                   push eax
// 008c440c  8d4c2428             lea ecx, [esp + 0x28]
// 008c4410  e8eb39f5ff           call 0x817e00
// 008c4415  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c4418  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c441b  68fffeff00           push 0xfffeff
// 008c4420  51                   push ecx
// 008c4421  52                   push edx
// 008c4422  53                   push ebx
// 008c4423  53                   push ebx
// 008c4424  8d4c2438             lea ecx, [esp + 0x38]
// 008c4428  8be8                 mov ebp, eax
// 008c442a  e867200600           call 0x926496
// 008c442f  53                   push ebx
// 008c4430  53                   push ebx
// 008c4431  57                   push edi
// 008c4432  33c9                 xor ecx, ecx
// 008c4434  51                   push ecx
// 008c4435  33c0                 xor eax, eax
// 008c4437  50                   push eax
// 008c4438  83ec08               sub esp, 8
// 008c443b  8bc4                 mov eax, esp
// 008c443d  8d4c2440             lea ecx, [esp + 0x40]
// 008c4441  89642434             mov dword ptr [esp + 0x34], esp
// 008c4445  8918                 mov dword ptr [eax], ebx
// 008c4447  895804               mov dword ptr [eax + 4], ebx
// 008c444a  e841d0ffff           call 0x8c1490
// 008c444f  55                   push ebp
// 008c4450  8d4c2428             lea ecx, [esp + 0x28]
// 008c4454  e8a739f5ff           call 0x817e00
// 008c4459  57                   push edi
// 008c445a  ff15f8c99800         call dword ptr [0x98c9f8]
// 008c4460  8d4c2424             lea ecx, [esp + 0x24]
// 008c4464  c684242802000002     mov byte ptr [esp + 0x228], 2
// 008c446c  e837200600           call 0x9264a8
// 008c4471  8bce                 mov ecx, esi
// 008c4473  e858f7ffff           call 0x8c3bd0
// 008c4478  e93a030000           jmp 0x8c47b7
// 008c447d  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c4480  6a0c                 push 0xc
// 008c4482  894678               mov dword ptr [esi + 0x78], eax
// 008c4485  e8d6f3f2ff           call 0x7f3860
// 008c448a  83c404               add esp, 4
// 008c448d  3bc3                 cmp eax, ebx
// 008c448f  740e                 je 0x8c449f
// 008c4491  895804               mov dword ptr [eax + 4], ebx
// 008c4494  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c449a  895808               mov dword ptr [eax + 8], ebx
// 008c449d  eb02                 jmp 0x8c44a1
// 008c449f  33c0                 xor eax, eax
// 008c44a1  89467c               mov dword ptr [esi + 0x7c], eax
// 008c44a4  895c2428             mov dword ptr [esp + 0x28], ebx
// 008c44a8  c7442424148aa000     mov dword ptr [esp + 0x24], 0xa08a14
// 008c44b0  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 008c44b8  57                   push edi
// 008c44b9  8d4c2428             lea ecx, [esp + 0x28]
// 008c44bd  c684242c02000005     mov byte ptr [esp + 0x22c], 5
// 008c44c5  e860f9f2ff           call 0x7f3e2a
// 008c44ca  53                   push ebx
// 008c44cb  68fffeff00           push 0xfffeff
// 008c44d0  68fffeff00           push 0xfffeff
// 008c44d5  83ec08               sub esp, 8
// 008c44d8  8bc4                 mov eax, esp
// 008c44da  8918                 mov dword ptr [eax], ebx
// 008c44dc  895804               mov dword ptr [eax + 4], ebx
// 008c44df  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c44e2  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c44e5  8964242c             mov dword ptr [esp + 0x2c], esp
// 008c44e9  51                   push ecx
// 008c44ea  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008c44ed  52                   push edx
// 008c44ee  8d442440             lea eax, [esp + 0x40]
// 008c44f2  50                   push eax
// 008c44f3  51                   push ecx
// 008c44f4  e8a7d5ffff           call 0x8c1aa0
// 008c44f9  83c424               add esp, 0x24
// 008c44fc  8d4c2424             lea ecx, [esp + 0x24]
// 008c4500  c684242802000002     mov byte ptr [esp + 0x228], 2
// 008c4508  c744242418229a00     mov dword ptr [esp + 0x24], 0x9a2218
// 008c4510  e81badb4ff           call 0x40f230
// 008c4515  8bce                 mov ecx, esi
// 008c4517  e8b4f6ffff           call 0x8c3bd0
// 008c451c  e996020000           jmp 0x8c47b7
// 008c4521  68d83e9b00           push 0x9b3ed8
// 008c4526  8d4c2420             lea ecx, [esp + 0x20]
// 008c452a  ff1584de9800         call dword ptr [0x98de84]
// 008c4530  85c0                 test eax, eax
// 008c4532  0f849c010000         je 0x8c46d4
// 008c4538  68bc229b00           push 0x9b22bc
// 008c453d  8d4c2420             lea ecx, [esp + 0x20]
// 008c4541  ff1584de9800         call dword ptr [0x98de84]
// 008c4547  85c0                 test eax, eax
// 008c4549  0f8485010000         je 0x8c46d4
// 008c454f  8d542418             lea edx, [esp + 0x18]
// 008c4553  52                   push edx
// 008c4554  8d4c2440             lea ecx, [esp + 0x40]
// 008c4558  895c2418             mov dword ptr [esp + 0x18], ebx
// 008c455c  e8df00f3ff           call 0x7f4640
// 008c4561  8bc8                 mov ecx, eax
// 008c4563  c684242802000008     mov byte ptr [esp + 0x228], 8
// 008c456b  ff1580de9800         call dword ptr [0x98de80]
// 008c4571  50                   push eax
// 008c4572  8d4c243c             lea ecx, [esp + 0x3c]
// 008c4576  e815a4faff           call 0x86e990
// 008c457b  8d4c2414             lea ecx, [esp + 0x14]
// 008c457f  51                   push ecx
// 008c4580  6830179f00           push 0x9f1730
// 008c4585  53                   push ebx
// 008c4586  53                   push ebx
// 008c4587  53                   push ebx
// 008c4588  8bc8                 mov ecx, eax
// 008c458a  c684243c02000009     mov byte ptr [esp + 0x23c], 9
// 008c4592  e8d9b0c6ff           call 0x52f670
// 008c4597  50                   push eax
// 008c4598  ff158cba9800         call dword ptr [0x98ba8c]
// 008c459e  85c0                 test eax, eax
// 008c45a0  8d4c2438             lea ecx, [esp + 0x38]
// 008c45a4  0f94442423           sete byte ptr [esp + 0x23]
// 008c45a9  c684242802000008     mov byte ptr [esp + 0x228], 8
// 008c45b1  e8ba9afaff           call 0x86e070
// 008c45b6  8d4c2418             lea ecx, [esp + 0x18]
// 008c45ba  c684242802000002     mov byte ptr [esp + 0x228], 2
// 008c45c2  ff15c0de9800         call dword ptr [0x98dec0]
// 008c45c8  385c2423             cmp byte ptr [esp + 0x23], bl
// 008c45cc  0f84e5010000         je 0x8c47b7
// 008c45d2  8b567c               mov edx, dword ptr [esi + 0x7c]
// 008c45d5  6a0c                 push 0xc
// 008c45d7  895678               mov dword ptr [esi + 0x78], edx
// 008c45da  e881f2f2ff           call 0x7f3860
// 008c45df  83c404               add esp, 4
// 008c45e2  3bc3                 cmp eax, ebx
// 008c45e4  740e                 je 0x8c45f4
// 008c45e6  895804               mov dword ptr [eax + 4], ebx
// 008c45e9  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c45ef  895808               mov dword ptr [eax + 8], ebx
// 008c45f2  eb02                 jmp 0x8c45f6
// 008c45f4  33c0                 xor eax, eax
// 008c45f6  8d4c2424             lea ecx, [esp + 0x24]
// 008c45fa  89467c               mov dword ptr [esi + 0x7c], eax
// 008c45fd  e8ac1e0600           call 0x9264ae
// 008c4602  53                   push ebx
// 008c4603  c684242c0200000a     mov byte ptr [esp + 0x22c], 0xa
// 008c460b  ff1554b19800         call dword ptr [0x98b154]
// 008c4611  50                   push eax
// 008c4612  8d4c2428             lea ecx, [esp + 0x28]
// 008c4616  e8811e0600           call 0x92649c
// 008c461b  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c461e  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c4621  50                   push eax
// 008c4622  51                   push ecx
// 008c4623  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008c4626  e8d5caffff           call 0x8c1100
// 008c462b  8b567c               mov edx, dword ptr [esi + 0x7c]
// 008c462e  52                   push edx
// 008c462f  8d4c2428             lea ecx, [esp + 0x28]
// 008c4633  e8c837f5ff           call 0x817e00
// 008c4638  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c463b  68fffeff00           push 0xfffeff
// 008c4640  8bf8                 mov edi, eax
// 008c4642  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c4645  50                   push eax
// 008c4646  51                   push ecx
// 008c4647  53                   push ebx
// 008c4648  53                   push ebx
// 008c4649  8d4c2438             lea ecx, [esp + 0x38]
// 008c464d  e8441e0600           call 0x926496
// 008c4652  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c4656  8b10                 mov edx, dword ptr [eax]
// 008c4658  8b5218               mov edx, dword ptr [edx + 0x18]
// 008c465b  8d4c2438             lea ecx, [esp + 0x38]
// 008c465f  51                   push ecx
// 008c4660  50                   push eax
// 008c4661  ffd2                 call edx
// 008c4663  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c4667  8b08                 mov ecx, dword ptr [eax]
// 008c4669  8d542418             lea edx, [esp + 0x18]
// 008c466d  52                   push edx
// 008c466e  50                   push eax
// 008c466f  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 008c4672  ffd0                 call eax
// 008c4674  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c4678  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c467c  8b10                 mov edx, dword ptr [eax]
// 008c467e  53                   push ebx
// 008c467f  8b5220               mov edx, dword ptr [edx + 0x20]
// 008c4682  8be9                 mov ebp, ecx
// 008c4684  f7dd                 neg ebp
// 008c4686  55                   push ebp
// 008c4687  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008c468b  55                   push ebp
// 008c468c  49                   dec ecx
// 008c468d  51                   push ecx
// 008c468e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c4691  53                   push ebx
// 008c4692  51                   push ecx
// 008c4693  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c4696  51                   push ecx
// 008c4697  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008c469b  53                   push ebx
// 008c469c  53                   push ebx
// 008c469d  51                   push ecx
// 008c469e  50                   push eax
// 008c469f  ffd2                 call edx
// 008c46a1  57                   push edi
// 008c46a2  8d4c2428             lea ecx, [esp + 0x28]
// 008c46a6  e85537f5ff           call 0x817e00
// 008c46ab  8bce                 mov ecx, esi
// 008c46ad  e81ef5ffff           call 0x8c3bd0
// 008c46b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c46b6  8b08                 mov ecx, dword ptr [eax]
// 008c46b8  8b5108               mov edx, dword ptr [ecx + 8]
// 008c46bb  50                   push eax
// 008c46bc  ffd2                 call edx
// 008c46be  8d4c2424             lea ecx, [esp + 0x24]
// 008c46c2  c684242802000002     mov byte ptr [esp + 0x228], 2
// 008c46ca  e8d91d0600           call 0x9264a8
// 008c46cf  e9e3000000           jmp 0x8c47b7
// 008c46d4  8d442418             lea eax, [esp + 0x18]
// 008c46d8  50                   push eax
// 008c46d9  8d4c2440             lea ecx, [esp + 0x40]
// 008c46dd  895c2418             mov dword ptr [esp + 0x18], ebx
// 008c46e1  e85afff2ff           call 0x7f4640
// 008c46e6  8d4c2414             lea ecx, [esp + 0x14]
// 008c46ea  51                   push ecx
// 008c46eb  8bc8                 mov ecx, eax
// 008c46ed  c684242c02000006     mov byte ptr [esp + 0x22c], 6
// 008c46f5  ff1580de9800         call dword ptr [0x98de80]
// 008c46fb  50                   push eax
// 008c46fc  e87f72f4ff           call 0x80b980
// 008c4701  83c408               add esp, 8
// 008c4704  8d4c2418             lea ecx, [esp + 0x18]
// 008c4708  8bf8                 mov edi, eax
// 008c470a  ff15c0de9800         call dword ptr [0x98dec0]
// 008c4710  3bfb                 cmp edi, ebx
// 008c4712  0f849f000000         je 0x8c47b7
// 008c4718  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c471c  895c2428             mov dword ptr [esp + 0x28], ebx
// 008c4720  c7442424148aa000     mov dword ptr [esp + 0x24], 0xa08a14
// 008c4728  8954242c             mov dword ptr [esp + 0x2c], edx
// 008c472c  57                   push edi
// 008c472d  8d4c2428             lea ecx, [esp + 0x28]
// 008c4731  c684242c02000007     mov byte ptr [esp + 0x22c], 7
// 008c4739  e8ecf6f2ff           call 0x7f3e2a
// 008c473e  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c4741  6a0c                 push 0xc
// 008c4743  894678               mov dword ptr [esi + 0x78], eax
// 008c4746  e815f1f2ff           call 0x7f3860
// 008c474b  83c404               add esp, 4
// 008c474e  3bc3                 cmp eax, ebx
// 008c4750  740e                 je 0x8c4760
// 008c4752  895804               mov dword ptr [eax + 4], ebx
// 008c4755  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c475b  895808               mov dword ptr [eax + 8], ebx
// 008c475e  eb02                 jmp 0x8c4762
// 008c4760  33c0                 xor eax, eax
// 008c4762  53                   push ebx
// 008c4763  68fffeff00           push 0xfffeff
// 008c4768  68fffeff00           push 0xfffeff
// 008c476d  83ec08               sub esp, 8
// 008c4770  89467c               mov dword ptr [esi + 0x7c], eax
// 008c4773  8bc4                 mov eax, esp
// 008c4775  8918                 mov dword ptr [eax], ebx
// 008c4777  895804               mov dword ptr [eax + 4], ebx
// 008c477a  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c477d  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c4780  8964242c             mov dword ptr [esp + 0x2c], esp
// 008c4784  51                   push ecx
// 008c4785  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008c4788  52                   push edx
// 008c4789  8d442440             lea eax, [esp + 0x40]
// 008c478d  50                   push eax
// 008c478e  51                   push ecx
// 008c478f  e80cd3ffff           call 0x8c1aa0
// 008c4794  83c424               add esp, 0x24
// 008c4797  8bce                 mov ecx, esi
// 008c4799  e832f4ffff           call 0x8c3bd0
// 008c479e  8d4c2424             lea ecx, [esp + 0x24]
// 008c47a2  c684242802000002     mov byte ptr [esp + 0x228], 2
// 008c47aa  c744242418229a00     mov dword ptr [esp + 0x24], 0x9a2218
// 008c47b2  e879aab4ff           call 0x40f230
// 008c47b7  8d4c241c             lea ecx, [esp + 0x1c]
// 008c47bb  ff15c0de9800         call dword ptr [0x98dec0]
// 008c47c1  8d4c243c             lea ecx, [esp + 0x3c]
// 008c47c5  889c2428020000       mov byte ptr [esp + 0x228], bl
// 008c47cc  e869fef2ff           call 0x7f463a
// 008c47d1  8d4c2434             lea ecx, [esp + 0x34]
// 008c47d5  ff15c0de9800         call dword ptr [0x98dec0]
// 008c47db  8b8c2420020000       mov ecx, dword ptr [esp + 0x220]
// 008c47e2  64890d00000000       mov dword ptr fs:[0], ecx
// 008c47e9  59                   pop ecx
// 008c47ea  5f                   pop edi
// 008c47eb  5e                   pop esi
// 008c47ec  5d                   pop ebp
// 008c47ed  5b                   pop ebx
// 008c47ee  8b8c2408020000       mov ecx, dword ptr [esp + 0x208]
// 008c47f5  33cc                 xor ecx, esp
// 008c47f7  e89e0bf3ff           call 0x7f539a
// 008c47fc  81c418020000         add esp, 0x218
// 008c4802  c3                   ret 
// copied from an identical function in another client (function ?Load@CXTPImageEditorPicture@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPImageEditor.cpp