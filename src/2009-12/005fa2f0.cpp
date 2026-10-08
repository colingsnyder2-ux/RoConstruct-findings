// roc 2009-12 005fa2f0  unit: G3D::LineSegment  size: 845 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa2f0
//
// 005fa2f0  6aff                 push -1
// 005fa2f2  64a100000000         mov eax, dword ptr fs:[0]
// 005fa2f8  68e8369500           push 0x9536e8
// 005fa2fd  50                   push eax
// 005fa2fe  64892500000000       mov dword ptr fs:[0], esp
// 005fa305  83ec18               sub esp, 0x18
// 005fa308  53                   push ebx
// 005fa309  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 005fa30d  55                   push ebp
// 005fa30e  56                   push esi
// 005fa30f  8bf1                 mov esi, ecx
// 005fa311  837e3400             cmp dword ptr [esi + 0x34], 0
// 005fa315  57                   push edi
// 005fa316  0f84d5020000         je 0x5fa5f1
// 005fa31c  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fa31f  8b5604               mov edx, dword ptr [esi + 4]
// 005fa322  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005fa325  03d0                 add edx, eax
// 005fa327  3bd1                 cmp edx, ecx
// 005fa329  0f8ec2020000         jle 0x5fa5f1
// 005fa32f  2b4e50               sub ecx, dword ptr [esi + 0x50]
// 005fa332  33ff                 xor edi, edi
// 005fa334  894c2418             mov dword ptr [esp + 0x18], ecx
// 005fa338  897c2414             mov dword ptr [esp + 0x14], edi
// 005fa33c  85c0                 test eax, eax
// 005fa33e  0f86e4020000         jbe 0x5fa628
// 005fa344  3bf8                 cmp edi, eax
// 005fa346  7606                 jbe 0x5fa34e
// 005fa348  ff1560b79800         call dword ptr [0x98b760]
// 005fa34e  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005fa352  8d6b04               lea ebp, [ebx + 4]
// 005fa355  7205                 jb 0x5fa35c
// 005fa357  8b4500               mov eax, dword ptr [ebp]
// 005fa35a  eb02                 jmp 0x5fa35e
// 005fa35c  8bc5                 mov eax, ebp
// 005fa35e  0fb60438             movzx eax, byte ptr [eax + edi]
// 005fa362  50                   push eax
// 005fa363  8bce                 mov ecx, esi
// 005fa365  e8c6fcffff           call 0x5fa030
// 005fa36a  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 005fa36d  7606                 jbe 0x5fa375
// 005fa36f  ff1560b79800         call dword ptr [0x98b760]
// 005fa375  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005fa379  7205                 jb 0x5fa380
// 005fa37b  8b4500               mov eax, dword ptr [ebp]
// 005fa37e  eb02                 jmp 0x5fa382
// 005fa380  8bc5                 mov eax, ebp
// 005fa382  803c380d             cmp byte ptr [eax + edi], 0xd
// 005fa386  754b                 jne 0x5fa3d3
// 005fa388  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fa38b  47                   inc edi
// 005fa38c  3bf8                 cmp edi, eax
// 005fa38e  7343                 jae 0x5fa3d3
// 005fa390  7606                 jbe 0x5fa398
// 005fa392  ff1560b79800         call dword ptr [0x98b760]
// 005fa398  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005fa39c  7205                 jb 0x5fa3a3
// 005fa39e  8b4500               mov eax, dword ptr [ebp]
// 005fa3a1  eb02                 jmp 0x5fa3a5
// 005fa3a3  8bc5                 mov eax, ebp
// 005fa3a5  803c380a             cmp byte ptr [eax + edi], 0xa
// 005fa3a9  7528                 jne 0x5fa3d3
// 005fa3ab  897c2414             mov dword ptr [esp + 0x14], edi
// 005fa3af  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 005fa3b2  7606                 jbe 0x5fa3ba
// 005fa3b4  ff1560b79800         call dword ptr [0x98b760]
// 005fa3ba  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005fa3be  7205                 jb 0x5fa3c5
// 005fa3c0  8b4500               mov eax, dword ptr [ebp]
// 005fa3c3  eb02                 jmp 0x5fa3c7
// 005fa3c5  8bc5                 mov eax, ebp
// 005fa3c7  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 005fa3cb  51                   push ecx
// 005fa3cc  8bce                 mov ecx, esi
// 005fa3ce  e85dfcffff           call 0x5fa030
// 005fa3d3  8b5604               mov edx, dword ptr [esi + 4]
// 005fa3d6  3b542418             cmp edx, dword ptr [esp + 0x18]
// 005fa3da  0f8ce8010000         jl 0x5fa5c8
// 005fa3e0  807e3800             cmp byte ptr [esi + 0x38], 0
// 005fa3e4  750b                 jne 0x5fa3f1
// 005fa3e6  807e0800             cmp byte ptr [esi + 8], 0
// 005fa3ea  c644241300           mov byte ptr [esp + 0x13], 0
// 005fa3ef  7505                 jne 0x5fa3f6
// 005fa3f1  c644241301           mov byte ptr [esp + 0x13], 1
// 005fa3f6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fa3f9  48                   dec eax
// 005fa3fa  33c9                 xor ecx, ecx
// 005fa3fc  2b5650               sub edx, dword ptr [esi + 0x50]
// 005fa3ff  743a                 je 0x5fa43b
// 005fa401  85c0                 test eax, eax
// 005fa403  7636                 jbe 0x5fa43b
// 005fa405  8b7e28               mov edi, dword ptr [esi + 0x28]
// 005fa408  803c0720             cmp byte ptr [edi + eax], 0x20
// 005fa40c  750b                 jne 0x5fa419
// 005fa40e  807c241300           cmp byte ptr [esp + 0x13], 0
// 005fa413  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005fa417  7522                 jne 0x5fa43b
// 005fa419  48                   dec eax
// 005fa41a  41                   inc ecx
// 005fa41b  803c0722             cmp byte ptr [edi + eax], 0x22
// 005fa41f  7516                 jne 0x5fa437
// 005fa421  807e3800             cmp byte ptr [esi + 0x38], 0
// 005fa425  750c                 jne 0x5fa433
// 005fa427  807c241300           cmp byte ptr [esp + 0x13], 0
// 005fa42c  0f94c3               sete bl
// 005fa42f  885c2413             mov byte ptr [esp + 0x13], bl
// 005fa433  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005fa437  3bca                 cmp ecx, edx
// 005fa439  72c6                 jb 0x5fa401
// 005fa43b  3bca                 cmp ecx, edx
// 005fa43d  755d                 jne 0x5fa49c
// 005fa43f  837e3402             cmp dword ptr [esi + 0x34], 2
// 005fa443  0f857f010000         jne 0x5fa5c8
// 005fa449  8b562c               mov edx, dword ptr [esi + 0x2c]
// 005fa44c  8d4e28               lea ecx, [esi + 0x28]
// 005fa44f  6a00                 push 0
// 005fa451  4a                   dec edx
// 005fa452  52                   push edx
// 005fa453  e878faffff           call 0x5f9ed0
// 005fa458  8bce                 mov ecx, esi
// 005fa45a  e851feffff           call 0x5fa2b0
// 005fa45f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005fa463  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 005fa466  7606                 jbe 0x5fa46e
// 005fa468  ff1560b79800         call dword ptr [0x98b760]
// 005fa46e  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005fa472  7214                 jb 0x5fa488
// 005fa474  8b4304               mov eax, dword ptr [ebx + 4]
// 005fa477  0fb60438             movzx eax, byte ptr [eax + edi]
// 005fa47b  50                   push eax
// 005fa47c  8bce                 mov ecx, esi
// 005fa47e  e8adfbffff           call 0x5fa030
// 005fa483  e940010000           jmp 0x5fa5c8
// 005fa488  8d4304               lea eax, [ebx + 4]
// 005fa48b  0fb60438             movzx eax, byte ptr [eax + edi]
// 005fa48f  50                   push eax
// 005fa490  8bce                 mov ecx, esi
// 005fa492  e899fbffff           call 0x5fa030
// 005fa497  e92c010000           jmp 0x5fa5c8
// 005fa49c  8be8                 mov ebp, eax
// 005fa49e  3bca                 cmp ecx, edx
// 005fa4a0  7315                 jae 0x5fa4b7
// 005fa4a2  85ed                 test ebp, ebp
// 005fa4a4  760f                 jbe 0x5fa4b5
// 005fa4a6  8b7e28               mov edi, dword ptr [esi + 0x28]
// 005fa4a9  803c2f20             cmp byte ptr [edi + ebp], 0x20
// 005fa4ad  7506                 jne 0x5fa4b5
// 005fa4af  41                   inc ecx
// 005fa4b0  4d                   dec ebp
// 005fa4b1  3bca                 cmp ecx, edx
// 005fa4b3  72ed                 jb 0x5fa4a2
// 005fa4b5  3bca                 cmp ecx, edx
// 005fa4b7  7501                 jne 0x5fa4ba
// 005fa4b9  45                   inc ebp
// 005fa4ba  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005fa4bd  8d51ff               lea edx, [ecx - 1]
// 005fa4c0  3bc2                 cmp eax, edx
// 005fa4c2  7567                 jne 0x5fa52b
// 005fa4c4  6a01                 push 1
// 005fa4c6  45                   inc ebp
// 005fa4c7  55                   push ebp
// 005fa4c8  8d4e28               lea ecx, [esi + 0x28]
// 005fa4cb  e800faffff           call 0x5f9ed0
// 005fa4d0  8bce                 mov ecx, esi
// 005fa4d2  e8d9fdffff           call 0x5fa2b0
// 005fa4d7  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fa4da  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005fa4de  8d48ff               lea ecx, [eax - 1]
// 005fa4e1  3bf9                 cmp edi, ecx
// 005fa4e3  0f83df000000         jae 0x5fa5c8
// 005fa4e9  47                   inc edi
// 005fa4ea  8d9b00000000         lea ebx, [ebx]
// 005fa4f0  3bf8                 cmp edi, eax
// 005fa4f2  7606                 jbe 0x5fa4fa
// 005fa4f4  ff1560b79800         call dword ptr [0x98b760]
// 005fa4fa  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005fa4fe  7205                 jb 0x5fa505
// 005fa500  8b4304               mov eax, dword ptr [ebx + 4]
// 005fa503  eb03                 jmp 0x5fa508
// 005fa505  8d4304               lea eax, [ebx + 4]
// 005fa508  803c0720             cmp byte ptr [edi + eax], 0x20
// 005fa50c  0f85b6000000         jne 0x5fa5c8
// 005fa512  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fa516  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fa519  41                   inc ecx
// 005fa51a  8d50ff               lea edx, [eax - 1]
// 005fa51d  47                   inc edi
// 005fa51e  894c2414             mov dword ptr [esp + 0x14], ecx
// 005fa522  3bca                 cmp ecx, edx
// 005fa524  72ca                 jb 0x5fa4f0
// 005fa526  e99d000000           jmp 0x5fa5c8
// 005fa52b  33d2                 xor edx, edx
// 005fa52d  89542420             mov dword ptr [esp + 0x20], edx
// 005fa531  89542424             mov dword ptr [esp + 0x24], edx
// 005fa535  8954241c             mov dword ptr [esp + 0x1c], edx
// 005fa539  8d7801               lea edi, [eax + 1]
// 005fa53c  89542430             mov dword ptr [esp + 0x30], edx
// 005fa540  3bf9                 cmp edi, ecx
// 005fa542  732c                 jae 0x5fa570
// 005fa544  8b4628               mov eax, dword ptr [esi + 0x28]
// 005fa547  8a0407               mov al, byte ptr [edi + eax]
// 005fa54a  88442413             mov byte ptr [esp + 0x13], al
// 005fa54e  3c22                 cmp al, 0x22
// 005fa550  750a                 jne 0x5fa55c
// 005fa552  807e0800             cmp byte ptr [esi + 8], 0
// 005fa556  0f94c1               sete cl
// 005fa559  884e08               mov byte ptr [esi + 8], cl
// 005fa55c  8d542413             lea edx, [esp + 0x13]
// 005fa560  52                   push edx
// 005fa561  8d4c2420             lea ecx, [esp + 0x20]
// 005fa565  e856faffff           call 0x5f9fc0
// 005fa56a  47                   inc edi
// 005fa56b  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 005fa56e  72d4                 jb 0x5fa544
// 005fa570  6a01                 push 1
// 005fa572  45                   inc ebp
// 005fa573  55                   push ebp
// 005fa574  8d4e28               lea ecx, [esi + 0x28]
// 005fa577  e854f9ffff           call 0x5f9ed0
// 005fa57c  8bce                 mov ecx, esi
// 005fa57e  e82dfdffff           call 0x5fa2b0
// 005fa583  33ed                 xor ebp, ebp
// 005fa585  33ff                 xor edi, edi
// 005fa587  396c2420             cmp dword ptr [esp + 0x20], ebp
// 005fa58b  761a                 jbe 0x5fa5a7
// 005fa58d  8d4900               lea ecx, [ecx]
// 005fa590  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005fa594  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 005fa598  51                   push ecx
// 005fa599  8bce                 mov ecx, esi
// 005fa59b  e890faffff           call 0x5fa030
// 005fa5a0  47                   inc edi
// 005fa5a1  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005fa5a5  72e9                 jb 0x5fa590
// 005fa5a7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fa5ab  52                   push edx
// 005fa5ac  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005fa5b4  e827fefeff           call 0x5ea3e0
// 005fa5b9  83c404               add esp, 4
// 005fa5bc  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005fa5c0  896c2420             mov dword ptr [esp + 0x20], ebp
// 005fa5c4  896c2424             mov dword ptr [esp + 0x24], ebp
// 005fa5c8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005fa5cc  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fa5cf  47                   inc edi
// 005fa5d0  897c2414             mov dword ptr [esp + 0x14], edi
// 005fa5d4  3bf8                 cmp edi, eax
// 005fa5d6  0f8272fdffff         jb 0x5fa34e
// 005fa5dc  5f                   pop edi
// 005fa5dd  5e                   pop esi
// 005fa5de  5d                   pop ebp
// 005fa5df  5b                   pop ebx
// 005fa5e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fa5e4  64890d00000000       mov dword ptr fs:[0], ecx
// 005fa5eb  83c424               add esp, 0x24
// 005fa5ee  c20400               ret 4
// 005fa5f1  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fa5f4  33ff                 xor edi, edi
// 005fa5f6  85c0                 test eax, eax
// 005fa5f8  762e                 jbe 0x5fa628
// 005fa5fa  8d6b04               lea ebp, [ebx + 4]
// 005fa5fd  3bf8                 cmp edi, eax
// 005fa5ff  7606                 jbe 0x5fa607
// 005fa601  ff1560b79800         call dword ptr [0x98b760]
// 005fa607  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005fa60b  7205                 jb 0x5fa612
// 005fa60d  8b4500               mov eax, dword ptr [ebp]
// 005fa610  eb02                 jmp 0x5fa614
// 005fa612  8bc5                 mov eax, ebp
// 005fa614  0fb60438             movzx eax, byte ptr [eax + edi]
// 005fa618  50                   push eax
// 005fa619  8bce                 mov ecx, esi
// 005fa61b  e810faffff           call 0x5fa030
// 005fa620  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fa623  47                   inc edi
// 005fa624  3bf8                 cmp edi, eax
// 005fa626  72df                 jb 0x5fa607
// 005fa628  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005fa62c  5f                   pop edi
// 005fa62d  5e                   pop esi
// 005fa62e  5d                   pop ebp
// 005fa62f  5b                   pop ebx
// 005fa630  64890d00000000       mov dword ptr fs:[0], ecx
// 005fa637  83c424               add esp, 0x24
// 005fa63a  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?wordWrapIndentAppend@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
