// roc 2007-08 004bbe60  unit: RakPeer  size: 921 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bbe60
//
// 004bbe60  55                   push ebp
// 004bbe61  8bec                 mov ebp, esp
// 004bbe63  83ec28               sub esp, 0x28
// 004bbe66  53                   push ebx
// 004bbe67  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 004bbe6a  56                   push esi
// 004bbe6b  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004bbe6e  57                   push edi
// 004bbe6f  33c0                 xor eax, eax
// 004bbe71  b908000000           mov ecx, 8
// 004bbe76  8d7dd8               lea edi, [ebp - 0x28]
// 004bbe79  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bbe7b  f745f400000080       test dword ptr [ebp - 0xc], 0x80000000
// 004bbe82  8b7508               mov esi, dword ptr [ebp + 8]
// 004bbe85  b908000000           mov ecx, 8
// 004bbe8a  8bfb                 mov edi, ebx
// 004bbe8c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bbe8e  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bbe91  8907                 mov dword ptr [edi], eax
// 004bbe93  894704               mov dword ptr [edi + 4], eax
// 004bbe96  894708               mov dword ptr [edi + 8], eax
// 004bbe99  89470c               mov dword ptr [edi + 0xc], eax
// 004bbe9c  894710               mov dword ptr [edi + 0x10], eax
// 004bbe9f  894714               mov dword ptr [edi + 0x14], eax
// 004bbea2  894718               mov dword ptr [edi + 0x18], eax
// 004bbea5  89471c               mov dword ptr [edi + 0x1c], eax
// 004bbea8  c7450c01000000       mov dword ptr [ebp + 0xc], 1
// 004bbeaf  0f85c6010000         jne 0x4bc07b
// 004bbeb5  8d45d8               lea eax, [ebp - 0x28]
// 004bbeb8  50                   push eax
// 004bbeb9  53                   push ebx
// 004bbeba  e8c1dbffff           call 0x4b9a80
// 004bbebf  83c408               add esp, 8
// 004bbec2  84c0                 test al, al
// 004bbec4  0f84b1010000         je 0x4bc07b
// 004bbeca  b807000000           mov eax, 7
// 004bbecf  90                   nop 
// 004bbed0  833c8300             cmp dword ptr [ebx + eax*4], 0
// 004bbed4  7505                 jne 0x4bbedb
// 004bbed6  83e801               sub eax, 1
// 004bbed9  79f5                 jns 0x4bbed0
// 004bbedb  85c0                 test eax, eax
// 004bbedd  8bc8                 mov ecx, eax
// 004bbedf  7c2a                 jl 0x4bbf0b
// 004bbee1  837c8dd800           cmp dword ptr [ebp + ecx*4 - 0x28], 0
// 004bbee6  7505                 jne 0x4bbeed
// 004bbee8  83e901               sub ecx, 1
// 004bbeeb  79f4                 jns 0x4bbee1
// 004bbeed  3bc1                 cmp eax, ecx
// 004bbeef  741a                 je 0x4bbf0b
// 004bbef1  2bc1                 sub eax, ecx
// 004bbef3  c1e005               shl eax, 5
// 004bbef6  8bf0                 mov esi, eax
// 004bbef8  8d4dd8               lea ecx, [ebp - 0x28]
// 004bbefb  56                   push esi
// 004bbefc  51                   push ecx
// 004bbefd  e89edaffff           call 0x4b99a0
// 004bbf02  83c408               add esp, 8
// 004bbf05  83c601               add esi, 1
// 004bbf08  89750c               mov dword ptr [ebp + 0xc], esi
// 004bbf0b  f745f400000080       test dword ptr [ebp - 0xc], 0x80000000
// 004bbf12  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004bbf15  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004bbf18  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004bbf1b  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004bbf1e  0f85ae000000         jne 0x4bbfd2
// 004bbf24  bb07000000           mov ebx, 7
// 004bbf29  895d08               mov dword ptr [ebp + 8], ebx
// 004bbf2c  8d642400             lea esp, [esp]
// 004bbf30  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 004bbf33  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 004bbf36  8b5c9dd8             mov ebx, dword ptr [ebp + ebx*4 - 0x28]
// 004bbf3a  3bfb                 cmp edi, ebx
// 004bbf3c  7716                 ja 0x4bbf54
// 004bbf3e  0f828b000000         jb 0x4bbfcf
// 004bbf44  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004bbf47  83eb01               sub ebx, 1
// 004bbf4a  895d08               mov dword ptr [ebp + 8], ebx
// 004bbf4d  79e1                 jns 0x4bbf30
// 004bbf4f  e97b000000           jmp 0x4bbfcf
// 004bbf54  8b5dd8               mov ebx, dword ptr [ebp - 0x28]
// 004bbf57  8bfb                 mov edi, ebx
// 004bbf59  03db                 add ebx, ebx
// 004bbf5b  895dd8               mov dword ptr [ebp - 0x28], ebx
// 004bbf5e  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004bbf61  c1ef1f               shr edi, 0x1f
// 004bbf64  895d08               mov dword ptr [ebp + 8], ebx
// 004bbf67  03db                 add ebx, ebx
// 004bbf69  0bdf                 or ebx, edi
// 004bbf6b  8b7d08               mov edi, dword ptr [ebp + 8]
// 004bbf6e  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004bbf71  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004bbf74  c1ef1f               shr edi, 0x1f
// 004bbf77  895d08               mov dword ptr [ebp + 8], ebx
// 004bbf7a  03db                 add ebx, ebx
// 004bbf7c  0bdf                 or ebx, edi
// 004bbf7e  8b7d08               mov edi, dword ptr [ebp + 8]
// 004bbf81  c1ef1f               shr edi, 0x1f
// 004bbf84  83450c01             add dword ptr [ebp + 0xc], 1
// 004bbf88  895de0               mov dword ptr [ebp - 0x20], ebx
// 004bbf8b  8bdf                 mov ebx, edi
// 004bbf8d  8bfe                 mov edi, esi
// 004bbf8f  c1ef1f               shr edi, 0x1f
// 004bbf92  03f6                 add esi, esi
// 004bbf94  0bf3                 or esi, ebx
// 004bbf96  8bda                 mov ebx, edx
// 004bbf98  03d2                 add edx, edx
// 004bbf9a  0bd7                 or edx, edi
// 004bbf9c  c1eb1f               shr ebx, 0x1f
// 004bbf9f  8bf9                 mov edi, ecx
// 004bbfa1  03c9                 add ecx, ecx
// 004bbfa3  0bcb                 or ecx, ebx
// 004bbfa5  c1ef1f               shr edi, 0x1f
// 004bbfa8  8bd8                 mov ebx, eax
// 004bbfaa  03c0                 add eax, eax
// 004bbfac  0bc7                 or eax, edi
// 004bbfae  8b7df4               mov edi, dword ptr [ebp - 0xc]
// 004bbfb1  c1eb1f               shr ebx, 0x1f
// 004bbfb4  03ff                 add edi, edi
// 004bbfb6  0bfb                 or edi, ebx
// 004bbfb8  85ff                 test edi, edi
// 004bbfba  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004bbfbd  8955e8               mov dword ptr [ebp - 0x18], edx
// 004bbfc0  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bbfc3  8945f0               mov dword ptr [ebp - 0x10], eax
// 004bbfc6  897df4               mov dword ptr [ebp - 0xc], edi
// 004bbfc9  0f8955ffffff         jns 0x4bbf24
// 004bbfcf  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 004bbfd2  bf07000000           mov edi, 7
// 004bbfd7  897d08               mov dword ptr [ebp + 8], edi
// 004bbfda  8d9b00000000         lea ebx, [ebx]
// 004bbfe0  8b1cbb               mov ebx, dword ptr [ebx + edi*4]
// 004bbfe3  8b7cbdd8             mov edi, dword ptr [ebp + edi*4 - 0x28]
// 004bbfe7  3bfb                 cmp edi, ebx
// 004bbfe9  771a                 ja 0x4bc005
// 004bbfeb  0f82bc000000         jb 0x4bc0ad
// 004bbff1  8b7d08               mov edi, dword ptr [ebp + 8]
// 004bbff4  83ef01               sub edi, 1
// 004bbff7  897d08               mov dword ptr [ebp + 8], edi
// 004bbffa  0f88ad000000         js 0x4bc0ad
// 004bc000  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 004bc003  ebdb                 jmp 0x4bbfe0
// 004bc005  8b5df4               mov ebx, dword ptr [ebp - 0xc]
// 004bc008  8bfb                 mov edi, ebx
// 004bc00a  d1eb                 shr ebx, 1
// 004bc00c  895df4               mov dword ptr [ebp - 0xc], ebx
// 004bc00f  c1e71f               shl edi, 0x1f
// 004bc012  8bd8                 mov ebx, eax
// 004bc014  c1e31f               shl ebx, 0x1f
// 004bc017  d1e8                 shr eax, 1
// 004bc019  0bc7                 or eax, edi
// 004bc01b  8bf9                 mov edi, ecx
// 004bc01d  c1e71f               shl edi, 0x1f
// 004bc020  d1e9                 shr ecx, 1
// 004bc022  0bcb                 or ecx, ebx
// 004bc024  8bda                 mov ebx, edx
// 004bc026  c1e31f               shl ebx, 0x1f
// 004bc029  d1ea                 shr edx, 1
// 004bc02b  0bd7                 or edx, edi
// 004bc02d  8bfe                 mov edi, esi
// 004bc02f  d1ee                 shr esi, 1
// 004bc031  0bf3                 or esi, ebx
// 004bc033  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004bc036  895d08               mov dword ptr [ebp + 8], ebx
// 004bc039  d1eb                 shr ebx, 1
// 004bc03b  c1e71f               shl edi, 0x1f
// 004bc03e  0bdf                 or ebx, edi
// 004bc040  8b7d08               mov edi, dword ptr [ebp + 8]
// 004bc043  895de0               mov dword ptr [ebp - 0x20], ebx
// 004bc046  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004bc049  895d08               mov dword ptr [ebp + 8], ebx
// 004bc04c  d1eb                 shr ebx, 1
// 004bc04e  c1e71f               shl edi, 0x1f
// 004bc051  0bdf                 or ebx, edi
// 004bc053  8b7d08               mov edi, dword ptr [ebp + 8]
// 004bc056  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004bc059  8b5dd8               mov ebx, dword ptr [ebp - 0x28]
// 004bc05c  c1e71f               shl edi, 0x1f
// 004bc05f  d1eb                 shr ebx, 1
// 004bc061  0bdf                 or ebx, edi
// 004bc063  836d0c01             sub dword ptr [ebp + 0xc], 1
// 004bc067  8945f0               mov dword ptr [ebp - 0x10], eax
// 004bc06a  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bc06d  8955e8               mov dword ptr [ebp - 0x18], edx
// 004bc070  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004bc073  895dd8               mov dword ptr [ebp - 0x28], ebx
// 004bc076  e954ffffff           jmp 0x4bbfcf
// 004bc07b  8d55d8               lea edx, [ebp - 0x28]
// 004bc07e  53                   push ebx
// 004bc07f  52                   push edx
// 004bc080  e8fbd9ffff           call 0x4b9a80
// 004bc085  83c408               add esp, 8
// 004bc088  84c0                 test al, al
// 004bc08a  7413                 je 0x4bc09f
// 004bc08c  8d45d8               lea eax, [ebp - 0x28]
// 004bc08f  50                   push eax
// 004bc090  e88bdbffff           call 0x4b9c20
// 004bc095  83c404               add esp, 4
// 004bc098  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 004bc09f  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004bc0a2  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004bc0a5  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004bc0a8  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004bc0ab  eb03                 jmp 0x4bc0b0
// 004bc0ad  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bc0b0  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 004bc0b4  c7450800000000       mov dword ptr [ebp + 8], 0
// 004bc0bb  0f8424010000         je 0x4bc1e5
// 004bc0c1  bf01000000           mov edi, 1
// 004bc0c6  297d0c               sub dword ptr [ebp + 0xc], edi
// 004bc0c9  017d08               add dword ptr [ebp + 8], edi
// 004bc0cc  bf07000000           mov edi, 7
// 004bc0d1  897dfc               mov dword ptr [ebp - 4], edi
// 004bc0d4  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 004bc0d7  8b1cbb               mov ebx, dword ptr [ebx + edi*4]
// 004bc0da  8b7cbdd8             mov edi, dword ptr [ebp + edi*4 - 0x28]
// 004bc0de  3bfb                 cmp edi, ebx
// 004bc0e0  0f8785000000         ja 0x4bc16b
// 004bc0e6  720b                 jb 0x4bc0f3
// 004bc0e8  8b7dfc               mov edi, dword ptr [ebp - 4]
// 004bc0eb  83ef01               sub edi, 1
// 004bc0ee  897dfc               mov dword ptr [ebp - 4], edi
// 004bc0f1  79e1                 jns 0x4bc0d4
// 004bc0f3  8d4dd8               lea ecx, [ebp - 0x28]
// 004bc0f6  894df8               mov dword ptr [ebp - 8], ecx
// 004bc0f9  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004bc100  8b75f8               mov esi, dword ptr [ebp - 8]
// 004bc103  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 004bc106  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004bc109  8b06                 mov eax, dword ptr [esi]
// 004bc10b  33d2                 xor edx, edx
// 004bc10d  2907                 sub dword ptr [edi], eax
// 004bc10f  8b4604               mov eax, dword ptr [esi + 4]
// 004bc112  194704               sbb dword ptr [edi + 4], eax
// 004bc115  8b4608               mov eax, dword ptr [esi + 8]
// 004bc118  194708               sbb dword ptr [edi + 8], eax
// 004bc11b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bc11e  19470c               sbb dword ptr [edi + 0xc], eax
// 004bc121  e322                 jecxz 0x4bc145
// 004bc123  42                   inc edx
// 004bc124  42                   inc edx
// 004bc125  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bc128  1904d7               sbb dword ptr [edi + edx*8], eax
// 004bc12b  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bc12f  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004bc133  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bc137  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004bc13b  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bc13f  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004bc143  e2de                 loop 0x4bc123
// 004bc145  8b5508               mov edx, dword ptr [ebp + 8]
// 004bc148  8b7510               mov esi, dword ptr [ebp + 0x10]
// 004bc14b  52                   push edx
// 004bc14c  56                   push esi
// 004bc14d  e84ed8ffff           call 0x4b99a0
// 004bc152  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004bc155  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004bc158  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004bc15b  83c408               add esp, 8
// 004bc15e  830e01               or dword ptr [esi], 1
// 004bc161  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004bc164  c7450800000000       mov dword ptr [ebp + 8], 0
// 004bc16b  8b5df4               mov ebx, dword ptr [ebp - 0xc]
// 004bc16e  8bfb                 mov edi, ebx
// 004bc170  d1eb                 shr ebx, 1
// 004bc172  895df4               mov dword ptr [ebp - 0xc], ebx
// 004bc175  c1e71f               shl edi, 0x1f
// 004bc178  8bd8                 mov ebx, eax
// 004bc17a  c1e31f               shl ebx, 0x1f
// 004bc17d  d1e8                 shr eax, 1
// 004bc17f  0bc7                 or eax, edi
// 004bc181  8bf9                 mov edi, ecx
// 004bc183  c1e71f               shl edi, 0x1f
// 004bc186  d1e9                 shr ecx, 1
// 004bc188  0bcb                 or ecx, ebx
// 004bc18a  8bda                 mov ebx, edx
// 004bc18c  c1e31f               shl ebx, 0x1f
// 004bc18f  d1ea                 shr edx, 1
// 004bc191  0bd7                 or edx, edi
// 004bc193  8bfe                 mov edi, esi
// 004bc195  d1ee                 shr esi, 1
// 004bc197  0bf3                 or esi, ebx
// 004bc199  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004bc19c  895dfc               mov dword ptr [ebp - 4], ebx
// 004bc19f  d1eb                 shr ebx, 1
// 004bc1a1  c1e71f               shl edi, 0x1f
// 004bc1a4  0bdf                 or ebx, edi
// 004bc1a6  8b7dfc               mov edi, dword ptr [ebp - 4]
// 004bc1a9  895de0               mov dword ptr [ebp - 0x20], ebx
// 004bc1ac  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004bc1af  895dfc               mov dword ptr [ebp - 4], ebx
// 004bc1b2  d1eb                 shr ebx, 1
// 004bc1b4  c1e71f               shl edi, 0x1f
// 004bc1b7  0bdf                 or ebx, edi
// 004bc1b9  8b7dfc               mov edi, dword ptr [ebp - 4]
// 004bc1bc  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004bc1bf  8b5dd8               mov ebx, dword ptr [ebp - 0x28]
// 004bc1c2  c1e71f               shl edi, 0x1f
// 004bc1c5  d1eb                 shr ebx, 1
// 004bc1c7  0bdf                 or ebx, edi
// 004bc1c9  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 004bc1cd  8945f0               mov dword ptr [ebp - 0x10], eax
// 004bc1d0  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bc1d3  8955e8               mov dword ptr [ebp - 0x18], edx
// 004bc1d6  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004bc1d9  895dd8               mov dword ptr [ebp - 0x28], ebx
// 004bc1dc  0f85dffeffff         jne 0x4bc0c1
// 004bc1e2  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bc1e5  8b4508               mov eax, dword ptr [ebp + 8]
// 004bc1e8  50                   push eax
// 004bc1e9  57                   push edi
// 004bc1ea  e8b1d7ffff           call 0x4b99a0
// 004bc1ef  83c408               add esp, 8
// 004bc1f2  5f                   pop edi
// 004bc1f3  5e                   pop esi
// 004bc1f4  5b                   pop ebx
// 004bc1f5  8be5                 mov esp, ebp
// 004bc1f7  5d                   pop ebp
// 004bc1f8  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$udivide@$$BY07I@big@@YAXAAY07I000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
