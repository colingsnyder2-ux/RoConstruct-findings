// roc 2012-06 00a6c5d0  unit: CXTPScrollBase  size: 1013 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c5d0
//
// 00a6c5d0  83ec34               sub esp, 0x34
// 00a6c5d3  53                   push ebx
// 00a6c5d4  55                   push ebp
// 00a6c5d5  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00a6c5d9  8bd9                 mov ebx, ecx
// 00a6c5db  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 00a6c5df  56                   push esi
// 00a6c5e0  57                   push edi
// 00a6c5e1  7504                 jne 0xa6c5e7
// 00a6c5e3  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00a6c5e7  6a38                 push 0x38
// 00a6c5e9  e82c5bf1ff           call 0x98211a
// 00a6c5ee  6a38                 push 0x38
// 00a6c5f0  8bf0                 mov esi, eax
// 00a6c5f2  6a00                 push 0
// 00a6c5f4  56                   push esi
// 00a6c5f5  e87a6df1ff           call 0x983374
// 00a6c5fa  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a6c5fe  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00a6c602  83c410               add esp, 0x10
// 00a6c605  c74614ffffffff       mov dword ptr [esi + 0x14], 0xffffffff
// 00a6c60c  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00a6c613  897e34               mov dword ptr [esi + 0x34], edi
// 00a6c616  89462c               mov dword ptr [esi + 0x2c], eax
// 00a6c619  68704e9800           push 0x984e70
// 00a6c61e  b958a0e500           mov ecx, 0xe5a058
// 00a6c623  897360               mov dword ptr [ebx + 0x60], esi
// 00a6c626  e853cf0200           call 0xa9957e
// 00a6c62b  89442454             mov dword ptr [esp + 0x54], eax
// 00a6c62f  85c0                 test eax, eax
// 00a6c631  7505                 jne 0xa6c638
// 00a6c633  e8885df1ff           call 0x9823c0
// 00a6c638  837f5800             cmp dword ptr [edi + 0x58], 0
// 00a6c63c  8d4c2418             lea ecx, [esp + 0x18]
// 00a6c640  8d44241c             lea eax, [esp + 0x1c]
// 00a6c644  7506                 jne 0xa6c64c
// 00a6c646  8bc8                 mov ecx, eax
// 00a6c648  8d442418             lea eax, [esp + 0x18]
// 00a6c64c  3b6f24               cmp ebp, dword ptr [edi + 0x24]
// 00a6c64f  8b5718               mov edx, dword ptr [edi + 0x18]
// 00a6c652  8911                 mov dword ptr [ecx], edx
// 00a6c654  8b5710               mov edx, dword ptr [edi + 0x10]
// 00a6c657  8910                 mov dword ptr [eax], edx
// 00a6c659  8b571c               mov edx, dword ptr [edi + 0x1c]
// 00a6c65c  895108               mov dword ptr [ecx + 8], edx
// 00a6c65f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00a6c662  894808               mov dword ptr [eax + 8], ecx
// 00a6c665  7d16                 jge 0xa6c67d
// 00a6c667  c747543c000000       mov dword ptr [edi + 0x54], 0x3c
// 00a6c66e  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00a6c675  8b5724               mov edx, dword ptr [edi + 0x24]
// 00a6c678  895008               mov dword ptr [eax + 8], edx
// 00a6c67b  eb5c                 jmp 0xa6c6d9
// 00a6c67d  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 00a6c680  7c15                 jl 0xa6c697
// 00a6c682  c747543d000000       mov dword ptr [edi + 0x54], 0x3d
// 00a6c689  c7461401000000       mov dword ptr [esi + 0x14], 1
// 00a6c690  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00a6c693  8908                 mov dword ptr [eax], ecx
// 00a6c695  eb42                 jmp 0xa6c6d9
// 00a6c697  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 00a6c69a  7d16                 jge 0xa6c6b2
// 00a6c69c  c747543e000000       mov dword ptr [edi + 0x54], 0x3e
// 00a6c6a3  c7461402000000       mov dword ptr [esi + 0x14], 2
// 00a6c6aa  8b5724               mov edx, dword ptr [edi + 0x24]
// 00a6c6ad  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00a6c6b0  eb22                 jmp 0xa6c6d4
// 00a6c6b2  3b6f30               cmp ebp, dword ptr [edi + 0x30]
// 00a6c6b5  7d09                 jge 0xa6c6c0
// 00a6c6b7  c7475440000000       mov dword ptr [edi + 0x54], 0x40
// 00a6c6be  eb3d                 jmp 0xa6c6fd
// 00a6c6c0  c747543f000000       mov dword ptr [edi + 0x54], 0x3f
// 00a6c6c7  c7461403000000       mov dword ptr [esi + 0x14], 3
// 00a6c6ce  8b5730               mov edx, dword ptr [edi + 0x30]
// 00a6c6d1  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00a6c6d4  894808               mov dword ptr [eax + 8], ecx
// 00a6c6d7  8910                 mov dword ptr [eax], edx
// 00a6c6d9  837c245800           cmp dword ptr [esp + 0x58], 0
// 00a6c6de  0f849a000000         je 0xa6c77e
// 00a6c6e4  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a6c6e7  85c0                 test eax, eax
// 00a6c6e9  0f848f000000         je 0xa6c77e
// 00a6c6ef  83f801               cmp eax, 1
// 00a6c6f2  0f8486000000         je 0xa6c77e
// 00a6c6f8  83f804               cmp eax, 4
// 00a6c6fb  7474                 je 0xa6c771
// 00a6c6fd  8b5728               mov edx, dword ptr [edi + 0x28]
// 00a6c700  2b5724               sub edx, dword ptr [edi + 0x24]
// 00a6c703  3b5720               cmp edx, dword ptr [edi + 0x20]
// 00a6c706  7e4c                 jle 0xa6c754
// 00a6c708  56                   push esi
// 00a6c709  8bcb                 mov ecx, ebx
// 00a6c70b  c7461404000000       mov dword ptr [esi + 0x14], 4
// 00a6c712  e859fdffff           call 0xa6c470
// 00a6c717  8b4734               mov eax, dword ptr [edi + 0x34]
// 00a6c71a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a6c71e  89472c               mov dword ptr [edi + 0x2c], eax
// 00a6c721  894620               mov dword ptr [esi + 0x20], eax
// 00a6c724  8b470c               mov eax, dword ptr [edi + 0xc]
// 00a6c727  894624               mov dword ptr [esi + 0x24], eax
// 00a6c72a  894628               mov dword ptr [esi + 0x28], eax
// 00a6c72d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00a6c730  2bc5                 sub eax, ebp
// 00a6c732  51                   push ecx
// 00a6c733  89461c               mov dword ptr [esi + 0x1c], eax
// 00a6c736  c7463001000000       mov dword ptr [esi + 0x30], 1
// 00a6c73d  ff15803ab200         call dword ptr [0xb23a80]
// 00a6c743  8b4624               mov eax, dword ptr [esi + 0x24]
// 00a6c746  8b13                 mov edx, dword ptr [ebx]
// 00a6c748  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a6c74b  50                   push eax
// 00a6c74c  6a05                 push 5
// 00a6c74e  8bcb                 mov ecx, ebx
// 00a6c750  ffd2                 call edx
// 00a6c752  eb85                 jmp 0xa6c6d9
// 00a6c754  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00a6c757  50                   push eax
// 00a6c758  e8b759f1ff           call 0x982114
// 00a6c75d  83c404               add esp, 4
// 00a6c760  5f                   pop edi
// 00a6c761  5e                   pop esi
// 00a6c762  5d                   pop ebp
// 00a6c763  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 00a6c76a  5b                   pop ebx
// 00a6c76b  83c434               add esp, 0x34
// 00a6c76e  c21400               ret 0x14
// 00a6c771  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a6c774  99                   cdq 
// 00a6c775  2bc2                 sub eax, edx
// 00a6c777  d1f8                 sar eax, 1
// 00a6c779  f7d8                 neg eax
// 00a6c77b  89461c               mov dword ptr [esi + 0x1c], eax
// 00a6c77e  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00a6c782  57                   push edi
// 00a6c783  ff15803ab200         call dword ptr [0xb23a80]
// 00a6c789  837e1404             cmp dword ptr [esi + 0x14], 4
// 00a6c78d  740f                 je 0xa6c79e
// 00a6c78f  8d4c2418             lea ecx, [esp + 0x18]
// 00a6c793  51                   push ecx
// 00a6c794  8d5604               lea edx, [esi + 4]
// 00a6c797  52                   push edx
// 00a6c798  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a6c79e  837e3000             cmp dword ptr [esi + 0x30], 0
// 00a6c7a2  7518                 jne 0xa6c7bc
// 00a6c7a4  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a6c7a8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a6c7ac  50                   push eax
// 00a6c7ad  51                   push ecx
// 00a6c7ae  6801020000           push 0x201
// 00a6c7b3  8bcb                 mov ecx, ebx
// 00a6c7b5  e896fbffff           call 0xa6c350
// 00a6c7ba  eb1f                 jmp 0xa6c7db
// 00a6c7bc  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a6c7c0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a6c7c4  52                   push edx
// 00a6c7c5  50                   push eax
// 00a6c7c6  6801020000           push 0x201
// 00a6c7cb  8bcb                 mov ecx, ebx
// 00a6c7cd  e8defaffff           call 0xa6c2b0
// 00a6c7d2  8b13                 mov edx, dword ptr [ebx]
// 00a6c7d4  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a6c7d7  8bcb                 mov ecx, ebx
// 00a6c7d9  ffd0                 call eax
// 00a6c7db  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a6c7df  ff4004               inc dword ptr [eax + 4]
// 00a6c7e2  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a6c7e8  3bc7                 cmp eax, edi
// 00a6c7ea  0f85e8000000         jne 0xa6c8d8
// 00a6c7f0  6a00                 push 0
// 00a6c7f2  6a00                 push 0
// 00a6c7f4  6a00                 push 0
// 00a6c7f6  8d4c2434             lea ecx, [esp + 0x34]
// 00a6c7fa  51                   push ecx
// 00a6c7fb  ff15343bb200         call dword ptr [0xb23b34]
// 00a6c801  85c0                 test eax, eax
// 00a6c803  0f84c5000000         je 0xa6c8ce
// 00a6c809  8b2d143bb200         mov ebp, dword ptr [0xb23b14]
// 00a6c80f  57                   push edi
// 00a6c810  ffd5                 call ebp
// 00a6c812  85c0                 test eax, eax
// 00a6c814  0f84c4000000         je 0xa6c8de
// 00a6c81a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a6c81e  8be8                 mov ebp, eax
// 00a6c820  3d13010000           cmp eax, 0x113
// 00a6c825  7529                 jne 0xa6c850
// 00a6c827  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a6c82b  3d315b0000           cmp eax, 0x5b31
// 00a6c830  750c                 jne 0xa6c83e
// 00a6c832  8bcb                 mov ecx, ebx
// 00a6c834  e807fdffff           call 0xa6c540
// 00a6c839  e980000000           jmp 0xa6c8be
// 00a6c83e  3d325b0000           cmp eax, 0x5b32
// 00a6c843  7563                 jne 0xa6c8a8
// 00a6c845  8b13                 mov edx, dword ptr [ebx]
// 00a6c847  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a6c84a  8bcb                 mov ecx, ebx
// 00a6c84c  ffd0                 call eax
// 00a6c84e  eb6e                 jmp 0xa6c8be
// 00a6c850  3d00020000           cmp eax, 0x200
// 00a6c855  7251                 jb 0xa6c8a8
// 00a6c857  3d0a020000           cmp eax, 0x20a
// 00a6c85c  774a                 ja 0xa6c8a8
// 00a6c85e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a6c862  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a6c866  8d442410             lea eax, [esp + 0x10]
// 00a6c86a  50                   push eax
// 00a6c86b  57                   push edi
// 00a6c86c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a6c870  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a6c874  ff15883ab200         call dword ptr [0xb23a88]
// 00a6c87a  837e3000             cmp dword ptr [esi + 0x30], 0
// 00a6c87e  7514                 jne 0xa6c894
// 00a6c880  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a6c884  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a6c888  51                   push ecx
// 00a6c889  52                   push edx
// 00a6c88a  55                   push ebp
// 00a6c88b  8bcb                 mov ecx, ebx
// 00a6c88d  e8befaffff           call 0xa6c350
// 00a6c892  eb2a                 jmp 0xa6c8be
// 00a6c894  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a6c898  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6c89c  50                   push eax
// 00a6c89d  51                   push ecx
// 00a6c89e  55                   push ebp
// 00a6c89f  8bcb                 mov ecx, ebx
// 00a6c8a1  e80afaffff           call 0xa6c2b0
// 00a6c8a6  eb16                 jmp 0xa6c8be
// 00a6c8a8  8d542428             lea edx, [esp + 0x28]
// 00a6c8ac  52                   push edx
// 00a6c8ad  ff15a83ab200         call dword ptr [0xb23aa8]
// 00a6c8b3  8d442428             lea eax, [esp + 0x28]
// 00a6c8b7  50                   push eax
// 00a6c8b8  ff15a43ab200         call dword ptr [0xb23aa4]
// 00a6c8be  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a6c8c4  3bc7                 cmp eax, edi
// 00a6c8c6  0f8424ffffff         je 0xa6c7f0
// 00a6c8cc  eb0a                 jmp 0xa6c8d8
// 00a6c8ce  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a6c8d2  51                   push ecx
// 00a6c8d3  e8f4cf0200           call 0xa998cc
// 00a6c8d8  8b2d143bb200         mov ebp, dword ptr [0xb23b14]
// 00a6c8de  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a6c8e2  ff4804               dec dword ptr [eax + 4]
// 00a6c8e5  8b7618               mov esi, dword ptr [esi + 0x18]
// 00a6c8e8  85f6                 test esi, esi
// 00a6c8ea  7408                 je 0xa6c8f4
// 00a6c8ec  56                   push esi
// 00a6c8ed  57                   push edi
// 00a6c8ee  ff15083cb200         call dword ptr [0xb23c08]
// 00a6c8f4  8b5360               mov edx, dword ptr [ebx + 0x60]
// 00a6c8f7  52                   push edx
// 00a6c8f8  e81758f1ff           call 0x982114
// 00a6c8fd  83c404               add esp, 4
// 00a6c900  57                   push edi
// 00a6c901  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 00a6c908  ffd5                 call ebp
// 00a6c90a  85c0                 test eax, eax
// 00a6c90c  7434                 je 0xa6c942
// 00a6c90e  8d44244c             lea eax, [esp + 0x4c]
// 00a6c912  50                   push eax
// 00a6c913  ff158c3ab200         call dword ptr [0xb23a8c]
// 00a6c919  8d4c244c             lea ecx, [esp + 0x4c]
// 00a6c91d  51                   push ecx
// 00a6c91e  57                   push edi
// 00a6c91f  ff15883ab200         call dword ptr [0xb23a88]
// 00a6c925  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a6c929  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a6c92d  52                   push edx
// 00a6c92e  50                   push eax
// 00a6c92f  8bcb                 mov ecx, ebx
// 00a6c931  e86af7ffff           call 0xa6c0a0
// 00a6c936  8b13                 mov edx, dword ptr [ebx]
// 00a6c938  894358               mov dword ptr [ebx + 0x58], eax
// 00a6c93b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a6c93e  8bcb                 mov ecx, ebx
// 00a6c940  ffd0                 call eax
// 00a6c942  57                   push edi
// 00a6c943  ffd5                 call ebp
// 00a6c945  85c0                 test eax, eax
// 00a6c947  7472                 je 0xa6c9bb
// 00a6c949  8da42400000000       lea esp, [esp]
// 00a6c950  837b6800             cmp dword ptr [ebx + 0x68], 0
// 00a6c954  7465                 je 0xa6c9bb
// 00a6c956  6a00                 push 0
// 00a6c958  6a00                 push 0
// 00a6c95a  6a00                 push 0
// 00a6c95c  8d4c2434             lea ecx, [esp + 0x34]
// 00a6c960  51                   push ecx
// 00a6c961  ff15343bb200         call dword ptr [0xb23b34]
// 00a6c967  85c0                 test eax, eax
// 00a6c969  7446                 je 0xa6c9b1
// 00a6c96b  817c242c13010000     cmp dword ptr [esp + 0x2c], 0x113
// 00a6c973  7515                 jne 0xa6c98a
// 00a6c975  817c2430325b0000     cmp dword ptr [esp + 0x30], 0x5b32
// 00a6c97d  750b                 jne 0xa6c98a
// 00a6c97f  8b13                 mov edx, dword ptr [ebx]
// 00a6c981  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a6c984  8bcb                 mov ecx, ebx
// 00a6c986  ffd0                 call eax
// 00a6c988  eb16                 jmp 0xa6c9a0
// 00a6c98a  8d4c2428             lea ecx, [esp + 0x28]
// 00a6c98e  51                   push ecx
// 00a6c98f  ff15a83ab200         call dword ptr [0xb23aa8]
// 00a6c995  8d542428             lea edx, [esp + 0x28]
// 00a6c999  52                   push edx
// 00a6c99a  ff15a43ab200         call dword ptr [0xb23aa4]
// 00a6c9a0  57                   push edi
// 00a6c9a1  ffd5                 call ebp
// 00a6c9a3  85c0                 test eax, eax
// 00a6c9a5  75a9                 jne 0xa6c950
// 00a6c9a7  5f                   pop edi
// 00a6c9a8  5e                   pop esi
// 00a6c9a9  5d                   pop ebp
// 00a6c9aa  5b                   pop ebx
// 00a6c9ab  83c434               add esp, 0x34
// 00a6c9ae  c21400               ret 0x14
// 00a6c9b1  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a6c9b5  50                   push eax
// 00a6c9b6  e811cf0200           call 0xa998cc
// 00a6c9bb  5f                   pop edi
// 00a6c9bc  5e                   pop esi
// 00a6c9bd  5d                   pop ebp
// 00a6c9be  5b                   pop ebx
// 00a6c9bf  83c434               add esp, 0x34
// 00a6c9c2  c21400               ret 0x14
// copied from an identical function in another client (function ?PerformTrackInit@CXTPScrollBase@@QAEXPAUHWND__@@VCPoint@@PAUSCROLLBARPOSINFO@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPScrollBar.cpp