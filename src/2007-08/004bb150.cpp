// roc 2007-08 004bb150  unit: RakPeer  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bb150
//
// 004bb150  55                   push ebp
// 004bb151  8bec                 mov ebp, esp
// 004bb153  83ec44               sub esp, 0x44
// 004bb156  53                   push ebx
// 004bb157  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004bb15a  56                   push esi
// 004bb15b  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004bb15e  57                   push edi
// 004bb15f  b910000000           mov ecx, 0x10
// 004bb164  8d7dbc               lea edi, [ebp - 0x44]
// 004bb167  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb169  8b7508               mov esi, dword ptr [ebp + 8]
// 004bb16c  b910000000           mov ecx, 0x10
// 004bb171  8bfb                 mov edi, ebx
// 004bb173  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb175  bf00000080           mov edi, 0x80000000
// 004bb17a  857df8               test dword ptr [ebp - 8], edi
// 004bb17d  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004bb184  0f851b010000         jne 0x4bb2a5
// 004bb18a  8d45bc               lea eax, [ebp - 0x44]
// 004bb18d  50                   push eax
// 004bb18e  53                   push ebx
// 004bb18f  e88ce9ffff           call 0x4b9b20
// 004bb194  83c408               add esp, 8
// 004bb197  84c0                 test al, al
// 004bb199  0f8406010000         je 0x4bb2a5
// 004bb19f  b80f000000           mov eax, 0xf
// 004bb1a4  8d4b34               lea ecx, [ebx + 0x34]
// 004bb1a7  83790800             cmp dword ptr [ecx + 8], 0
// 004bb1ab  752a                 jne 0x4bb1d7
// 004bb1ad  83790400             cmp dword ptr [ecx + 4], 0
// 004bb1b1  7517                 jne 0x4bb1ca
// 004bb1b3  833900               cmp dword ptr [ecx], 0
// 004bb1b6  7517                 jne 0x4bb1cf
// 004bb1b8  8379fc00             cmp dword ptr [ecx - 4], 0
// 004bb1bc  7516                 jne 0x4bb1d4
// 004bb1be  83e804               sub eax, 4
// 004bb1c1  83e910               sub ecx, 0x10
// 004bb1c4  85c0                 test eax, eax
// 004bb1c6  7ddf                 jge 0x4bb1a7
// 004bb1c8  eb0d                 jmp 0x4bb1d7
// 004bb1ca  83e801               sub eax, 1
// 004bb1cd  eb08                 jmp 0x4bb1d7
// 004bb1cf  83e802               sub eax, 2
// 004bb1d2  eb03                 jmp 0x4bb1d7
// 004bb1d4  83e803               sub eax, 3
// 004bb1d7  85c0                 test eax, eax
// 004bb1d9  8bc8                 mov ecx, eax
// 004bb1db  7c2c                 jl 0x4bb209
// 004bb1dd  8d4900               lea ecx, [ecx]
// 004bb1e0  837c8dbc00           cmp dword ptr [ebp + ecx*4 - 0x44], 0
// 004bb1e5  7505                 jne 0x4bb1ec
// 004bb1e7  83e901               sub ecx, 1
// 004bb1ea  79f4                 jns 0x4bb1e0
// 004bb1ec  3bc1                 cmp eax, ecx
// 004bb1ee  7419                 je 0x4bb209
// 004bb1f0  2bc1                 sub eax, ecx
// 004bb1f2  c1e005               shl eax, 5
// 004bb1f5  8bf0                 mov esi, eax
// 004bb1f7  8d4dbc               lea ecx, [ebp - 0x44]
// 004bb1fa  56                   push esi
// 004bb1fb  51                   push ecx
// 004bb1fc  e85fe9ffff           call 0x4b9b60
// 004bb201  83c408               add esp, 8
// 004bb204  83c601               add esi, 1
// 004bb207  eb03                 jmp 0x4bb20c
// 004bb209  8b75fc               mov esi, dword ptr [ebp - 4]
// 004bb20c  857df8               test dword ptr [ebp - 8], edi
// 004bb20f  754f                 jne 0x4bb260
// 004bb211  b80f000000           mov eax, 0xf
// 004bb216  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 004bb219  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004bb21d  3bca                 cmp ecx, edx
// 004bb21f  7709                 ja 0x4bb22a
// 004bb221  723d                 jb 0x4bb260
// 004bb223  83e801               sub eax, 1
// 004bb226  79ee                 jns 0x4bb216
// 004bb228  eb36                 jmp 0x4bb260
// 004bb22a  33d2                 xor edx, edx
// 004bb22c  33c9                 xor ecx, ecx
// 004bb22e  8bff                 mov edi, edi
// 004bb230  8b448dbc             mov eax, dword ptr [ebp + ecx*4 - 0x44]
// 004bb234  8d3c00               lea edi, [eax + eax]
// 004bb237  0bfa                 or edi, edx
// 004bb239  897c8dbc             mov dword ptr [ebp + ecx*4 - 0x44], edi
// 004bb23d  c1e81f               shr eax, 0x1f
// 004bb240  83c101               add ecx, 1
// 004bb243  83f910               cmp ecx, 0x10
// 004bb246  8bd0                 mov edx, eax
// 004bb248  72e6                 jb 0x4bb230
// 004bb24a  83c601               add esi, 1
// 004bb24d  f745f800000080       test dword ptr [ebp - 8], 0x80000000
// 004bb254  74bb                 je 0x4bb211
// 004bb256  eb08                 jmp 0x4bb260
// 004bb258  8da42400000000       lea esp, [esp]
// 004bb25f  90                   nop 
// 004bb260  b80f000000           mov eax, 0xf
// 004bb265  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 004bb268  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004bb26c  3bd1                 cmp edx, ecx
// 004bb26e  7711                 ja 0x4bb281
// 004bb270  7205                 jb 0x4bb277
// 004bb272  83e801               sub eax, 1
// 004bb275  79ee                 jns 0x4bb265
// 004bb277  85f6                 test esi, esi
// 004bb279  0f84e1000000         je 0x4bb360
// 004bb27f  eb3f                 jmp 0x4bb2c0
// 004bb281  33c9                 xor ecx, ecx
// 004bb283  ba0f000000           mov edx, 0xf
// 004bb288  8b4495bc             mov eax, dword ptr [ebp + edx*4 - 0x44]
// 004bb28c  8bf8                 mov edi, eax
// 004bb28e  d1ef                 shr edi, 1
// 004bb290  0bf9                 or edi, ecx
// 004bb292  c1e01f               shl eax, 0x1f
// 004bb295  83ea01               sub edx, 1
// 004bb298  897c95c0             mov dword ptr [ebp + edx*4 - 0x40], edi
// 004bb29c  8bc8                 mov ecx, eax
// 004bb29e  79e8                 jns 0x4bb288
// 004bb2a0  83ee01               sub esi, 1
// 004bb2a3  ebbb                 jmp 0x4bb260
// 004bb2a5  8d55bc               lea edx, [ebp - 0x44]
// 004bb2a8  53                   push ebx
// 004bb2a9  52                   push edx
// 004bb2aa  e871e8ffff           call 0x4b9b20
// 004bb2af  83c408               add esp, 8
// 004bb2b2  84c0                 test al, al
// 004bb2b4  0f85a6000000         jne 0x4bb360
// 004bb2ba  8b75fc               mov esi, dword ptr [ebp - 4]
// 004bb2bd  8d4900               lea ecx, [ecx]
// 004bb2c0  83ee01               sub esi, 1
// 004bb2c3  8975fc               mov dword ptr [ebp - 4], esi
// 004bb2c6  b80f000000           mov eax, 0xf
// 004bb2cb  eb03                 jmp 0x4bb2d0
// 004bb2cd  8d4900               lea ecx, [ecx]
// 004bb2d0  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 004bb2d3  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004bb2d7  3bd1                 cmp edx, ecx
// 004bb2d9  775c                 ja 0x4bb337
// 004bb2db  7205                 jb 0x4bb2e2
// 004bb2dd  83e801               sub eax, 1
// 004bb2e0  79ee                 jns 0x4bb2d0
// 004bb2e2  8d45bc               lea eax, [ebp - 0x44]
// 004bb2e5  894508               mov dword ptr [ebp + 8], eax
// 004bb2e8  c7450c03000000       mov dword ptr [ebp + 0xc], 3
// 004bb2ef  8b7508               mov esi, dword ptr [ebp + 8]
// 004bb2f2  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bb2f5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004bb2f8  8b06                 mov eax, dword ptr [esi]
// 004bb2fa  33d2                 xor edx, edx
// 004bb2fc  2907                 sub dword ptr [edi], eax
// 004bb2fe  8b4604               mov eax, dword ptr [esi + 4]
// 004bb301  194704               sbb dword ptr [edi + 4], eax
// 004bb304  8b4608               mov eax, dword ptr [esi + 8]
// 004bb307  194708               sbb dword ptr [edi + 8], eax
// 004bb30a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bb30d  19470c               sbb dword ptr [edi + 0xc], eax
// 004bb310  e322                 jecxz 0x4bb334
// 004bb312  42                   inc edx
// 004bb313  42                   inc edx
// 004bb314  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bb317  1904d7               sbb dword ptr [edi + edx*8], eax
// 004bb31a  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bb31e  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004bb322  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bb326  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004bb32a  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bb32e  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004bb332  e2de                 loop 0x4bb312
// 004bb334  8b75fc               mov esi, dword ptr [ebp - 4]
// 004bb337  33c9                 xor ecx, ecx
// 004bb339  ba0f000000           mov edx, 0xf
// 004bb33e  8bff                 mov edi, edi
// 004bb340  8b4495bc             mov eax, dword ptr [ebp + edx*4 - 0x44]
// 004bb344  8bf8                 mov edi, eax
// 004bb346  d1ef                 shr edi, 1
// 004bb348  0bf9                 or edi, ecx
// 004bb34a  c1e01f               shl eax, 0x1f
// 004bb34d  83ea01               sub edx, 1
// 004bb350  897c95c0             mov dword ptr [ebp + edx*4 - 0x40], edi
// 004bb354  8bc8                 mov ecx, eax
// 004bb356  79e8                 jns 0x4bb340
// 004bb358  85f6                 test esi, esi
// 004bb35a  0f8560ffffff         jne 0x4bb2c0
// 004bb360  5f                   pop edi
// 004bb361  5e                   pop esi
// 004bb362  5b                   pop ebx
// 004bb363  8be5                 mov esp, ebp
// 004bb365  5d                   pop ebp
// 004bb366  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$umodulo@$$BY0BA@I@big@@YAXAAY0BA@I00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
