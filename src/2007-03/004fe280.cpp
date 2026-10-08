// roc 2007-03 004fe280  unit: seg_004f0000  size: 870 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe280
//
// 004fe280  6aff                 push -1
// 004fe282  68d80a7500           push 0x750ad8
// 004fe287  64a100000000         mov eax, dword ptr fs:[0]
// 004fe28d  50                   push eax
// 004fe28e  83ec18               sub esp, 0x18
// 004fe291  53                   push ebx
// 004fe292  55                   push ebp
// 004fe293  56                   push esi
// 004fe294  57                   push edi
// 004fe295  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fe29a  33c4                 xor eax, esp
// 004fe29c  50                   push eax
// 004fe29d  8d44242c             lea eax, [esp + 0x2c]
// 004fe2a1  64a300000000         mov dword ptr fs:[0], eax
// 004fe2a7  8bf1                 mov esi, ecx
// 004fe2a9  837e3400             cmp dword ptr [esi + 0x34], 0
// 004fe2ad  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 004fe2b1  0f84e0020000         je 0x4fe597
// 004fe2b7  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fe2ba  8b5604               mov edx, dword ptr [esi + 4]
// 004fe2bd  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004fe2c0  03d0                 add edx, eax
// 004fe2c2  3bd1                 cmp edx, ecx
// 004fe2c4  0f8ecd020000         jle 0x4fe597
// 004fe2ca  2b4e50               sub ecx, dword ptr [esi + 0x50]
// 004fe2cd  33ff                 xor edi, edi
// 004fe2cf  85c0                 test eax, eax
// 004fe2d1  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004fe2d5  897c2418             mov dword ptr [esp + 0x18], edi
// 004fe2d9  0f86f1020000         jbe 0x4fe5d0
// 004fe2df  3bf8                 cmp edi, eax
// 004fe2e1  7606                 jbe 0x4fe2e9
// 004fe2e3  ff1544e97700         call dword ptr [0x77e944]
// 004fe2e9  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004fe2ed  8d6b04               lea ebp, [ebx + 4]
// 004fe2f0  7205                 jb 0x4fe2f7
// 004fe2f2  8b4500               mov eax, dword ptr [ebp]
// 004fe2f5  eb02                 jmp 0x4fe2f9
// 004fe2f7  8bc5                 mov eax, ebp
// 004fe2f9  0fb60438             movzx eax, byte ptr [eax + edi]
// 004fe2fd  50                   push eax
// 004fe2fe  8bce                 mov ecx, esi
// 004fe300  e8abfcffff           call 0x4fdfb0
// 004fe305  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 004fe308  7606                 jbe 0x4fe310
// 004fe30a  ff1544e97700         call dword ptr [0x77e944]
// 004fe310  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004fe314  7205                 jb 0x4fe31b
// 004fe316  8b4500               mov eax, dword ptr [ebp]
// 004fe319  eb02                 jmp 0x4fe31d
// 004fe31b  8bc5                 mov eax, ebp
// 004fe31d  803c380d             cmp byte ptr [eax + edi], 0xd
// 004fe321  754d                 jne 0x4fe370
// 004fe323  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fe326  83c701               add edi, 1
// 004fe329  3bf8                 cmp edi, eax
// 004fe32b  7343                 jae 0x4fe370
// 004fe32d  7606                 jbe 0x4fe335
// 004fe32f  ff1544e97700         call dword ptr [0x77e944]
// 004fe335  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004fe339  7205                 jb 0x4fe340
// 004fe33b  8b4500               mov eax, dword ptr [ebp]
// 004fe33e  eb02                 jmp 0x4fe342
// 004fe340  8bc5                 mov eax, ebp
// 004fe342  803c380a             cmp byte ptr [eax + edi], 0xa
// 004fe346  7528                 jne 0x4fe370
// 004fe348  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 004fe34b  897c2418             mov dword ptr [esp + 0x18], edi
// 004fe34f  7606                 jbe 0x4fe357
// 004fe351  ff1544e97700         call dword ptr [0x77e944]
// 004fe357  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004fe35b  7205                 jb 0x4fe362
// 004fe35d  8b4500               mov eax, dword ptr [ebp]
// 004fe360  eb02                 jmp 0x4fe364
// 004fe362  8bc5                 mov eax, ebp
// 004fe364  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 004fe368  51                   push ecx
// 004fe369  8bce                 mov ecx, esi
// 004fe36b  e840fcffff           call 0x4fdfb0
// 004fe370  8b5604               mov edx, dword ptr [esi + 4]
// 004fe373  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 004fe377  0f8c02020000         jl 0x4fe57f
// 004fe37d  807e3800             cmp byte ptr [esi + 0x38], 0
// 004fe381  750b                 jne 0x4fe38e
// 004fe383  807e0800             cmp byte ptr [esi + 8], 0
// 004fe387  c644241700           mov byte ptr [esp + 0x17], 0
// 004fe38c  7505                 jne 0x4fe393
// 004fe38e  c644241701           mov byte ptr [esp + 0x17], 1
// 004fe393  8b462c               mov eax, dword ptr [esi + 0x2c]
// 004fe396  83c0ff               add eax, -1
// 004fe399  33c9                 xor ecx, ecx
// 004fe39b  2b5650               sub edx, dword ptr [esi + 0x50]
// 004fe39e  743e                 je 0x4fe3de
// 004fe3a0  85c0                 test eax, eax
// 004fe3a2  763a                 jbe 0x4fe3de
// 004fe3a4  8b7e28               mov edi, dword ptr [esi + 0x28]
// 004fe3a7  803c0720             cmp byte ptr [edi + eax], 0x20
// 004fe3ab  750b                 jne 0x4fe3b8
// 004fe3ad  807c241700           cmp byte ptr [esp + 0x17], 0
// 004fe3b2  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 004fe3b6  7526                 jne 0x4fe3de
// 004fe3b8  83e801               sub eax, 1
// 004fe3bb  83c101               add ecx, 1
// 004fe3be  803c0722             cmp byte ptr [edi + eax], 0x22
// 004fe3c2  7516                 jne 0x4fe3da
// 004fe3c4  807e3800             cmp byte ptr [esi + 0x38], 0
// 004fe3c8  750c                 jne 0x4fe3d6
// 004fe3ca  807c241700           cmp byte ptr [esp + 0x17], 0
// 004fe3cf  0f94c3               sete bl
// 004fe3d2  885c2417             mov byte ptr [esp + 0x17], bl
// 004fe3d6  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 004fe3da  3bca                 cmp ecx, edx
// 004fe3dc  72c2                 jb 0x4fe3a0
// 004fe3de  3bca                 cmp ecx, edx
// 004fe3e0  755f                 jne 0x4fe441
// 004fe3e2  837e3402             cmp dword ptr [esi + 0x34], 2
// 004fe3e6  0f8593010000         jne 0x4fe57f
// 004fe3ec  8b562c               mov edx, dword ptr [esi + 0x2c]
// 004fe3ef  8d4e28               lea ecx, [esi + 0x28]
// 004fe3f2  6a00                 push 0
// 004fe3f4  83ea01               sub edx, 1
// 004fe3f7  52                   push edx
// 004fe3f8  e833faffff           call 0x4fde30
// 004fe3fd  8bce                 mov ecx, esi
// 004fe3ff  e83cfeffff           call 0x4fe240
// 004fe404  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004fe408  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 004fe40b  7606                 jbe 0x4fe413
// 004fe40d  ff1544e97700         call dword ptr [0x77e944]
// 004fe413  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004fe417  7214                 jb 0x4fe42d
// 004fe419  8b4304               mov eax, dword ptr [ebx + 4]
// 004fe41c  0fb60438             movzx eax, byte ptr [eax + edi]
// 004fe420  50                   push eax
// 004fe421  8bce                 mov ecx, esi
// 004fe423  e888fbffff           call 0x4fdfb0
// 004fe428  e952010000           jmp 0x4fe57f
// 004fe42d  8d4304               lea eax, [ebx + 4]
// 004fe430  0fb60438             movzx eax, byte ptr [eax + edi]
// 004fe434  50                   push eax
// 004fe435  8bce                 mov ecx, esi
// 004fe437  e874fbffff           call 0x4fdfb0
// 004fe43c  e93e010000           jmp 0x4fe57f
// 004fe441  3bca                 cmp ecx, edx
// 004fe443  8be8                 mov ebp, eax
// 004fe445  7319                 jae 0x4fe460
// 004fe447  85ed                 test ebp, ebp
// 004fe449  7613                 jbe 0x4fe45e
// 004fe44b  8b7e28               mov edi, dword ptr [esi + 0x28]
// 004fe44e  803c2f20             cmp byte ptr [edi + ebp], 0x20
// 004fe452  750a                 jne 0x4fe45e
// 004fe454  83c101               add ecx, 1
// 004fe457  83ed01               sub ebp, 1
// 004fe45a  3bca                 cmp ecx, edx
// 004fe45c  72e9                 jb 0x4fe447
// 004fe45e  3bca                 cmp ecx, edx
// 004fe460  7503                 jne 0x4fe465
// 004fe462  83c501               add ebp, 1
// 004fe465  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 004fe468  8d51ff               lea edx, [ecx - 1]
// 004fe46b  3bc2                 cmp eax, edx
// 004fe46d  7570                 jne 0x4fe4df
// 004fe46f  6a01                 push 1
// 004fe471  83c501               add ebp, 1
// 004fe474  55                   push ebp
// 004fe475  8d4e28               lea ecx, [esi + 0x28]
// 004fe478  e8b3f9ffff           call 0x4fde30
// 004fe47d  8bce                 mov ecx, esi
// 004fe47f  e8bcfdffff           call 0x4fe240
// 004fe484  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fe487  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004fe48b  8d48ff               lea ecx, [eax - 1]
// 004fe48e  3bf9                 cmp edi, ecx
// 004fe490  0f83e9000000         jae 0x4fe57f
// 004fe496  83c701               add edi, 1
// 004fe499  8da42400000000       lea esp, [esp]
// 004fe4a0  3bf8                 cmp edi, eax
// 004fe4a2  7606                 jbe 0x4fe4aa
// 004fe4a4  ff1544e97700         call dword ptr [0x77e944]
// 004fe4aa  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004fe4ae  7205                 jb 0x4fe4b5
// 004fe4b0  8b4304               mov eax, dword ptr [ebx + 4]
// 004fe4b3  eb03                 jmp 0x4fe4b8
// 004fe4b5  8d4304               lea eax, [ebx + 4]
// 004fe4b8  803c0720             cmp byte ptr [edi + eax], 0x20
// 004fe4bc  0f85bd000000         jne 0x4fe57f
// 004fe4c2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fe4c6  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fe4c9  83c101               add ecx, 1
// 004fe4cc  8d50ff               lea edx, [eax - 1]
// 004fe4cf  83c701               add edi, 1
// 004fe4d2  3bca                 cmp ecx, edx
// 004fe4d4  894c2418             mov dword ptr [esp + 0x18], ecx
// 004fe4d8  72c6                 jb 0x4fe4a0
// 004fe4da  e9a0000000           jmp 0x4fe57f
// 004fe4df  33d2                 xor edx, edx
// 004fe4e1  89542424             mov dword ptr [esp + 0x24], edx
// 004fe4e5  89542428             mov dword ptr [esp + 0x28], edx
// 004fe4e9  89542420             mov dword ptr [esp + 0x20], edx
// 004fe4ed  8d7801               lea edi, [eax + 1]
// 004fe4f0  3bf9                 cmp edi, ecx
// 004fe4f2  89542434             mov dword ptr [esp + 0x34], edx
// 004fe4f6  732e                 jae 0x4fe526
// 004fe4f8  8b4628               mov eax, dword ptr [esi + 0x28]
// 004fe4fb  8a0407               mov al, byte ptr [edi + eax]
// 004fe4fe  3c22                 cmp al, 0x22
// 004fe500  88442417             mov byte ptr [esp + 0x17], al
// 004fe504  750a                 jne 0x4fe510
// 004fe506  807e0800             cmp byte ptr [esi + 8], 0
// 004fe50a  0f94c1               sete cl
// 004fe50d  884e08               mov byte ptr [esi + 8], cl
// 004fe510  8d542417             lea edx, [esp + 0x17]
// 004fe514  52                   push edx
// 004fe515  8d4c2424             lea ecx, [esp + 0x24]
// 004fe519  e822faffff           call 0x4fdf40
// 004fe51e  83c701               add edi, 1
// 004fe521  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 004fe524  72d2                 jb 0x4fe4f8
// 004fe526  6a01                 push 1
// 004fe528  83c501               add ebp, 1
// 004fe52b  55                   push ebp
// 004fe52c  8d4e28               lea ecx, [esi + 0x28]
// 004fe52f  e8fcf8ffff           call 0x4fde30
// 004fe534  8bce                 mov ecx, esi
// 004fe536  e805fdffff           call 0x4fe240
// 004fe53b  33ed                 xor ebp, ebp
// 004fe53d  33ff                 xor edi, edi
// 004fe53f  396c2424             cmp dword ptr [esp + 0x24], ebp
// 004fe543  7619                 jbe 0x4fe55e
// 004fe545  8b442420             mov eax, dword ptr [esp + 0x20]
// 004fe549  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 004fe54d  51                   push ecx
// 004fe54e  8bce                 mov ecx, esi
// 004fe550  e85bfaffff           call 0x4fdfb0
// 004fe555  83c701               add edi, 1
// 004fe558  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 004fe55c  72e7                 jb 0x4fe545
// 004fe55e  8b542420             mov edx, dword ptr [esp + 0x20]
// 004fe562  52                   push edx
// 004fe563  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 004fe56b  e8104effff           call 0x4f3380
// 004fe570  83c404               add esp, 4
// 004fe573  896c2420             mov dword ptr [esp + 0x20], ebp
// 004fe577  896c2424             mov dword ptr [esp + 0x24], ebp
// 004fe57b  896c2428             mov dword ptr [esp + 0x28], ebp
// 004fe57f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004fe583  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fe586  83c701               add edi, 1
// 004fe589  3bf8                 cmp edi, eax
// 004fe58b  897c2418             mov dword ptr [esp + 0x18], edi
// 004fe58f  0f8254fdffff         jb 0x4fe2e9
// 004fe595  eb39                 jmp 0x4fe5d0
// 004fe597  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fe59a  33ff                 xor edi, edi
// 004fe59c  85c0                 test eax, eax
// 004fe59e  7630                 jbe 0x4fe5d0
// 004fe5a0  3bf8                 cmp edi, eax
// 004fe5a2  8d6b04               lea ebp, [ebx + 4]
// 004fe5a5  7606                 jbe 0x4fe5ad
// 004fe5a7  ff1544e97700         call dword ptr [0x77e944]
// 004fe5ad  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004fe5b1  7205                 jb 0x4fe5b8
// 004fe5b3  8b4500               mov eax, dword ptr [ebp]
// 004fe5b6  eb02                 jmp 0x4fe5ba
// 004fe5b8  8bc5                 mov eax, ebp
// 004fe5ba  0fb60438             movzx eax, byte ptr [eax + edi]
// 004fe5be  50                   push eax
// 004fe5bf  8bce                 mov ecx, esi
// 004fe5c1  e8eaf9ffff           call 0x4fdfb0
// 004fe5c6  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fe5c9  83c701               add edi, 1
// 004fe5cc  3bf8                 cmp edi, eax
// 004fe5ce  72dd                 jb 0x4fe5ad
// 004fe5d0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004fe5d4  64890d00000000       mov dword ptr fs:[0], ecx
// 004fe5db  59                   pop ecx
// 004fe5dc  5f                   pop edi
// 004fe5dd  5e                   pop esi
// 004fe5de  5d                   pop ebp
// 004fe5df  5b                   pop ebx
// 004fe5e0  83c424               add esp, 0x24
// 004fe5e3  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?wordWrapIndentAppend@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
