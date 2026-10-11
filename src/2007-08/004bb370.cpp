// roc 2007-08 004bb370  unit: RakPeer  size: 807 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bb370
//
// 004bb370  55                   push ebp
// 004bb371  8bec                 mov ebp, esp
// 004bb373  83ec24               sub esp, 0x24
// 004bb376  53                   push ebx
// 004bb377  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004bb37a  56                   push esi
// 004bb37b  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004bb37e  57                   push edi
// 004bb37f  b908000000           mov ecx, 8
// 004bb384  8d7ddc               lea edi, [ebp - 0x24]
// 004bb387  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb389  8b7508               mov esi, dword ptr [ebp + 8]
// 004bb38c  b908000000           mov ecx, 8
// 004bb391  8bfb                 mov edi, ebx
// 004bb393  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb395  bf00000080           mov edi, 0x80000000
// 004bb39a  857df8               test dword ptr [ebp - 8], edi
// 004bb39d  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004bb3a4  0f85c6010000         jne 0x4bb570
// 004bb3aa  8d45dc               lea eax, [ebp - 0x24]
// 004bb3ad  50                   push eax
// 004bb3ae  53                   push ebx
// 004bb3af  e8cce6ffff           call 0x4b9a80
// 004bb3b4  83c408               add esp, 8
// 004bb3b7  84c0                 test al, al
// 004bb3b9  0f84b1010000         je 0x4bb570
// 004bb3bf  b807000000           mov eax, 7
// 004bb3c4  833c8300             cmp dword ptr [ebx + eax*4], 0
// 004bb3c8  7505                 jne 0x4bb3cf
// 004bb3ca  83e801               sub eax, 1
// 004bb3cd  79f5                 jns 0x4bb3c4
// 004bb3cf  85c0                 test eax, eax
// 004bb3d1  8bc8                 mov ecx, eax
// 004bb3d3  7c2a                 jl 0x4bb3ff
// 004bb3d5  837c8ddc00           cmp dword ptr [ebp + ecx*4 - 0x24], 0
// 004bb3da  7505                 jne 0x4bb3e1
// 004bb3dc  83e901               sub ecx, 1
// 004bb3df  79f4                 jns 0x4bb3d5
// 004bb3e1  3bc1                 cmp eax, ecx
// 004bb3e3  741a                 je 0x4bb3ff
// 004bb3e5  2bc1                 sub eax, ecx
// 004bb3e7  c1e005               shl eax, 5
// 004bb3ea  8bf0                 mov esi, eax
// 004bb3ec  8d4ddc               lea ecx, [ebp - 0x24]
// 004bb3ef  56                   push esi
// 004bb3f0  51                   push ecx
// 004bb3f1  e8aae5ffff           call 0x4b99a0
// 004bb3f6  83c408               add esp, 8
// 004bb3f9  83c601               add esi, 1
// 004bb3fc  8975fc               mov dword ptr [ebp - 4], esi
// 004bb3ff  857df8               test dword ptr [ebp - 8], edi
// 004bb402  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 004bb405  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004bb408  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004bb40b  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004bb40e  0f85ac000000         jne 0x4bb4c0
// 004bb414  bb07000000           mov ebx, 7
// 004bb419  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004bb41c  8d642400             lea esp, [esp]
// 004bb420  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bb423  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 004bb426  8b5c9ddc             mov ebx, dword ptr [ebp + ebx*4 - 0x24]
// 004bb42a  3bfb                 cmp edi, ebx
// 004bb42c  7716                 ja 0x4bb444
// 004bb42e  0f828c000000         jb 0x4bb4c0
// 004bb434  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 004bb437  83eb01               sub ebx, 1
// 004bb43a  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004bb43d  79e1                 jns 0x4bb420
// 004bb43f  e97c000000           jmp 0x4bb4c0
// 004bb444  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004bb447  8bfb                 mov edi, ebx
// 004bb449  03db                 add ebx, ebx
// 004bb44b  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004bb44e  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004bb451  c1ef1f               shr edi, 0x1f
// 004bb454  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004bb457  03db                 add ebx, ebx
// 004bb459  0bdf                 or ebx, edi
// 004bb45b  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bb45e  895de0               mov dword ptr [ebp - 0x20], ebx
// 004bb461  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004bb464  c1ef1f               shr edi, 0x1f
// 004bb467  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004bb46a  03db                 add ebx, ebx
// 004bb46c  0bdf                 or ebx, edi
// 004bb46e  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bb471  c1ef1f               shr edi, 0x1f
// 004bb474  8345fc01             add dword ptr [ebp - 4], 1
// 004bb478  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004bb47b  8bdf                 mov ebx, edi
// 004bb47d  8bfe                 mov edi, esi
// 004bb47f  c1ef1f               shr edi, 0x1f
// 004bb482  03f6                 add esi, esi
// 004bb484  0bf3                 or esi, ebx
// 004bb486  8bda                 mov ebx, edx
// 004bb488  03d2                 add edx, edx
// 004bb48a  0bd7                 or edx, edi
// 004bb48c  c1eb1f               shr ebx, 0x1f
// 004bb48f  8bf9                 mov edi, ecx
// 004bb491  03c9                 add ecx, ecx
// 004bb493  0bcb                 or ecx, ebx
// 004bb495  c1ef1f               shr edi, 0x1f
// 004bb498  8bd8                 mov ebx, eax
// 004bb49a  03c0                 add eax, eax
// 004bb49c  0bc7                 or eax, edi
// 004bb49e  8b7df8               mov edi, dword ptr [ebp - 8]
// 004bb4a1  c1eb1f               shr ebx, 0x1f
// 004bb4a4  03ff                 add edi, edi
// 004bb4a6  0bfb                 or edi, ebx
// 004bb4a8  85ff                 test edi, edi
// 004bb4aa  8975e8               mov dword ptr [ebp - 0x18], esi
// 004bb4ad  8955ec               mov dword ptr [ebp - 0x14], edx
// 004bb4b0  894df0               mov dword ptr [ebp - 0x10], ecx
// 004bb4b3  8945f4               mov dword ptr [ebp - 0xc], eax
// 004bb4b6  897df8               mov dword ptr [ebp - 8], edi
// 004bb4b9  0f8955ffffff         jns 0x4bb414
// 004bb4bf  90                   nop 
// 004bb4c0  bf07000000           mov edi, 7
// 004bb4c5  897d0c               mov dword ptr [ebp + 0xc], edi
// 004bb4c8  eb06                 jmp 0x4bb4d0
// 004bb4ca  8d9b00000000         lea ebx, [ebx]
// 004bb4d0  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004bb4d3  8b1cbb               mov ebx, dword ptr [ebx + edi*4]
// 004bb4d6  8b7cbddc             mov edi, dword ptr [ebp + edi*4 - 0x24]
// 004bb4da  3bfb                 cmp edi, ebx
// 004bb4dc  771c                 ja 0x4bb4fa
// 004bb4de  720b                 jb 0x4bb4eb
// 004bb4e0  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bb4e3  83ef01               sub edi, 1
// 004bb4e6  897d0c               mov dword ptr [ebp + 0xc], edi
// 004bb4e9  79e5                 jns 0x4bb4d0
// 004bb4eb  837dfc00             cmp dword ptr [ebp - 4], 0
// 004bb4ef  0f849b010000         je 0x4bb690
// 004bb4f5  e997000000           jmp 0x4bb591
// 004bb4fa  8b5df8               mov ebx, dword ptr [ebp - 8]
// 004bb4fd  8bfb                 mov edi, ebx
// 004bb4ff  d1eb                 shr ebx, 1
// 004bb501  895df8               mov dword ptr [ebp - 8], ebx
// 004bb504  c1e71f               shl edi, 0x1f
// 004bb507  8bd8                 mov ebx, eax
// 004bb509  c1e31f               shl ebx, 0x1f
// 004bb50c  d1e8                 shr eax, 1
// 004bb50e  0bc7                 or eax, edi
// 004bb510  8bf9                 mov edi, ecx
// 004bb512  c1e71f               shl edi, 0x1f
// 004bb515  d1e9                 shr ecx, 1
// 004bb517  0bcb                 or ecx, ebx
// 004bb519  8bda                 mov ebx, edx
// 004bb51b  c1e31f               shl ebx, 0x1f
// 004bb51e  d1ea                 shr edx, 1
// 004bb520  0bd7                 or edx, edi
// 004bb522  8bfe                 mov edi, esi
// 004bb524  d1ee                 shr esi, 1
// 004bb526  0bf3                 or esi, ebx
// 004bb528  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004bb52b  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004bb52e  d1eb                 shr ebx, 1
// 004bb530  c1e71f               shl edi, 0x1f
// 004bb533  0bdf                 or ebx, edi
// 004bb535  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bb538  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004bb53b  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004bb53e  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004bb541  d1eb                 shr ebx, 1
// 004bb543  c1e71f               shl edi, 0x1f
// 004bb546  0bdf                 or ebx, edi
// 004bb548  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bb54b  895de0               mov dword ptr [ebp - 0x20], ebx
// 004bb54e  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004bb551  c1e71f               shl edi, 0x1f
// 004bb554  d1eb                 shr ebx, 1
// 004bb556  0bdf                 or ebx, edi
// 004bb558  836dfc01             sub dword ptr [ebp - 4], 1
// 004bb55c  8945f4               mov dword ptr [ebp - 0xc], eax
// 004bb55f  894df0               mov dword ptr [ebp - 0x10], ecx
// 004bb562  8955ec               mov dword ptr [ebp - 0x14], edx
// 004bb565  8975e8               mov dword ptr [ebp - 0x18], esi
// 004bb568  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004bb56b  e950ffffff           jmp 0x4bb4c0
// 004bb570  8d55dc               lea edx, [ebp - 0x24]
// 004bb573  53                   push ebx
// 004bb574  52                   push edx
// 004bb575  e806e5ffff           call 0x4b9a80
// 004bb57a  83c408               add esp, 8
// 004bb57d  84c0                 test al, al
// 004bb57f  0f850b010000         jne 0x4bb690
// 004bb585  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 004bb588  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004bb58b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004bb58e  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004bb591  836dfc01             sub dword ptr [ebp - 4], 1
// 004bb595  bf07000000           mov edi, 7
// 004bb59a  897d0c               mov dword ptr [ebp + 0xc], edi
// 004bb59d  8d4900               lea ecx, [ecx]
// 004bb5a0  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004bb5a3  8b1cbb               mov ebx, dword ptr [ebx + edi*4]
// 004bb5a6  8b7cbddc             mov edi, dword ptr [ebp + edi*4 - 0x24]
// 004bb5aa  3bfb                 cmp edi, ebx
// 004bb5ac  776b                 ja 0x4bb619
// 004bb5ae  720b                 jb 0x4bb5bb
// 004bb5b0  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bb5b3  83ef01               sub edi, 1
// 004bb5b6  897d0c               mov dword ptr [ebp + 0xc], edi
// 004bb5b9  79e5                 jns 0x4bb5a0
// 004bb5bb  8d45dc               lea eax, [ebp - 0x24]
// 004bb5be  894508               mov dword ptr [ebp + 8], eax
// 004bb5c1  c7450c01000000       mov dword ptr [ebp + 0xc], 1
// 004bb5c8  8b7508               mov esi, dword ptr [ebp + 8]
// 004bb5cb  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bb5ce  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004bb5d1  8b06                 mov eax, dword ptr [esi]
// 004bb5d3  33d2                 xor edx, edx
// 004bb5d5  2907                 sub dword ptr [edi], eax
// 004bb5d7  8b4604               mov eax, dword ptr [esi + 4]
// 004bb5da  194704               sbb dword ptr [edi + 4], eax
// 004bb5dd  8b4608               mov eax, dword ptr [esi + 8]
// 004bb5e0  194708               sbb dword ptr [edi + 8], eax
// 004bb5e3  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bb5e6  19470c               sbb dword ptr [edi + 0xc], eax
// 004bb5e9  e322                 jecxz 0x4bb60d
// 004bb5eb  42                   inc edx
// 004bb5ec  42                   inc edx
// 004bb5ed  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bb5f0  1904d7               sbb dword ptr [edi + edx*8], eax
// 004bb5f3  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bb5f7  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004bb5fb  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bb5ff  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004bb603  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bb607  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004bb60b  e2de                 loop 0x4bb5eb
// 004bb60d  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 004bb610  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004bb613  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004bb616  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004bb619  8b5df8               mov ebx, dword ptr [ebp - 8]
// 004bb61c  8bfb                 mov edi, ebx
// 004bb61e  d1eb                 shr ebx, 1
// 004bb620  895df8               mov dword ptr [ebp - 8], ebx
// 004bb623  c1e71f               shl edi, 0x1f
// 004bb626  8bd8                 mov ebx, eax
// 004bb628  c1e31f               shl ebx, 0x1f
// 004bb62b  d1e8                 shr eax, 1
// 004bb62d  0bc7                 or eax, edi
// 004bb62f  8bf9                 mov edi, ecx
// 004bb631  c1e71f               shl edi, 0x1f
// 004bb634  d1e9                 shr ecx, 1
// 004bb636  0bcb                 or ecx, ebx
// 004bb638  8bda                 mov ebx, edx
// 004bb63a  c1e31f               shl ebx, 0x1f
// 004bb63d  d1ea                 shr edx, 1
// 004bb63f  0bd7                 or edx, edi
// 004bb641  8bfe                 mov edi, esi
// 004bb643  d1ee                 shr esi, 1
// 004bb645  0bf3                 or esi, ebx
// 004bb647  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004bb64a  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004bb64d  d1eb                 shr ebx, 1
// 004bb64f  c1e71f               shl edi, 0x1f
// 004bb652  0bdf                 or ebx, edi
// 004bb654  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bb657  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004bb65a  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004bb65d  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004bb660  d1eb                 shr ebx, 1
// 004bb662  c1e71f               shl edi, 0x1f
// 004bb665  0bdf                 or ebx, edi
// 004bb667  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bb66a  895de0               mov dword ptr [ebp - 0x20], ebx
// 004bb66d  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004bb670  c1e71f               shl edi, 0x1f
// 004bb673  d1eb                 shr ebx, 1
// 004bb675  0bdf                 or ebx, edi
// 004bb677  837dfc00             cmp dword ptr [ebp - 4], 0
// 004bb67b  8945f4               mov dword ptr [ebp - 0xc], eax
// 004bb67e  894df0               mov dword ptr [ebp - 0x10], ecx
// 004bb681  8955ec               mov dword ptr [ebp - 0x14], edx
// 004bb684  8975e8               mov dword ptr [ebp - 0x18], esi
// 004bb687  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004bb68a  0f8501ffffff         jne 0x4bb591
// 004bb690  5f                   pop edi
// 004bb691  5e                   pop esi
// 004bb692  5b                   pop ebx
// 004bb693  8be5                 mov esp, ebp
// 004bb695  5d                   pop ebp
// 004bb696  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$umodulo@$$BY07I@big@@YAXAAY07I00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
