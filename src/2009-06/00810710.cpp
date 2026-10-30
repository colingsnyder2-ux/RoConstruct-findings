// roc 2009-06 00810710  unit: CXTPScrollBase  size: 1013 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810710
//
// 00810710  83ec34               sub esp, 0x34
// 00810713  53                   push ebx
// 00810714  55                   push ebp
// 00810715  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00810719  8bd9                 mov ebx, ecx
// 0081071b  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 0081071f  56                   push esi
// 00810720  57                   push edi
// 00810721  7504                 jne 0x810727
// 00810723  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00810727  6a38                 push 0x38
// 00810729  e80a83f0ff           call 0x718a38
// 0081072e  6a38                 push 0x38
// 00810730  8bf0                 mov esi, eax
// 00810732  6a00                 push 0
// 00810734  56                   push esi
// 00810735  e83a95f0ff           call 0x719c74
// 0081073a  8b442458             mov eax, dword ptr [esp + 0x58]
// 0081073e  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00810742  83c410               add esp, 0x10
// 00810745  c74614ffffffff       mov dword ptr [esi + 0x14], 0xffffffff
// 0081074c  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00810753  897e34               mov dword ptr [esi + 0x34], edi
// 00810756  89462c               mov dword ptr [esi + 0x2c], eax
// 00810759  68f0b87100           push 0x71b8f0
// 0081075e  b99426a500           mov ecx, 0xa52694
// 00810763  897360               mov dword ptr [ebx + 0x60], esi
// 00810766  e895b70300           call 0x84bf00
// 0081076b  89442454             mov dword ptr [esp + 0x54], eax
// 0081076f  85c0                 test eax, eax
// 00810771  7505                 jne 0x810778
// 00810773  e86c85f0ff           call 0x718ce4
// 00810778  837f5800             cmp dword ptr [edi + 0x58], 0
// 0081077c  8d4c2418             lea ecx, [esp + 0x18]
// 00810780  8d44241c             lea eax, [esp + 0x1c]
// 00810784  7506                 jne 0x81078c
// 00810786  8bc8                 mov ecx, eax
// 00810788  8d442418             lea eax, [esp + 0x18]
// 0081078c  3b6f24               cmp ebp, dword ptr [edi + 0x24]
// 0081078f  8b5718               mov edx, dword ptr [edi + 0x18]
// 00810792  8911                 mov dword ptr [ecx], edx
// 00810794  8b5710               mov edx, dword ptr [edi + 0x10]
// 00810797  8910                 mov dword ptr [eax], edx
// 00810799  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0081079c  895108               mov dword ptr [ecx + 8], edx
// 0081079f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 008107a2  894808               mov dword ptr [eax + 8], ecx
// 008107a5  7d16                 jge 0x8107bd
// 008107a7  c747543c000000       mov dword ptr [edi + 0x54], 0x3c
// 008107ae  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008107b5  8b5724               mov edx, dword ptr [edi + 0x24]
// 008107b8  895008               mov dword ptr [eax + 8], edx
// 008107bb  eb5c                 jmp 0x810819
// 008107bd  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 008107c0  7c15                 jl 0x8107d7
// 008107c2  c747543d000000       mov dword ptr [edi + 0x54], 0x3d
// 008107c9  c7461401000000       mov dword ptr [esi + 0x14], 1
// 008107d0  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 008107d3  8908                 mov dword ptr [eax], ecx
// 008107d5  eb42                 jmp 0x810819
// 008107d7  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 008107da  7d16                 jge 0x8107f2
// 008107dc  c747543e000000       mov dword ptr [edi + 0x54], 0x3e
// 008107e3  c7461402000000       mov dword ptr [esi + 0x14], 2
// 008107ea  8b5724               mov edx, dword ptr [edi + 0x24]
// 008107ed  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008107f0  eb22                 jmp 0x810814
// 008107f2  3b6f30               cmp ebp, dword ptr [edi + 0x30]
// 008107f5  7d09                 jge 0x810800
// 008107f7  c7475440000000       mov dword ptr [edi + 0x54], 0x40
// 008107fe  eb3d                 jmp 0x81083d
// 00810800  c747543f000000       mov dword ptr [edi + 0x54], 0x3f
// 00810807  c7461403000000       mov dword ptr [esi + 0x14], 3
// 0081080e  8b5730               mov edx, dword ptr [edi + 0x30]
// 00810811  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00810814  894808               mov dword ptr [eax + 8], ecx
// 00810817  8910                 mov dword ptr [eax], edx
// 00810819  837c245800           cmp dword ptr [esp + 0x58], 0
// 0081081e  0f849a000000         je 0x8108be
// 00810824  8b4614               mov eax, dword ptr [esi + 0x14]
// 00810827  85c0                 test eax, eax
// 00810829  0f848f000000         je 0x8108be
// 0081082f  83f801               cmp eax, 1
// 00810832  0f8486000000         je 0x8108be
// 00810838  83f804               cmp eax, 4
// 0081083b  7474                 je 0x8108b1
// 0081083d  8b5728               mov edx, dword ptr [edi + 0x28]
// 00810840  2b5724               sub edx, dword ptr [edi + 0x24]
// 00810843  3b5720               cmp edx, dword ptr [edi + 0x20]
// 00810846  7e4c                 jle 0x810894
// 00810848  56                   push esi
// 00810849  8bcb                 mov ecx, ebx
// 0081084b  c7461404000000       mov dword ptr [esi + 0x14], 4
// 00810852  e859fdffff           call 0x8105b0
// 00810857  8b4734               mov eax, dword ptr [edi + 0x34]
// 0081085a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0081085e  89472c               mov dword ptr [edi + 0x2c], eax
// 00810861  894620               mov dword ptr [esi + 0x20], eax
// 00810864  8b470c               mov eax, dword ptr [edi + 0xc]
// 00810867  894624               mov dword ptr [esi + 0x24], eax
// 0081086a  894628               mov dword ptr [esi + 0x28], eax
// 0081086d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00810870  2bc5                 sub eax, ebp
// 00810872  51                   push ecx
// 00810873  89461c               mov dword ptr [esi + 0x1c], eax
// 00810876  c7463001000000       mov dword ptr [esi + 0x30], 1
// 0081087d  ff1538ee8900         call dword ptr [0x89ee38]
// 00810883  8b4624               mov eax, dword ptr [esi + 0x24]
// 00810886  8b13                 mov edx, dword ptr [ebx]
// 00810888  8b5218               mov edx, dword ptr [edx + 0x18]
// 0081088b  50                   push eax
// 0081088c  6a05                 push 5
// 0081088e  8bcb                 mov ecx, ebx
// 00810890  ffd2                 call edx
// 00810892  eb85                 jmp 0x810819
// 00810894  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00810897  50                   push eax
// 00810898  e89581f0ff           call 0x718a32
// 0081089d  83c404               add esp, 4
// 008108a0  5f                   pop edi
// 008108a1  5e                   pop esi
// 008108a2  5d                   pop ebp
// 008108a3  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 008108aa  5b                   pop ebx
// 008108ab  83c434               add esp, 0x34
// 008108ae  c21400               ret 0x14
// 008108b1  8b4720               mov eax, dword ptr [edi + 0x20]
// 008108b4  99                   cdq 
// 008108b5  2bc2                 sub eax, edx
// 008108b7  d1f8                 sar eax, 1
// 008108b9  f7d8                 neg eax
// 008108bb  89461c               mov dword ptr [esi + 0x1c], eax
// 008108be  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008108c2  57                   push edi
// 008108c3  ff1538ee8900         call dword ptr [0x89ee38]
// 008108c9  837e1404             cmp dword ptr [esi + 0x14], 4
// 008108cd  740f                 je 0x8108de
// 008108cf  8d4c2418             lea ecx, [esp + 0x18]
// 008108d3  51                   push ecx
// 008108d4  8d5604               lea edx, [esi + 4]
// 008108d7  52                   push edx
// 008108d8  ff1500ee8900         call dword ptr [0x89ee00]
// 008108de  837e3000             cmp dword ptr [esi + 0x30], 0
// 008108e2  7518                 jne 0x8108fc
// 008108e4  8b442450             mov eax, dword ptr [esp + 0x50]
// 008108e8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008108ec  50                   push eax
// 008108ed  51                   push ecx
// 008108ee  6801020000           push 0x201
// 008108f3  8bcb                 mov ecx, ebx
// 008108f5  e896fbffff           call 0x810490
// 008108fa  eb1f                 jmp 0x81091b
// 008108fc  8b542450             mov edx, dword ptr [esp + 0x50]
// 00810900  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00810904  52                   push edx
// 00810905  50                   push eax
// 00810906  6801020000           push 0x201
// 0081090b  8bcb                 mov ecx, ebx
// 0081090d  e8defaffff           call 0x8103f0
// 00810912  8b13                 mov edx, dword ptr [ebx]
// 00810914  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00810917  8bcb                 mov ecx, ebx
// 00810919  ffd0                 call eax
// 0081091b  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081091f  ff4004               inc dword ptr [eax + 4]
// 00810922  ff153cee8900         call dword ptr [0x89ee3c]
// 00810928  3bc7                 cmp eax, edi
// 0081092a  0f85e8000000         jne 0x810a18
// 00810930  6a00                 push 0
// 00810932  6a00                 push 0
// 00810934  6a00                 push 0
// 00810936  8d4c2434             lea ecx, [esp + 0x34]
// 0081093a  51                   push ecx
// 0081093b  ff15d8ee8900         call dword ptr [0x89eed8]
// 00810941  85c0                 test eax, eax
// 00810943  0f84c5000000         je 0x810a0e
// 00810949  8b2de0ed8900         mov ebp, dword ptr [0x89ede0]
// 0081094f  57                   push edi
// 00810950  ffd5                 call ebp
// 00810952  85c0                 test eax, eax
// 00810954  0f84c4000000         je 0x810a1e
// 0081095a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081095e  8be8                 mov ebp, eax
// 00810960  3d13010000           cmp eax, 0x113
// 00810965  7529                 jne 0x810990
// 00810967  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081096b  3d315b0000           cmp eax, 0x5b31
// 00810970  750c                 jne 0x81097e
// 00810972  8bcb                 mov ecx, ebx
// 00810974  e807fdffff           call 0x810680
// 00810979  e980000000           jmp 0x8109fe
// 0081097e  3d325b0000           cmp eax, 0x5b32
// 00810983  7563                 jne 0x8109e8
// 00810985  8b13                 mov edx, dword ptr [ebx]
// 00810987  8b420c               mov eax, dword ptr [edx + 0xc]
// 0081098a  8bcb                 mov ecx, ebx
// 0081098c  ffd0                 call eax
// 0081098e  eb6e                 jmp 0x8109fe
// 00810990  3d00020000           cmp eax, 0x200
// 00810995  7251                 jb 0x8109e8
// 00810997  3d0a020000           cmp eax, 0x20a
// 0081099c  774a                 ja 0x8109e8
// 0081099e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008109a2  8b542440             mov edx, dword ptr [esp + 0x40]
// 008109a6  8d442410             lea eax, [esp + 0x10]
// 008109aa  50                   push eax
// 008109ab  57                   push edi
// 008109ac  894c2418             mov dword ptr [esp + 0x18], ecx
// 008109b0  8954241c             mov dword ptr [esp + 0x1c], edx
// 008109b4  ff1530ee8900         call dword ptr [0x89ee30]
// 008109ba  837e3000             cmp dword ptr [esi + 0x30], 0
// 008109be  7514                 jne 0x8109d4
// 008109c0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008109c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008109c8  51                   push ecx
// 008109c9  52                   push edx
// 008109ca  55                   push ebp
// 008109cb  8bcb                 mov ecx, ebx
// 008109cd  e8befaffff           call 0x810490
// 008109d2  eb2a                 jmp 0x8109fe
// 008109d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 008109d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008109dc  50                   push eax
// 008109dd  51                   push ecx
// 008109de  55                   push ebp
// 008109df  8bcb                 mov ecx, ebx
// 008109e1  e80afaffff           call 0x8103f0
// 008109e6  eb16                 jmp 0x8109fe
// 008109e8  8d542428             lea edx, [esp + 0x28]
// 008109ec  52                   push edx
// 008109ed  ff1548ed8900         call dword ptr [0x89ed48]
// 008109f3  8d442428             lea eax, [esp + 0x28]
// 008109f7  50                   push eax
// 008109f8  ff154ced8900         call dword ptr [0x89ed4c]
// 008109fe  ff153cee8900         call dword ptr [0x89ee3c]
// 00810a04  3bc7                 cmp eax, edi
// 00810a06  0f8424ffffff         je 0x810930
// 00810a0c  eb0a                 jmp 0x810a18
// 00810a0e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00810a12  51                   push ecx
// 00810a13  e8ae8ef0ff           call 0x7198c6
// 00810a18  8b2de0ed8900         mov ebp, dword ptr [0x89ede0]
// 00810a1e  8b442454             mov eax, dword ptr [esp + 0x54]
// 00810a22  ff4804               dec dword ptr [eax + 4]
// 00810a25  8b7618               mov esi, dword ptr [esi + 0x18]
// 00810a28  85f6                 test esi, esi
// 00810a2a  7408                 je 0x810a34
// 00810a2c  56                   push esi
// 00810a2d  57                   push edi
// 00810a2e  ff1584ee8900         call dword ptr [0x89ee84]
// 00810a34  8b5360               mov edx, dword ptr [ebx + 0x60]
// 00810a37  52                   push edx
// 00810a38  e8f57ff0ff           call 0x718a32
// 00810a3d  83c404               add esp, 4
// 00810a40  57                   push edi
// 00810a41  c7436000000000       mov dword ptr [ebx + 0x60], 0
// 00810a48  ffd5                 call ebp
// 00810a4a  85c0                 test eax, eax
// 00810a4c  7434                 je 0x810a82
// 00810a4e  8d44244c             lea eax, [esp + 0x4c]
// 00810a52  50                   push eax
// 00810a53  ff152cee8900         call dword ptr [0x89ee2c]
// 00810a59  8d4c244c             lea ecx, [esp + 0x4c]
// 00810a5d  51                   push ecx
// 00810a5e  57                   push edi
// 00810a5f  ff1530ee8900         call dword ptr [0x89ee30]
// 00810a65  8b542450             mov edx, dword ptr [esp + 0x50]
// 00810a69  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00810a6d  52                   push edx
// 00810a6e  50                   push eax
// 00810a6f  8bcb                 mov ecx, ebx
// 00810a71  e86af7ffff           call 0x8101e0
// 00810a76  8b13                 mov edx, dword ptr [ebx]
// 00810a78  894358               mov dword ptr [ebx + 0x58], eax
// 00810a7b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00810a7e  8bcb                 mov ecx, ebx
// 00810a80  ffd0                 call eax
// 00810a82  57                   push edi
// 00810a83  ffd5                 call ebp
// 00810a85  85c0                 test eax, eax
// 00810a87  7472                 je 0x810afb
// 00810a89  8da42400000000       lea esp, [esp]
// 00810a90  837b6800             cmp dword ptr [ebx + 0x68], 0
// 00810a94  7465                 je 0x810afb
// 00810a96  6a00                 push 0
// 00810a98  6a00                 push 0
// 00810a9a  6a00                 push 0
// 00810a9c  8d4c2434             lea ecx, [esp + 0x34]
// 00810aa0  51                   push ecx
// 00810aa1  ff15d8ee8900         call dword ptr [0x89eed8]
// 00810aa7  85c0                 test eax, eax
// 00810aa9  7446                 je 0x810af1
// 00810aab  817c242c13010000     cmp dword ptr [esp + 0x2c], 0x113
// 00810ab3  7515                 jne 0x810aca
// 00810ab5  817c2430325b0000     cmp dword ptr [esp + 0x30], 0x5b32
// 00810abd  750b                 jne 0x810aca
// 00810abf  8b13                 mov edx, dword ptr [ebx]
// 00810ac1  8b420c               mov eax, dword ptr [edx + 0xc]
// 00810ac4  8bcb                 mov ecx, ebx
// 00810ac6  ffd0                 call eax
// 00810ac8  eb16                 jmp 0x810ae0
// 00810aca  8d4c2428             lea ecx, [esp + 0x28]
// 00810ace  51                   push ecx
// 00810acf  ff1548ed8900         call dword ptr [0x89ed48]
// 00810ad5  8d542428             lea edx, [esp + 0x28]
// 00810ad9  52                   push edx
// 00810ada  ff154ced8900         call dword ptr [0x89ed4c]
// 00810ae0  57                   push edi
// 00810ae1  ffd5                 call ebp
// 00810ae3  85c0                 test eax, eax
// 00810ae5  75a9                 jne 0x810a90
// 00810ae7  5f                   pop edi
// 00810ae8  5e                   pop esi
// 00810ae9  5d                   pop ebp
// 00810aea  5b                   pop ebx
// 00810aeb  83c434               add esp, 0x34
// 00810aee  c21400               ret 0x14
// 00810af1  8b442430             mov eax, dword ptr [esp + 0x30]
// 00810af5  50                   push eax
// 00810af6  e8cb8df0ff           call 0x7198c6
// 00810afb  5f                   pop edi
// 00810afc  5e                   pop esi
// 00810afd  5d                   pop ebp
// 00810afe  5b                   pop ebx
// 00810aff  83c434               add esp, 0x34
// 00810b02  c21400               ret 0x14
// copied from an identical function in another client (function ?PerformTrackInit@CXTPScrollBase@@QAEXPAUHWND__@@VCPoint@@PAUSCROLLBARPOSINFO@1@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPScrollBar.cpp