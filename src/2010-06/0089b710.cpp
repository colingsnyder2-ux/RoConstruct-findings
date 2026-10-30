// roc 2010-06 0089b710  unit: CXTPScrollBase  size: 1013 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089b710
//
// 0089b710  83ec34               sub esp, 0x34
// 0089b713  53                   push ebx
// 0089b714  55                   push ebp
// 0089b715  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0089b719  8bd9                 mov ebx, ecx
// 0089b71b  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 0089b71f  56                   push esi
// 0089b720  57                   push edi
// 0089b721  7504                 jne 0x89b727
// 0089b723  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0089b727  6a38                 push 0x38
// 0089b729  e872c2f0ff           call 0x7a79a0
// 0089b72e  6a38                 push 0x38
// 0089b730  8bf0                 mov esi, eax
// 0089b732  6a00                 push 0
// 0089b734  56                   push esi
// 0089b735  e8aad4f0ff           call 0x7a8be4
// 0089b73a  8b442458             mov eax, dword ptr [esp + 0x58]
// 0089b73e  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 0089b742  83c410               add esp, 0x10
// 0089b745  c74614ffffffff       mov dword ptr [esi + 0x14], 0xffffffff
// 0089b74c  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0089b753  897e34               mov dword ptr [esi + 0x34], edi
// 0089b756  89462c               mov dword ptr [esi + 0x2c], eax
// 0089b759  68e0a57a00           push 0x7aa5e0
// 0089b75e  b90062c200           mov ecx, 0xc26200
// 0089b763  897360               mov dword ptr [ebx + 0x60], esi
// 0089b766  e80d160e00           call 0x97cd78
// 0089b76b  89442454             mov dword ptr [esp + 0x54], eax
// 0089b76f  85c0                 test eax, eax
// 0089b771  7505                 jne 0x89b778
// 0089b773  e8d4c4f0ff           call 0x7a7c4c
// 0089b778  837f5800             cmp dword ptr [edi + 0x58], 0
// 0089b77c  8d4c2418             lea ecx, [esp + 0x18]
// 0089b780  8d44241c             lea eax, [esp + 0x1c]
// 0089b784  7506                 jne 0x89b78c
// 0089b786  8bc8                 mov ecx, eax
// 0089b788  8d442418             lea eax, [esp + 0x18]
// 0089b78c  3b6f24               cmp ebp, dword ptr [edi + 0x24]
// 0089b78f  8b5718               mov edx, dword ptr [edi + 0x18]
// 0089b792  8911                 mov dword ptr [ecx], edx
// 0089b794  8b5710               mov edx, dword ptr [edi + 0x10]
// 0089b797  8910                 mov dword ptr [eax], edx
// 0089b799  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0089b79c  895108               mov dword ptr [ecx + 8], edx
// 0089b79f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0089b7a2  894808               mov dword ptr [eax + 8], ecx
// 0089b7a5  7d16                 jge 0x89b7bd
// 0089b7a7  c747543c000000       mov dword ptr [edi + 0x54], 0x3c
// 0089b7ae  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0089b7b5  8b5724               mov edx, dword ptr [edi + 0x24]
// 0089b7b8  895008               mov dword ptr [eax + 8], edx
// 0089b7bb  eb5c                 jmp 0x89b819
// 0089b7bd  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 0089b7c0  7c15                 jl 0x89b7d7
// 0089b7c2  c747543d000000       mov dword ptr [edi + 0x54], 0x3d
// 0089b7c9  c7461401000000       mov dword ptr [esi + 0x14], 1
// 0089b7d0  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0089b7d3  8908                 mov dword ptr [eax], ecx
// 0089b7d5  eb42                 jmp 0x89b819
// 0089b7d7  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 0089b7da  7d16                 jge 0x89b7f2
// 0089b7dc  c747543e000000       mov dword ptr [edi + 0x54], 0x3e
// 0089b7e3  c7461402000000       mov dword ptr [esi + 0x14], 2
// 0089b7ea  8b5724               mov edx, dword ptr [edi + 0x24]
// 0089b7ed  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0089b7f0  eb22                 jmp 0x89b814
// 0089b7f2  3b6f30               cmp ebp, dword ptr [edi + 0x30]
// 0089b7f5  7d09                 jge 0x89b800
// 0089b7f7  c7475440000000       mov dword ptr [edi + 0x54], 0x40
// 0089b7fe  eb3d                 jmp 0x89b83d
// 0089b800  c747543f000000       mov dword ptr [edi + 0x54], 0x3f
// 0089b807  c7461403000000       mov dword ptr [esi + 0x14], 3
// 0089b80e  8b5730               mov edx, dword ptr [edi + 0x30]
// 0089b811  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0089b814  894808               mov dword ptr [eax + 8], ecx
// 0089b817  8910                 mov dword ptr [eax], edx
// 0089b819  837c245800           cmp dword ptr [esp + 0x58], 0
// 0089b81e  0f849a000000         je 0x89b8be
// 0089b824  8b4614               mov eax, dword ptr [esi + 0x14]
// 0089b827  85c0                 test eax, eax
// 0089b829  0f848f000000         je 0x89b8be
// 0089b82f  83f801               cmp eax, 1
// 0089b832  0f8486000000         je 0x89b8be
// 0089b838  83f804               cmp eax, 4
// 0089b83b  7474                 je 0x89b8b1
// 0089b83d  8b5728               mov edx, dword ptr [edi + 0x28]
// 0089b840  2b5724               sub edx, dword ptr [edi + 0x24]
// 0089b843  3b5720               cmp edx, dword ptr [edi + 0x20]
// 0089b846  7e4c                 jle 0x89b894
// 0089b848  56                   push esi
// 0089b849  8bcb                 mov ecx, ebx
// 0089b84b  c7461404000000       mov dword ptr [esi + 0x14], 4
// 0089b852  e859fdffff           call 0x89b5b0
// 0089b857  8b4734               mov eax, dword ptr [edi + 0x34]
// 0089b85a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089b85e  89472c               mov dword ptr [edi + 0x2c], eax
// 0089b861  894620               mov dword ptr [esi + 0x20], eax
// 0089b864  8b470c               mov eax, dword ptr [edi + 0xc]
// 0089b867  894624               mov dword ptr [esi + 0x24], eax
// 0089b86a  894628               mov dword ptr [esi + 0x28], eax
// 0089b86d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0089b870  2bc5                 sub eax, ebp
// 0089b872  51                   push ecx
// 0089b873  89461c               mov dword ptr [esi + 0x1c], eax
// 0089b876  c7463001000000       mov dword ptr [esi + 0x30], 1
// 0089b87d  ff1580bc9e00         call dword ptr [0x9ebc80]
// 0089b883  8b4624               mov eax, dword ptr [esi + 0x24]
// 0089b886  8b13                 mov edx, dword ptr [ebx]
// 0089b888  8b5218               mov edx, dword ptr [edx + 0x18]
// 0089b88b  50                   push eax
// 0089b88c  6a05                 push 5
// 0089b88e  8bcb                 mov ecx, ebx
// 0089b890  ffd2                 call edx
// 0089b892  eb85                 jmp 0x89b819
// 0089b894  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0089b897  50                   push eax
// 0089b898  e8fdc0f0ff           call 0x7a799a
// 0089b89d  83c404               add esp, 4
// 0089b8a0  5f                   pop edi
// 0089b8a1  5e                   pop esi
// 0089b8a2  5d                   pop ebp
// 0089b8a3  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 0089b8aa  5b                   pop ebx
// 0089b8ab  83c434               add esp, 0x34
// 0089b8ae  c21400               ret 0x14
// 0089b8b1  8b4720               mov eax, dword ptr [edi + 0x20]
// 0089b8b4  99                   cdq 
// 0089b8b5  2bc2                 sub eax, edx
// 0089b8b7  d1f8                 sar eax, 1
// 0089b8b9  f7d8                 neg eax
// 0089b8bb  89461c               mov dword ptr [esi + 0x1c], eax
// 0089b8be  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0089b8c2  57                   push edi
// 0089b8c3  ff1580bc9e00         call dword ptr [0x9ebc80]
// 0089b8c9  837e1404             cmp dword ptr [esi + 0x14], 4
// 0089b8cd  740f                 je 0x89b8de
// 0089b8cf  8d4c2418             lea ecx, [esp + 0x18]
// 0089b8d3  51                   push ecx
// 0089b8d4  8d5604               lea edx, [esi + 4]
// 0089b8d7  52                   push edx
// 0089b8d8  ff1548bc9e00         call dword ptr [0x9ebc48]
// 0089b8de  837e3000             cmp dword ptr [esi + 0x30], 0
// 0089b8e2  7518                 jne 0x89b8fc
// 0089b8e4  8b442450             mov eax, dword ptr [esp + 0x50]
// 0089b8e8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089b8ec  50                   push eax
// 0089b8ed  51                   push ecx
// 0089b8ee  6801020000           push 0x201
// 0089b8f3  8bcb                 mov ecx, ebx
// 0089b8f5  e896fbffff           call 0x89b490
// 0089b8fa  eb1f                 jmp 0x89b91b
// 0089b8fc  8b542450             mov edx, dword ptr [esp + 0x50]
// 0089b900  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0089b904  52                   push edx
// 0089b905  50                   push eax
// 0089b906  6801020000           push 0x201
// 0089b90b  8bcb                 mov ecx, ebx
// 0089b90d  e8defaffff           call 0x89b3f0
// 0089b912  8b13                 mov edx, dword ptr [ebx]
// 0089b914  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0089b917  8bcb                 mov ecx, ebx
// 0089b919  ffd0                 call eax
// 0089b91b  8b442454             mov eax, dword ptr [esp + 0x54]
// 0089b91f  ff4004               inc dword ptr [eax + 4]
// 0089b922  ff1584bc9e00         call dword ptr [0x9ebc84]
// 0089b928  3bc7                 cmp eax, edi
// 0089b92a  0f85e8000000         jne 0x89ba18
// 0089b930  6a00                 push 0
// 0089b932  6a00                 push 0
// 0089b934  6a00                 push 0
// 0089b936  8d4c2434             lea ecx, [esp + 0x34]
// 0089b93a  51                   push ecx
// 0089b93b  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 0089b941  85c0                 test eax, eax
// 0089b943  0f84c5000000         je 0x89ba0e
// 0089b949  8b2d28bc9e00         mov ebp, dword ptr [0x9ebc28]
// 0089b94f  57                   push edi
// 0089b950  ffd5                 call ebp
// 0089b952  85c0                 test eax, eax
// 0089b954  0f84c4000000         je 0x89ba1e
// 0089b95a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089b95e  8be8                 mov ebp, eax
// 0089b960  3d13010000           cmp eax, 0x113
// 0089b965  7529                 jne 0x89b990
// 0089b967  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089b96b  3d315b0000           cmp eax, 0x5b31
// 0089b970  750c                 jne 0x89b97e
// 0089b972  8bcb                 mov ecx, ebx
// 0089b974  e807fdffff           call 0x89b680
// 0089b979  e980000000           jmp 0x89b9fe
// 0089b97e  3d325b0000           cmp eax, 0x5b32
// 0089b983  7563                 jne 0x89b9e8
// 0089b985  8b13                 mov edx, dword ptr [ebx]
// 0089b987  8b420c               mov eax, dword ptr [edx + 0xc]
// 0089b98a  8bcb                 mov ecx, ebx
// 0089b98c  ffd0                 call eax
// 0089b98e  eb6e                 jmp 0x89b9fe
// 0089b990  3d00020000           cmp eax, 0x200
// 0089b995  7251                 jb 0x89b9e8
// 0089b997  3d0a020000           cmp eax, 0x20a
// 0089b99c  774a                 ja 0x89b9e8
// 0089b99e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089b9a2  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089b9a6  8d442410             lea eax, [esp + 0x10]
// 0089b9aa  50                   push eax
// 0089b9ab  57                   push edi
// 0089b9ac  894c2418             mov dword ptr [esp + 0x18], ecx
// 0089b9b0  8954241c             mov dword ptr [esp + 0x1c], edx
// 0089b9b4  ff1578bc9e00         call dword ptr [0x9ebc78]
// 0089b9ba  837e3000             cmp dword ptr [esi + 0x30], 0
// 0089b9be  7514                 jne 0x89b9d4
// 0089b9c0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089b9c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0089b9c8  51                   push ecx
// 0089b9c9  52                   push edx
// 0089b9ca  55                   push ebp
// 0089b9cb  8bcb                 mov ecx, ebx
// 0089b9cd  e8befaffff           call 0x89b490
// 0089b9d2  eb2a                 jmp 0x89b9fe
// 0089b9d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b9d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089b9dc  50                   push eax
// 0089b9dd  51                   push ecx
// 0089b9de  55                   push ebp
// 0089b9df  8bcb                 mov ecx, ebx
// 0089b9e1  e80afaffff           call 0x89b3f0
// 0089b9e6  eb16                 jmp 0x89b9fe
// 0089b9e8  8d542428             lea edx, [esp + 0x28]
// 0089b9ec  52                   push edx
// 0089b9ed  ff1504bc9e00         call dword ptr [0x9ebc04]
// 0089b9f3  8d442428             lea eax, [esp + 0x28]
// 0089b9f7  50                   push eax
// 0089b9f8  ff1508bc9e00         call dword ptr [0x9ebc08]
// 0089b9fe  ff1584bc9e00         call dword ptr [0x9ebc84]
// 0089ba04  3bc7                 cmp eax, edi
// 0089ba06  0f8424ffffff         je 0x89b930
// 0089ba0c  eb0a                 jmp 0x89ba18
// 0089ba0e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089ba12  51                   push ecx
// 0089ba13  e86a180e00           call 0x97d282
// 0089ba18  8b2d28bc9e00         mov ebp, dword ptr [0x9ebc28]
// 0089ba1e  8b442454             mov eax, dword ptr [esp + 0x54]
// 0089ba22  ff4804               dec dword ptr [eax + 4]
// 0089ba25  8b7618               mov esi, dword ptr [esi + 0x18]
// 0089ba28  85f6                 test esi, esi
// 0089ba2a  7408                 je 0x89ba34
// 0089ba2c  56                   push esi
// 0089ba2d  57                   push edi
// 0089ba2e  ff1560ba9e00         call dword ptr [0x9eba60]
// 0089ba34  8b5360               mov edx, dword ptr [ebx + 0x60]
// 0089ba37  52                   push edx
// 0089ba38  e85dbff0ff           call 0x7a799a
// 0089ba3d  83c404               add esp, 4
// 0089ba40  57                   push edi
// 0089ba41  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 0089ba48  ffd5                 call ebp
// 0089ba4a  85c0                 test eax, eax
// 0089ba4c  7434                 je 0x89ba82
// 0089ba4e  8d44244c             lea eax, [esp + 0x4c]
// 0089ba52  50                   push eax
// 0089ba53  ff1574bc9e00         call dword ptr [0x9ebc74]
// 0089ba59  8d4c244c             lea ecx, [esp + 0x4c]
// 0089ba5d  51                   push ecx
// 0089ba5e  57                   push edi
// 0089ba5f  ff1578bc9e00         call dword ptr [0x9ebc78]
// 0089ba65  8b542450             mov edx, dword ptr [esp + 0x50]
// 0089ba69  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0089ba6d  52                   push edx
// 0089ba6e  50                   push eax
// 0089ba6f  8bcb                 mov ecx, ebx
// 0089ba71  e86af7ffff           call 0x89b1e0
// 0089ba76  8b13                 mov edx, dword ptr [ebx]
// 0089ba78  894358               mov dword ptr [ebx + 0x58], eax
// 0089ba7b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0089ba7e  8bcb                 mov ecx, ebx
// 0089ba80  ffd0                 call eax
// 0089ba82  57                   push edi
// 0089ba83  ffd5                 call ebp
// 0089ba85  85c0                 test eax, eax
// 0089ba87  7472                 je 0x89bafb
// 0089ba89  8da42400000000       lea esp, [esp]
// 0089ba90  837b6800             cmp dword ptr [ebx + 0x68], 0
// 0089ba94  7465                 je 0x89bafb
// 0089ba96  6a00                 push 0
// 0089ba98  6a00                 push 0
// 0089ba9a  6a00                 push 0
// 0089ba9c  8d4c2434             lea ecx, [esp + 0x34]
// 0089baa0  51                   push ecx
// 0089baa1  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 0089baa7  85c0                 test eax, eax
// 0089baa9  7446                 je 0x89baf1
// 0089baab  817c242c13010000     cmp dword ptr [esp + 0x2c], 0x113
// 0089bab3  7515                 jne 0x89baca
// 0089bab5  817c2430325b0000     cmp dword ptr [esp + 0x30], 0x5b32
// 0089babd  750b                 jne 0x89baca
// 0089babf  8b13                 mov edx, dword ptr [ebx]
// 0089bac1  8b420c               mov eax, dword ptr [edx + 0xc]
// 0089bac4  8bcb                 mov ecx, ebx
// 0089bac6  ffd0                 call eax
// 0089bac8  eb16                 jmp 0x89bae0
// 0089baca  8d4c2428             lea ecx, [esp + 0x28]
// 0089bace  51                   push ecx
// 0089bacf  ff1504bc9e00         call dword ptr [0x9ebc04]
// 0089bad5  8d542428             lea edx, [esp + 0x28]
// 0089bad9  52                   push edx
// 0089bada  ff1508bc9e00         call dword ptr [0x9ebc08]
// 0089bae0  57                   push edi
// 0089bae1  ffd5                 call ebp
// 0089bae3  85c0                 test eax, eax
// 0089bae5  75a9                 jne 0x89ba90
// 0089bae7  5f                   pop edi
// 0089bae8  5e                   pop esi
// 0089bae9  5d                   pop ebp
// 0089baea  5b                   pop ebx
// 0089baeb  83c434               add esp, 0x34
// 0089baee  c21400               ret 0x14
// 0089baf1  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089baf5  50                   push eax
// 0089baf6  e887170e00           call 0x97d282
// 0089bafb  5f                   pop edi
// 0089bafc  5e                   pop esi
// 0089bafd  5d                   pop ebp
// 0089bafe  5b                   pop ebx
// 0089baff  83c434               add esp, 0x34
// 0089bb02  c21400               ret 0x14
// copied from an identical function in another client (function ?PerformTrackInit@CXTPScrollBase@@QAEXPAUHWND__@@VCPoint@@PAUSCROLLBARPOSINFO@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPScrollBar.cpp