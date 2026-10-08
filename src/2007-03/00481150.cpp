// roc 2007-03 00481150  unit: seg_00480000  size: 1241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00481150
//
// 00481150  6aff                 push -1
// 00481152  680b817400           push 0x74810b
// 00481157  64a100000000         mov eax, dword ptr fs:[0]
// 0048115d  50                   push eax
// 0048115e  81ecf4000000         sub esp, 0xf4
// 00481164  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00481169  33c4                 xor eax, esp
// 0048116b  898424f0000000       mov dword ptr [esp + 0xf0], eax
// 00481172  53                   push ebx
// 00481173  55                   push ebp
// 00481174  56                   push esi
// 00481175  57                   push edi
// 00481176  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0048117b  33c4                 xor eax, esp
// 0048117d  50                   push eax
// 0048117e  8d842408010000       lea eax, [esp + 0x108]
// 00481185  64a300000000         mov dword ptr fs:[0], eax
// 0048118b  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00481191  8bac2418010000       mov ebp, dword ptr [esp + 0x118]
// 00481198  33d2                 xor edx, edx
// 0048119a  3bc2                 cmp eax, edx
// 0048119c  894c2414             mov dword ptr [esp + 0x14], ecx
// 004811a0  89542418             mov dword ptr [esp + 0x18], edx
// 004811a4  8954241c             mov dword ptr [esp + 0x1c], edx
// 004811a8  0f8e2f010000         jle 0x4812dd
// 004811ae  89542420             mov dword ptr [esp + 0x20], edx
// 004811b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004811b6  8bb090010000         mov esi, dword ptr [eax + 0x190]
// 004811bc  03742420             add esi, dword ptr [esp + 0x20]
// 004811c0  803e00               cmp byte ptr [esi], 0
// 004811c3  7505                 jne 0x4811ca
// 004811c5  8344241801           add dword ptr [esp + 0x18], 1
// 004811ca  687c997900           push 0x79997c
// 004811cf  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 004811d6  ff1578e77700         call dword ptr [0x77e778]
// 004811dc  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 004811e3  51                   push ecx
// 004811e4  8d7e08               lea edi, [esi + 8]
// 004811e7  57                   push edi
// 004811e8  c784241801000000000000 mov dword ptr [esp + 0x118], 0
// 004811f3  e868c30700           call 0x4fd560
// 004811f8  83c408               add esp, 8
// 004811fb  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00481202  8ad8                 mov bl, al
// 00481204  c7842410010000ffffffff mov dword ptr [esp + 0x110], 0xffffffff
// 0048120f  ff158ce77700         call dword ptr [0x77e78c]
// 00481215  84db                 test bl, bl
// 00481217  7459                 je 0x481272
// 00481219  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0048121c  83c0f7               add eax, -9
// 0048121f  50                   push eax
// 00481220  6a09                 push 9
// 00481222  8d94249c000000       lea edx, [esp + 0x9c]
// 00481229  52                   push edx
// 0048122a  8bcf                 mov ecx, edi
// 0048122c  ff15a8e67700         call dword ptr [0x77e6a8]
// 00481232  8d842494000000       lea eax, [esp + 0x94]
// 00481239  50                   push eax
// 0048123a  8bcd                 mov ecx, ebp
// 0048123c  c784241401000001000000 mov dword ptr [esp + 0x114], 1
// 00481247  e834f9ffff           call 0x480b80
// 0048124c  84c0                 test al, al
// 0048124e  7508                 jne 0x481258
// 00481250  3806                 cmp byte ptr [esi], al
// 00481252  0f847e010000         je 0x4813d6
// 00481258  8d8c2494000000       lea ecx, [esp + 0x94]
// 0048125f  c7842410010000ffffffff mov dword ptr [esp + 0x110], 0xffffffff
// 0048126a  ff158ce77700         call dword ptr [0x77e78c]
// 00481270  eb4b                 jmp 0x4812bd
// 00481272  57                   push edi
// 00481273  8bcd                 mov ecx, ebp
// 00481275  e806f9ffff           call 0x480b80
// 0048127a  84c0                 test al, al
// 0048127c  7516                 jne 0x481294
// 0048127e  3806                 cmp byte ptr [esi], al
// 00481280  753b                 jne 0x4812bd
// 00481282  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 00481286  0f829d010000         jb 0x481429
// 0048128c  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0048128f  e998010000           jmp 0x48142c
// 00481294  57                   push edi
// 00481295  8bcd                 mov ecx, ebp
// 00481297  e874f8ffff           call 0x480b10
// 0048129c  8bf8                 mov edi, eax
// 0048129e  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004812a1  51                   push ecx
// 004812a2  e8d9f7ffff           call 0x480a80
// 004812a7  8bd0                 mov edx, eax
// 004812a9  8b4624               mov eax, dword ptr [esi + 0x24]
// 004812ac  50                   push eax
// 004812ad  e8cef7ffff           call 0x480a80
// 004812b2  83c408               add esp, 8
// 004812b5  3bd0                 cmp edx, eax
// 004812b7  0f85ba010000         jne 0x481477
// 004812bd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004812c1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004812c5  8344242030           add dword ptr [esp + 0x20], 0x30
// 004812ca  83c001               add eax, 1
// 004812cd  3b8194010000         cmp eax, dword ptr [ecx + 0x194]
// 004812d3  8944241c             mov dword ptr [esp + 0x1c], eax
// 004812d7  0f8cd5feffff         jl 0x4811b2
// 004812dd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004812e1  3b4d04               cmp ecx, dword ptr [ebp + 4]
// 004812e4  0f8d15030000         jge 0x4815ff
// 004812ea  8b4508               mov eax, dword ptr [ebp + 8]
// 004812ed  8b6d0c               mov ebp, dword ptr [ebp + 0xc]
// 004812f0  85ed                 test ebp, ebp
// 004812f2  89442418             mov dword ptr [esp + 0x18], eax
// 004812f6  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004812fa  0f85a4020000         jne 0x4815a4
// 00481300  8bbc2498000000       mov edi, dword ptr [esp + 0x98]
// 00481307  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 0048130e  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 00481316  80bc24a800000001     cmp byte ptr [esp + 0xa8], 1
// 0048131e  0f84db020000         je 0x4815ff
// 00481324  8b542414             mov edx, dword ptr [esp + 0x14]
// 00481328  33ed                 xor ebp, ebp
// 0048132a  39aa94010000         cmp dword ptr [edx + 0x194], ebp
// 00481330  7e39                 jle 0x48136b
// 00481332  33f6                 xor esi, esi
// 00481334  8b442414             mov eax, dword ptr [esp + 0x14]
// 00481338  8b8090010000         mov eax, dword ptr [eax + 0x190]
// 0048133e  03c6                 add eax, esi
// 00481340  8d4f04               lea ecx, [edi + 4]
// 00481343  51                   push ecx
// 00481344  83c008               add eax, 8
// 00481347  50                   push eax
// 00481348  ff15ece67700         call dword ptr [0x77e6ec]
// 0048134e  83c408               add esp, 8
// 00481351  84c0                 test al, al
// 00481353  0f857e020000         jne 0x4815d7
// 00481359  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048135d  83c501               add ebp, 1
// 00481360  83c630               add esi, 0x30
// 00481363  3ba994010000         cmp ebp, dword ptr [ecx + 0x194]
// 00481369  7cc9                 jl 0x481334
// 0048136b  6838997900           push 0x799938
// 00481370  8d4c2444             lea ecx, [esp + 0x44]
// 00481374  ff1578e77700         call dword ptr [0x77e778]
// 0048137a  8d4f04               lea ecx, [edi + 4]
// 0048137d  51                   push ecx
// 0048137e  50                   push eax
// 0048137f  8d442464             lea eax, [esp + 0x64]
// 00481383  50                   push eax
// 00481384  c784241c01000009000000 mov dword ptr [esp + 0x11c], 9
// 0048138f  ff152ce67700         call dword ptr [0x77e62c]
// 00481395  6844567900           push 0x795644
// 0048139a  50                   push eax
// 0048139b  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004813a2  51                   push ecx
// 004813a3  c68424280100000a     mov byte ptr [esp + 0x128], 0xa
// 004813ab  ff1504e77700         call dword ptr [0x77e704]
// 004813b1  83c418               add esp, 0x18
// 004813b4  50                   push eax
// 004813b5  8d4c2428             lea ecx, [esp + 0x28]
// 004813b9  c68424140100000b     mov byte ptr [esp + 0x114], 0xb
// 004813c1  ff157ce77700         call dword ptr [0x77e77c]
// 004813c7  68b4c18400           push 0x84c1b4
// 004813cc  8d542428             lea edx, [esp + 0x28]
// 004813d0  52                   push edx
// 004813d1  e858dc1900           call 0x61f02e
// 004813d6  83bc24ac00000010     cmp dword ptr [esp + 0xac], 0x10
// 004813de  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004813e5  7307                 jae 0x4813ee
// 004813e7  8d842498000000       lea eax, [esp + 0x98]
// 004813ee  50                   push eax
// 004813ef  8d542428             lea edx, [esp + 0x28]
// 004813f3  68f8987900           push 0x7998f8
// 004813f8  52                   push edx
// 004813f9  e8323f0700           call 0x4f5330
// 004813fe  83c40c               add esp, 0xc
// 00481401  50                   push eax
// 00481402  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00481409  c684241401000002     mov byte ptr [esp + 0x114], 2
// 00481411  ff157ce77700         call dword ptr [0x77e77c]
// 00481417  68b4c18400           push 0x84c1b4
// 0048141c  8d8424b4000000       lea eax, [esp + 0xb4]
// 00481423  50                   push eax
// 00481424  e805dc1900           call 0x61f02e
// 00481429  8d7e0c               lea edi, [esi + 0xc]
// 0048142c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0048142f  51                   push ecx
// 00481430  e83bd7ffff           call 0x47eb70
// 00481435  50                   push eax
// 00481436  57                   push edi
// 00481437  8d9424d8000000       lea edx, [esp + 0xd8]
// 0048143e  68a8987900           push 0x7998a8
// 00481443  52                   push edx
// 00481444  e8e73e0700           call 0x4f5330
// 00481449  83c414               add esp, 0x14
// 0048144c  50                   push eax
// 0048144d  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00481454  c784241401000003000000 mov dword ptr [esp + 0x114], 3
// 0048145f  ff157ce77700         call dword ptr [0x77e77c]
// 00481465  68b4c18400           push 0x84c1b4
// 0048146a  8d8424b4000000       lea eax, [esp + 0xb4]
// 00481471  50                   push eax
// 00481472  e8b7db1900           call 0x61f02e
// 00481477  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0048147a  51                   push ecx
// 0048147b  e8f0d6ffff           call 0x47eb70
// 00481480  83c404               add esp, 4
// 00481483  50                   push eax
// 00481484  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0048148b  ff1578e77700         call dword ptr [0x77e778]
// 00481491  8b5744               mov edx, dword ptr [edi + 0x44]
// 00481494  52                   push edx
// 00481495  c784241401000004000000 mov dword ptr [esp + 0x114], 4
// 004814a0  e8cbd6ffff           call 0x47eb70
// 004814a5  83c404               add esp, 4
// 004814a8  50                   push eax
// 004814a9  8d8c2498000000       lea ecx, [esp + 0x98]
// 004814b0  ff1578e77700         call dword ptr [0x77e778]
// 004814b6  8b4624               mov eax, dword ptr [esi + 0x24]
// 004814b9  50                   push eax
// 004814ba  c684241401000005     mov byte ptr [esp + 0x114], 5
// 004814c2  e8b9f5ffff           call 0x480a80
// 004814c7  50                   push eax
// 004814c8  e8a3d6ffff           call 0x47eb70
// 004814cd  83c408               add esp, 8
// 004814d0  50                   push eax
// 004814d1  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 004814d8  ff1578e77700         call dword ptr [0x77e778]
// 004814de  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004814e1  51                   push ecx
// 004814e2  c684241401000006     mov byte ptr [esp + 0x114], 6
// 004814ea  e891f5ffff           call 0x480a80
// 004814ef  50                   push eax
// 004814f0  e87bd6ffff           call 0x47eb70
// 004814f5  83c408               add esp, 8
// 004814f8  50                   push eax
// 004814f9  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00481500  ff1578e77700         call dword ptr [0x77e778]
// 00481506  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0048150d  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00481514  bb10000000           mov ebx, 0x10
// 00481519  3bc3                 cmp eax, ebx
// 0048151b  c684241001000007     mov byte ptr [esp + 0x110], 7
// 00481523  8bfa                 mov edi, edx
// 00481525  7309                 jae 0x481530
// 00481527  8dbc2498000000       lea edi, [esp + 0x98]
// 0048152e  8bd7                 mov edx, edi
// 00481530  399c24e4000000       cmp dword ptr [esp + 0xe4], ebx
// 00481537  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 0048153e  7307                 jae 0x481547
// 00481540  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00481547  399c24c8000000       cmp dword ptr [esp + 0xc8], ebx
// 0048154e  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 00481555  7307                 jae 0x48155e
// 00481557  8d8424b4000000       lea eax, [esp + 0xb4]
// 0048155e  395e20               cmp dword ptr [esi + 0x20], ebx
// 00481561  7205                 jb 0x481568
// 00481563  8b760c               mov esi, dword ptr [esi + 0xc]
// 00481566  eb03                 jmp 0x48156b
// 00481568  83c60c               add esi, 0xc
// 0048156b  57                   push edi
// 0048156c  52                   push edx
// 0048156d  51                   push ecx
// 0048156e  50                   push eax
// 0048156f  56                   push esi
// 00481570  8d542454             lea edx, [esp + 0x54]
// 00481574  6848987900           push 0x799848
// 00481579  52                   push edx
// 0048157a  e8b13d0700           call 0x4f5330
// 0048157f  83c41c               add esp, 0x1c
// 00481582  50                   push eax
// 00481583  8d4c2428             lea ecx, [esp + 0x28]
// 00481587  c684241401000008     mov byte ptr [esp + 0x114], 8
// 0048158f  ff157ce77700         call dword ptr [0x77e77c]
// 00481595  68b4c18400           push 0x84c1b4
// 0048159a  8d442428             lea eax, [esp + 0x28]
// 0048159e  50                   push eax
// 0048159f  e88ada1900           call 0x61f02e
// 004815a4  8b38                 mov edi, dword ptr [eax]
// 004815a6  33db                 xor ebx, ebx
// 004815a8  85ff                 test edi, edi
// 004815aa  889c24a8000000       mov byte ptr [esp + 0xa8], bl
// 004815b1  0f855ffdffff         jne 0x481316
// 004815b7  eb07                 jmp 0x4815c0
// 004815b9  8da42400000000       lea esp, [esp]
// 004815c0  83c301               add ebx, 1
// 004815c3  3bdd                 cmp ebx, ebp
// 004815c5  0f8d43fdffff         jge 0x48130e
// 004815cb  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 004815ce  85ff                 test edi, edi
// 004815d0  74ee                 je 0x4815c0
// 004815d2  e93ffdffff           jmp 0x481316
// 004815d7  8b7f68               mov edi, dword ptr [edi + 0x68]
// 004815da  85ff                 test edi, edi
// 004815dc  0f8534fdffff         jne 0x481316
// 004815e2  83c301               add ebx, 1
// 004815e5  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 004815e9  0f8d1ffdffff         jge 0x48130e
// 004815ef  8b542418             mov edx, dword ptr [esp + 0x18]
// 004815f3  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 004815f6  85ff                 test edi, edi
// 004815f8  74e8                 je 0x4815e2
// 004815fa  e917fdffff           jmp 0x481316
// 004815ff  8b8c2408010000       mov ecx, dword ptr [esp + 0x108]
// 00481606  64890d00000000       mov dword ptr fs:[0], ecx
// 0048160d  59                   pop ecx
// 0048160e  5f                   pop edi
// 0048160f  5e                   pop esi
// 00481610  5d                   pop ebp
// 00481611  5b                   pop ebx
// 00481612  8b8c24f0000000       mov ecx, dword ptr [esp + 0xf0]
// 00481619  33cc                 xor ecx, esp
// 0048161b  e886d81900           call 0x61eea6
// 00481620  81c400010000         add esp, 0x100
// 00481626  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?validateArgList@VertexAndPixelShader@G3D@@QBEXABVArgList@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
