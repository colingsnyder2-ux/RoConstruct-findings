// roc 2009-06 007a4140  unit: CXTPOffice2007Theme  size: 4998 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a4140
//
// 007a4140  6aff                 push -1
// 007a4142  68f4c48700           push 0x87c4f4
// 007a4147  64a100000000         mov eax, dword ptr fs:[0]
// 007a414d  50                   push eax
// 007a414e  81ec64010000         sub esp, 0x164
// 007a4154  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007a4159  33c4                 xor eax, esp
// 007a415b  89842460010000       mov dword ptr [esp + 0x160], eax
// 007a4162  53                   push ebx
// 007a4163  55                   push ebp
// 007a4164  56                   push esi
// 007a4165  57                   push edi
// 007a4166  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007a416b  33c4                 xor eax, esp
// 007a416d  50                   push eax
// 007a416e  8d842478010000       lea eax, [esp + 0x178]
// 007a4175  64a300000000         mov dword ptr fs:[0], eax
// 007a417b  8bf1                 mov esi, ecx
// 007a417d  e88e6e0000           call 0x7ab010
// 007a4182  8d4c2420             lea ecx, [esp + 0x20]
// 007a4186  e88545feff           call 0x788710
// 007a418b  33ed                 xor ebp, ebp
// 007a418d  bf90010000           mov edi, 0x190
// 007a4192  89bc248c000000       mov dword ptr [esp + 0x8c], edi
// 007a4199  396e70               cmp dword ptr [esi + 0x70], ebp
// 007a419c  7415                 je 0x7a41b3
// 007a419e  e8adc7fbff           call 0x760950
// 007a41a3  8bc8                 mov ecx, eax
// 007a41a5  e8e6d0fbff           call 0x761290
// 007a41aa  85c0                 test eax, eax
// 007a41ac  7405                 je 0x7a41b3
// 007a41ae  c644245205           mov byte ptr [esp + 0x52], 5
// 007a41b3  897c2448             mov dword ptr [esp + 0x48], edi
// 007a41b7  39ae18010000         cmp dword ptr [esi + 0x118], ebp
// 007a41bd  7434                 je 0x7a41f3
// 007a41bf  8dbe1c010000         lea edi, [esi + 0x11c]
// 007a41c5  8bcf                 mov ecx, edi
// 007a41c7  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a41cd  50                   push eax
// 007a41ce  e8cde9f7ff           call 0x722ba0
// 007a41d3  83c404               add esp, 4
// 007a41d6  85c0                 test eax, eax
// 007a41d8  7419                 je 0x7a41f3
// 007a41da  8bcf                 mov ecx, edi
// 007a41dc  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a41e2  50                   push eax
// 007a41e3  8d442458             lea eax, [esp + 0x58]
// 007a41e7  6a20                 push 0x20
// 007a41e9  50                   push eax
// 007a41ea  ff1550e98900         call dword ptr [0x89e950]
// 007a41f0  83c40c               add esp, 0xc
// 007a41f3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a41f7  83c10a               add ecx, 0xa
// 007a41fa  83f909               cmp ecx, 9
// 007a41fd  7708                 ja 0x7a4207
// 007a41ff  c7442438f5ffffff     mov dword ptr [esp + 0x38], 0xfffffff5
// 007a4207  39aebc050000         cmp dword ptr [esi + 0x5bc], ebp
// 007a420d  8dbeb4050000         lea edi, [esi + 0x5b4]
// 007a4213  7505                 jne 0x7a421a
// 007a4215  396f04               cmp dword ptr [edi + 4], ebp
// 007a4218  751a                 jne 0x7a4234
// 007a421a  8bcf                 mov ecx, edi
// 007a421c  e8d54df7ff           call 0x718ff6
// 007a4221  8d542438             lea edx, [esp + 0x38]
// 007a4225  52                   push edx
// 007a4226  ff15ece08900         call dword ptr [0x89e0ec]
// 007a422c  50                   push eax
// 007a422d  8bcf                 mov ecx, edi
// 007a422f  e8ce4df7ff           call 0x719002
// 007a4234  55                   push ebp
// 007a4235  8d442420             lea eax, [esp + 0x20]
// 007a4239  50                   push eax
// 007a423a  55                   push ebp
// 007a423b  bb01000000           mov ebx, 1
// 007a4240  6a05                 push 5
// 007a4242  895c242c             mov dword ptr [esp + 0x2c], ebx
// 007a4246  ff1564ee8900         call dword ptr [0x89ee64]
// 007a424c  8b3ddced8900         mov edi, dword ptr [0x89eddc]
// 007a4252  6a04                 push 4
// 007a4254  ffd7                 call edi
// 007a4256  83f811               cmp eax, 0x11
// 007a4259  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 007a425f  7f05                 jg 0x7a4266
// 007a4261  b811000000           mov eax, 0x11
// 007a4266  6a04                 push 4
// 007a4268  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 007a426e  ffd7                 call edi
// 007a4270  40                   inc eax
// 007a4271  83f812               cmp eax, 0x12
// 007a4274  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 007a427a  7f05                 jg 0x7a4281
// 007a427c  b812000000           mov eax, 0x12
// 007a4281  51                   push ecx
// 007a4282  8bcc                 mov ecx, esp
// 007a4284  89642418             mov dword ptr [esp + 0x18], esp
// 007a4288  68e8209000           push 0x9020e8
// 007a428d  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 007a4293  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4299  51                   push ecx
// 007a429a  8bcc                 mov ecx, esp
// 007a429c  89642420             mov dword ptr [esp + 0x20], esp
// 007a42a0  6804798f00           push 0x8f7904
// 007a42a5  89ac248c010000       mov dword ptr [esp + 0x18c], ebp
// 007a42ac  ff1508fd8900         call dword ptr [0x89fd08]
// 007a42b2  8bce                 mov ecx, esi
// 007a42b4  e8f7faffff           call 0x7a3db0
// 007a42b9  83cfff               or edi, 0xffffffff
// 007a42bc  8bc8                 mov ecx, eax
// 007a42be  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a42c5  e836230600           call 0x806600
// 007a42ca  51                   push ecx
// 007a42cb  8bcc                 mov ecx, esp
// 007a42cd  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a42d1  68d8209000           push 0x9020d8
// 007a42d6  894624               mov dword ptr [esi + 0x24], eax
// 007a42d9  ff1508fd8900         call dword ptr [0x89fd08]
// 007a42df  51                   push ecx
// 007a42e0  8bcc                 mov ecx, esp
// 007a42e2  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a42e6  6804798f00           push 0x8f7904
// 007a42eb  899c248c010000       mov dword ptr [esp + 0x18c], ebx
// 007a42f2  ff1508fd8900         call dword ptr [0x89fd08]
// 007a42f8  8bce                 mov ecx, esi
// 007a42fa  e8b1faffff           call 0x7a3db0
// 007a42ff  8bc8                 mov ecx, eax
// 007a4301  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4308  e8f3220600           call 0x806600
// 007a430d  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007a4313  83ec08               sub esp, 8
// 007a4316  d95c2404             fstp dword ptr [esp + 4]
// 007a431a  8bcc                 mov ecx, esp
// 007a431c  89642420             mov dword ptr [esp + 0x20], esp
// 007a4320  68c0209000           push 0x9020c0
// 007a4325  8986fc050000         mov dword ptr [esi + 0x5fc], eax
// 007a432b  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4331  51                   push ecx
// 007a4332  8bcc                 mov ecx, esp
// 007a4334  89642420             mov dword ptr [esp + 0x20], esp
// 007a4338  6804798f00           push 0x8f7904
// 007a433d  c784249001000002000000 mov dword ptr [esp + 0x190], 2
// 007a4348  ff1508fd8900         call dword ptr [0x89fd08]
// 007a434e  8bce                 mov ecx, esi
// 007a4350  e85bfaffff           call 0x7a3db0
// 007a4355  8bc8                 mov ecx, eax
// 007a4357  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a435e  e89d220600           call 0x806600
// 007a4363  50                   push eax
// 007a4364  51                   push ecx
// 007a4365  8bcc                 mov ecx, esp
// 007a4367  89642424             mov dword ptr [esp + 0x24], esp
// 007a436b  68a8209000           push 0x9020a8
// 007a4370  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4376  51                   push ecx
// 007a4377  8bcc                 mov ecx, esp
// 007a4379  89642424             mov dword ptr [esp + 0x24], esp
// 007a437d  6804798f00           push 0x8f7904
// 007a4382  c784249401000003000000 mov dword ptr [esp + 0x194], 3
// 007a438d  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4393  8bce                 mov ecx, esi
// 007a4395  e816faffff           call 0x7a3db0
// 007a439a  8bc8                 mov ecx, eax
// 007a439c  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a43a3  e858220600           call 0x806600
// 007a43a8  50                   push eax
// 007a43a9  8d8e00060000         lea ecx, [esi + 0x600]
// 007a43af  e84cfcfaff           call 0x754000
// 007a43b4  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007a43ba  83ec08               sub esp, 8
// 007a43bd  d95c2404             fstp dword ptr [esp + 4]
// 007a43c1  8bcc                 mov ecx, esp
// 007a43c3  89642420             mov dword ptr [esp + 0x20], esp
// 007a43c7  6890209000           push 0x902090
// 007a43cc  ff1508fd8900         call dword ptr [0x89fd08]
// 007a43d2  51                   push ecx
// 007a43d3  8bcc                 mov ecx, esp
// 007a43d5  89642420             mov dword ptr [esp + 0x20], esp
// 007a43d9  6804798f00           push 0x8f7904
// 007a43de  c784249001000004000000 mov dword ptr [esp + 0x190], 4
// 007a43e9  ff1508fd8900         call dword ptr [0x89fd08]
// 007a43ef  8bce                 mov ecx, esi
// 007a43f1  e8baf9ffff           call 0x7a3db0
// 007a43f6  8bc8                 mov ecx, eax
// 007a43f8  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a43ff  e8fc210600           call 0x806600
// 007a4404  50                   push eax
// 007a4405  51                   push ecx
// 007a4406  8bcc                 mov ecx, esp
// 007a4408  89642424             mov dword ptr [esp + 0x24], esp
// 007a440c  6874209000           push 0x902074
// 007a4411  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4417  51                   push ecx
// 007a4418  8bcc                 mov ecx, esp
// 007a441a  89642424             mov dword ptr [esp + 0x24], esp
// 007a441e  6804798f00           push 0x8f7904
// 007a4423  c784249401000005000000 mov dword ptr [esp + 0x194], 5
// 007a442e  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4434  8bce                 mov ecx, esi
// 007a4436  e875f9ffff           call 0x7a3db0
// 007a443b  8bc8                 mov ecx, eax
// 007a443d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a4444  e8b7210600           call 0x806600
// 007a4449  50                   push eax
// 007a444a  8d8e20060000         lea ecx, [esi + 0x620]
// 007a4450  e8abfbfaff           call 0x754000
// 007a4455  51                   push ecx
// 007a4456  8bcc                 mov ecx, esp
// 007a4458  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a445c  6868209000           push 0x902068
// 007a4461  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4467  51                   push ecx
// 007a4468  8bcc                 mov ecx, esp
// 007a446a  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a446e  68f81a9000           push 0x901af8
// 007a4473  c784248c01000006000000 mov dword ptr [esp + 0x18c], 6
// 007a447e  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4484  8bce                 mov ecx, esi
// 007a4486  e825f9ffff           call 0x7a3db0
// 007a448b  8bc8                 mov ecx, eax
// 007a448d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4494  e867210600           call 0x806600
// 007a4499  50                   push eax
// 007a449a  8d8e5c040000         lea ecx, [esi + 0x45c]
// 007a44a0  e8cb05fbff           call 0x754a70
// 007a44a5  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007a44ab  83ec08               sub esp, 8
// 007a44ae  d95c2404             fstp dword ptr [esp + 4]
// 007a44b2  8bcc                 mov ecx, esp
// 007a44b4  89642420             mov dword ptr [esp + 0x20], esp
// 007a44b8  6858209000           push 0x902058
// 007a44bd  ff1508fd8900         call dword ptr [0x89fd08]
// 007a44c3  51                   push ecx
// 007a44c4  8bcc                 mov ecx, esp
// 007a44c6  89642420             mov dword ptr [esp + 0x20], esp
// 007a44ca  68f81a9000           push 0x901af8
// 007a44cf  c784249001000007000000 mov dword ptr [esp + 0x190], 7
// 007a44da  ff1508fd8900         call dword ptr [0x89fd08]
// 007a44e0  8bce                 mov ecx, esi
// 007a44e2  e8c9f8ffff           call 0x7a3db0
// 007a44e7  8bc8                 mov ecx, eax
// 007a44e9  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a44f0  e80b210600           call 0x806600
// 007a44f5  50                   push eax
// 007a44f6  51                   push ecx
// 007a44f7  8bcc                 mov ecx, esp
// 007a44f9  89642424             mov dword ptr [esp + 0x24], esp
// 007a44fd  6844209000           push 0x902044
// 007a4502  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4508  51                   push ecx
// 007a4509  8bcc                 mov ecx, esp
// 007a450b  89642424             mov dword ptr [esp + 0x24], esp
// 007a450f  68f81a9000           push 0x901af8
// 007a4514  c784249401000008000000 mov dword ptr [esp + 0x194], 8
// 007a451f  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4525  8bce                 mov ecx, esi
// 007a4527  e884f8ffff           call 0x7a3db0
// 007a452c  8bc8                 mov ecx, eax
// 007a452e  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a4535  e8c6200600           call 0x806600
// 007a453a  50                   push eax
// 007a453b  8d8e7c040000         lea ecx, [esi + 0x47c]
// 007a4541  e8bafafaff           call 0x754000
// 007a4546  51                   push ecx
// 007a4547  8bcc                 mov ecx, esp
// 007a4549  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a454d  6830209000           push 0x902030
// 007a4552  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4558  51                   push ecx
// 007a4559  8bcc                 mov ecx, esp
// 007a455b  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a455f  68f81a9000           push 0x901af8
// 007a4564  c784248c01000009000000 mov dword ptr [esp + 0x18c], 9
// 007a456f  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4575  8bce                 mov ecx, esi
// 007a4577  e834f8ffff           call 0x7a3db0
// 007a457c  8bc8                 mov ecx, eax
// 007a457e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4585  e876200600           call 0x806600
// 007a458a  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007a4590  83ec08               sub esp, 8
// 007a4593  d95c2404             fstp dword ptr [esp + 4]
// 007a4597  8bcc                 mov ecx, esp
// 007a4599  89642420             mov dword ptr [esp + 0x20], esp
// 007a459d  6814209000           push 0x902014
// 007a45a2  898620050000         mov dword ptr [esi + 0x520], eax
// 007a45a8  ff1508fd8900         call dword ptr [0x89fd08]
// 007a45ae  51                   push ecx
// 007a45af  8bcc                 mov ecx, esp
// 007a45b1  89642420             mov dword ptr [esp + 0x20], esp
// 007a45b5  68f81a9000           push 0x901af8
// 007a45ba  c78424900100000a000000 mov dword ptr [esp + 0x190], 0xa
// 007a45c5  ff1508fd8900         call dword ptr [0x89fd08]
// 007a45cb  8bce                 mov ecx, esi
// 007a45cd  e8def7ffff           call 0x7a3db0
// 007a45d2  8bc8                 mov ecx, eax
// 007a45d4  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a45db  e820200600           call 0x806600
// 007a45e0  50                   push eax
// 007a45e1  51                   push ecx
// 007a45e2  8bcc                 mov ecx, esp
// 007a45e4  89642424             mov dword ptr [esp + 0x24], esp
// 007a45e8  68f81f9000           push 0x901ff8
// 007a45ed  ff1508fd8900         call dword ptr [0x89fd08]
// 007a45f3  51                   push ecx
// 007a45f4  8bcc                 mov ecx, esp
// 007a45f6  89642424             mov dword ptr [esp + 0x24], esp
// 007a45fa  68f81a9000           push 0x901af8
// 007a45ff  c78424940100000b000000 mov dword ptr [esp + 0x194], 0xb
// 007a460a  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4610  8bce                 mov ecx, esi
// 007a4612  e899f7ffff           call 0x7a3db0
// 007a4617  8bc8                 mov ecx, eax
// 007a4619  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a4620  e8db1f0600           call 0x806600
// 007a4625  50                   push eax
// 007a4626  8d8e9c040000         lea ecx, [esi + 0x49c]
// 007a462c  e8cff9faff           call 0x754000
// 007a4631  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007a4637  83ec08               sub esp, 8
// 007a463a  d95c2404             fstp dword ptr [esp + 4]
// 007a463e  8bcc                 mov ecx, esp
// 007a4640  89642420             mov dword ptr [esp + 0x20], esp
// 007a4644  68dc1f9000           push 0x901fdc
// 007a4649  ff1508fd8900         call dword ptr [0x89fd08]
// 007a464f  51                   push ecx
// 007a4650  8bcc                 mov ecx, esp
// 007a4652  89642420             mov dword ptr [esp + 0x20], esp
// 007a4656  68f81a9000           push 0x901af8
// 007a465b  c78424900100000c000000 mov dword ptr [esp + 0x190], 0xc
// 007a4666  ff1508fd8900         call dword ptr [0x89fd08]
// 007a466c  8bce                 mov ecx, esi
// 007a466e  e83df7ffff           call 0x7a3db0
// 007a4673  8bc8                 mov ecx, eax
// 007a4675  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a467c  e87f1f0600           call 0x806600
// 007a4681  50                   push eax
// 007a4682  51                   push ecx
// 007a4683  8bcc                 mov ecx, esp
// 007a4685  89642424             mov dword ptr [esp + 0x24], esp
// 007a4689  68bc1f9000           push 0x901fbc
// 007a468e  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4694  51                   push ecx
// 007a4695  8bcc                 mov ecx, esp
// 007a4697  89642424             mov dword ptr [esp + 0x24], esp
// 007a469b  68f81a9000           push 0x901af8
// 007a46a0  c78424940100000d000000 mov dword ptr [esp + 0x194], 0xd
// 007a46ab  ff1508fd8900         call dword ptr [0x89fd08]
// 007a46b1  8bce                 mov ecx, esi
// 007a46b3  e8f8f6ffff           call 0x7a3db0
// 007a46b8  8bc8                 mov ecx, eax
// 007a46ba  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a46c1  e83a1f0600           call 0x806600
// 007a46c6  8d9efc040000         lea ebx, [esi + 0x4fc]
// 007a46cc  50                   push eax
// 007a46cd  8bcb                 mov ecx, ebx
// 007a46cf  e82cf9faff           call 0x754000
// 007a46d4  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007a46da  83ec08               sub esp, 8
// 007a46dd  d95c2404             fstp dword ptr [esp + 4]
// 007a46e1  8bcc                 mov ecx, esp
// 007a46e3  89642420             mov dword ptr [esp + 0x20], esp
// 007a46e7  6840029000           push 0x900240
// 007a46ec  ff1508fd8900         call dword ptr [0x89fd08]
// 007a46f2  51                   push ecx
// 007a46f3  8bcc                 mov ecx, esp
// 007a46f5  89642420             mov dword ptr [esp + 0x20], esp
// 007a46f9  68f81a9000           push 0x901af8
// 007a46fe  c78424900100000e000000 mov dword ptr [esp + 0x190], 0xe
// 007a4709  ff1508fd8900         call dword ptr [0x89fd08]
// 007a470f  8bce                 mov ecx, esi
// 007a4711  e89af6ffff           call 0x7a3db0
// 007a4716  8bc8                 mov ecx, eax
// 007a4718  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a471f  e8dc1e0600           call 0x806600
// 007a4724  50                   push eax
// 007a4725  51                   push ecx
// 007a4726  8bcc                 mov ecx, esp
// 007a4728  89642424             mov dword ptr [esp + 0x24], esp
// 007a472c  6820029000           push 0x900220
// 007a4731  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4737  51                   push ecx
// 007a4738  8bcc                 mov ecx, esp
// 007a473a  89642424             mov dword ptr [esp + 0x24], esp
// 007a473e  68f81a9000           push 0x901af8
// 007a4743  c78424940100000f000000 mov dword ptr [esp + 0x194], 0xf
// 007a474e  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4754  8bce                 mov ecx, esi
// 007a4756  e855f6ffff           call 0x7a3db0
// 007a475b  8bc8                 mov ecx, eax
// 007a475d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a4764  e8971e0600           call 0x806600
// 007a4769  50                   push eax
// 007a476a  8d8edc040000         lea ecx, [esi + 0x4dc]
// 007a4770  e88bf8faff           call 0x754000
// 007a4775  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 007a4778  898ec8040000         mov dword ptr [esi + 0x4c8], ecx
// 007a477e  8b5308               mov edx, dword ptr [ebx + 8]
// 007a4781  8996c4040000         mov dword ptr [esi + 0x4c4], edx
// 007a4787  8b4318               mov eax, dword ptr [ebx + 0x18]
// 007a478a  8986d4040000         mov dword ptr [esi + 0x4d4], eax
// 007a4790  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 007a4793  898ed0040000         mov dword ptr [esi + 0x4d0], ecx
// 007a4799  d9431c               fld dword ptr [ebx + 0x1c]
// 007a479c  51                   push ecx
// 007a479d  d99ed8040000         fstp dword ptr [esi + 0x4d8]
// 007a47a3  8bcc                 mov ecx, esp
// 007a47a5  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a47a9  68a41f9000           push 0x901fa4
// 007a47ae  896e20               mov dword ptr [esi + 0x20], ebp
// 007a47b1  ff1508fd8900         call dword ptr [0x89fd08]
// 007a47b7  51                   push ecx
// 007a47b8  8bcc                 mov ecx, esp
// 007a47ba  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a47be  68f81a9000           push 0x901af8
// 007a47c3  c784248c01000010000000 mov dword ptr [esp + 0x18c], 0x10
// 007a47ce  ff1508fd8900         call dword ptr [0x89fd08]
// 007a47d4  8bce                 mov ecx, esi
// 007a47d6  e8d5f5ffff           call 0x7a3db0
// 007a47db  8bc8                 mov ecx, eax
// 007a47dd  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a47e4  e8171e0600           call 0x806600
// 007a47e9  51                   push ecx
// 007a47ea  8bcc                 mov ecx, esp
// 007a47ec  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a47f0  68981f9000           push 0x901f98
// 007a47f5  898638050000         mov dword ptr [esi + 0x538], eax
// 007a47fb  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4801  51                   push ecx
// 007a4802  8bcc                 mov ecx, esp
// 007a4804  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4808  68f81a9000           push 0x901af8
// 007a480d  c784248c01000011000000 mov dword ptr [esp + 0x18c], 0x11
// 007a4818  ff1508fd8900         call dword ptr [0x89fd08]
// 007a481e  8bce                 mov ecx, esi
// 007a4820  e88bf5ffff           call 0x7a3db0
// 007a4825  8bc8                 mov ecx, eax
// 007a4827  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a482e  e8cd1d0600           call 0x806600
// 007a4833  51                   push ecx
// 007a4834  8bcc                 mov ecx, esp
// 007a4836  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a483a  68881f9000           push 0x901f88
// 007a483f  8986f8050000         mov dword ptr [esi + 0x5f8], eax
// 007a4845  c78654030000f6f6f600 mov dword ptr [esi + 0x354], 0xf6f6f6
// 007a484f  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4855  51                   push ecx
// 007a4856  8bcc                 mov ecx, esp
// 007a4858  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a485c  68f81a9000           push 0x901af8
// 007a4861  c784248c01000012000000 mov dword ptr [esp + 0x18c], 0x12
// 007a486c  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4872  8bce                 mov ecx, esi
// 007a4874  e837f5ffff           call 0x7a3db0
// 007a4879  8bc8                 mov ecx, eax
// 007a487b  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4882  e8791d0600           call 0x806600
// 007a4887  51                   push ecx
// 007a4888  8bcc                 mov ecx, esp
// 007a488a  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a488e  68781f9000           push 0x901f78
// 007a4893  89866c030000         mov dword ptr [esi + 0x36c], eax
// 007a4899  ff1508fd8900         call dword ptr [0x89fd08]
// 007a489f  51                   push ecx
// 007a48a0  8bcc                 mov ecx, esp
// 007a48a2  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a48a6  68f81a9000           push 0x901af8
// 007a48ab  c784248c01000013000000 mov dword ptr [esp + 0x18c], 0x13
// 007a48b6  ff1508fd8900         call dword ptr [0x89fd08]
// 007a48bc  8bce                 mov ecx, esi
// 007a48be  e8edf4ffff           call 0x7a3db0
// 007a48c3  8bc8                 mov ecx, eax
// 007a48c5  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a48cc  e82f1d0600           call 0x806600
// 007a48d1  898630030000         mov dword ptr [esi + 0x330], eax
// 007a48d7  89ae78030000         mov dword ptr [esi + 0x378], ebp
// 007a48dd  89ae84030000         mov dword ptr [esi + 0x384], ebp
// 007a48e3  89ae90030000         mov dword ptr [esi + 0x390], ebp
// 007a48e9  b88d8d8d00           mov eax, 0x8d8d8d
// 007a48ee  51                   push ecx
// 007a48ef  8bcc                 mov ecx, esp
// 007a48f1  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a48f5  686c1f9000           push 0x901f6c
// 007a48fa  898638040000         mov dword ptr [esi + 0x438], eax
// 007a4900  898620040000         mov dword ptr [esi + 0x420], eax
// 007a4906  89860c030000         mov dword ptr [esi + 0x30c], eax
// 007a490c  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4912  51                   push ecx
// 007a4913  8bcc                 mov ecx, esp
// 007a4915  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4919  68ccff8b00           push 0x8bffcc
// 007a491e  c784248c01000014000000 mov dword ptr [esp + 0x18c], 0x14
// 007a4929  ff1508fd8900         call dword ptr [0x89fd08]
// 007a492f  8bce                 mov ecx, esi
// 007a4931  e87af4ffff           call 0x7a3db0
// 007a4936  8bc8                 mov ecx, eax
// 007a4938  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a493f  e8bc1c0600           call 0x806600
// 007a4944  51                   push ecx
// 007a4945  8bcc                 mov ecx, esp
// 007a4947  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a494b  68581f9000           push 0x901f58
// 007a4950  8986f0030000         mov dword ptr [esi + 0x3f0], eax
// 007a4956  ff1508fd8900         call dword ptr [0x89fd08]
// 007a495c  51                   push ecx
// 007a495d  8bcc                 mov ecx, esp
// 007a495f  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4963  68f81a9000           push 0x901af8
// 007a4968  c784248c01000015000000 mov dword ptr [esp + 0x18c], 0x15
// 007a4973  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4979  8bce                 mov ecx, esi
// 007a497b  e830f4ffff           call 0x7a3db0
// 007a4980  8bc8                 mov ecx, eax
// 007a4982  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4989  e8721c0600           call 0x806600
// 007a498e  51                   push ecx
// 007a498f  8bcc                 mov ecx, esp
// 007a4991  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4995  68401f9000           push 0x901f40
// 007a499a  89464c               mov dword ptr [esi + 0x4c], eax
// 007a499d  ff1508fd8900         call dword ptr [0x89fd08]
// 007a49a3  51                   push ecx
// 007a49a4  8bcc                 mov ecx, esp
// 007a49a6  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a49aa  68f81a9000           push 0x901af8
// 007a49af  c784248c01000016000000 mov dword ptr [esp + 0x18c], 0x16
// 007a49ba  ff1508fd8900         call dword ptr [0x89fd08]
// 007a49c0  8bce                 mov ecx, esi
// 007a49c2  e8e9f3ffff           call 0x7a3db0
// 007a49c7  8bc8                 mov ecx, eax
// 007a49c9  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a49d0  e82b1c0600           call 0x806600
// 007a49d5  51                   push ecx
// 007a49d6  8bcc                 mov ecx, esp
// 007a49d8  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a49dc  682c1f9000           push 0x901f2c
// 007a49e1  894658               mov dword ptr [esi + 0x58], eax
// 007a49e4  ff1508fd8900         call dword ptr [0x89fd08]
// 007a49ea  51                   push ecx
// 007a49eb  8bcc                 mov ecx, esp
// 007a49ed  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a49f1  68f81a9000           push 0x901af8
// 007a49f6  c784248c01000017000000 mov dword ptr [esp + 0x18c], 0x17
// 007a4a01  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4a07  8bce                 mov ecx, esi
// 007a4a09  e8a2f3ffff           call 0x7a3db0
// 007a4a0e  8bc8                 mov ecx, eax
// 007a4a10  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4a17  e8e41b0600           call 0x806600
// 007a4a1c  51                   push ecx
// 007a4a1d  8bcc                 mov ecx, esp
// 007a4a1f  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4a23  681c1f9000           push 0x901f1c
// 007a4a28  898644040000         mov dword ptr [esi + 0x444], eax
// 007a4a2e  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4a34  51                   push ecx
// 007a4a35  8bcc                 mov ecx, esp
// 007a4a37  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4a3b  6894ad8d00           push 0x8dad94
// 007a4a40  c784248c01000018000000 mov dword ptr [esp + 0x18c], 0x18
// 007a4a4b  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4a51  8bce                 mov ecx, esi
// 007a4a53  e858f3ffff           call 0x7a3db0
// 007a4a58  8bc8                 mov ecx, eax
// 007a4a5a  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4a61  e89a1b0600           call 0x806600
// 007a4a66  51                   push ecx
// 007a4a67  8bcc                 mov ecx, esp
// 007a4a69  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4a6d  68101f9000           push 0x901f10
// 007a4a72  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 007a4a78  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4a7e  51                   push ecx
// 007a4a7f  8bcc                 mov ecx, esp
// 007a4a81  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4a85  68ccff8b00           push 0x8bffcc
// 007a4a8a  c784248c01000019000000 mov dword ptr [esp + 0x18c], 0x19
// 007a4a95  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4a9b  8bce                 mov ecx, esi
// 007a4a9d  e80ef3ffff           call 0x7a3db0
// 007a4aa2  8bc8                 mov ecx, eax
// 007a4aa4  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4aab  e8501b0600           call 0x806600
// 007a4ab0  8986cc030000         mov dword ptr [esi + 0x3cc], eax
// 007a4ab6  8b8624050000         mov eax, dword ptr [esi + 0x524]
// 007a4abc  3bc7                 cmp eax, edi
// 007a4abe  7506                 jne 0x7a4ac6
// 007a4ac0  8b8620050000         mov eax, dword ptr [esi + 0x520]
// 007a4ac6  51                   push ecx
// 007a4ac7  8bcc                 mov ecx, esp
// 007a4ac9  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4acd  68041f9000           push 0x901f04
// 007a4ad2  8986d8030000         mov dword ptr [esi + 0x3d8], eax
// 007a4ad8  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4ade  51                   push ecx
// 007a4adf  8bcc                 mov ecx, esp
// 007a4ae1  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4ae5  68f81a9000           push 0x901af8
// 007a4aea  c784248c0100001a000000 mov dword ptr [esp + 0x18c], 0x1a
// 007a4af5  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4afb  8bce                 mov ecx, esi
// 007a4afd  e8aef2ffff           call 0x7a3db0
// 007a4b02  8bc8                 mov ecx, eax
// 007a4b04  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4b0b  e8f01a0600           call 0x806600
// 007a4b10  51                   push ecx
// 007a4b11  8bcc                 mov ecx, esp
// 007a4b13  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4b17  68f01e9000           push 0x901ef0
// 007a4b1c  8986d0020000         mov dword ptr [esi + 0x2d0], eax
// 007a4b22  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4b28  51                   push ecx
// 007a4b29  8bcc                 mov ecx, esp
// 007a4b2b  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4b2f  68f81a9000           push 0x901af8
// 007a4b34  c784248c0100001b000000 mov dword ptr [esp + 0x18c], 0x1b
// 007a4b3f  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4b45  8bce                 mov ecx, esi
// 007a4b47  e864f2ffff           call 0x7a3db0
// 007a4b4c  8bc8                 mov ecx, eax
// 007a4b4e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4b55  e8a61a0600           call 0x806600
// 007a4b5a  51                   push ecx
// 007a4b5b  8bcc                 mov ecx, esp
// 007a4b5d  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4b61  68dc1e9000           push 0x901edc
// 007a4b66  89863c030000         mov dword ptr [esi + 0x33c], eax
// 007a4b6c  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4b72  51                   push ecx
// 007a4b73  8bcc                 mov ecx, esp
// 007a4b75  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4b79  68f81a9000           push 0x901af8
// 007a4b7e  c784248c0100001c000000 mov dword ptr [esp + 0x18c], 0x1c
// 007a4b89  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4b8f  8bce                 mov ecx, esi
// 007a4b91  e81af2ffff           call 0x7a3db0
// 007a4b96  8bc8                 mov ecx, eax
// 007a4b98  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4b9f  e85c1a0600           call 0x806600
// 007a4ba4  51                   push ecx
// 007a4ba5  8bcc                 mov ecx, esp
// 007a4ba7  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4bab  68c81e9000           push 0x901ec8
// 007a4bb0  898648030000         mov dword ptr [esi + 0x348], eax
// 007a4bb6  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4bbc  51                   push ecx
// 007a4bbd  8bcc                 mov ecx, esp
// 007a4bbf  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4bc3  6894ad8d00           push 0x8dad94
// 007a4bc8  c784248c0100001d000000 mov dword ptr [esp + 0x18c], 0x1d
// 007a4bd3  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4bd9  8bce                 mov ecx, esi
// 007a4bdb  e8d0f1ffff           call 0x7a3db0
// 007a4be0  8bc8                 mov ecx, eax
// 007a4be2  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4be9  e8121a0600           call 0x806600
// 007a4bee  51                   push ecx
// 007a4bef  8bcc                 mov ecx, esp
// 007a4bf1  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4bf5  68b01e9000           push 0x901eb0
// 007a4bfa  898640060000         mov dword ptr [esi + 0x640], eax
// 007a4c00  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4c06  c78424840100001e000000 mov dword ptr [esp + 0x184], 0x1e
// 007a4c11  51                   push ecx
// 007a4c12  8bcc                 mov ecx, esp
// 007a4c14  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4c18  6894ad8d00           push 0x8dad94
// 007a4c1d  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4c23  8bce                 mov ecx, esi
// 007a4c25  e886f1ffff           call 0x7a3db0
// 007a4c2a  8bc8                 mov ecx, eax
// 007a4c2c  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4c33  e8c8190600           call 0x806600
// 007a4c38  51                   push ecx
// 007a4c39  8bcc                 mov ecx, esp
// 007a4c3b  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4c3f  68981e9000           push 0x901e98
// 007a4c44  898644060000         mov dword ptr [esi + 0x644], eax
// 007a4c4a  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4c50  51                   push ecx
// 007a4c51  8bcc                 mov ecx, esp
// 007a4c53  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4c57  6894ad8d00           push 0x8dad94
// 007a4c5c  c784248c0100001f000000 mov dword ptr [esp + 0x18c], 0x1f
// 007a4c67  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4c6d  8bce                 mov ecx, esi
// 007a4c6f  e83cf1ffff           call 0x7a3db0
// 007a4c74  8bc8                 mov ecx, eax
// 007a4c76  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4c7d  e87e190600           call 0x806600
// 007a4c82  51                   push ecx
// 007a4c83  8bcc                 mov ecx, esp
// 007a4c85  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4c89  68841e9000           push 0x901e84
// 007a4c8e  898648060000         mov dword ptr [esi + 0x648], eax
// 007a4c94  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4c9a  51                   push ecx
// 007a4c9b  8bcc                 mov ecx, esp
// 007a4c9d  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4ca1  68ccff8b00           push 0x8bffcc
// 007a4ca6  c784248c01000020000000 mov dword ptr [esp + 0x18c], 0x20
// 007a4cb1  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4cb7  8bce                 mov ecx, esi
// 007a4cb9  e8f2f0ffff           call 0x7a3db0
// 007a4cbe  8bc8                 mov ecx, eax
// 007a4cc0  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4cc7  e834190600           call 0x806600
// 007a4ccc  51                   push ecx
// 007a4ccd  8bcc                 mov ecx, esp
// 007a4ccf  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4cd3  686c1e9000           push 0x901e6c
// 007a4cd8  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 007a4cde  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4ce4  51                   push ecx
// 007a4ce5  8bcc                 mov ecx, esp
// 007a4ce7  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4ceb  68ccff8b00           push 0x8bffcc
// 007a4cf0  c784248c01000021000000 mov dword ptr [esp + 0x18c], 0x21
// 007a4cfb  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4d01  8bce                 mov ecx, esi
// 007a4d03  e8a8f0ffff           call 0x7a3db0
// 007a4d08  8bc8                 mov ecx, eax
// 007a4d0a  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4d11  e8ea180600           call 0x806600
// 007a4d16  51                   push ecx
// 007a4d17  8bcc                 mov ecx, esp
// 007a4d19  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4d1d  68581e9000           push 0x901e58
// 007a4d22  8986e8020000         mov dword ptr [esi + 0x2e8], eax
// 007a4d28  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4d2e  51                   push ecx
// 007a4d2f  8bcc                 mov ecx, esp
// 007a4d31  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4d35  68ccff8b00           push 0x8bffcc
// 007a4d3a  c784248c01000022000000 mov dword ptr [esp + 0x18c], 0x22
// 007a4d45  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4d4b  8bce                 mov ecx, esi
// 007a4d4d  e85ef0ffff           call 0x7a3db0
// 007a4d52  8bc8                 mov ecx, eax
// 007a4d54  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4d5b  e8a0180600           call 0x806600
// 007a4d60  51                   push ecx
// 007a4d61  8bcc                 mov ecx, esp
// 007a4d63  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4d67  68401e9000           push 0x901e40
// 007a4d6c  8986f4020000         mov dword ptr [esi + 0x2f4], eax
// 007a4d72  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4d78  51                   push ecx
// 007a4d79  8bcc                 mov ecx, esp
// 007a4d7b  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4d7f  68ccff8b00           push 0x8bffcc
// 007a4d84  c784248c01000023000000 mov dword ptr [esp + 0x18c], 0x23
// 007a4d8f  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4d95  8bce                 mov ecx, esi
// 007a4d97  e814f0ffff           call 0x7a3db0
// 007a4d9c  8bc8                 mov ecx, eax
// 007a4d9e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4da5  e856180600           call 0x806600
// 007a4daa  51                   push ecx
// 007a4dab  8bcc                 mov ecx, esp
// 007a4dad  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4db1  682c1e9000           push 0x901e2c
// 007a4db6  8986c0030000         mov dword ptr [esi + 0x3c0], eax
// 007a4dbc  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4dc2  51                   push ecx
// 007a4dc3  8bcc                 mov ecx, esp
// 007a4dc5  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4dc9  68ccff8b00           push 0x8bffcc
// 007a4dce  c784248c01000024000000 mov dword ptr [esp + 0x18c], 0x24
// 007a4dd9  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4ddf  8bce                 mov ecx, esi
// 007a4de1  e8caefffff           call 0x7a3db0
// 007a4de6  8bc8                 mov ecx, eax
// 007a4de8  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4def  e80c180600           call 0x806600
// 007a4df4  51                   push ecx
// 007a4df5  8bcc                 mov ecx, esp
// 007a4df7  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4dfb  68141e9000           push 0x901e14
// 007a4e00  898618030000         mov dword ptr [esi + 0x318], eax
// 007a4e06  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4e0c  51                   push ecx
// 007a4e0d  8bcc                 mov ecx, esp
// 007a4e0f  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a4e13  68ccff8b00           push 0x8bffcc
// 007a4e18  c784248c01000025000000 mov dword ptr [esp + 0x18c], 0x25
// 007a4e23  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4e29  8bce                 mov ecx, esi
// 007a4e2b  e880efffff           call 0x7a3db0
// 007a4e30  8bc8                 mov ecx, eax
// 007a4e32  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a4e39  e8c2170600           call 0x806600
// 007a4e3e  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007a4e44  83ec08               sub esp, 8
// 007a4e47  d95c2404             fstp dword ptr [esp + 4]
// 007a4e4b  8bcc                 mov ecx, esp
// 007a4e4d  89642420             mov dword ptr [esp + 0x20], esp
// 007a4e51  68fc1d9000           push 0x901dfc
// 007a4e56  898624030000         mov dword ptr [esi + 0x324], eax
// 007a4e5c  89ae9c030000         mov dword ptr [esi + 0x39c], ebp
// 007a4e62  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 007a4e6c  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4e72  51                   push ecx
// 007a4e73  8bcc                 mov ecx, esp
// 007a4e75  89642420             mov dword ptr [esp + 0x20], esp
// 007a4e79  68ccff8b00           push 0x8bffcc
// 007a4e7e  c784249001000026000000 mov dword ptr [esp + 0x190], 0x26
// 007a4e89  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4e8f  8bce                 mov ecx, esi
// 007a4e91  e81aefffff           call 0x7a3db0
// 007a4e96  8bc8                 mov ecx, eax
// 007a4e98  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a4e9f  e85c170600           call 0x806600
// 007a4ea4  50                   push eax
// 007a4ea5  51                   push ecx
// 007a4ea6  8bcc                 mov ecx, esp
// 007a4ea8  89642424             mov dword ptr [esp + 0x24], esp
// 007a4eac  68e41d9000           push 0x901de4
// 007a4eb1  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4eb7  51                   push ecx
// 007a4eb8  8bcc                 mov ecx, esp
// 007a4eba  89642424             mov dword ptr [esp + 0x24], esp
// 007a4ebe  68ccff8b00           push 0x8bffcc
// 007a4ec3  c784249401000027000000 mov dword ptr [esp + 0x194], 0x27
// 007a4ece  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4ed4  8bce                 mov ecx, esi
// 007a4ed6  e8d5eeffff           call 0x7a3db0
// 007a4edb  8bc8                 mov ecx, eax
// 007a4edd  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a4ee4  e817170600           call 0x806600
// 007a4ee9  50                   push eax
// 007a4eea  8d8e90050000         lea ecx, [esi + 0x590]
// 007a4ef0  e80bf1faff           call 0x754000
// 007a4ef5  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007a4efb  83ec08               sub esp, 8
// 007a4efe  d95c2404             fstp dword ptr [esp + 4]
// 007a4f02  8bcc                 mov ecx, esp
// 007a4f04  89642420             mov dword ptr [esp + 0x20], esp
// 007a4f08  68cc1d9000           push 0x901dcc
// 007a4f0d  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4f13  51                   push ecx
// 007a4f14  8bcc                 mov ecx, esp
// 007a4f16  89642420             mov dword ptr [esp + 0x20], esp
// 007a4f1a  68ccff8b00           push 0x8bffcc
// 007a4f1f  c784249001000028000000 mov dword ptr [esp + 0x190], 0x28
// 007a4f2a  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4f30  8bce                 mov ecx, esi
// 007a4f32  e879eeffff           call 0x7a3db0
// 007a4f37  8bc8                 mov ecx, eax
// 007a4f39  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a4f40  e8bb160600           call 0x806600
// 007a4f45  50                   push eax
// 007a4f46  51                   push ecx
// 007a4f47  8bcc                 mov ecx, esp
// 007a4f49  89642424             mov dword ptr [esp + 0x24], esp
// 007a4f4d  68b41d9000           push 0x901db4
// 007a4f52  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4f58  51                   push ecx
// 007a4f59  8bcc                 mov ecx, esp
// 007a4f5b  89642424             mov dword ptr [esp + 0x24], esp
// 007a4f5f  68ccff8b00           push 0x8bffcc
// 007a4f64  c784249401000029000000 mov dword ptr [esp + 0x194], 0x29
// 007a4f6f  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4f75  8bce                 mov ecx, esi
// 007a4f77  e834eeffff           call 0x7a3db0
// 007a4f7c  8bc8                 mov ecx, eax
// 007a4f7e  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a4f85  e876160600           call 0x806600
// 007a4f8a  50                   push eax
// 007a4f8b  8d8e50050000         lea ecx, [esi + 0x550]
// 007a4f91  e86af0faff           call 0x754000
// 007a4f96  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007a4f9c  83ec08               sub esp, 8
// 007a4f9f  d95c2404             fstp dword ptr [esp + 4]
// 007a4fa3  8bcc                 mov ecx, esp
// 007a4fa5  89642420             mov dword ptr [esp + 0x20], esp
// 007a4fa9  689c1d9000           push 0x901d9c
// 007a4fae  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4fb4  51                   push ecx
// 007a4fb5  8bcc                 mov ecx, esp
// 007a4fb7  89642420             mov dword ptr [esp + 0x20], esp
// 007a4fbb  68ccff8b00           push 0x8bffcc
// 007a4fc0  c78424900100002a000000 mov dword ptr [esp + 0x190], 0x2a
// 007a4fcb  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4fd1  8bce                 mov ecx, esi
// 007a4fd3  e8d8edffff           call 0x7a3db0
// 007a4fd8  8bc8                 mov ecx, eax
// 007a4fda  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a4fe1  e81a160600           call 0x806600
// 007a4fe6  50                   push eax
// 007a4fe7  51                   push ecx
// 007a4fe8  8bcc                 mov ecx, esp
// 007a4fea  89642424             mov dword ptr [esp + 0x24], esp
// 007a4fee  68841d9000           push 0x901d84
// 007a4ff3  ff1508fd8900         call dword ptr [0x89fd08]
// 007a4ff9  51                   push ecx
// 007a4ffa  8bcc                 mov ecx, esp
// 007a4ffc  89642424             mov dword ptr [esp + 0x24], esp
// 007a5000  68ccff8b00           push 0x8bffcc
// 007a5005  c78424940100002b000000 mov dword ptr [esp + 0x194], 0x2b
// 007a5010  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5016  8bce                 mov ecx, esi
// 007a5018  e893edffff           call 0x7a3db0
// 007a501d  8bc8                 mov ecx, eax
// 007a501f  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a5026  e8d5150600           call 0x806600
// 007a502b  50                   push eax
// 007a502c  8d8e70050000         lea ecx, [esi + 0x570]
// 007a5032  e8c9effaff           call 0x754000
// 007a5037  51                   push ecx
// 007a5038  8bcc                 mov ecx, esp
// 007a503a  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a503e  68741d9000           push 0x901d74
// 007a5043  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5049  51                   push ecx
// 007a504a  8bcc                 mov ecx, esp
// 007a504c  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a5050  68ccff8b00           push 0x8bffcc
// 007a5055  c784248c0100002c000000 mov dword ptr [esp + 0x18c], 0x2c
// 007a5060  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5066  8bce                 mov ecx, esi
// 007a5068  e843edffff           call 0x7a3db0
// 007a506d  8bc8                 mov ecx, eax
// 007a506f  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a5076  e885150600           call 0x806600
// 007a507b  51                   push ecx
// 007a507c  8bcc                 mov ecx, esp
// 007a507e  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a5082  68641d9000           push 0x901d64
// 007a5087  8986cc050000         mov dword ptr [esi + 0x5cc], eax
// 007a508d  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5093  51                   push ecx
// 007a5094  8bcc                 mov ecx, esp
// 007a5096  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a509a  68ccff8b00           push 0x8bffcc
// 007a509f  c784248c0100002d000000 mov dword ptr [esp + 0x18c], 0x2d
// 007a50aa  ff1508fd8900         call dword ptr [0x89fd08]
// 007a50b0  8bce                 mov ecx, esi
// 007a50b2  e8f9ecffff           call 0x7a3db0
// 007a50b7  8bc8                 mov ecx, eax
// 007a50b9  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a50c0  e83b150600           call 0x806600
// 007a50c5  51                   push ecx
// 007a50c6  8bcc                 mov ecx, esp
// 007a50c8  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a50cc  68541d9000           push 0x901d54
// 007a50d1  8986d0050000         mov dword ptr [esi + 0x5d0], eax
// 007a50d7  ff1508fd8900         call dword ptr [0x89fd08]
// 007a50dd  51                   push ecx
// 007a50de  8bcc                 mov ecx, esp
// 007a50e0  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a50e4  68ccff8b00           push 0x8bffcc
// 007a50e9  c784248c0100002e000000 mov dword ptr [esp + 0x18c], 0x2e
// 007a50f4  ff1508fd8900         call dword ptr [0x89fd08]
// 007a50fa  8bce                 mov ecx, esi
// 007a50fc  e8afecffff           call 0x7a3db0
// 007a5101  8bc8                 mov ecx, eax
// 007a5103  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a510a  e8f1140600           call 0x806600
// 007a510f  51                   push ecx
// 007a5110  8bcc                 mov ecx, esp
// 007a5112  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a5116  68441d9000           push 0x901d44
// 007a511b  8986d4050000         mov dword ptr [esi + 0x5d4], eax
// 007a5121  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5127  51                   push ecx
// 007a5128  8bcc                 mov ecx, esp
// 007a512a  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a512e  68ccff8b00           push 0x8bffcc
// 007a5133  c784248c0100002f000000 mov dword ptr [esp + 0x18c], 0x2f
// 007a513e  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5144  8bce                 mov ecx, esi
// 007a5146  e865ecffff           call 0x7a3db0
// 007a514b  8bc8                 mov ecx, eax
// 007a514d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a5154  e8a7140600           call 0x806600
// 007a5159  51                   push ecx
// 007a515a  8bcc                 mov ecx, esp
// 007a515c  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a5160  68341d9000           push 0x901d34
// 007a5165  8986d8050000         mov dword ptr [esi + 0x5d8], eax
// 007a516b  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5171  51                   push ecx
// 007a5172  8bcc                 mov ecx, esp
// 007a5174  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a5178  68ccff8b00           push 0x8bffcc
// 007a517d  c784248c01000030000000 mov dword ptr [esp + 0x18c], 0x30
// 007a5188  ff1508fd8900         call dword ptr [0x89fd08]
// 007a518e  8bce                 mov ecx, esi
// 007a5190  e81becffff           call 0x7a3db0
// 007a5195  8bc8                 mov ecx, eax
// 007a5197  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a519e  e85d140600           call 0x806600
// 007a51a3  51                   push ecx
// 007a51a4  8bcc                 mov ecx, esp
// 007a51a6  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a51aa  68241d9000           push 0x901d24
// 007a51af  8986dc050000         mov dword ptr [esi + 0x5dc], eax
// 007a51b5  ff1508fd8900         call dword ptr [0x89fd08]
// 007a51bb  51                   push ecx
// 007a51bc  8bcc                 mov ecx, esp
// 007a51be  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a51c2  68ccff8b00           push 0x8bffcc
// 007a51c7  c784248c01000031000000 mov dword ptr [esp + 0x18c], 0x31
// 007a51d2  ff1508fd8900         call dword ptr [0x89fd08]
// 007a51d8  8bce                 mov ecx, esi
// 007a51da  e8d1ebffff           call 0x7a3db0
// 007a51df  8bc8                 mov ecx, eax
// 007a51e1  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a51e8  e813140600           call 0x806600
// 007a51ed  51                   push ecx
// 007a51ee  8bcc                 mov ecx, esp
// 007a51f0  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a51f4  68141d9000           push 0x901d14
// 007a51f9  8986e0050000         mov dword ptr [esi + 0x5e0], eax
// 007a51ff  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5205  51                   push ecx
// 007a5206  8bcc                 mov ecx, esp
// 007a5208  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a520c  68ccff8b00           push 0x8bffcc
// 007a5211  c784248c01000032000000 mov dword ptr [esp + 0x18c], 0x32
// 007a521c  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5222  8bce                 mov ecx, esi
// 007a5224  e887ebffff           call 0x7a3db0
// 007a5229  8bc8                 mov ecx, eax
// 007a522b  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a5232  e8c9130600           call 0x806600
// 007a5237  51                   push ecx
// 007a5238  8bcc                 mov ecx, esp
// 007a523a  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a523e  68041d9000           push 0x901d04
// 007a5243  8986e4050000         mov dword ptr [esi + 0x5e4], eax
// 007a5249  ff1508fd8900         call dword ptr [0x89fd08]
// 007a524f  51                   push ecx
// 007a5250  8bcc                 mov ecx, esp
// 007a5252  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a5256  68ccff8b00           push 0x8bffcc
// 007a525b  c784248c01000033000000 mov dword ptr [esp + 0x18c], 0x33
// 007a5266  ff1508fd8900         call dword ptr [0x89fd08]
// 007a526c  8bce                 mov ecx, esi
// 007a526e  e83debffff           call 0x7a3db0
// 007a5273  8bc8                 mov ecx, eax
// 007a5275  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a527c  e87f130600           call 0x806600
// 007a5281  51                   push ecx
// 007a5282  8986e8050000         mov dword ptr [esi + 0x5e8], eax
// 007a5288  8bcc                 mov ecx, esp
// 007a528a  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a528e  68ec1c9000           push 0x901cec
// 007a5293  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5299  51                   push ecx
// 007a529a  8bcc                 mov ecx, esp
// 007a529c  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a52a0  68ccff8b00           push 0x8bffcc
// 007a52a5  c784248c01000034000000 mov dword ptr [esp + 0x18c], 0x34
// 007a52b0  ff1508fd8900         call dword ptr [0x89fd08]
// 007a52b6  8bce                 mov ecx, esi
// 007a52b8  e8f3eaffff           call 0x7a3db0
// 007a52bd  8bc8                 mov ecx, eax
// 007a52bf  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a52c6  e835130600           call 0x806600
// 007a52cb  51                   push ecx
// 007a52cc  8bcc                 mov ecx, esp
// 007a52ce  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a52d2  68d81c9000           push 0x901cd8
// 007a52d7  8986f4050000         mov dword ptr [esi + 0x5f4], eax
// 007a52dd  ff1508fd8900         call dword ptr [0x89fd08]
// 007a52e3  51                   push ecx
// 007a52e4  8bcc                 mov ecx, esp
// 007a52e6  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a52ea  68ccff8b00           push 0x8bffcc
// 007a52ef  c784248c01000035000000 mov dword ptr [esp + 0x18c], 0x35
// 007a52fa  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5300  8bce                 mov ecx, esi
// 007a5302  e8a9eaffff           call 0x7a3db0
// 007a5307  8bc8                 mov ecx, eax
// 007a5309  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a5310  e8eb120600           call 0x806600
// 007a5315  51                   push ecx
// 007a5316  8bcc                 mov ecx, esp
// 007a5318  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a531c  68c41c9000           push 0x901cc4
// 007a5321  8986f0050000         mov dword ptr [esi + 0x5f0], eax
// 007a5327  ff1508fd8900         call dword ptr [0x89fd08]
// 007a532d  51                   push ecx
// 007a532e  8bcc                 mov ecx, esp
// 007a5330  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a5334  68ccff8b00           push 0x8bffcc
// 007a5339  c784248c01000036000000 mov dword ptr [esp + 0x18c], 0x36
// 007a5344  ff1508fd8900         call dword ptr [0x89fd08]
// 007a534a  8bce                 mov ecx, esi
// 007a534c  e85feaffff           call 0x7a3db0
// 007a5351  8bc8                 mov ecx, eax
// 007a5353  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a535a  e8a1120600           call 0x806600
// 007a535f  51                   push ecx
// 007a5360  8bcc                 mov ecx, esp
// 007a5362  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a5366  68b41c9000           push 0x901cb4
// 007a536b  8986ec050000         mov dword ptr [esi + 0x5ec], eax
// 007a5371  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5377  51                   push ecx
// 007a5378  8bcc                 mov ecx, esp
// 007a537a  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a537e  68f81a9000           push 0x901af8
// 007a5383  c784248c01000037000000 mov dword ptr [esp + 0x18c], 0x37
// 007a538e  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5394  8bce                 mov ecx, esi
// 007a5396  e815eaffff           call 0x7a3db0
// 007a539b  8bc8                 mov ecx, eax
// 007a539d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a53a4  e857120600           call 0x806600
// 007a53a9  51                   push ecx
// 007a53aa  8bcc                 mov ecx, esp
// 007a53ac  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a53b0  68a01c9000           push 0x901ca0
// 007a53b5  898608040000         mov dword ptr [esi + 0x408], eax
// 007a53bb  ff1508fd8900         call dword ptr [0x89fd08]
// 007a53c1  51                   push ecx
// 007a53c2  8bcc                 mov ecx, esp
// 007a53c4  8964241c             mov dword ptr [esp + 0x1c], esp
// 007a53c8  68f81a9000           push 0x901af8
// 007a53cd  c784248c01000038000000 mov dword ptr [esp + 0x18c], 0x38
// 007a53d8  ff1508fd8900         call dword ptr [0x89fd08]
// 007a53de  8bce                 mov ecx, esi
// 007a53e0  e8cbe9ffff           call 0x7a3db0
// 007a53e5  8bc8                 mov ecx, eax
// 007a53e7  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 007a53ee  e80d120600           call 0x806600
// 007a53f3  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007a53f9  83ec08               sub esp, 8
// 007a53fc  d95c2404             fstp dword ptr [esp + 4]
// 007a5400  8bcc                 mov ecx, esp
// 007a5402  89642420             mov dword ptr [esp + 0x20], esp
// 007a5406  68881c9000           push 0x901c88
// 007a540b  8986e4030000         mov dword ptr [esi + 0x3e4], eax
// 007a5411  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5417  51                   push ecx
// 007a5418  8bcc                 mov ecx, esp
// 007a541a  89642420             mov dword ptr [esp + 0x20], esp
// 007a541e  68f81a9000           push 0x901af8
// 007a5423  c784249001000039000000 mov dword ptr [esp + 0x190], 0x39
// 007a542e  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5434  8bce                 mov ecx, esi
// 007a5436  e875e9ffff           call 0x7a3db0
// 007a543b  8bc8                 mov ecx, eax
// 007a543d  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 007a5444  e8b7110600           call 0x806600
// 007a5449  50                   push eax
// 007a544a  51                   push ecx
// 007a544b  8bcc                 mov ecx, esp
// 007a544d  89642424             mov dword ptr [esp + 0x24], esp
// 007a5451  686c1c9000           push 0x901c6c
// 007a5456  ff1508fd8900         call dword ptr [0x89fd08]
// 007a545c  51                   push ecx
// 007a545d  8bcc                 mov ecx, esp
// 007a545f  89642424             mov dword ptr [esp + 0x24], esp
// 007a5463  68f81a9000           push 0x901af8
// 007a5468  c78424940100003a000000 mov dword ptr [esp + 0x194], 0x3a
// 007a5473  ff1508fd8900         call dword ptr [0x89fd08]
// 007a5479  8bce                 mov ecx, esi
// 007a547b  e830e9ffff           call 0x7a3db0
// 007a5480  8bc8                 mov ecx, eax
// 007a5482  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 007a5489  e872110600           call 0x806600
// 007a548e  50                   push eax
// 007a548f  8d4e28               lea ecx, [esi + 0x28]
// 007a5492  e869ebfaff           call 0x754000
// 007a5497  8bce                 mov ecx, esi
// 007a5499  e8824c0000           call 0x7aa120
// 007a549e  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 007a54a5  64890d00000000       mov dword ptr fs:[0], ecx
// 007a54ac  59                   pop ecx
// 007a54ad  5f                   pop edi
// 007a54ae  5e                   pop esi
// 007a54af  5d                   pop ebp
// 007a54b0  5b                   pop ebx
// 007a54b1  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 007a54b8  33cc                 xor ecx, esp
// 007a54ba  e8bb50f7ff           call 0x71a57a
// 007a54bf  81c470010000         add esp, 0x170
// 007a54c5  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2007Theme@@MAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp