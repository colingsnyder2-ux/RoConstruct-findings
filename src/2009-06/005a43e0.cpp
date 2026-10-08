// from server: 100% by auto
// roc 2009-06 005a43e0  unit: seg_005a0000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a43e0
//
// 005a43e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a43e4  8b08                 mov ecx, dword ptr [eax]
// 005a43e6  83ec10               sub esp, 0x10
// 005a43e9  53                   push ebx
// 005a43ea  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005a43ee  57                   push edi
// 005a43ef  8bbb44010000         mov edi, dword ptr [ebx + 0x144]
// 005a43f5  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005a43f9  0f83d7010000         jae 0x5a45d6
// 005a43ff  55                   push ebp
// 005a4400  56                   push esi
// 005a4401  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005a4405  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005a4409  395500               cmp dword ptr [ebp], edx
// 005a440c  0f83c2010000         jae 0x5a45d4
// 005a4412  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a4416  8b08                 mov ecx, dword ptr [eax]
// 005a4418  8bb3dc000000         mov esi, dword ptr [ebx + 0xdc]
// 005a441e  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a4422  2b7734               sub esi, dword ptr [edi + 0x34]
// 005a4425  2bc1                 sub eax, ecx
// 005a4427  3bf0                 cmp esi, eax
// 005a4429  7202                 jb 0x5a442d
// 005a442b  8bf0                 mov esi, eax
// 005a442d  8b4734               mov eax, dword ptr [edi + 0x34]
// 005a4430  8b9350010000         mov edx, dword ptr [ebx + 0x150]
// 005a4436  8b5204               mov edx, dword ptr [edx + 4]
// 005a4439  56                   push esi
// 005a443a  50                   push eax
// 005a443b  8d4708               lea eax, [edi + 8]
// 005a443e  50                   push eax
// 005a443f  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a4443  8d0c88               lea ecx, [eax + ecx*4]
// 005a4446  51                   push ecx
// 005a4447  53                   push ebx
// 005a4448  ffd2                 call edx
// 005a444a  8b442440             mov eax, dword ptr [esp + 0x40]
// 005a444e  0130                 add dword ptr [eax], esi
// 005a4450  017734               add dword ptr [edi + 0x34], esi
// 005a4453  8b4734               mov eax, dword ptr [edi + 0x34]
// 005a4456  83c414               add esp, 0x14
// 005a4459  297730               sub dword ptr [edi + 0x30], esi
// 005a445c  0f858c000000         jne 0x5a44ee
// 005a4462  3b83dc000000         cmp eax, dword ptr [ebx + 0xdc]
// 005a4468  0f8d80000000         jge 0x5a44ee
// 005a446e  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 005a4472  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a447a  7e69                 jle 0x5a44e5
// 005a447c  8d4708               lea eax, [edi + 8]
// 005a447f  89442410             mov dword ptr [esp + 0x10], eax
// 005a4483  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 005a4489  8b7734               mov esi, dword ptr [edi + 0x34]
// 005a448c  3bf0                 cmp esi, eax
// 005a448e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005a4491  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a4495  8b2a                 mov ebp, dword ptr [edx]
// 005a4497  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a449b  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a449f  7d2d                 jge 0x5a44ce
// 005a44a1  8d46ff               lea eax, [esi - 1]
// 005a44a4  89442418             mov dword ptr [esp + 0x18], eax
// 005a44a8  eb06                 jmp 0x5a44b0
// 005a44aa  8d9b00000000         lea ebx, [ebx]
// 005a44b0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a44b4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a44b8  51                   push ecx
// 005a44b9  6a01                 push 1
// 005a44bb  56                   push esi
// 005a44bc  55                   push ebp
// 005a44bd  52                   push edx
// 005a44be  55                   push ebp
// 005a44bf  e87c59feff           call 0x589e40
// 005a44c4  46                   inc esi
// 005a44c5  83c418               add esp, 0x18
// 005a44c8  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 005a44cc  7ce2                 jl 0x5a44b0
// 005a44ce  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a44d2  8344241004           add dword ptr [esp + 0x10], 4
// 005a44d7  40                   inc eax
// 005a44d8  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005a44db  89442424             mov dword ptr [esp + 0x24], eax
// 005a44df  7ca2                 jl 0x5a4483
// 005a44e1  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005a44e5  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 005a44eb  894734               mov dword ptr [edi + 0x34], eax
// 005a44ee  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 005a44f1  3b8bdc000000         cmp ecx, dword ptr [ebx + 0xdc]
// 005a44f7  7528                 jne 0x5a4521
// 005a44f9  8b4500               mov eax, dword ptr [ebp]
// 005a44fc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a4500  8b9354010000         mov edx, dword ptr [ebx + 0x154]
// 005a4506  8b5204               mov edx, dword ptr [edx + 4]
// 005a4509  50                   push eax
// 005a450a  51                   push ecx
// 005a450b  6a00                 push 0
// 005a450d  8d4708               lea eax, [edi + 8]
// 005a4510  50                   push eax
// 005a4511  53                   push ebx
// 005a4512  ffd2                 call edx
// 005a4514  83c414               add esp, 0x14
// 005a4517  c7473400000000       mov dword ptr [edi + 0x34], 0
// 005a451e  ff4500               inc dword ptr [ebp]
// 005a4521  837f3000             cmp dword ptr [edi + 0x30], 0
// 005a4525  7509                 jne 0x5a4530
// 005a4527  8b4500               mov eax, dword ptr [ebp]
// 005a452a  3b44243c             cmp eax, dword ptr [esp + 0x3c]
// 005a452e  7218                 jb 0x5a4548
// 005a4530  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a4534  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a4538  390a                 cmp dword ptr [edx], ecx
// 005a453a  0f82c1feffff         jb 0x5a4401
// 005a4540  5e                   pop esi
// 005a4541  5d                   pop ebp
// 005a4542  5f                   pop edi
// 005a4543  5b                   pop ebx
// 005a4544  83c410               add esp, 0x10
// 005a4547  c3                   ret 
// 005a4548  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 005a454c  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005a454f  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a4557  7e74                 jle 0x5a45cd
// 005a4559  83c20c               add edx, 0xc
// 005a455c  8954242c             mov dword ptr [esp + 0x2c], edx
// 005a4560  8b0a                 mov ecx, dword ptr [edx]
// 005a4562  8b4500               mov eax, dword ptr [ebp]
// 005a4565  8b6a10               mov ebp, dword ptr [edx + 0x10]
// 005a4568  0fafc1               imul eax, ecx
// 005a456b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a456f  8bf1                 mov esi, ecx
// 005a4571  0faf74243c           imul esi, dword ptr [esp + 0x3c]
// 005a4576  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a457a  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005a457d  03ed                 add ebp, ebp
// 005a457f  03ed                 add ebp, ebp
// 005a4581  03ed                 add ebp, ebp
// 005a4583  3bc6                 cmp eax, esi
// 005a4585  894c2430             mov dword ptr [esp + 0x30], ecx
// 005a4589  8bf8                 mov edi, eax
// 005a458b  7d27                 jge 0x5a45b4
// 005a458d  48                   dec eax
// 005a458e  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a4592  eb04                 jmp 0x5a4598
// 005a4594  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a4598  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a459c  55                   push ebp
// 005a459d  6a01                 push 1
// 005a459f  57                   push edi
// 005a45a0  51                   push ecx
// 005a45a1  52                   push edx
// 005a45a2  51                   push ecx
// 005a45a3  e89858feff           call 0x589e40
// 005a45a8  47                   inc edi
// 005a45a9  83c418               add esp, 0x18
// 005a45ac  3bfe                 cmp edi, esi
// 005a45ae  7ce4                 jl 0x5a4594
// 005a45b0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a45b4  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a45b8  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005a45bc  40                   inc eax
// 005a45bd  83c254               add edx, 0x54
// 005a45c0  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005a45c3  89442424             mov dword ptr [esp + 0x24], eax
// 005a45c7  8954242c             mov dword ptr [esp + 0x2c], edx
// 005a45cb  7c93                 jl 0x5a4560
// 005a45cd  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005a45d1  894500               mov dword ptr [ebp], eax
// 005a45d4  5e                   pop esi
// 005a45d5  5d                   pop ebp
// 005a45d6  5f                   pop edi
// 005a45d7  5b                   pop ebx
// 005a45d8  83c410               add esp, 0x10
// 005a45db  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
