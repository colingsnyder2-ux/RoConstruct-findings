// roc 2012-06 00a4f200  unit: CXTPTabPaintManager  size: 2792 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4f200
//
// 00a4f200  6aff                 push -1
// 00a4f202  680271ae00           push 0xae7102
// 00a4f207  64a100000000         mov eax, dword ptr fs:[0]
// 00a4f20d  50                   push eax
// 00a4f20e  83ec60               sub esp, 0x60
// 00a4f211  53                   push ebx
// 00a4f212  55                   push ebp
// 00a4f213  56                   push esi
// 00a4f214  57                   push edi
// 00a4f215  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a4f21a  33c4                 xor eax, esp
// 00a4f21c  50                   push eax
// 00a4f21d  8d442474             lea eax, [esp + 0x74]
// 00a4f221  64a300000000         mov dword ptr fs:[0], eax
// 00a4f227  8bf1                 mov esi, ecx
// 00a4f229  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 00a4f230  8b7b60               mov edi, dword ptr [ebx + 0x60]
// 00a4f233  8bcf                 mov ecx, edi
// 00a4f235  897c2420             mov dword ptr [esp + 0x20], edi
// 00a4f239  e842c5ffff           call 0xa4b780
// 00a4f23e  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a4f242  8b07                 mov eax, dword ptr [edi]
// 00a4f244  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4f247  8bcf                 mov ecx, edi
// 00a4f249  ffd2                 call edx
// 00a4f24b  83f802               cmp eax, 2
// 00a4f24e  7411                 je 0xa4f261
// 00a4f250  8b07                 mov eax, dword ptr [edi]
// 00a4f252  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4f255  8bcf                 mov ecx, edi
// 00a4f257  ffd2                 call edx
// 00a4f259  85c0                 test eax, eax
// 00a4f25b  7404                 je 0xa4f261
// 00a4f25d  33c0                 xor eax, eax
// 00a4f25f  eb05                 jmp 0xa4f266
// 00a4f261  b801000000           mov eax, 1
// 00a4f266  33c9                 xor ecx, ecx
// 00a4f268  85c0                 test eax, eax
// 00a4f26a  0f94c1               sete cl
// 00a4f26d  837c242c05           cmp dword ptr [esp + 0x2c], 5
// 00a4f272  8be9                 mov ebp, ecx
// 00a4f274  896c2418             mov dword ptr [esp + 0x18], ebp
// 00a4f278  750d                 jne 0xa4f287
// 00a4f27a  33d2                 xor edx, edx
// 00a4f27c  85ed                 test ebp, ebp
// 00a4f27e  0f94c2               sete dl
// 00a4f281  8bea                 mov ebp, edx
// 00a4f283  89542418             mov dword ptr [esp + 0x18], edx
// 00a4f287  8d442414             lea eax, [esp + 0x14]
// 00a4f28b  50                   push eax
// 00a4f28c  8bcb                 mov ecx, ebx
// 00a4f28e  e85dc1ffff           call 0xa4b3f0
// 00a4f293  837e2800             cmp dword ptr [esi + 0x28], 0
// 00a4f297  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00a4f29f  7422                 je 0xa4f2c3
// 00a4f2a1  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00a4f2a4  395904               cmp dword ptr [ecx + 4], ebx
// 00a4f2a7  751a                 jne 0xa4f2c3
// 00a4f2a9  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 00a4f2ad  7414                 je 0xa4f2c3
// 00a4f2af  85ed                 test ebp, ebp
// 00a4f2b1  7408                 je 0xa4f2bb
// 00a4f2b3  8d8624010000         lea eax, [esi + 0x124]
// 00a4f2b9  eb18                 jmp 0xa4f2d3
// 00a4f2bb  8d8614010000         lea eax, [esi + 0x114]
// 00a4f2c1  eb10                 jmp 0xa4f2d3
// 00a4f2c3  8d861c010000         lea eax, [esi + 0x11c]
// 00a4f2c9  85ed                 test ebp, ebp
// 00a4f2cb  7506                 jne 0xa4f2d3
// 00a4f2cd  8d860c010000         lea eax, [esi + 0x10c]
// 00a4f2d3  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 00a4f2da  50                   push eax
// 00a4f2db  55                   push ebp
// 00a4f2dc  8d4c245c             lea ecx, [esp + 0x5c]
// 00a4f2e0  e84b62f8ff           call 0x9d5530
// 00a4f2e5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00a4f2eb  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00a4f2f1  8d4c243c             lea ecx, [esp + 0x3c]
// 00a4f2f5  51                   push ecx
// 00a4f2f6  6a00                 push 0
// 00a4f2f8  89442448             mov dword ptr [esp + 0x48], eax
// 00a4f2fc  53                   push ebx
// 00a4f2fd  83ec08               sub esp, 8
// 00a4f300  8bc4                 mov eax, esp
// 00a4f302  89542450             mov dword ptr [esp + 0x50], edx
// 00a4f306  c70000000000         mov dword ptr [eax], 0
// 00a4f30c  c7400400000000       mov dword ptr [eax + 4], 0
// 00a4f313  8b17                 mov edx, dword ptr [edi]
// 00a4f315  8b4244               mov eax, dword ptr [edx + 0x44]
// 00a4f318  8964243c             mov dword ptr [esp + 0x3c], esp
// 00a4f31c  55                   push ebp
// 00a4f31d  8bcf                 mov ecx, edi
// 00a4f31f  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00a4f327  ffd0                 call eax
// 00a4f329  837c242c03           cmp dword ptr [esp + 0x2c], 3
// 00a4f32e  89442424             mov dword ptr [esp + 0x24], eax
// 00a4f332  750c                 jne 0xa4f340
// 00a4f334  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00a4f337  395904               cmp dword ptr [ecx + 4], ebx
// 00a4f33a  7404                 je 0xa4f340
// 00a4f33c  33c0                 xor eax, eax
// 00a4f33e  eb05                 jmp 0xa4f345
// 00a4f340  b801000000           mov eax, 1
// 00a4f345  89442428             mov dword ptr [esp + 0x28], eax
// 00a4f349  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a4f351  85c0                 test eax, eax
// 00a4f353  7471                 je 0xa4f3c6
// 00a4f355  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00a4f358  85c0                 test eax, eax
// 00a4f35a  7e6a                 jle 0xa4f3c6
// 00a4f35c  33ed                 xor ebp, ebp
// 00a4f35e  3bc5                 cmp eax, ebp
// 00a4f360  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a4f364  7e60                 jle 0xa4f3c6
// 00a4f366  85ed                 test ebp, ebp
// 00a4f368  0f8c98000000         jl 0xa4f406
// 00a4f36e  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 00a4f371  0f8d8f000000         jge 0xa4f406
// 00a4f377  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00a4f37a  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 00a4f37d  8d04aa               lea eax, [edx + ebp*4]
// 00a4f380  8b4108               mov eax, dword ptr [ecx + 8]
// 00a4f383  83f802               cmp eax, 2
// 00a4f386  740d                 je 0xa4f395
// 00a4f388  83f801               cmp eax, 1
// 00a4f38b  7527                 jne 0xa4f3b4
// 00a4f38d  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00a4f390  395804               cmp dword ptr [eax + 4], ebx
// 00a4f393  751f                 jne 0xa4f3b4
// 00a4f395  8b11                 mov edx, dword ptr [ecx]
// 00a4f397  8b5208               mov edx, dword ptr [edx + 8]
// 00a4f39a  8d442444             lea eax, [esp + 0x44]
// 00a4f39e  50                   push eax
// 00a4f39f  ffd2                 call edx
// 00a4f3a1  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a4f3a6  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a4f3aa  7504                 jne 0xa4f3b0
// 00a4f3ac  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a4f3b0  0144241c             add dword ptr [esp + 0x1c], eax
// 00a4f3b4  45                   inc ebp
// 00a4f3b5  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 00a4f3b8  7cac                 jl 0xa4f366
// 00a4f3ba  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00a4f3bf  7e05                 jle 0xa4f3c6
// 00a4f3c1  8344241c03           add dword ptr [esp + 0x1c], 3
// 00a4f3c6  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00a4f3ce  0f8473060000         je 0xa4fa47
// 00a4f3d4  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00a4f3d9  0f8e93010000         jle 0xa4f572
// 00a4f3df  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00a4f3e5  8b01                 mov eax, dword ptr [ecx]
// 00a4f3e7  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00a4f3ee  8b4008               mov eax, dword ptr [eax + 8]
// 00a4f3f1  53                   push ebx
// 00a4f3f2  52                   push edx
// 00a4f3f3  ffd0                 call eax
// 00a4f3f5  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a4f3fa  740f                 je 0xa4f40b
// 00a4f3fc  83ac249800000003     sub dword ptr [esp + 0x98], 3
// 00a4f404  eb0d                 jmp 0xa4f413
// 00a4f406  e8b52ff3ff           call 0x9823c0
// 00a4f40b  83ac249400000003     sub dword ptr [esp + 0x94], 3
// 00a4f413  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 00a4f416  83c1ff               add ecx, -1
// 00a4f419  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00a4f420  0f884c010000         js 0xa4f572
// 00a4f426  85c9                 test ecx, ecx
// 00a4f428  7cdc                 jl 0xa4f406
// 00a4f42a  3b4b74               cmp ecx, dword ptr [ebx + 0x74]
// 00a4f42d  7dd7                 jge 0xa4f406
// 00a4f42f  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00a4f432  8d148d00000000       lea edx, [ecx*4]
// 00a4f439  8b2c10               mov ebp, dword ptr [eax + edx]
// 00a4f43c  03c2                 add eax, edx
// 00a4f43e  8b4508               mov eax, dword ptr [ebp + 8]
// 00a4f441  83f802               cmp eax, 2
// 00a4f444  7415                 je 0xa4f45b
// 00a4f446  83f801               cmp eax, 1
// 00a4f449  0f8513010000         jne 0xa4f562
// 00a4f44f  8b5360               mov edx, dword ptr [ebx + 0x60]
// 00a4f452  395a04               cmp dword ptr [edx + 4], ebx
// 00a4f455  0f8507010000         jne 0xa4f562
// 00a4f45b  8b4500               mov eax, dword ptr [ebp]
// 00a4f45e  8b5008               mov edx, dword ptr [eax + 8]
// 00a4f461  8d4c242c             lea ecx, [esp + 0x2c]
// 00a4f465  51                   push ecx
// 00a4f466  8bcd                 mov ecx, ebp
// 00a4f468  ffd2                 call edx
// 00a4f46a  83ec10               sub esp, 0x10
// 00a4f46d  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a4f472  7557                 jne 0xa4f4cb
// 00a4f474  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a4f47b  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00a4f482  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00a4f486  03c1                 add eax, ecx
// 00a4f488  99                   cdq 
// 00a4f489  2bc2                 sub eax, edx
// 00a4f48b  8bc8                 mov ecx, eax
// 00a4f48d  8bc7                 mov eax, edi
// 00a4f48f  99                   cdq 
// 00a4f490  2bc2                 sub eax, edx
// 00a4f492  d1f9                 sar ecx, 1
// 00a4f494  d1f8                 sar eax, 1
// 00a4f496  8d1c08               lea ebx, [eax + ecx]
// 00a4f499  2bc7                 sub eax, edi
// 00a4f49b  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 00a4f4a2  03c1                 add eax, ecx
// 00a4f4a4  8bcc                 mov ecx, esp
// 00a4f4a6  8bd7                 mov edx, edi
// 00a4f4a8  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 00a4f4ac  8911                 mov dword ptr [ecx], edx
// 00a4f4ae  894104               mov dword ptr [ecx + 4], eax
// 00a4f4b1  897908               mov dword ptr [ecx + 8], edi
// 00a4f4b4  89590c               mov dword ptr [ecx + 0xc], ebx
// 00a4f4b7  8bcd                 mov ecx, ebp
// 00a4f4b9  e892c0ffff           call 0xa4b550
// 00a4f4be  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a4f4c2  29942494000000       sub dword ptr [esp + 0x94], edx
// 00a4f4c9  eb56                 jmp 0xa4f521
// 00a4f4cb  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a4f4d2  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00a4f4d9  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00a4f4dd  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 00a4f4e4  03c1                 add eax, ecx
// 00a4f4e6  99                   cdq 
// 00a4f4e7  2bc2                 sub eax, edx
// 00a4f4e9  8bc8                 mov ecx, eax
// 00a4f4eb  8bc7                 mov eax, edi
// 00a4f4ed  99                   cdq 
// 00a4f4ee  2bc2                 sub eax, edx
// 00a4f4f0  d1f9                 sar ecx, 1
// 00a4f4f2  d1f8                 sar eax, 1
// 00a4f4f4  8bd1                 mov edx, ecx
// 00a4f4f6  2bd0                 sub edx, eax
// 00a4f4f8  03d7                 add edx, edi
// 00a4f4fa  2bc8                 sub ecx, eax
// 00a4f4fc  8bc4                 mov eax, esp
// 00a4f4fe  8bfb                 mov edi, ebx
// 00a4f500  2b7c2440             sub edi, dword ptr [esp + 0x40]
// 00a4f504  8908                 mov dword ptr [eax], ecx
// 00a4f506  897804               mov dword ptr [eax + 4], edi
// 00a4f509  895008               mov dword ptr [eax + 8], edx
// 00a4f50c  8bcd                 mov ecx, ebp
// 00a4f50e  89580c               mov dword ptr [eax + 0xc], ebx
// 00a4f511  e83ac0ffff           call 0xa4b550
// 00a4f516  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a4f51a  29942498000000       sub dword ptr [esp + 0x98], edx
// 00a4f521  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00a4f528  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00a4f52f  3b4174               cmp eax, dword ptr [ecx + 0x74]
// 00a4f532  0f8dcefeffff         jge 0xa4f406
// 00a4f538  8b4970               mov ecx, dword ptr [ecx + 0x70]
// 00a4f53b  03c0                 add eax, eax
// 00a4f53d  03c0                 add eax, eax
// 00a4f53f  03c8                 add ecx, eax
// 00a4f541  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00a4f548  8b09                 mov ecx, dword ptr [ecx]
// 00a4f54a  50                   push eax
// 00a4f54b  e880c8ffff           call 0xa4bdd0
// 00a4f550  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 00a4f557  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a4f55e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a4f562  83e901               sub ecx, 1
// 00a4f565  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00a4f56c  0f89b4feffff         jns 0xa4f426
// 00a4f572  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00a4f578  8b11                 mov edx, dword ptr [ecx]
// 00a4f57a  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00a4f581  8b5208               mov edx, dword ptr [edx + 8]
// 00a4f584  53                   push ebx
// 00a4f585  50                   push eax
// 00a4f586  ffd2                 call edx
// 00a4f588  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a4f58f  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a4f596  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a4f59d  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a4f5a1  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00a4f5a8  89442438             mov dword ptr [esp + 0x38], eax
// 00a4f5ac  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00a4f5af  2b4324               sub eax, dword ptr [ebx + 0x24]
// 00a4f5b2  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a4f5b7  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a4f5bb  89542434             mov dword ptr [esp + 0x34], edx
// 00a4f5bf  0f8440020000         je 0xa4f805
// 00a4f5c5  85c0                 test eax, eax
// 00a4f5c7  7e18                 jle 0xa4f5e1
// 00a4f5c9  99                   cdq 
// 00a4f5ca  2bc2                 sub eax, edx
// 00a4f5cc  d1f8                 sar eax, 1
// 00a4f5ce  f7d8                 neg eax
// 00a4f5d0  50                   push eax
// 00a4f5d1  6a00                 push 0
// 00a4f5d3  8d8c2494000000       lea ecx, [esp + 0x94]
// 00a4f5da  51                   push ecx
// 00a4f5db  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a4f5e1  8b5670               mov edx, dword ptr [esi + 0x70]
// 00a4f5e4  035660               add edx, dword ptr [esi + 0x60]
// 00a4f5e7  8bcf                 mov ecx, edi
// 00a4f5e9  01942490000000       add dword ptr [esp + 0x90], edx
// 00a4f5f0  8b07                 mov eax, dword ptr [edi]
// 00a4f5f2  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4f5f5  ffd2                 call edx
// 00a4f5f7  83f803               cmp eax, 3
// 00a4f5fa  7508                 jne 0xa4f604
// 00a4f5fc  8b4664               mov eax, dword ptr [esi + 0x64]
// 00a4f5ff  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a4f602  eb06                 jmp 0xa4f60a
// 00a4f604  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00a4f607  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00a4f60a  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 00a4f611  29842494000000       sub dword ptr [esp + 0x94], eax
// 00a4f618  837c242400           cmp dword ptr [esp + 0x24], 0
// 00a4f61d  7470                 je 0xa4f68f
// 00a4f61f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a4f626  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a4f62d  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 00a4f634  03c1                 add eax, ecx
// 00a4f636  99                   cdq 
// 00a4f637  2bc2                 sub eax, edx
// 00a4f639  8bc8                 mov ecx, eax
// 00a4f63b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a4f63f  99                   cdq 
// 00a4f640  2bc2                 sub eax, edx
// 00a4f642  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00a4f649  d1f9                 sar ecx, 1
// 00a4f64b  d1f8                 sar eax, 1
// 00a4f64d  2bd5                 sub edx, ebp
// 00a4f64f  2bc8                 sub ecx, eax
// 00a4f651  3b542440             cmp edx, dword ptr [esp + 0x40]
// 00a4f655  8d7dff               lea edi, [ebp - 1]
// 00a4f658  7e26                 jle 0xa4f680
// 00a4f65a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a4f65e  8b10                 mov edx, dword ptr [eax]
// 00a4f660  8b5244               mov edx, dword ptr [edx + 0x44]
// 00a4f663  8d6c243c             lea ebp, [esp + 0x3c]
// 00a4f667  55                   push ebp
// 00a4f668  6a01                 push 1
// 00a4f66a  53                   push ebx
// 00a4f66b  57                   push edi
// 00a4f66c  51                   push ecx
// 00a4f66d  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a4f674  51                   push ecx
// 00a4f675  8bc8                 mov ecx, eax
// 00a4f677  ffd2                 call edx
// 00a4f679  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 00a4f680  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a4f684  8d4c2802             lea ecx, [eax + ebp + 2]
// 00a4f688  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 00a4f68f  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a4f694  0f8449030000         je 0xa4f9e3
// 00a4f69a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00a4f6a1  83c208               add edx, 8
// 00a4f6a4  39942498000000       cmp dword ptr [esp + 0x98], edx
// 00a4f6ab  0f8e32030000         jle 0xa4f9e3
// 00a4f6b1  8d442444             lea eax, [esp + 0x44]
// 00a4f6b5  50                   push eax
// 00a4f6b6  8d4c2418             lea ecx, [esp + 0x18]
// 00a4f6ba  ff155846b200         call dword ptr [0xb24658]
// 00a4f6c0  50                   push eax
// 00a4f6c1  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4f6c5  ff159847b200         call dword ptr [0xb24798]
// 00a4f6cb  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a4f6d2  8b5108               mov edx, dword ptr [ecx + 8]
// 00a4f6d5  50                   push eax
// 00a4f6d6  52                   push edx
// 00a4f6d7  ff154021b200         call dword ptr [0xb22140]
// 00a4f6dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a4f6e1  8b01                 mov eax, dword ptr [ecx]
// 00a4f6e3  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 00a4f6ea  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4f6ed  2bbc248c000000       sub edi, dword ptr [esp + 0x8c]
// 00a4f6f4  ffd2                 call edx
// 00a4f6f6  33c9                 xor ecx, ecx
// 00a4f6f8  83f803               cmp eax, 3
// 00a4f6fb  0f94c1               sete cl
// 00a4f6fe  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00a4f705  8bc7                 mov eax, edi
// 00a4f707  8b7e78               mov edi, dword ptr [esi + 0x78]
// 00a4f70a  83c7fc               add edi, -4
// 00a4f70d  2bc1                 sub eax, ecx
// 00a4f70f  2b442448             sub eax, dword ptr [esp + 0x48]
// 00a4f713  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a4f71a  99                   cdq 
// 00a4f71b  2bc2                 sub eax, edx
// 00a4f71d  d1f8                 sar eax, 1
// 00a4f71f  2bc8                 sub ecx, eax
// 00a4f721  8bc1                 mov eax, ecx
// 00a4f723  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 00a4f72a  33d2                 xor edx, edx
// 00a4f72c  03c5                 add eax, ebp
// 00a4f72e  85ff                 test edi, edi
// 00a4f730  0f9cc2               setl dl
// 00a4f733  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00a4f73a  89842494000000       mov dword ptr [esp + 0x94], eax
// 00a4f741  4a                   dec edx
// 00a4f742  23d7                 and edx, edi
// 00a4f744  8b7e68               mov edi, dword ptr [esi + 0x68]
// 00a4f747  03fa                 add edi, edx
// 00a4f749  2bef                 sub ebp, edi
// 00a4f74b  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00a4f752  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 00a4f759  751a                 jne 0xa4f775
// 00a4f75b  8d542414             lea edx, [esp + 0x14]
// 00a4f75f  52                   push edx
// 00a4f760  8bce                 mov ecx, esi
// 00a4f762  e879e5ffff           call 0xa4dce0
// 00a4f767  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00a4f76e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a4f775  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 00a4f77c  743c                 je 0xa4f7ba
// 00a4f77e  6820090000           push 0x920
// 00a4f783  83ec10               sub esp, 0x10
// 00a4f786  8bd4                 mov edx, esp
// 00a4f788  890a                 mov dword ptr [edx], ecx
// 00a4f78a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00a4f791  894a04               mov dword ptr [edx + 4], ecx
// 00a4f794  894208               mov dword ptr [edx + 8], eax
// 00a4f797  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 00a4f79e  8d4c2428             lea ecx, [esp + 0x28]
// 00a4f7a2  89420c               mov dword ptr [edx + 0xc], eax
// 00a4f7a5  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00a4f7ac  51                   push ecx
// 00a4f7ad  52                   push edx
// 00a4f7ae  8bce                 mov ecx, esi
// 00a4f7b0  e8cbecffff           call 0xa4e480
// 00a4f7b5  e929020000           jmp 0xa4f9e3
// 00a4f7ba  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00a4f7c0  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 00a4f7c7  8b7d00               mov edi, dword ptr [ebp]
// 00a4f7ca  f7d8                 neg eax
// 00a4f7cc  1bc0                 sbb eax, eax
// 00a4f7ce  2500800000           and eax, 0x8000
// 00a4f7d3  0d20090000           or eax, 0x920
// 00a4f7d8  50                   push eax
// 00a4f7d9  8d842490000000       lea eax, [esp + 0x90]
// 00a4f7e0  50                   push eax
// 00a4f7e1  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4f7e5  83c770               add edi, 0x70
// 00a4f7e8  ff155846b200         call dword ptr [0xb24658]
// 00a4f7ee  50                   push eax
// 00a4f7ef  8d4c2420             lea ecx, [esp + 0x20]
// 00a4f7f3  ff159847b200         call dword ptr [0xb24798]
// 00a4f7f9  8b17                 mov edx, dword ptr [edi]
// 00a4f7fb  50                   push eax
// 00a4f7fc  8bcd                 mov ecx, ebp
// 00a4f7fe  ffd2                 call edx
// 00a4f800  e9de010000           jmp 0xa4f9e3
// 00a4f805  85c0                 test eax, eax
// 00a4f807  7e18                 jle 0xa4f821
// 00a4f809  99                   cdq 
// 00a4f80a  2bc2                 sub eax, edx
// 00a4f80c  d1f8                 sar eax, 1
// 00a4f80e  6a00                 push 0
// 00a4f810  f7d8                 neg eax
// 00a4f812  50                   push eax
// 00a4f813  8d842494000000       lea eax, [esp + 0x94]
// 00a4f81a  50                   push eax
// 00a4f81b  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a4f821  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00a4f824  034e60               add ecx, dword ptr [esi + 0x60]
// 00a4f827  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 00a4f82e  8b17                 mov edx, dword ptr [edi]
// 00a4f830  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a4f833  8bcf                 mov ecx, edi
// 00a4f835  ffd0                 call eax
// 00a4f837  83f802               cmp eax, 2
// 00a4f83a  7508                 jne 0xa4f844
// 00a4f83c  8b4664               mov eax, dword ptr [esi + 0x64]
// 00a4f83f  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a4f842  eb06                 jmp 0xa4f84a
// 00a4f844  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00a4f847  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00a4f84a  29842498000000       sub dword ptr [esp + 0x98], eax
// 00a4f851  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a4f855  018c2490000000       add dword ptr [esp + 0x90], ecx
// 00a4f85c  85c0                 test eax, eax
// 00a4f85e  7473                 je 0xa4f8d3
// 00a4f860  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a4f867  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00a4f86e  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 00a4f875  8d0411               lea eax, [ecx + edx]
// 00a4f878  99                   cdq 
// 00a4f879  2bc2                 sub eax, edx
// 00a4f87b  8bc8                 mov ecx, eax
// 00a4f87d  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a4f881  99                   cdq 
// 00a4f882  2bc2                 sub eax, edx
// 00a4f884  d1f8                 sar eax, 1
// 00a4f886  d1f9                 sar ecx, 1
// 00a4f888  2bc8                 sub ecx, eax
// 00a4f88a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a4f891  2be8                 sub ebp, eax
// 00a4f893  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 00a4f897  8d50ff               lea edx, [eax - 1]
// 00a4f89a  7e22                 jle 0xa4f8be
// 00a4f89c  8b07                 mov eax, dword ptr [edi]
// 00a4f89e  8d6c243c             lea ebp, [esp + 0x3c]
// 00a4f8a2  55                   push ebp
// 00a4f8a3  6a01                 push 1
// 00a4f8a5  53                   push ebx
// 00a4f8a6  51                   push ecx
// 00a4f8a7  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a4f8ae  52                   push edx
// 00a4f8af  8b5044               mov edx, dword ptr [eax + 0x44]
// 00a4f8b2  51                   push ecx
// 00a4f8b3  8bcf                 mov ecx, edi
// 00a4f8b5  ffd2                 call edx
// 00a4f8b7  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a4f8be  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a4f8c2  8d4c0802             lea ecx, [eax + ecx + 2]
// 00a4f8c6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a4f8ca  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00a4f8d1  eb07                 jmp 0xa4f8da
// 00a4f8d3  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a4f8da  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a4f8df  0f84fe000000         je 0xa4f9e3
// 00a4f8e5  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a4f8ec  3bd1                 cmp edx, ecx
// 00a4f8ee  0f8eef000000         jle 0xa4f9e3
// 00a4f8f4  f7d8                 neg eax
// 00a4f8f6  1bc0                 sbb eax, eax
// 00a4f8f8  83e002               and eax, 2
// 00a4f8fb  2b4678               sub eax, dword ptr [esi + 0x78]
// 00a4f8fe  2b4668               sub eax, dword ptr [esi + 0x68]
// 00a4f901  03d0                 add edx, eax
// 00a4f903  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 00a4f90a  89942494000000       mov dword ptr [esp + 0x94], edx
// 00a4f911  7450                 je 0xa4f963
// 00a4f913  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 00a4f919  f7d8                 neg eax
// 00a4f91b  1bc0                 sbb eax, eax
// 00a4f91d  2500080000           and eax, 0x800
// 00a4f922  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 00a4f928  83c820               or eax, 0x20
// 00a4f92b  50                   push eax
// 00a4f92c  83ec10               sub esp, 0x10
// 00a4f92f  8bc4                 mov eax, esp
// 00a4f931  8908                 mov dword ptr [eax], ecx
// 00a4f933  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00a4f93a  894804               mov dword ptr [eax + 4], ecx
// 00a4f93d  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a4f944  895008               mov dword ptr [eax + 8], edx
// 00a4f947  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00a4f94e  89500c               mov dword ptr [eax + 0xc], edx
// 00a4f951  8d442428             lea eax, [esp + 0x28]
// 00a4f955  50                   push eax
// 00a4f956  51                   push ecx
// 00a4f957  8bce                 mov ecx, esi
// 00a4f959  e822ebffff           call 0xa4e480
// 00a4f95e  e980000000           jmp 0xa4f9e3
// 00a4f963  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00a4f96a  7415                 je 0xa4f981
// 00a4f96c  8d542414             lea edx, [esp + 0x14]
// 00a4f970  52                   push edx
// 00a4f971  8bce                 mov ecx, esi
// 00a4f973  e868e3ffff           call 0xa4dce0
// 00a4f978  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00a4f97f  750d                 jne 0xa4f98e
// 00a4f981  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00a4f988  7504                 jne 0xa4f98e
// 00a4f98a  33c9                 xor ecx, ecx
// 00a4f98c  eb05                 jmp 0xa4f993
// 00a4f98e  b900080000           mov ecx, 0x800
// 00a4f993  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00a4f999  f7d8                 neg eax
// 00a4f99b  1bc0                 sbb eax, eax
// 00a4f99d  2500800000           and eax, 0x8000
// 00a4f9a2  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 00a4f9a8  8d94248c000000       lea edx, [esp + 0x8c]
// 00a4f9af  0bc1                 or eax, ecx
// 00a4f9b1  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a4f9b8  8b39                 mov edi, dword ptr [ecx]
// 00a4f9ba  83c820               or eax, 0x20
// 00a4f9bd  50                   push eax
// 00a4f9be  52                   push edx
// 00a4f9bf  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4f9c3  83c770               add edi, 0x70
// 00a4f9c6  ff155846b200         call dword ptr [0xb24658]
// 00a4f9cc  50                   push eax
// 00a4f9cd  8d4c2420             lea ecx, [esp + 0x20]
// 00a4f9d1  ff159847b200         call dword ptr [0xb24798]
// 00a4f9d7  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a4f9de  50                   push eax
// 00a4f9df  8b07                 mov eax, dword ptr [edi]
// 00a4f9e1  ffd0                 call eax
// 00a4f9e3  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00a4f9e6  395904               cmp dword ptr [ecx + 4], ebx
// 00a4f9e9  753d                 jne 0xa4fa28
// 00a4f9eb  8b11                 mov edx, dword ptr [ecx]
// 00a4f9ed  8b4278               mov eax, dword ptr [edx + 0x78]
// 00a4f9f0  ffd0                 call eax
// 00a4f9f2  85c0                 test eax, eax
// 00a4f9f4  7432                 je 0xa4fa28
// 00a4f9f6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a4f9fa  8b16                 mov edx, dword ptr [esi]
// 00a4f9fc  8b5274               mov edx, dword ptr [edx + 0x74]
// 00a4f9ff  83ec10               sub esp, 0x10
// 00a4fa02  8bc4                 mov eax, esp
// 00a4fa04  8908                 mov dword ptr [eax], ecx
// 00a4fa06  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a4fa0a  894804               mov dword ptr [eax + 4], ecx
// 00a4fa0d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a4fa11  894808               mov dword ptr [eax + 8], ecx
// 00a4fa14  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a4fa18  89480c               mov dword ptr [eax + 0xc], ecx
// 00a4fa1b  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00a4fa22  53                   push ebx
// 00a4fa23  50                   push eax
// 00a4fa24  8bce                 mov ecx, esi
// 00a4fa26  ffd2                 call edx
// 00a4fa28  8d4c2454             lea ecx, [esp + 0x54]
// 00a4fa2c  c644247c00           mov byte ptr [esp + 0x7c], 0
// 00a4fa31  e87a5bf8ff           call 0x9d55b0
// 00a4fa36  8d4c2414             lea ecx, [esp + 0x14]
// 00a4fa3a  ff15d047b200         call dword ptr [0xb247d0]
// 00a4fa40  33c0                 xor eax, eax
// 00a4fa42  e98b020000           jmp 0xa4fcd2
// 00a4fa47  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a4fa4b  83f802               cmp eax, 2
// 00a4fa4e  751a                 jne 0xa4fa6a
// 00a4fa50  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00a4fa56  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00a4fa5c  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 00a4fa62  50                   push eax
// 00a4fa63  51                   push ecx
// 00a4fa64  52                   push edx
// 00a4fa65  e945020000           jmp 0xa4fcaf
// 00a4fa6a  83f803               cmp eax, 3
// 00a4fa6d  0f85b4010000         jne 0xa4fc27
// 00a4fa73  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a4fa78  7526                 jne 0xa4faa0
// 00a4fa7a  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a4fa7f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a4fa83  7504                 jne 0xa4fa89
// 00a4fa85  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a4fa89  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00a4fa8f  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00a4fa95  51                   push ecx
// 00a4fa96  52                   push edx
// 00a4fa97  83c008               add eax, 8
// 00a4fa9a  50                   push eax
// 00a4fa9b  e90f020000           jmp 0xa4fcaf
// 00a4faa0  837e2800             cmp dword ptr [esi + 0x28], 0
// 00a4faa4  7414                 je 0xa4faba
// 00a4faa6  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 00a4faaa  740e                 je 0xa4faba
// 00a4faac  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a4fab0  50                   push eax
// 00a4fab1  8bce                 mov ecx, esi
// 00a4fab3  e898e0ffff           call 0xa4db50
// 00a4fab8  eb13                 jmp 0xa4facd
// 00a4faba  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a4fabf  8d861c010000         lea eax, [esi + 0x11c]
// 00a4fac5  7506                 jne 0xa4facd
// 00a4fac7  8d860c010000         lea eax, [esi + 0x10c]
// 00a4facd  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a4fad4  50                   push eax
// 00a4fad5  51                   push ecx
// 00a4fad6  8d4c246c             lea ecx, [esp + 0x6c]
// 00a4fada  e8515af8ff           call 0x9d5530
// 00a4fadf  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00a4fae2  33d2                 xor edx, edx
// 00a4fae4  3bc2                 cmp eax, edx
// 00a4fae6  c644247c02           mov byte ptr [esp + 0x7c], 2
// 00a4faeb  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 00a4faf2  89942488000000       mov dword ptr [esp + 0x88], edx
// 00a4faf9  0f8ed0000000         jle 0xa4fbcf
// 00a4faff  eb07                 jmp 0xa4fb08
// 00a4fb01  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00a4fb08  33c9                 xor ecx, ecx
// 00a4fb0a  3bd1                 cmp edx, ecx
// 00a4fb0c  894c2444             mov dword ptr [esp + 0x44], ecx
// 00a4fb10  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a4fb14  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00a4fb18  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a4fb1c  7c1a                 jl 0xa4fb38
// 00a4fb1e  3bd0                 cmp edx, eax
// 00a4fb20  7d16                 jge 0xa4fb38
// 00a4fb22  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a4fb26  3b505c               cmp edx, dword ptr [eax + 0x5c]
// 00a4fb29  0f8dd7f8ffff         jge 0xa4f406
// 00a4fb2f  8b4058               mov eax, dword ptr [eax + 0x58]
// 00a4fb32  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 00a4fb35  8d0490               lea eax, [eax + edx*4]
// 00a4fb38  8d542428             lea edx, [esp + 0x28]
// 00a4fb3c  52                   push edx
// 00a4fb3d  e8aeb8ffff           call 0xa4b3f0
// 00a4fb42  8be8                 mov ebp, eax
// 00a4fb44  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 00a4fb4a  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 00a4fb51  8b3b                 mov edi, dword ptr [ebx]
// 00a4fb53  f7d8                 neg eax
// 00a4fb55  1bc0                 sbb eax, eax
// 00a4fb57  2500080000           and eax, 0x800
// 00a4fb5c  0d20050000           or eax, 0x520
// 00a4fb61  50                   push eax
// 00a4fb62  8d442448             lea eax, [esp + 0x48]
// 00a4fb66  50                   push eax
// 00a4fb67  8bcd                 mov ecx, ebp
// 00a4fb69  c684248400000003     mov byte ptr [esp + 0x84], 3
// 00a4fb71  83c770               add edi, 0x70
// 00a4fb74  ff155846b200         call dword ptr [0xb24658]
// 00a4fb7a  50                   push eax
// 00a4fb7b  8bcd                 mov ecx, ebp
// 00a4fb7d  ff159847b200         call dword ptr [0xb24798]
// 00a4fb83  8b17                 mov edx, dword ptr [edi]
// 00a4fb85  50                   push eax
// 00a4fb86  8bcb                 mov ecx, ebx
// 00a4fb88  ffd2                 call edx
// 00a4fb8a  8d4c2428             lea ecx, [esp + 0x28]
// 00a4fb8e  c644247c02           mov byte ptr [esp + 0x7c], 2
// 00a4fb93  ff15d047b200         call dword ptr [0xb247d0]
// 00a4fb99  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a4fb9d  2b442444             sub eax, dword ptr [esp + 0x44]
// 00a4fba1  3984249c000000       cmp dword ptr [esp + 0x9c], eax
// 00a4fba8  7f07                 jg 0xa4fbb1
// 00a4fbaa  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00a4fbb1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00a4fbb8  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a4fbbc  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00a4fbbf  41                   inc ecx
// 00a4fbc0  3bc8                 cmp ecx, eax
// 00a4fbc2  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00a4fbc9  0f8c32ffffff         jl 0xa4fb01
// 00a4fbcf  837c242400           cmp dword ptr [esp + 0x24], 0
// 00a4fbd4  7504                 jne 0xa4fbda
// 00a4fbd6  33c0                 xor eax, eax
// 00a4fbd8  eb0f                 jmp 0xa4fbe9
// 00a4fbda  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a4fbdf  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a4fbe3  7504                 jne 0xa4fbe9
// 00a4fbe5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a4fbe9  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00a4fbef  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00a4fbf5  51                   push ecx
// 00a4fbf6  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00a4fbf9  034e70               add ecx, dword ptr [esi + 0x70]
// 00a4fbfc  52                   push edx
// 00a4fbfd  03c8                 add ecx, eax
// 00a4fbff  038c24a4000000       add ecx, dword ptr [esp + 0xa4]
// 00a4fc06  034c2424             add ecx, dword ptr [esp + 0x24]
// 00a4fc0a  51                   push ecx
// 00a4fc0b  8bce                 mov ecx, esi
// 00a4fc0d  e89ee0ffff           call 0xa4dcb0
// 00a4fc12  8d4c2464             lea ecx, [esp + 0x64]
// 00a4fc16  8bf0                 mov esi, eax
// 00a4fc18  c644247c01           mov byte ptr [esp + 0x7c], 1
// 00a4fc1d  e88e59f8ff           call 0x9d55b0
// 00a4fc22  e991000000           jmp 0xa4fcb8
// 00a4fc27  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 00a4fc2d  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00a4fc34  8b1f                 mov ebx, dword ptr [edi]
// 00a4fc36  f7d8                 neg eax
// 00a4fc38  1bc0                 sbb eax, eax
// 00a4fc3a  2500080000           and eax, 0x800
// 00a4fc3f  0d20050000           or eax, 0x520
// 00a4fc44  50                   push eax
// 00a4fc45  8d942490000000       lea edx, [esp + 0x90]
// 00a4fc4c  52                   push edx
// 00a4fc4d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4fc51  83c370               add ebx, 0x70
// 00a4fc54  ff155846b200         call dword ptr [0xb24658]
// 00a4fc5a  50                   push eax
// 00a4fc5b  8d4c2420             lea ecx, [esp + 0x20]
// 00a4fc5f  ff159847b200         call dword ptr [0xb24798]
// 00a4fc65  50                   push eax
// 00a4fc66  8b03                 mov eax, dword ptr [ebx]
// 00a4fc68  8bcf                 mov ecx, edi
// 00a4fc6a  ffd0                 call eax
// 00a4fc6c  837c242400           cmp dword ptr [esp + 0x24], 0
// 00a4fc71  7504                 jne 0xa4fc77
// 00a4fc73  33c0                 xor eax, eax
// 00a4fc75  eb0f                 jmp 0xa4fc86
// 00a4fc77  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a4fc7c  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a4fc80  7504                 jne 0xa4fc86
// 00a4fc82  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a4fc86  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00a4fc8c  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00a4fc92  51                   push ecx
// 00a4fc93  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00a4fc96  034e70               add ecx, dword ptr [esi + 0x70]
// 00a4fc99  52                   push edx
// 00a4fc9a  2b8c2494000000       sub ecx, dword ptr [esp + 0x94]
// 00a4fca1  03c8                 add ecx, eax
// 00a4fca3  038c249c000000       add ecx, dword ptr [esp + 0x9c]
// 00a4fcaa  034c2424             add ecx, dword ptr [esp + 0x24]
// 00a4fcae  51                   push ecx
// 00a4fcaf  8bce                 mov ecx, esi
// 00a4fcb1  e8fadfffff           call 0xa4dcb0
// 00a4fcb6  8bf0                 mov esi, eax
// 00a4fcb8  8d4c2454             lea ecx, [esp + 0x54]
// 00a4fcbc  c644247c00           mov byte ptr [esp + 0x7c], 0
// 00a4fcc1  e8ea58f8ff           call 0x9d55b0
// 00a4fcc6  8d4c2414             lea ecx, [esp + 0x14]
// 00a4fcca  ff15d047b200         call dword ptr [0xb247d0]
// 00a4fcd0  8bc6                 mov eax, esi
// 00a4fcd2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a4fcd6  64890d00000000       mov dword ptr fs:[0], ecx
// 00a4fcdd  59                   pop ecx
// 00a4fcde  5f                   pop edi
// 00a4fcdf  5e                   pop esi
// 00a4fce0  5d                   pop ebp
// 00a4fce1  5b                   pop ebx
// 00a4fce2  83c46c               add esp, 0x6c
// 00a4fce5  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawSingleButtonIconAndText@CXTPTabPaintManager@@UAEHPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp