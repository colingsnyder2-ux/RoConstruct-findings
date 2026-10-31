// roc 2012-06 00406240  unit: ATL::CRegObject  size: 938 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00406240
//
// 00406240  55                   push ebp
// 00406241  8bec                 mov ebp, esp
// 00406243  6aff                 push -1
// 00406245  685ea2a900           push 0xa9a25e
// 0040624a  64a100000000         mov eax, dword ptr fs:[0]
// 00406250  50                   push eax
// 00406251  64892500000000       mov dword ptr fs:[0], esp
// 00406258  51                   push ecx
// 00406259  b820110000           mov eax, 0x1120
// 0040625e  e87dd05700           call 0x9832e0
// 00406263  53                   push ebx
// 00406264  56                   push esi
// 00406265  57                   push edi
// 00406266  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 0040626c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040626f  8bf1                 mov esi, ecx
// 00406271  33ff                 xor edi, edi
// 00406273  50                   push eax
// 00406274  8975e4               mov dword ptr [ebp - 0x1c], esi
// 00406277  897dec               mov dword ptr [ebp - 0x14], edi
// 0040627a  e861e5ffff           call 0x4047e0
// 0040627f  3bc7                 cmp eax, edi
// 00406281  0f8c4a030000         jl 0x4065d1
// 00406287  8d4dec               lea ecx, [ebp - 0x14]
// 0040628a  51                   push ecx
// 0040628b  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00406291  52                   push edx
// 00406292  e889e3ffff           call 0x404620
// 00406297  83c408               add esp, 8
// 0040629a  85c0                 test eax, eax
// 0040629c  750a                 jne 0x4062a8
// 0040629e  b809000280           mov eax, 0x80020009
// 004062a3  e929030000           jmp 0x4065d1
// 004062a8  8bce                 mov ecx, esi
// 004062aa  e8d1e4ffff           call 0x404780
// 004062af  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 004062b5  50                   push eax
// 004062b6  8bce                 mov ecx, esi
// 004062b8  e823e5ffff           call 0x4047e0
// 004062bd  3bc7                 cmp eax, edi
// 004062bf  0f8c0c030000         jl 0x4065d1
// 004062c5  0fb745ec             movzx eax, word ptr [ebp - 0x14]
// 004062c9  83f813               cmp eax, 0x13
// 004062cc  0f8ff7010000         jg 0x4064c9
// 004062d2  0f8440010000         je 0x406418
// 004062d8  83f808               cmp eax, 8
// 004062db  0f841b010000         je 0x4063fc
// 004062e1  83f811               cmp eax, 0x11
// 004062e4  0f85d2020000         jne 0x4065bc
// 004062ea  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 004062f0  51                   push ecx
// 004062f1  ff15a821b200         call dword ptr [0xb221a8]
// 004062f7  8bd8                 mov ebx, eax
// 004062f9  895de8               mov dword ptr [ebp - 0x18], ebx
// 004062fc  f6c301               test bl, 1
// 004062ff  7560                 jne 0x406361
// 00406301  99                   cdq 
// 00406302  2bc2                 sub eax, edx
// 00406304  8bf8                 mov edi, eax
// 00406306  d1ff                 sar edi, 1
// 00406308  897dec               mov dword ptr [ebp - 0x14], edi
// 0040630b  c785d0feffff00000000 mov dword ptr [ebp - 0x130], 0
// 00406315  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0040631c  57                   push edi
// 0040631d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00406323  c645fc05             mov byte ptr [ebp - 4], 5
// 00406327  e8c4f9ffff           call 0x405cf0
// 0040632c  eb14                 jmp 0x406342
// 0040632e  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 00406331  e8b4c05700           call 0x9823ea
// 00406336  b83c634000           mov eax, 0x40633c
// 0040633b  c3                   ret 
// 0040633c  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 0040633f  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 00406342  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 00406348  85c0                 test eax, eax
// 0040634a  751f                 jne 0x40636b
// 0040634c  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00406352  85d2                 test edx, edx
// 00406354  740b                 je 0x406361
// 00406356  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 0040635c  e86fe7ffff           call 0x404ad0
// 00406361  b805400080           mov eax, 0x80004005
// 00406366  e966020000           jmp 0x4065d1
// 0040636b  57                   push edi
// 0040636c  6a00                 push 0
// 0040636e  50                   push eax
// 0040636f  e800d05700           call 0x983374
// 00406374  83c40c               add esp, 0xc
// 00406377  33f6                 xor esi, esi
// 00406379  85db                 test ebx, ebx
// 0040637b  7e3f                 jle 0x4063bc
// 0040637d  8d4900               lea ecx, [ecx]
// 00406380  0fb69435d0eeffff     movzx edx, byte ptr [ebp + esi - 0x1130]
// 00406388  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 0040638e  8bc6                 mov eax, esi
// 00406390  d1e8                 shr eax, 1
// 00406392  52                   push edx
// 00406393  8d3c08               lea edi, [eax + ecx]
// 00406396  e835e3ffff           call 0x4046d0
// 0040639b  8bce                 mov ecx, esi
// 0040639d  83e101               and ecx, 1
// 004063a0  03c9                 add ecx, ecx
// 004063a2  03c9                 add ecx, ecx
// 004063a4  8bd1                 mov edx, ecx
// 004063a6  b904000000           mov ecx, 4
// 004063ab  2bca                 sub ecx, edx
// 004063ad  d2e0                 shl al, cl
// 004063af  46                   inc esi
// 004063b0  83c404               add esp, 4
// 004063b3  0807                 or byte ptr [edi], al
// 004063b5  3bf3                 cmp esi, ebx
// 004063b7  7cc7                 jl 0x406380
// 004063b9  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004063bc  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 004063c2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004063c5  8b4508               mov eax, dword ptr [ebp + 8]
// 004063c8  8b00                 mov eax, dword ptr [eax]
// 004063ca  57                   push edi
// 004063cb  51                   push ecx
// 004063cc  6a03                 push 3
// 004063ce  6a00                 push 0
// 004063d0  52                   push edx
// 004063d1  50                   push eax
// 004063d2  ff151020b200         call dword ptr [0xb22010]
// 004063d8  8bf0                 mov esi, eax
// 004063da  8d85d4feffff         lea eax, [ebp - 0x12c]
// 004063e0  3985d0feffff         cmp dword ptr [ebp - 0x130], eax
// 004063e6  0f84bc010000         je 0x4065a8
// 004063ec  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004063f2  e8d9e6ffff           call 0x404ad0
// 004063f7  e9ac010000           jmp 0x4065a8
// 004063fc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004063ff  6a01                 push 1
// 00406401  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00406407  51                   push ecx
// 00406408  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040640b  52                   push edx
// 0040640c  e86fe0ffff           call 0x404480
// 00406411  8bf0                 mov esi, eax
// 00406413  e990010000           jmp 0x4065a8
// 00406418  897dec               mov dword ptr [ebp - 0x14], edi
// 0040641b  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00406421  50                   push eax
// 00406422  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00406429  ff15a821b200         call dword ptr [0xb221a8]
// 0040642f  40                   inc eax
// 00406430  6a02                 push 2
// 00406432  50                   push eax
// 00406433  8d4de8               lea ecx, [ebp - 0x18]
// 00406436  51                   push ecx
// 00406437  8945e8               mov dword ptr [ebp - 0x18], eax
// 0040643a  e871dcffff           call 0x4040b0
// 0040643f  83c40c               add esp, 0xc
// 00406442  85c0                 test eax, eax
// 00406444  7c45                 jl 0x40648b
// 00406446  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 00406449  81fe00040000         cmp esi, 0x400
// 0040644f  7f1b                 jg 0x40646c
// 00406451  56                   push esi
// 00406452  e819e9ffff           call 0x404d70
// 00406457  83c404               add esp, 4
// 0040645a  84c0                 test al, al
// 0040645c  740e                 je 0x40646c
// 0040645e  8bc6                 mov eax, esi
// 00406460  e8abce5700           call 0x983310
// 00406465  8965f0               mov dword ptr [ebp - 0x10], esp
// 00406468  8bc4                 mov eax, esp
// 0040646a  eb09                 jmp 0x406475
// 0040646c  56                   push esi
// 0040646d  8d4dec               lea ecx, [ebp - 0x14]
// 00406470  e8abedffff           call 0x405220
// 00406475  6a03                 push 3
// 00406477  d1ee                 shr esi, 1
// 00406479  56                   push esi
// 0040647a  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00406480  52                   push edx
// 00406481  50                   push eax
// 00406482  e879dcffff           call 0x404100
// 00406487  3bc7                 cmp eax, edi
// 00406489  7512                 jne 0x40649d
// 0040648b  8d4dec               lea ecx, [ebp - 0x14]
// 0040648e  e8cde5ffff           call 0x404a60
// 00406493  b80e000780           mov eax, 0x8007000e
// 00406498  e934010000           jmp 0x4065d1
// 0040649d  8d4de0               lea ecx, [ebp - 0x20]
// 004064a0  51                   push ecx
// 004064a1  57                   push edi
// 004064a2  57                   push edi
// 004064a3  50                   push eax
// 004064a4  ff15142bb200         call dword ptr [0xb22b14]
// 004064aa  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004064ad  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004064b0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004064b3  52                   push edx
// 004064b4  50                   push eax
// 004064b5  e8a6dfffff           call 0x404460
// 004064ba  8d4dec               lea ecx, [ebp - 0x14]
// 004064bd  8bf0                 mov esi, eax
// 004064bf  e89ce5ffff           call 0x404a60
// 004064c4  e9df000000           jmp 0x4065a8
// 004064c9  3d08400000           cmp eax, 0x4008
// 004064ce  0f85e8000000         jne 0x4065bc
// 004064d4  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 004064da  51                   push ecx
// 004064db  ff15a821b200         call dword ptr [0xb221a8]
// 004064e1  83c002               add eax, 2
// 004064e4  89bdd0feffff         mov dword ptr [ebp - 0x130], edi
// 004064ea  897dfc               mov dword ptr [ebp - 4], edi
// 004064ed  50                   push eax
// 004064ee  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004064f4  c645fc01             mov byte ptr [ebp - 4], 1
// 004064f8  e8f3f7ffff           call 0x405cf0
// 004064fd  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 00406503  85ff                 test edi, edi
// 00406505  0f8483000000         je 0x40658e
// 0040650b  80bdd0eeffff00       cmp byte ptr [ebp - 0x1130], 0
// 00406512  8db5d0eeffff         lea esi, [ebp - 0x1130]
// 00406518  7450                 je 0x40656a
// 0040651a  8b1d183cb200         mov ebx, dword ptr [0xb23c18]
// 00406520  56                   push esi
// 00406521  ffd3                 call ebx
// 00406523  8a0e                 mov cl, byte ptr [esi]
// 00406525  80f95c               cmp cl, 0x5c
// 00406528  751e                 jne 0x406548
// 0040652a  803830               cmp byte ptr [eax], 0x30
// 0040652d  7519                 jne 0x406548
// 0040652f  c60700               mov byte ptr [edi], 0
// 00406532  50                   push eax
// 00406533  47                   inc edi
// 00406534  ffd3                 call ebx
// 00406536  8bf0                 mov esi, eax
// 00406538  eb2b                 jmp 0x406565
// 0040653a  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0040653d  e8a8be5700           call 0x9823ea
// 00406542  b8fd644000           mov eax, 0x4064fd
// 00406547  c3                   ret 
// 00406548  880f                 mov byte ptr [edi], cl
// 0040654a  0fb616               movzx edx, byte ptr [esi]
// 0040654d  52                   push edx
// 0040654e  ff159c21b200         call dword ptr [0xb2219c]
// 00406554  85c0                 test eax, eax
// 00406556  740b                 je 0x406563
// 00406558  8a4601               mov al, byte ptr [esi + 1]
// 0040655b  46                   inc esi
// 0040655c  47                   inc edi
// 0040655d  84c0                 test al, al
// 0040655f  7409                 je 0x40656a
// 00406561  8807                 mov byte ptr [edi], al
// 00406563  47                   inc edi
// 00406564  46                   inc esi
// 00406565  803e00               cmp byte ptr [esi], 0
// 00406568  75b6                 jne 0x406520
// 0040656a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040656d  c60700               mov byte ptr [edi], 0
// 00406570  c6470100             mov byte ptr [edi + 1], 0
// 00406574  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 0040657a  50                   push eax
// 0040657b  51                   push ecx
// 0040657c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040657f  e83cdfffff           call 0x4044c0
// 00406584  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 0040658a  8bf0                 mov esi, eax
// 0040658c  eb05                 jmp 0x406593
// 0040658e  be0e000000           mov esi, 0xe
// 00406593  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00406599  3bfa                 cmp edi, edx
// 0040659b  740b                 je 0x4065a8
// 0040659d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004065a3  e828e5ffff           call 0x404ad0
// 004065a8  33ff                 xor edi, edi
// 004065aa  3bf7                 cmp esi, edi
// 004065ac  740b                 je 0x4065b9
// 004065ae  56                   push esi
// 004065af  e8fcdcffff           call 0x4042b0
// 004065b4  83c404               add esp, 4
// 004065b7  eb18                 jmp 0x4065d1
// 004065b9  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004065bc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004065bf  50                   push eax
// 004065c0  8bce                 mov ecx, esi
// 004065c2  e819e2ffff           call 0x4047e0
// 004065c7  33c9                 xor ecx, ecx
// 004065c9  3bc7                 cmp eax, edi
// 004065cb  0f9dc1               setge cl
// 004065ce  49                   dec ecx
// 004065cf  23c1                 and eax, ecx
// 004065d1  8da5c4eeffff         lea esp, [ebp - 0x113c]
// 004065d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004065da  64890d00000000       mov dword ptr fs:[0], ecx
// 004065e1  5f                   pop edi
// 004065e2  5e                   pop esi
// 004065e3  5b                   pop ebx
// 004065e4  8be5                 mov esp, ebp
// 004065e6  5d                   pop ebp
// 004065e7  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddValue@CRegParser@ATL@@IAEJAAVCRegKey@2@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp