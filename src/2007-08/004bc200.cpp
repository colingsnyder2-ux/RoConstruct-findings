// roc 2007-08 004bc200  unit: RakPeer  size: 593 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bc200
//
// 004bc200  55                   push ebp
// 004bc201  8bec                 mov ebp, esp
// 004bc203  83ec14               sub esp, 0x14
// 004bc206  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004bc209  8b08                 mov ecx, dword ptr [eax]
// 004bc20b  53                   push ebx
// 004bc20c  8b580c               mov ebx, dword ptr [eax + 0xc]
// 004bc20f  85db                 test ebx, ebx
// 004bc211  56                   push esi
// 004bc212  8b7008               mov esi, dword ptr [eax + 8]
// 004bc215  57                   push edi
// 004bc216  8b7804               mov edi, dword ptr [eax + 4]
// 004bc219  8b4508               mov eax, dword ptr [ebp + 8]
// 004bc21c  8b10                 mov edx, dword ptr [eax]
// 004bc21e  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bc221  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bc224  8911                 mov dword ptr [ecx], edx
// 004bc226  8b5004               mov edx, dword ptr [eax + 4]
// 004bc229  895104               mov dword ptr [ecx + 4], edx
// 004bc22c  8b5008               mov edx, dword ptr [eax + 8]
// 004bc22f  895108               mov dword ptr [ecx + 8], edx
// 004bc232  8b400c               mov eax, dword ptr [eax + 0xc]
// 004bc235  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004bc23c  897df0               mov dword ptr [ebp - 0x10], edi
// 004bc23f  8975f4               mov dword ptr [ebp - 0xc], esi
// 004bc242  895df8               mov dword ptr [ebp - 8], ebx
// 004bc245  89410c               mov dword ptr [ecx + 0xc], eax
// 004bc248  0f88e7010000         js 0x4bc435
// 004bc24e  8d55ec               lea edx, [ebp - 0x14]
// 004bc251  52                   push edx
// 004bc252  51                   push ecx
// 004bc253  e898d5ffff           call 0x4b97f0
// 004bc258  83c408               add esp, 8
// 004bc25b  84c0                 test al, al
// 004bc25d  0f84cf010000         je 0x4bc432
// 004bc263  b803000000           mov eax, 3
// 004bc268  eb06                 jmp 0x4bc270
// 004bc26a  8d9b00000000         lea ebx, [ebx]
// 004bc270  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bc273  833c8100             cmp dword ptr [ecx + eax*4], 0
// 004bc277  7505                 jne 0x4bc27e
// 004bc279  83e801               sub eax, 1
// 004bc27c  79f2                 jns 0x4bc270
// 004bc27e  85c0                 test eax, eax
// 004bc280  8bc8                 mov ecx, eax
// 004bc282  7c33                 jl 0x4bc2b7
// 004bc284  837c8dec00           cmp dword ptr [ebp + ecx*4 - 0x14], 0
// 004bc289  7505                 jne 0x4bc290
// 004bc28b  83e901               sub ecx, 1
// 004bc28e  79f4                 jns 0x4bc284
// 004bc290  3bc1                 cmp eax, ecx
// 004bc292  7423                 je 0x4bc2b7
// 004bc294  2bc1                 sub eax, ecx
// 004bc296  c1e005               shl eax, 5
// 004bc299  8bf0                 mov esi, eax
// 004bc29b  8d55ec               lea edx, [ebp - 0x14]
// 004bc29e  56                   push esi
// 004bc29f  52                   push edx
// 004bc2a0  e80bdbffff           call 0x4b9db0
// 004bc2a5  8b5df8               mov ebx, dword ptr [ebp - 8]
// 004bc2a8  8b7df0               mov edi, dword ptr [ebp - 0x10]
// 004bc2ab  83c408               add esp, 8
// 004bc2ae  83c601               add esi, 1
// 004bc2b1  8975fc               mov dword ptr [ebp - 4], esi
// 004bc2b4  8b75f4               mov esi, dword ptr [ebp - 0xc]
// 004bc2b7  85db                 test ebx, ebx
// 004bc2b9  7855                 js 0x4bc310
// 004bc2bb  eb03                 jmp 0x4bc2c0
// 004bc2bd  8d4900               lea ecx, [ecx]
// 004bc2c0  b803000000           mov eax, 3
// 004bc2c5  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bc2c8  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004bc2cb  8b5485ec             mov edx, dword ptr [ebp + eax*4 - 0x14]
// 004bc2cf  3bca                 cmp ecx, edx
// 004bc2d1  7709                 ja 0x4bc2dc
// 004bc2d3  723b                 jb 0x4bc310
// 004bc2d5  83e801               sub eax, 1
// 004bc2d8  79eb                 jns 0x4bc2c5
// 004bc2da  eb34                 jmp 0x4bc310
// 004bc2dc  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004bc2df  8345fc01             add dword ptr [ebp - 4], 1
// 004bc2e3  8bc1                 mov eax, ecx
// 004bc2e5  03c9                 add ecx, ecx
// 004bc2e7  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bc2ea  c1e81f               shr eax, 0x1f
// 004bc2ed  8bcf                 mov ecx, edi
// 004bc2ef  03ff                 add edi, edi
// 004bc2f1  0bf8                 or edi, eax
// 004bc2f3  8bc6                 mov eax, esi
// 004bc2f5  c1e81f               shr eax, 0x1f
// 004bc2f8  03db                 add ebx, ebx
// 004bc2fa  c1e91f               shr ecx, 0x1f
// 004bc2fd  03f6                 add esi, esi
// 004bc2ff  0bd8                 or ebx, eax
// 004bc301  0bf1                 or esi, ecx
// 004bc303  85db                 test ebx, ebx
// 004bc305  897df0               mov dword ptr [ebp - 0x10], edi
// 004bc308  8975f4               mov dword ptr [ebp - 0xc], esi
// 004bc30b  895df8               mov dword ptr [ebp - 8], ebx
// 004bc30e  79b0                 jns 0x4bc2c0
// 004bc310  b803000000           mov eax, 3
// 004bc315  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004bc318  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004bc31b  8b5485ec             mov edx, dword ptr [ebp + eax*4 - 0x14]
// 004bc31f  3bd1                 cmp edx, ecx
// 004bc321  0f87d6000000         ja 0x4bc3fd
// 004bc327  7205                 jb 0x4bc32e
// 004bc329  83e801               sub eax, 1
// 004bc32c  79e7                 jns 0x4bc315
// 004bc32e  837dfc00             cmp dword ptr [ebp - 4], 0
// 004bc332  0f84be000000         je 0x4bc3f6
// 004bc338  eb06                 jmp 0x4bc340
// 004bc33a  8d9b00000000         lea ebx, [ebx]
// 004bc340  836dfc01             sub dword ptr [ebp - 4], 1
// 004bc344  b803000000           mov eax, 3
// 004bc349  8da42400000000       lea esp, [esp]
// 004bc350  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bc353  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004bc356  8b5485ec             mov edx, dword ptr [ebp + eax*4 - 0x14]
// 004bc35a  3bd1                 cmp edx, ecx
// 004bc35c  7762                 ja 0x4bc3c0
// 004bc35e  7205                 jb 0x4bc365
// 004bc360  83e801               sub eax, 1
// 004bc363  79eb                 jns 0x4bc350
// 004bc365  8d55ec               lea edx, [ebp - 0x14]
// 004bc368  895508               mov dword ptr [ebp + 8], edx
// 004bc36b  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 004bc372  8b7508               mov esi, dword ptr [ebp + 8]
// 004bc375  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bc378  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004bc37b  8b06                 mov eax, dword ptr [esi]
// 004bc37d  33d2                 xor edx, edx
// 004bc37f  2907                 sub dword ptr [edi], eax
// 004bc381  8b4604               mov eax, dword ptr [esi + 4]
// 004bc384  194704               sbb dword ptr [edi + 4], eax
// 004bc387  8b4608               mov eax, dword ptr [esi + 8]
// 004bc38a  194708               sbb dword ptr [edi + 8], eax
// 004bc38d  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bc390  19470c               sbb dword ptr [edi + 0xc], eax
// 004bc393  e322                 jecxz 0x4bc3b7
// 004bc395  42                   inc edx
// 004bc396  42                   inc edx
// 004bc397  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bc39a  1904d7               sbb dword ptr [edi + edx*8], eax
// 004bc39d  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bc3a1  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004bc3a5  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bc3a9  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004bc3ad  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bc3b1  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004bc3b5  e2de                 loop 0x4bc395
// 004bc3b7  8b5df8               mov ebx, dword ptr [ebp - 8]
// 004bc3ba  8b75f4               mov esi, dword ptr [ebp - 0xc]
// 004bc3bd  8b7df0               mov edi, dword ptr [ebp - 0x10]
// 004bc3c0  8bc3                 mov eax, ebx
// 004bc3c2  c1e01f               shl eax, 0x1f
// 004bc3c5  8bce                 mov ecx, esi
// 004bc3c7  d1ee                 shr esi, 1
// 004bc3c9  0bf0                 or esi, eax
// 004bc3cb  c1e11f               shl ecx, 0x1f
// 004bc3ce  8bc7                 mov eax, edi
// 004bc3d0  d1ef                 shr edi, 1
// 004bc3d2  0bf9                 or edi, ecx
// 004bc3d4  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004bc3d7  c1e01f               shl eax, 0x1f
// 004bc3da  d1e9                 shr ecx, 1
// 004bc3dc  d1eb                 shr ebx, 1
// 004bc3de  0bc8                 or ecx, eax
// 004bc3e0  837dfc00             cmp dword ptr [ebp - 4], 0
// 004bc3e4  895df8               mov dword ptr [ebp - 8], ebx
// 004bc3e7  8975f4               mov dword ptr [ebp - 0xc], esi
// 004bc3ea  897df0               mov dword ptr [ebp - 0x10], edi
// 004bc3ed  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bc3f0  0f854affffff         jne 0x4bc340
// 004bc3f6  5f                   pop edi
// 004bc3f7  5e                   pop esi
// 004bc3f8  5b                   pop ebx
// 004bc3f9  8be5                 mov esp, ebp
// 004bc3fb  5d                   pop ebp
// 004bc3fc  c3                   ret 
// 004bc3fd  8bc3                 mov eax, ebx
// 004bc3ff  c1e01f               shl eax, 0x1f
// 004bc402  8bce                 mov ecx, esi
// 004bc404  d1ee                 shr esi, 1
// 004bc406  0bf0                 or esi, eax
// 004bc408  c1e11f               shl ecx, 0x1f
// 004bc40b  8bc7                 mov eax, edi
// 004bc40d  d1ef                 shr edi, 1
// 004bc40f  0bf9                 or edi, ecx
// 004bc411  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004bc414  c1e01f               shl eax, 0x1f
// 004bc417  d1e9                 shr ecx, 1
// 004bc419  d1eb                 shr ebx, 1
// 004bc41b  0bc8                 or ecx, eax
// 004bc41d  836dfc01             sub dword ptr [ebp - 4], 1
// 004bc421  895df8               mov dword ptr [ebp - 8], ebx
// 004bc424  8975f4               mov dword ptr [ebp - 0xc], esi
// 004bc427  897df0               mov dword ptr [ebp - 0x10], edi
// 004bc42a  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bc42d  e9defeffff           jmp 0x4bc310
// 004bc432  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bc435  51                   push ecx
// 004bc436  8d55ec               lea edx, [ebp - 0x14]
// 004bc439  52                   push edx
// 004bc43a  e8b1d3ffff           call 0x4b97f0
// 004bc43f  83c408               add esp, 8
// 004bc442  84c0                 test al, al
// 004bc444  0f84f6feffff         je 0x4bc340
// 004bc44a  5f                   pop edi
// 004bc44b  5e                   pop esi
// 004bc44c  5b                   pop ebx
// 004bc44d  8be5                 mov esp, ebp
// 004bc44f  5d                   pop ebp
// 004bc450  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$umodulo@$$BY03I@big@@YAXAAY03I00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
