// roc 2009-12 008eb2b0  unit: CXTPScrollBase  size: 1013 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb2b0
//
// 008eb2b0  83ec34               sub esp, 0x34
// 008eb2b3  53                   push ebx
// 008eb2b4  55                   push ebp
// 008eb2b5  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008eb2b9  8bd9                 mov ebx, ecx
// 008eb2bb  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008eb2bf  56                   push esi
// 008eb2c0  57                   push edi
// 008eb2c1  7504                 jne 0x8eb2c7
// 008eb2c3  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008eb2c7  6a38                 push 0x38
// 008eb2c9  e89285f0ff           call 0x7f3860
// 008eb2ce  6a38                 push 0x38
// 008eb2d0  8bf0                 mov esi, eax
// 008eb2d2  6a00                 push 0
// 008eb2d4  56                   push esi
// 008eb2d5  e8ca97f0ff           call 0x7f4aa4
// 008eb2da  8b442458             mov eax, dword ptr [esp + 0x58]
// 008eb2de  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 008eb2e2  83c410               add esp, 0x10
// 008eb2e5  c74614ffffffff       mov dword ptr [esi + 0x14], 0xffffffff
// 008eb2ec  c7463000000000       mov dword ptr [esi + 0x30], 0
// 008eb2f3  897e34               mov dword ptr [esi + 0x34], edi
// 008eb2f6  89462c               mov dword ptr [esi + 0x2c], eax
// 008eb2f9  68b0647f00           push 0x7f64b0
// 008eb2fe  b9d0bab900           mov ecx, 0xb9bad0
// 008eb303  897360               mov dword ptr [ebx + 0x60], esi
// 008eb306  e831b10300           call 0x92643c
// 008eb30b  89442454             mov dword ptr [esp + 0x54], eax
// 008eb30f  85c0                 test eax, eax
// 008eb311  7505                 jne 0x8eb318
// 008eb313  e8f487f0ff           call 0x7f3b0c
// 008eb318  837f5800             cmp dword ptr [edi + 0x58], 0
// 008eb31c  8d4c2418             lea ecx, [esp + 0x18]
// 008eb320  8d44241c             lea eax, [esp + 0x1c]
// 008eb324  7506                 jne 0x8eb32c
// 008eb326  8bc8                 mov ecx, eax
// 008eb328  8d442418             lea eax, [esp + 0x18]
// 008eb32c  3b6f24               cmp ebp, dword ptr [edi + 0x24]
// 008eb32f  8b5718               mov edx, dword ptr [edi + 0x18]
// 008eb332  8911                 mov dword ptr [ecx], edx
// 008eb334  8b5710               mov edx, dword ptr [edi + 0x10]
// 008eb337  8910                 mov dword ptr [eax], edx
// 008eb339  8b571c               mov edx, dword ptr [edi + 0x1c]
// 008eb33c  895108               mov dword ptr [ecx + 8], edx
// 008eb33f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 008eb342  894808               mov dword ptr [eax + 8], ecx
// 008eb345  7d16                 jge 0x8eb35d
// 008eb347  c747543c000000       mov dword ptr [edi + 0x54], 0x3c
// 008eb34e  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008eb355  8b5724               mov edx, dword ptr [edi + 0x24]
// 008eb358  895008               mov dword ptr [eax + 8], edx
// 008eb35b  eb5c                 jmp 0x8eb3b9
// 008eb35d  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 008eb360  7c15                 jl 0x8eb377
// 008eb362  c747543d000000       mov dword ptr [edi + 0x54], 0x3d
// 008eb369  c7461401000000       mov dword ptr [esi + 0x14], 1
// 008eb370  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 008eb373  8908                 mov dword ptr [eax], ecx
// 008eb375  eb42                 jmp 0x8eb3b9
// 008eb377  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 008eb37a  7d16                 jge 0x8eb392
// 008eb37c  c747543e000000       mov dword ptr [edi + 0x54], 0x3e
// 008eb383  c7461402000000       mov dword ptr [esi + 0x14], 2
// 008eb38a  8b5724               mov edx, dword ptr [edi + 0x24]
// 008eb38d  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008eb390  eb22                 jmp 0x8eb3b4
// 008eb392  3b6f30               cmp ebp, dword ptr [edi + 0x30]
// 008eb395  7d09                 jge 0x8eb3a0
// 008eb397  c7475440000000       mov dword ptr [edi + 0x54], 0x40
// 008eb39e  eb3d                 jmp 0x8eb3dd
// 008eb3a0  c747543f000000       mov dword ptr [edi + 0x54], 0x3f
// 008eb3a7  c7461403000000       mov dword ptr [esi + 0x14], 3
// 008eb3ae  8b5730               mov edx, dword ptr [edi + 0x30]
// 008eb3b1  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 008eb3b4  894808               mov dword ptr [eax + 8], ecx
// 008eb3b7  8910                 mov dword ptr [eax], edx
// 008eb3b9  837c245800           cmp dword ptr [esp + 0x58], 0
// 008eb3be  0f849a000000         je 0x8eb45e
// 008eb3c4  8b4614               mov eax, dword ptr [esi + 0x14]
// 008eb3c7  85c0                 test eax, eax
// 008eb3c9  0f848f000000         je 0x8eb45e
// 008eb3cf  83f801               cmp eax, 1
// 008eb3d2  0f8486000000         je 0x8eb45e
// 008eb3d8  83f804               cmp eax, 4
// 008eb3db  7474                 je 0x8eb451
// 008eb3dd  8b5728               mov edx, dword ptr [edi + 0x28]
// 008eb3e0  2b5724               sub edx, dword ptr [edi + 0x24]
// 008eb3e3  3b5720               cmp edx, dword ptr [edi + 0x20]
// 008eb3e6  7e4c                 jle 0x8eb434
// 008eb3e8  56                   push esi
// 008eb3e9  8bcb                 mov ecx, ebx
// 008eb3eb  c7461404000000       mov dword ptr [esi + 0x14], 4
// 008eb3f2  e859fdffff           call 0x8eb150
// 008eb3f7  8b4734               mov eax, dword ptr [edi + 0x34]
// 008eb3fa  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008eb3fe  89472c               mov dword ptr [edi + 0x2c], eax
// 008eb401  894620               mov dword ptr [esi + 0x20], eax
// 008eb404  8b470c               mov eax, dword ptr [edi + 0xc]
// 008eb407  894624               mov dword ptr [esi + 0x24], eax
// 008eb40a  894628               mov dword ptr [esi + 0x28], eax
// 008eb40d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008eb410  2bc5                 sub eax, ebp
// 008eb412  51                   push ecx
// 008eb413  89461c               mov dword ptr [esi + 0x1c], eax
// 008eb416  c7463001000000       mov dword ptr [esi + 0x30], 1
// 008eb41d  ff152ccc9800         call dword ptr [0x98cc2c]
// 008eb423  8b4624               mov eax, dword ptr [esi + 0x24]
// 008eb426  8b13                 mov edx, dword ptr [ebx]
// 008eb428  8b5218               mov edx, dword ptr [edx + 0x18]
// 008eb42b  50                   push eax
// 008eb42c  6a05                 push 5
// 008eb42e  8bcb                 mov ecx, ebx
// 008eb430  ffd2                 call edx
// 008eb432  eb85                 jmp 0x8eb3b9
// 008eb434  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008eb437  50                   push eax
// 008eb438  e81d84f0ff           call 0x7f385a
// 008eb43d  83c404               add esp, 4
// 008eb440  5f                   pop edi
// 008eb441  5e                   pop esi
// 008eb442  5d                   pop ebp
// 008eb443  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 008eb44a  5b                   pop ebx
// 008eb44b  83c434               add esp, 0x34
// 008eb44e  c21400               ret 0x14
// 008eb451  8b4720               mov eax, dword ptr [edi + 0x20]
// 008eb454  99                   cdq 
// 008eb455  2bc2                 sub eax, edx
// 008eb457  d1f8                 sar eax, 1
// 008eb459  f7d8                 neg eax
// 008eb45b  89461c               mov dword ptr [esi + 0x1c], eax
// 008eb45e  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008eb462  57                   push edi
// 008eb463  ff152ccc9800         call dword ptr [0x98cc2c]
// 008eb469  837e1404             cmp dword ptr [esi + 0x14], 4
// 008eb46d  740f                 je 0x8eb47e
// 008eb46f  8d4c2418             lea ecx, [esp + 0x18]
// 008eb473  51                   push ecx
// 008eb474  8d5604               lea edx, [esi + 4]
// 008eb477  52                   push edx
// 008eb478  ff1564cc9800         call dword ptr [0x98cc64]
// 008eb47e  837e3000             cmp dword ptr [esi + 0x30], 0
// 008eb482  7518                 jne 0x8eb49c
// 008eb484  8b442450             mov eax, dword ptr [esp + 0x50]
// 008eb488  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008eb48c  50                   push eax
// 008eb48d  51                   push ecx
// 008eb48e  6801020000           push 0x201
// 008eb493  8bcb                 mov ecx, ebx
// 008eb495  e896fbffff           call 0x8eb030
// 008eb49a  eb1f                 jmp 0x8eb4bb
// 008eb49c  8b542450             mov edx, dword ptr [esp + 0x50]
// 008eb4a0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008eb4a4  52                   push edx
// 008eb4a5  50                   push eax
// 008eb4a6  6801020000           push 0x201
// 008eb4ab  8bcb                 mov ecx, ebx
// 008eb4ad  e8defaffff           call 0x8eaf90
// 008eb4b2  8b13                 mov edx, dword ptr [ebx]
// 008eb4b4  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008eb4b7  8bcb                 mov ecx, ebx
// 008eb4b9  ffd0                 call eax
// 008eb4bb  8b442454             mov eax, dword ptr [esp + 0x54]
// 008eb4bf  ff4004               inc dword ptr [eax + 4]
// 008eb4c2  ff1528cc9800         call dword ptr [0x98cc28]
// 008eb4c8  3bc7                 cmp eax, edi
// 008eb4ca  0f85e8000000         jne 0x8eb5b8
// 008eb4d0  6a00                 push 0
// 008eb4d2  6a00                 push 0
// 008eb4d4  6a00                 push 0
// 008eb4d6  8d4c2434             lea ecx, [esp + 0x34]
// 008eb4da  51                   push ecx
// 008eb4db  ff15b0ca9800         call dword ptr [0x98cab0]
// 008eb4e1  85c0                 test eax, eax
// 008eb4e3  0f84c5000000         je 0x8eb5ae
// 008eb4e9  8b2d84cc9800         mov ebp, dword ptr [0x98cc84]
// 008eb4ef  57                   push edi
// 008eb4f0  ffd5                 call ebp
// 008eb4f2  85c0                 test eax, eax
// 008eb4f4  0f84c4000000         je 0x8eb5be
// 008eb4fa  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008eb4fe  8be8                 mov ebp, eax
// 008eb500  3d13010000           cmp eax, 0x113
// 008eb505  7529                 jne 0x8eb530
// 008eb507  8b442430             mov eax, dword ptr [esp + 0x30]
// 008eb50b  3d315b0000           cmp eax, 0x5b31
// 008eb510  750c                 jne 0x8eb51e
// 008eb512  8bcb                 mov ecx, ebx
// 008eb514  e807fdffff           call 0x8eb220
// 008eb519  e980000000           jmp 0x8eb59e
// 008eb51e  3d325b0000           cmp eax, 0x5b32
// 008eb523  7563                 jne 0x8eb588
// 008eb525  8b13                 mov edx, dword ptr [ebx]
// 008eb527  8b420c               mov eax, dword ptr [edx + 0xc]
// 008eb52a  8bcb                 mov ecx, ebx
// 008eb52c  ffd0                 call eax
// 008eb52e  eb6e                 jmp 0x8eb59e
// 008eb530  3d00020000           cmp eax, 0x200
// 008eb535  7251                 jb 0x8eb588
// 008eb537  3d0a020000           cmp eax, 0x20a
// 008eb53c  774a                 ja 0x8eb588
// 008eb53e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008eb542  8b542440             mov edx, dword ptr [esp + 0x40]
// 008eb546  8d442410             lea eax, [esp + 0x10]
// 008eb54a  50                   push eax
// 008eb54b  57                   push edi
// 008eb54c  894c2418             mov dword ptr [esp + 0x18], ecx
// 008eb550  8954241c             mov dword ptr [esp + 0x1c], edx
// 008eb554  ff1534cc9800         call dword ptr [0x98cc34]
// 008eb55a  837e3000             cmp dword ptr [esi + 0x30], 0
// 008eb55e  7514                 jne 0x8eb574
// 008eb560  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008eb564  8b542410             mov edx, dword ptr [esp + 0x10]
// 008eb568  51                   push ecx
// 008eb569  52                   push edx
// 008eb56a  55                   push ebp
// 008eb56b  8bcb                 mov ecx, ebx
// 008eb56d  e8befaffff           call 0x8eb030
// 008eb572  eb2a                 jmp 0x8eb59e
// 008eb574  8b442414             mov eax, dword ptr [esp + 0x14]
// 008eb578  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008eb57c  50                   push eax
// 008eb57d  51                   push ecx
// 008eb57e  55                   push ebp
// 008eb57f  8bcb                 mov ecx, ebx
// 008eb581  e80afaffff           call 0x8eaf90
// 008eb586  eb16                 jmp 0x8eb59e
// 008eb588  8d542428             lea edx, [esp + 0x28]
// 008eb58c  52                   push edx
// 008eb58d  ff15d0c99800         call dword ptr [0x98c9d0]
// 008eb593  8d442428             lea eax, [esp + 0x28]
// 008eb597  50                   push eax
// 008eb598  ff1594ca9800         call dword ptr [0x98ca94]
// 008eb59e  ff1528cc9800         call dword ptr [0x98cc28]
// 008eb5a4  3bc7                 cmp eax, edi
// 008eb5a6  0f8424ffffff         je 0x8eb4d0
// 008eb5ac  eb0a                 jmp 0x8eb5b8
// 008eb5ae  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008eb5b2  51                   push ecx
// 008eb5b3  e84291f0ff           call 0x7f46fa
// 008eb5b8  8b2d84cc9800         mov ebp, dword ptr [0x98cc84]
// 008eb5be  8b442454             mov eax, dword ptr [esp + 0x54]
// 008eb5c2  ff4804               dec dword ptr [eax + 4]
// 008eb5c5  8b7618               mov esi, dword ptr [esi + 0x18]
// 008eb5c8  85f6                 test esi, esi
// 008eb5ca  7408                 je 0x8eb5d4
// 008eb5cc  56                   push esi
// 008eb5cd  57                   push edi
// 008eb5ce  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008eb5d4  8b5360               mov edx, dword ptr [ebx + 0x60]
// 008eb5d7  52                   push edx
// 008eb5d8  e87d82f0ff           call 0x7f385a
// 008eb5dd  83c404               add esp, 4
// 008eb5e0  57                   push edi
// 008eb5e1  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 008eb5e8  ffd5                 call ebp
// 008eb5ea  85c0                 test eax, eax
// 008eb5ec  7434                 je 0x8eb622
// 008eb5ee  8d44244c             lea eax, [esp + 0x4c]
// 008eb5f2  50                   push eax
// 008eb5f3  ff1538cc9800         call dword ptr [0x98cc38]
// 008eb5f9  8d4c244c             lea ecx, [esp + 0x4c]
// 008eb5fd  51                   push ecx
// 008eb5fe  57                   push edi
// 008eb5ff  ff1534cc9800         call dword ptr [0x98cc34]
// 008eb605  8b542450             mov edx, dword ptr [esp + 0x50]
// 008eb609  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008eb60d  52                   push edx
// 008eb60e  50                   push eax
// 008eb60f  8bcb                 mov ecx, ebx
// 008eb611  e86af7ffff           call 0x8ead80
// 008eb616  8b13                 mov edx, dword ptr [ebx]
// 008eb618  894358               mov dword ptr [ebx + 0x58], eax
// 008eb61b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008eb61e  8bcb                 mov ecx, ebx
// 008eb620  ffd0                 call eax
// 008eb622  57                   push edi
// 008eb623  ffd5                 call ebp
// 008eb625  85c0                 test eax, eax
// 008eb627  7472                 je 0x8eb69b
// 008eb629  8da42400000000       lea esp, [esp]
// 008eb630  837b6800             cmp dword ptr [ebx + 0x68], 0
// 008eb634  7465                 je 0x8eb69b
// 008eb636  6a00                 push 0
// 008eb638  6a00                 push 0
// 008eb63a  6a00                 push 0
// 008eb63c  8d4c2434             lea ecx, [esp + 0x34]
// 008eb640  51                   push ecx
// 008eb641  ff15b0ca9800         call dword ptr [0x98cab0]
// 008eb647  85c0                 test eax, eax
// 008eb649  7446                 je 0x8eb691
// 008eb64b  817c242c13010000     cmp dword ptr [esp + 0x2c], 0x113
// 008eb653  7515                 jne 0x8eb66a
// 008eb655  817c2430325b0000     cmp dword ptr [esp + 0x30], 0x5b32
// 008eb65d  750b                 jne 0x8eb66a
// 008eb65f  8b13                 mov edx, dword ptr [ebx]
// 008eb661  8b420c               mov eax, dword ptr [edx + 0xc]
// 008eb664  8bcb                 mov ecx, ebx
// 008eb666  ffd0                 call eax
// 008eb668  eb16                 jmp 0x8eb680
// 008eb66a  8d4c2428             lea ecx, [esp + 0x28]
// 008eb66e  51                   push ecx
// 008eb66f  ff15d0c99800         call dword ptr [0x98c9d0]
// 008eb675  8d542428             lea edx, [esp + 0x28]
// 008eb679  52                   push edx
// 008eb67a  ff1594ca9800         call dword ptr [0x98ca94]
// 008eb680  57                   push edi
// 008eb681  ffd5                 call ebp
// 008eb683  85c0                 test eax, eax
// 008eb685  75a9                 jne 0x8eb630
// 008eb687  5f                   pop edi
// 008eb688  5e                   pop esi
// 008eb689  5d                   pop ebp
// 008eb68a  5b                   pop ebx
// 008eb68b  83c434               add esp, 0x34
// 008eb68e  c21400               ret 0x14
// 008eb691  8b442430             mov eax, dword ptr [esp + 0x30]
// 008eb695  50                   push eax
// 008eb696  e85f90f0ff           call 0x7f46fa
// 008eb69b  5f                   pop edi
// 008eb69c  5e                   pop esi
// 008eb69d  5d                   pop ebp
// 008eb69e  5b                   pop ebx
// 008eb69f  83c434               add esp, 0x34
// 008eb6a2  c21400               ret 0x14
// copied from an identical function in another client (function ?PerformTrackInit@CXTPScrollBase@@QAEXPAUHWND__@@VCPoint@@PAUSCROLLBARPOSINFO@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPScrollBar.cpp