// from server: 100% by auto
// roc 2008-06 00487c60  unit: G3D::Shader  size: 1317 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00487c60
//
// 00487c60  64a100000000         mov eax, dword ptr fs:[0]
// 00487c66  6aff                 push -1
// 00487c68  68e1597c00           push 0x7c59e1
// 00487c6d  50                   push eax
// 00487c6e  64892500000000       mov dword ptr fs:[0], esp
// 00487c75  81ecd4000000         sub esp, 0xd4
// 00487c7b  56                   push esi
// 00487c7c  8bf1                 mov esi, ecx
// 00487c7e  807e1400             cmp byte ptr [esi + 0x14], 0
// 00487c82  740c                 je 0x487c90
// 00487c84  8b8c24e8000000       mov ecx, dword ptr [esp + 0xe8]
// 00487c8b  e85050ffff           call 0x47cce0
// 00487c90  837e1000             cmp dword ptr [esi + 0x10], 0
// 00487c94  0f85bf040000         jne 0x488159
// 00487c9a  53                   push ebx
// 00487c9b  55                   push ebp
// 00487c9c  57                   push edi
// 00487c9d  8bbc24f4000000       mov edi, dword ptr [esp + 0xf4]
// 00487ca4  8bcf                 mov ecx, edi
// 00487ca6  e8a5fbfeff           call 0x477850
// 00487cab  8bcf                 mov ecx, edi
// 00487cad  89442430             mov dword ptr [esp + 0x30], eax
// 00487cb1  e8aafbfeff           call 0x477860
// 00487cb6  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00487cb9  6894128200           push 0x821294
// 00487cbe  8d4c2414             lea ecx, [esp + 0x14]
// 00487cc2  89442438             mov dword ptr [esp + 0x38], eax
// 00487cc6  ff1558248000         call dword ptr [0x802458]
// 00487ccc  8d442410             lea eax, [esp + 0x10]
// 00487cd0  81c7a0010000         add edi, 0x1a0
// 00487cd6  50                   push eax
// 00487cd7  8bcf                 mov ecx, edi
// 00487cd9  c78424f000000000000000 mov dword ptr [esp + 0xf0], 0
// 00487ce4  e81789feff           call 0x470600
// 00487ce9  83cdff               or ebp, 0xffffffff
// 00487cec  8d4c2410             lea ecx, [esp + 0x10]
// 00487cf0  8ad8                 mov bl, al
// 00487cf2  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487cf9  ff1568248000         call dword ptr [0x802468]
// 00487cff  84db                 test bl, bl
// 00487d01  744a                 je 0x487d4d
// 00487d03  6894128200           push 0x821294
// 00487d08  8d4c2414             lea ecx, [esp + 0x14]
// 00487d0c  ff1558248000         call dword ptr [0x802458]
// 00487d12  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00487d16  51                   push ecx
// 00487d17  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00487d1e  c78424f000000001000000 mov dword ptr [esp + 0xf0], 1
// 00487d29  e862c80800           call 0x514590
// 00487d2e  50                   push eax
// 00487d2f  8d542414             lea edx, [esp + 0x14]
// 00487d33  52                   push edx
// 00487d34  8d4e18               lea ecx, [esi + 0x18]
// 00487d37  e8a4f2ffff           call 0x486fe0
// 00487d3c  8d4c2410             lea ecx, [esp + 0x10]
// 00487d40  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487d47  ff1568248000         call dword ptr [0x802468]
// 00487d4d  687c128200           push 0x82127c
// 00487d52  8d4c2414             lea ecx, [esp + 0x14]
// 00487d56  ff1558248000         call dword ptr [0x802458]
// 00487d5c  8d442410             lea eax, [esp + 0x10]
// 00487d60  50                   push eax
// 00487d61  8bcf                 mov ecx, edi
// 00487d63  c78424f000000002000000 mov dword ptr [esp + 0xf0], 2
// 00487d6e  e88d88feff           call 0x470600
// 00487d73  8d4c2410             lea ecx, [esp + 0x10]
// 00487d77  8ad8                 mov bl, al
// 00487d79  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487d80  ff1568248000         call dword ptr [0x802468]
// 00487d86  84db                 test bl, bl
// 00487d88  744a                 je 0x487dd4
// 00487d8a  687c128200           push 0x82127c
// 00487d8f  8d4c2414             lea ecx, [esp + 0x14]
// 00487d93  ff1558248000         call dword ptr [0x802458]
// 00487d99  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00487d9d  51                   push ecx
// 00487d9e  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00487da5  c78424f000000003000000 mov dword ptr [esp + 0xf0], 3
// 00487db0  e8dbc70800           call 0x514590
// 00487db5  50                   push eax
// 00487db6  8d542414             lea edx, [esp + 0x14]
// 00487dba  52                   push edx
// 00487dbb  8d4e18               lea ecx, [esi + 0x18]
// 00487dbe  e81df2ffff           call 0x486fe0
// 00487dc3  8d4c2410             lea ecx, [esp + 0x10]
// 00487dc7  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487dce  ff1568248000         call dword ptr [0x802468]
// 00487dd4  6864128200           push 0x821264
// 00487dd9  8d4c2414             lea ecx, [esp + 0x14]
// 00487ddd  ff1558248000         call dword ptr [0x802458]
// 00487de3  8d442410             lea eax, [esp + 0x10]
// 00487de7  50                   push eax
// 00487de8  8bcf                 mov ecx, edi
// 00487dea  c78424f000000004000000 mov dword ptr [esp + 0xf0], 4
// 00487df5  e80688feff           call 0x470600
// 00487dfa  8d4c2410             lea ecx, [esp + 0x10]
// 00487dfe  8ad8                 mov bl, al
// 00487e00  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487e07  ff1568248000         call dword ptr [0x802468]
// 00487e0d  84db                 test bl, bl
// 00487e0f  7454                 je 0x487e65
// 00487e11  6864128200           push 0x821264
// 00487e16  8d4c2414             lea ecx, [esp + 0x14]
// 00487e1a  ff1558248000         call dword ptr [0x802458]
// 00487e20  8d4c2448             lea ecx, [esp + 0x48]
// 00487e24  51                   push ecx
// 00487e25  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00487e29  c78424f000000005000000 mov dword ptr [esp + 0xf0], 5
// 00487e34  e8f704ffff           call 0x478330
// 00487e39  50                   push eax
// 00487e3a  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00487e41  e84ac70800           call 0x514590
// 00487e46  50                   push eax
// 00487e47  8d542414             lea edx, [esp + 0x14]
// 00487e4b  52                   push edx
// 00487e4c  8d4e18               lea ecx, [esi + 0x18]
// 00487e4f  e88cf1ffff           call 0x486fe0
// 00487e54  8d4c2410             lea ecx, [esp + 0x10]
// 00487e58  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487e5f  ff1568248000         call dword ptr [0x802468]
// 00487e65  684c128200           push 0x82124c
// 00487e6a  8d4c2414             lea ecx, [esp + 0x14]
// 00487e6e  ff1558248000         call dword ptr [0x802458]
// 00487e74  8d442410             lea eax, [esp + 0x10]
// 00487e78  50                   push eax
// 00487e79  8bcf                 mov ecx, edi
// 00487e7b  c78424f000000006000000 mov dword ptr [esp + 0xf0], 6
// 00487e86  e87587feff           call 0x470600
// 00487e8b  8d4c2410             lea ecx, [esp + 0x10]
// 00487e8f  8ad8                 mov bl, al
// 00487e91  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487e98  ff1568248000         call dword ptr [0x802468]
// 00487e9e  84db                 test bl, bl
// 00487ea0  7454                 je 0x487ef6
// 00487ea2  684c128200           push 0x82124c
// 00487ea7  8d4c2414             lea ecx, [esp + 0x14]
// 00487eab  ff1558248000         call dword ptr [0x802458]
// 00487eb1  8d4c2448             lea ecx, [esp + 0x48]
// 00487eb5  51                   push ecx
// 00487eb6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00487eba  c78424f000000007000000 mov dword ptr [esp + 0xf0], 7
// 00487ec5  e86604ffff           call 0x478330
// 00487eca  50                   push eax
// 00487ecb  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00487ed2  e8b9c60800           call 0x514590
// 00487ed7  50                   push eax
// 00487ed8  8d542414             lea edx, [esp + 0x14]
// 00487edc  52                   push edx
// 00487edd  8d4e18               lea ecx, [esi + 0x18]
// 00487ee0  e8fbf0ffff           call 0x486fe0
// 00487ee5  8d4c2410             lea ecx, [esp + 0x10]
// 00487ee9  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487ef0  ff1568248000         call dword ptr [0x802468]
// 00487ef6  683c128200           push 0x82123c
// 00487efb  8d4c2414             lea ecx, [esp + 0x14]
// 00487eff  ff1558248000         call dword ptr [0x802458]
// 00487f05  8d442410             lea eax, [esp + 0x10]
// 00487f09  50                   push eax
// 00487f0a  8bcf                 mov ecx, edi
// 00487f0c  c78424f000000008000000 mov dword ptr [esp + 0xf0], 8
// 00487f17  e8e486feff           call 0x470600
// 00487f1c  8d4c2410             lea ecx, [esp + 0x10]
// 00487f20  8ad8                 mov bl, al
// 00487f22  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487f29  ff1568248000         call dword ptr [0x802468]
// 00487f2f  84db                 test bl, bl
// 00487f31  0f849d000000         je 0x487fd4
// 00487f37  68500b0000           push 0xb50
// 00487f3c  e8bfb8ffff           call 0x483800
// 00487f41  83c404               add esp, 4
// 00487f44  84c0                 test al, al
// 00487f46  744e                 je 0x487f96
// 00487f48  bb07000000           mov ebx, 7
// 00487f4d  8d4900               lea ecx, [ecx]
// 00487f50  8d8b00400000         lea ecx, [ebx + 0x4000]
// 00487f56  51                   push ecx
// 00487f57  e8a4b8ffff           call 0x483800
// 00487f5c  83c404               add esp, 4
// 00487f5f  84c0                 test al, al
// 00487f61  7505                 jne 0x487f68
// 00487f63  83eb01               sub ebx, 1
// 00487f66  79e8                 jns 0x487f50
// 00487f68  683c128200           push 0x82123c
// 00487f6d  8d4c2414             lea ecx, [esp + 0x14]
// 00487f71  ff1558248000         call dword ptr [0x802458]
// 00487f77  43                   inc ebx
// 00487f78  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00487f7c  db44242c             fild dword ptr [esp + 0x2c]
// 00487f80  51                   push ecx
// 00487f81  8d542414             lea edx, [esp + 0x14]
// 00487f85  c78424f000000009000000 mov dword ptr [esp + 0xf0], 9
// 00487f90  d91c24               fstp dword ptr [esp]
// 00487f93  52                   push edx
// 00487f94  eb25                 jmp 0x487fbb
// 00487f96  683c128200           push 0x82123c
// 00487f9b  8d4c2414             lea ecx, [esp + 0x14]
// 00487f9f  ff1558248000         call dword ptr [0x802458]
// 00487fa5  d9ee                 fldz 
// 00487fa7  51                   push ecx
// 00487fa8  d91c24               fstp dword ptr [esp]
// 00487fab  8d442414             lea eax, [esp + 0x14]
// 00487faf  c78424f00000000a000000 mov dword ptr [esp + 0xf0], 0xa
// 00487fba  50                   push eax
// 00487fbb  8d4e18               lea ecx, [esi + 0x18]
// 00487fbe  e82df2ffff           call 0x4871f0
// 00487fc3  8d4c2410             lea ecx, [esp + 0x10]
// 00487fc7  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00487fce  ff1568248000         call dword ptr [0x802468]
// 00487fd4  6828128200           push 0x821228
// 00487fd9  8d4c2414             lea ecx, [esp + 0x14]
// 00487fdd  ff1558248000         call dword ptr [0x802458]
// 00487fe3  8d4c2410             lea ecx, [esp + 0x10]
// 00487fe7  51                   push ecx
// 00487fe8  8bcf                 mov ecx, edi
// 00487fea  c78424f00000000b000000 mov dword ptr [esp + 0xf0], 0xb
// 00487ff5  e80686feff           call 0x470600
// 00487ffa  8d4c2410             lea ecx, [esp + 0x10]
// 00487ffe  8ad8                 mov bl, al
// 00488000  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00488007  ff1568248000         call dword ptr [0x802468]
// 0048800d  84db                 test bl, bl
// 0048800f  0f8495000000         je 0x4880aa
// 00488015  d9ee                 fldz 
// 00488017  8d542438             lea edx, [esp + 0x38]
// 0048801b  52                   push edx
// 0048801c  d9542448             fst dword ptr [esp + 0x48]
// 00488020  d9542444             fst dword ptr [esp + 0x44]
// 00488024  6803120000           push 0x1203
// 00488029  d9542444             fst dword ptr [esp + 0x44]
// 0048802d  6800400000           push 0x4000
// 00488032  d95c2444             fstp dword ptr [esp + 0x44]
// 00488036  ff15242a8000         call dword ptr [0x802a24]
// 0048803c  6828128200           push 0x821228
// 00488041  8d4c244c             lea ecx, [esp + 0x4c]
// 00488045  ff1558248000         call dword ptr [0x802458]
// 0048804b  8d442438             lea eax, [esp + 0x38]
// 0048804f  50                   push eax
// 00488050  8d4c2414             lea ecx, [esp + 0x14]
// 00488054  51                   push ecx
// 00488055  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00488059  c78424f40000000c000000 mov dword ptr [esp + 0xf4], 0xc
// 00488064  e827d3ffff           call 0x485390
// 00488069  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048806d  50                   push eax
// 0048806e  8d54247c             lea edx, [esp + 0x7c]
// 00488072  52                   push edx
// 00488073  8d8424ac000000       lea eax, [esp + 0xac]
// 0048807a  50                   push eax
// 0048807b  e8b002ffff           call 0x478330
// 00488080  8bc8                 mov ecx, eax
// 00488082  e809d3ffff           call 0x485390
// 00488087  8d4c2478             lea ecx, [esp + 0x78]
// 0048808b  51                   push ecx
// 0048808c  8d54244c             lea edx, [esp + 0x4c]
// 00488090  52                   push edx
// 00488091  8d4e18               lea ecx, [esi + 0x18]
// 00488094  e877f0ffff           call 0x487110
// 00488099  8d4c2448             lea ecx, [esp + 0x48]
// 0048809d  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004880a4  ff1568248000         call dword ptr [0x802468]
// 004880aa  6818128200           push 0x821218
// 004880af  8d4c244c             lea ecx, [esp + 0x4c]
// 004880b3  ff1558248000         call dword ptr [0x802458]
// 004880b9  8d442448             lea eax, [esp + 0x48]
// 004880bd  50                   push eax
// 004880be  8bcf                 mov ecx, edi
// 004880c0  c78424f00000000d000000 mov dword ptr [esp + 0xf0], 0xd
// 004880cb  e83085feff           call 0x470600
// 004880d0  8d4c2448             lea ecx, [esp + 0x48]
// 004880d4  8ad8                 mov bl, al
// 004880d6  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004880dd  ff1568248000         call dword ptr [0x802468]
// 004880e3  84db                 test bl, bl
// 004880e5  746f                 je 0x488156
// 004880e7  bf07000000           mov edi, 7
// 004880ec  8d642400             lea esp, [esp]
// 004880f0  8d8fc0840000         lea ecx, [edi + 0x84c0]
// 004880f6  51                   push ecx
// 004880f7  e804b7ffff           call 0x483800
// 004880fc  83c404               add esp, 4
// 004880ff  84c0                 test al, al
// 00488101  7505                 jne 0x488108
// 00488103  83ef01               sub edi, 1
// 00488106  79e8                 jns 0x4880f0
// 00488108  6818128200           push 0x821218
// 0048810d  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00488114  ff1558248000         call dword ptr [0x802458]
// 0048811a  47                   inc edi
// 0048811b  897c242c             mov dword ptr [esp + 0x2c], edi
// 0048811f  db44242c             fild dword ptr [esp + 0x2c]
// 00488123  51                   push ecx
// 00488124  8d94248c000000       lea edx, [esp + 0x8c]
// 0048812b  8d4e18               lea ecx, [esi + 0x18]
// 0048812e  d91c24               fstp dword ptr [esp]
// 00488131  52                   push edx
// 00488132  c78424f40000000e000000 mov dword ptr [esp + 0xf4], 0xe
// 0048813d  e8aef0ffff           call 0x4871f0
// 00488142  8d8c2488000000       lea ecx, [esp + 0x88]
// 00488149  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 00488150  ff1568248000         call dword ptr [0x802468]
// 00488156  5f                   pop edi
// 00488157  5d                   pop ebp
// 00488158  5b                   pop ebx
// 00488159  8b8c24e8000000       mov ecx, dword ptr [esp + 0xe8]
// 00488160  8d4618               lea eax, [esi + 0x18]
// 00488163  50                   push eax
// 00488164  83c60c               add esi, 0xc
// 00488167  56                   push esi
// 00488168  e8930effff           call 0x479000
// 0048816d  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00488174  5e                   pop esi
// 00488175  64890d00000000       mov dword ptr fs:[0], ecx
// 0048817c  81c4e0000000         add esp, 0xe0
// 00488182  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?beforePrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
