// roc 2011-06 00812850  unit: CXTPPaintManager  size: 1809 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00812850
//
// 00812850  6aff                 push -1
// 00812852  68c025a000           push 0xa025c0
// 00812857  64a100000000         mov eax, dword ptr fs:[0]
// 0081285d  50                   push eax
// 0081285e  83ec4c               sub esp, 0x4c
// 00812861  53                   push ebx
// 00812862  55                   push ebp
// 00812863  56                   push esi
// 00812864  57                   push edi
// 00812865  a12058c900           mov eax, dword ptr [0xc95820]
// 0081286a  33c4                 xor eax, esp
// 0081286c  50                   push eax
// 0081286d  8d442460             lea eax, [esp + 0x60]
// 00812871  64a300000000         mov dword ptr fs:[0], eax
// 00812877  8bf9                 mov edi, ecx
// 00812879  8b442478             mov eax, dword ptr [esp + 0x78]
// 0081287d  85c0                 test eax, eax
// 0081287f  0f85a8030000         jne 0x812c2d
// 00812885  39842484000000       cmp dword ptr [esp + 0x84], eax
// 0081288c  0f8588000000         jne 0x81291a
// 00812892  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00812899  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008128a0  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 008128a6  8b01                 mov eax, dword ptr [ecx]
// 008128a8  8b4904               mov ecx, dword ptr [ecx + 4]
// 008128ab  83fa02               cmp edx, 2
// 008128ae  743a                 je 0x8128ea
// 008128b0  83fa03               cmp edx, 3
// 008128b3  7435                 je 0x8128ea
// 008128b5  83fa05               cmp edx, 5
// 008128b8  7430                 je 0x8128ea
// 008128ba  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 008128be  8b2b                 mov ebp, dword ptr [ebx]
// 008128c0  8d50f3               lea edx, [eax - 0xd]
// 008128c3  8d78fe               lea edi, [eax - 2]
// 008128c6  83ec10               sub esp, 0x10
// 008128c9  8bc4                 mov eax, esp
// 008128cb  8910                 mov dword ptr [eax], edx
// 008128cd  be02000000           mov esi, 2
// 008128d2  897004               mov dword ptr [eax + 4], esi
// 008128d5  83c1fe               add ecx, -2
// 008128d8  897808               mov dword ptr [eax + 8], edi
// 008128db  89480c               mov dword ptr [eax + 0xc], ecx
// 008128de  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 008128e1  8bcb                 mov ecx, ebx
// 008128e3  ffd0                 call eax
// 008128e5  e9e3010000           jmp 0x812acd
// 008128ea  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 008128ee  8b2b                 mov ebp, dword ptr [ebx]
// 008128f0  8d78fe               lea edi, [eax - 2]
// 008128f3  83ec10               sub esp, 0x10
// 008128f6  8bc4                 mov eax, esp
// 008128f8  8d71f3               lea esi, [ecx - 0xd]
// 008128fb  ba02000000           mov edx, 2
// 00812900  8910                 mov dword ptr [eax], edx
// 00812902  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 00812905  83c1fe               add ecx, -2
// 00812908  897004               mov dword ptr [eax + 4], esi
// 0081290b  897808               mov dword ptr [eax + 8], edi
// 0081290e  89480c               mov dword ptr [eax + 0xc], ecx
// 00812911  8bcb                 mov ecx, ebx
// 00812913  ffd2                 call edx
// 00812915  e9b3010000           jmp 0x812acd
// 0081291a  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 0081291e  8b07                 mov eax, dword ptr [edi]
// 00812920  8b742474             mov esi, dword ptr [esp + 0x74]
// 00812924  8b5078               mov edx, dword ptr [eax + 0x78]
// 00812927  55                   push ebp
// 00812928  56                   push esi
// 00812929  ffd2                 call edx
// 0081292b  8b07                 mov eax, dword ptr [edi]
// 0081292d  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00812930  55                   push ebp
// 00812931  8bcf                 mov ecx, edi
// 00812933  ffd2                 call edx
// 00812935  8bbdc0000000         mov edi, dword ptr [ebp + 0xc0]
// 0081293b  8b9dc4000000         mov ebx, dword ptr [ebp + 0xc4]
// 00812941  8bc8                 mov ecx, eax
// 00812943  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0081294a  8b10                 mov edx, dword ptr [eax]
// 0081294c  8b85c8000000         mov eax, dword ptr [ebp + 0xc8]
// 00812952  8badcc000000         mov ebp, dword ptr [ebp + 0xcc]
// 00812958  8954247c             mov dword ptr [esp + 0x7c], edx
// 0081295c  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00812963  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 00812969  894c2474             mov dword ptr [esp + 0x74], ecx
// 0081296d  8944242c             mov dword ptr [esp + 0x2c], eax
// 00812971  83fa02               cmp edx, 2
// 00812974  0f847a010000         je 0x812af4
// 0081297a  83fa03               cmp edx, 3
// 0081297d  0f8471010000         je 0x812af4
// 00812983  83fa05               cmp edx, 5
// 00812986  0f8468010000         je 0x812af4
// 0081298c  2bc7                 sub eax, edi
// 0081298e  99                   cdq 
// 0081298f  2bc2                 sub eax, edx
// 00812991  51                   push ecx
// 00812992  8d55fb               lea edx, [ebp - 5]
// 00812995  d1f8                 sar eax, 1
// 00812997  03c7                 add eax, edi
// 00812999  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 008129a0  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008129a7  51                   push ecx
// 008129a8  8d55f9               lea edx, [ebp - 7]
// 008129ab  50                   push eax
// 008129ac  8d6802               lea ebp, [eax + 2]
// 008129af  52                   push edx
// 008129b0  896c2424             mov dword ptr [esp + 0x24], ebp
// 008129b4  8d68fe               lea ebp, [eax - 2]
// 008129b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 008129bb  50                   push eax
// 008129bc  52                   push edx
// 008129bd  55                   push ebp
// 008129be  56                   push esi
// 008129bf  e8ecdbffff           call 0x8105b0
// 008129c4  83c420               add esp, 0x20
// 008129c7  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 008129cc  0f84fb000000         je 0x812acd
// 008129d2  85f6                 test esi, esi
// 008129d4  7504                 jne 0x8129da
// 008129d6  33c0                 xor eax, eax
// 008129d8  eb03                 jmp 0x8129dd
// 008129da  8b4604               mov eax, dword ptr [esi + 4]
// 008129dd  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008129e1  51                   push ecx
// 008129e2  50                   push eax
// 008129e3  8d4c242c             lea ecx, [esp + 0x2c]
// 008129e7  e8d4a70400           call 0x85d1c0
// 008129ec  8d6b04               lea ebp, [ebx + 4]
// 008129ef  55                   push ebp
// 008129f0  8d4702               lea eax, [edi + 2]
// 008129f3  50                   push eax
// 008129f4  8d54241c             lea edx, [esp + 0x1c]
// 008129f8  52                   push edx
// 008129f9  8bce                 mov ecx, esi
// 008129fb  c744247400000000     mov dword ptr [esp + 0x74], 0
// 00812a03  e86885ffff           call 0x80af70
// 00812a08  8d4306               lea eax, [ebx + 6]
// 00812a0b  50                   push eax
// 00812a0c  89842480000000       mov dword ptr [esp + 0x80], eax
// 00812a13  8d4704               lea eax, [edi + 4]
// 00812a16  50                   push eax
// 00812a17  8bce                 mov ecx, esi
// 00812a19  e84c85ffff           call 0x80af6a
// 00812a1e  83c309               add ebx, 9
// 00812a21  53                   push ebx
// 00812a22  8d4f01               lea ecx, [edi + 1]
// 00812a25  51                   push ecx
// 00812a26  8bce                 mov ecx, esi
// 00812a28  e83d85ffff           call 0x80af6a
// 00812a2d  55                   push ebp
// 00812a2e  8d5703               lea edx, [edi + 3]
// 00812a31  52                   push edx
// 00812a32  8d44241c             lea eax, [esp + 0x1c]
// 00812a36  50                   push eax
// 00812a37  8bce                 mov ecx, esi
// 00812a39  e83285ffff           call 0x80af70
// 00812a3e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00812a42  51                   push ecx
// 00812a43  8d4705               lea eax, [edi + 5]
// 00812a46  50                   push eax
// 00812a47  8bce                 mov ecx, esi
// 00812a49  e81c85ffff           call 0x80af6a
// 00812a4e  53                   push ebx
// 00812a4f  8d4702               lea eax, [edi + 2]
// 00812a52  50                   push eax
// 00812a53  8bce                 mov ecx, esi
// 00812a55  e81085ffff           call 0x80af6a
// 00812a5a  8d4706               lea eax, [edi + 6]
// 00812a5d  55                   push ebp
// 00812a5e  50                   push eax
// 00812a5f  8d54241c             lea edx, [esp + 0x1c]
// 00812a63  52                   push edx
// 00812a64  8bce                 mov ecx, esi
// 00812a66  89842480000000       mov dword ptr [esp + 0x80], eax
// 00812a6d  e8fe84ffff           call 0x80af70
// 00812a72  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00812a76  50                   push eax
// 00812a77  8d4f08               lea ecx, [edi + 8]
// 00812a7a  51                   push ecx
// 00812a7b  8bce                 mov ecx, esi
// 00812a7d  e8e884ffff           call 0x80af6a
// 00812a82  53                   push ebx
// 00812a83  8d4705               lea eax, [edi + 5]
// 00812a86  50                   push eax
// 00812a87  8bce                 mov ecx, esi
// 00812a89  e8dc84ffff           call 0x80af6a
// 00812a8e  55                   push ebp
// 00812a8f  8d5707               lea edx, [edi + 7]
// 00812a92  52                   push edx
// 00812a93  8d44241c             lea eax, [esp + 0x1c]
// 00812a97  50                   push eax
// 00812a98  8bce                 mov ecx, esi
// 00812a9a  e8d184ffff           call 0x80af70
// 00812a9f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00812aa3  51                   push ecx
// 00812aa4  83c709               add edi, 9
// 00812aa7  57                   push edi
// 00812aa8  8bce                 mov ecx, esi
// 00812aaa  e8bb84ffff           call 0x80af6a
// 00812aaf  8b542474             mov edx, dword ptr [esp + 0x74]
// 00812ab3  53                   push ebx
// 00812ab4  52                   push edx
// 00812ab5  8bce                 mov ecx, esi
// 00812ab7  e8ae84ffff           call 0x80af6a
// 00812abc  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00812ac4  8d4c2424             lea ecx, [esp + 0x24]
// 00812ac8  e883a70400           call 0x85d250
// 00812acd  8b442470             mov eax, dword ptr [esp + 0x70]
// 00812ad1  c7400400000000       mov dword ptr [eax + 4], 0
// 00812ad8  c70000000000         mov dword ptr [eax], 0
// 00812ade  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00812ae2  64890d00000000       mov dword ptr fs:[0], ecx
// 00812ae9  59                   pop ecx
// 00812aea  5f                   pop edi
// 00812aeb  5e                   pop esi
// 00812aec  5d                   pop ebp
// 00812aed  5b                   pop ebx
// 00812aee  83c458               add esp, 0x58
// 00812af1  c21c00               ret 0x1c
// 00812af4  51                   push ecx
// 00812af5  8d6b05               lea ebp, [ebx + 5]
// 00812af8  55                   push ebp
// 00812af9  83c704               add edi, 4
// 00812afc  57                   push edi
// 00812afd  8d4d02               lea ecx, [ebp + 2]
// 00812b00  51                   push ecx
// 00812b01  8d4702               lea eax, [edi + 2]
// 00812b04  50                   push eax
// 00812b05  8d55fe               lea edx, [ebp - 2]
// 00812b08  52                   push edx
// 00812b09  50                   push eax
// 00812b0a  56                   push esi
// 00812b0b  e8a0daffff           call 0x8105b0
// 00812b10  83c420               add esp, 0x20
// 00812b13  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 00812b18  74b3                 je 0x812acd
// 00812b1a  85f6                 test esi, esi
// 00812b1c  7504                 jne 0x812b22
// 00812b1e  33c0                 xor eax, eax
// 00812b20  eb03                 jmp 0x812b25
// 00812b22  8b4604               mov eax, dword ptr [esi + 4]
// 00812b25  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00812b29  51                   push ecx
// 00812b2a  50                   push eax
// 00812b2b  8d4c2440             lea ecx, [esp + 0x40]
// 00812b2f  e88ca60400           call 0x85d1c0
// 00812b34  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00812b38  8d4302               lea eax, [ebx + 2]
// 00812b3b  50                   push eax
// 00812b3c  83c7f8               add edi, -8
// 00812b3f  57                   push edi
// 00812b40  8d54241c             lea edx, [esp + 0x1c]
// 00812b44  52                   push edx
// 00812b45  8bce                 mov ecx, esi
// 00812b47  c744247401000000     mov dword ptr [esp + 0x74], 1
// 00812b4f  e81c84ffff           call 0x80af70
// 00812b54  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00812b58  8d4b04               lea ecx, [ebx + 4]
// 00812b5b  83c0fa               add eax, -6
// 00812b5e  51                   push ecx
// 00812b5f  50                   push eax
// 00812b60  8bce                 mov ecx, esi
// 00812b62  8944247c             mov dword ptr [esp + 0x7c], eax
// 00812b66  e8ff83ffff           call 0x80af6a
// 00812b6b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00812b6f  8d5301               lea edx, [ebx + 1]
// 00812b72  83c0fd               add eax, -3
// 00812b75  52                   push edx
// 00812b76  50                   push eax
// 00812b77  8bce                 mov ecx, esi
// 00812b79  89842490000000       mov dword ptr [esp + 0x90], eax
// 00812b80  e8e583ffff           call 0x80af6a
// 00812b85  8d4303               lea eax, [ebx + 3]
// 00812b88  50                   push eax
// 00812b89  57                   push edi
// 00812b8a  8d4c241c             lea ecx, [esp + 0x1c]
// 00812b8e  51                   push ecx
// 00812b8f  8bce                 mov ecx, esi
// 00812b91  e8da83ffff           call 0x80af70
// 00812b96  8b542474             mov edx, dword ptr [esp + 0x74]
// 00812b9a  55                   push ebp
// 00812b9b  52                   push edx
// 00812b9c  8bce                 mov ecx, esi
// 00812b9e  e8c783ffff           call 0x80af6a
// 00812ba3  8d4302               lea eax, [ebx + 2]
// 00812ba6  50                   push eax
// 00812ba7  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00812bae  50                   push eax
// 00812baf  8bce                 mov ecx, esi
// 00812bb1  e8b483ffff           call 0x80af6a
// 00812bb6  8d4306               lea eax, [ebx + 6]
// 00812bb9  50                   push eax
// 00812bba  57                   push edi
// 00812bbb  8d4c241c             lea ecx, [esp + 0x1c]
// 00812bbf  51                   push ecx
// 00812bc0  8bce                 mov ecx, esi
// 00812bc2  89842488000000       mov dword ptr [esp + 0x88], eax
// 00812bc9  e8a283ffff           call 0x80af70
// 00812bce  8b442474             mov eax, dword ptr [esp + 0x74]
// 00812bd2  8d5308               lea edx, [ebx + 8]
// 00812bd5  52                   push edx
// 00812bd6  50                   push eax
// 00812bd7  8bce                 mov ecx, esi
// 00812bd9  e88c83ffff           call 0x80af6a
// 00812bde  55                   push ebp
// 00812bdf  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00812be6  55                   push ebp
// 00812be7  8bce                 mov ecx, esi
// 00812be9  e87c83ffff           call 0x80af6a
// 00812bee  8d4b07               lea ecx, [ebx + 7]
// 00812bf1  51                   push ecx
// 00812bf2  57                   push edi
// 00812bf3  8d54241c             lea edx, [esp + 0x1c]
// 00812bf7  52                   push edx
// 00812bf8  8bce                 mov ecx, esi
// 00812bfa  e87183ffff           call 0x80af70
// 00812bff  8b442474             mov eax, dword ptr [esp + 0x74]
// 00812c03  83c309               add ebx, 9
// 00812c06  53                   push ebx
// 00812c07  50                   push eax
// 00812c08  8bce                 mov ecx, esi
// 00812c0a  e85b83ffff           call 0x80af6a
// 00812c0f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00812c13  51                   push ecx
// 00812c14  55                   push ebp
// 00812c15  8bce                 mov ecx, esi
// 00812c17  e84e83ffff           call 0x80af6a
// 00812c1c  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00812c24  8d4c2438             lea ecx, [esp + 0x38]
// 00812c28  e99bfeffff           jmp 0x812ac8
// 00812c2d  83f803               cmp eax, 3
// 00812c30  0f85b6000000         jne 0x812cec
// 00812c36  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00812c3a  8b17                 mov edx, dword ptr [edi]
// 00812c3c  8b442474             mov eax, dword ptr [esp + 0x74]
// 00812c40  8b5278               mov edx, dword ptr [edx + 0x78]
// 00812c43  56                   push esi
// 00812c44  50                   push eax
// 00812c45  ffd2                 call edx
// 00812c47  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00812c4d  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00812c53  8b17                 mov edx, dword ptr [edi]
// 00812c55  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00812c5b  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00812c61  8944242c             mov dword ptr [esp + 0x2c], eax
// 00812c65  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00812c68  894c2430             mov dword ptr [esp + 0x30], ecx
// 00812c6c  56                   push esi
// 00812c6d  8bcf                 mov ecx, edi
// 00812c6f  ffd0                 call eax
// 00812c71  8b16                 mov edx, dword ptr [esi]
// 00812c73  8944247c             mov dword ptr [esp + 0x7c], eax
// 00812c77  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00812c7a  8bce                 mov ecx, esi
// 00812c7c  ffd0                 call eax
// 00812c7e  85c0                 test eax, eax
// 00812c80  7525                 jne 0x812ca7
// 00812c82  8b16                 mov edx, dword ptr [esi]
// 00812c84  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00812c8a  8bce                 mov ecx, esi
// 00812c8c  ffd0                 call eax
// 00812c8e  85c0                 test eax, eax
// 00812c90  7515                 jne 0x812ca7
// 00812c92  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00812c95  83f8ff               cmp eax, -1
// 00812c98  7509                 jne 0x812ca3
// 00812c9a  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00812c9d  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00812ca1  eb04                 jmp 0x812ca7
// 00812ca3  8944247c             mov dword ptr [esp + 0x7c], eax
// 00812ca7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00812cab  2bc3                 sub eax, ebx
// 00812cad  99                   cdq 
// 00812cae  2bc2                 sub eax, edx
// 00812cb0  8bc8                 mov ecx, eax
// 00812cb2  8b442430             mov eax, dword ptr [esp + 0x30]
// 00812cb6  2bc5                 sub eax, ebp
// 00812cb8  99                   cdq 
// 00812cb9  2bc2                 sub eax, edx
// 00812cbb  d1f9                 sar ecx, 1
// 00812cbd  03cb                 add ecx, ebx
// 00812cbf  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00812cc3  d1f8                 sar eax, 1
// 00812cc5  53                   push ebx
// 00812cc6  03c5                 add eax, ebp
// 00812cc8  8d5001               lea edx, [eax + 1]
// 00812ccb  52                   push edx
// 00812ccc  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00812cd0  51                   push ecx
// 00812cd1  83c0fe               add eax, -2
// 00812cd4  50                   push eax
// 00812cd5  8d7103               lea esi, [ecx + 3]
// 00812cd8  56                   push esi
// 00812cd9  50                   push eax
// 00812cda  8d79fd               lea edi, [ecx - 3]
// 00812cdd  57                   push edi
// 00812cde  52                   push edx
// 00812cdf  e8ccd8ffff           call 0x8105b0
// 00812ce4  83c420               add esp, 0x20
// 00812ce7  e9e1fdffff           jmp 0x812acd
// 00812cec  83f802               cmp eax, 2
// 00812cef  0f851f010000         jne 0x812e14
// 00812cf5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00812cfd  c74424149041a700     mov dword ptr [esp + 0x14], 0xa74190
// 00812d05  8b742474             mov esi, dword ptr [esp + 0x74]
// 00812d09  89442468             mov dword ptr [esp + 0x68], eax
// 00812d0d  8b4608               mov eax, dword ptr [esi + 8]
// 00812d10  6a58                 push 0x58
// 00812d12  50                   push eax
// 00812d13  ff157401a400         call dword ptr [0xa40174]
// 00812d19  6a00                 push 0
// 00812d1b  686c1bac00           push 0xac1b6c
// 00812d20  50                   push eax
// 00812d21  6a60                 push 0x60
// 00812d23  6a50                 push 0x50
// 00812d25  ff15dc01a400         call dword ptr [0xa401dc]
// 00812d2b  50                   push eax
// 00812d2c  8d4c2420             lea ecx, [esp + 0x20]
// 00812d30  e8b3981b00           call 0x9cc5e8
// 00812d35  8b16                 mov edx, dword ptr [esi]
// 00812d37  8b5230               mov edx, dword ptr [edx + 0x30]
// 00812d3a  8d442414             lea eax, [esp + 0x14]
// 00812d3e  50                   push eax
// 00812d3f  8bce                 mov ecx, esi
// 00812d41  ffd2                 call edx
// 00812d43  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00812d47  89442474             mov dword ptr [esp + 0x74], eax
// 00812d4b  8b07                 mov eax, dword ptr [edi]
// 00812d4d  8b5078               mov edx, dword ptr [eax + 0x78]
// 00812d50  53                   push ebx
// 00812d51  56                   push esi
// 00812d52  8bcf                 mov ecx, edi
// 00812d54  ffd2                 call edx
// 00812d56  8b03                 mov eax, dword ptr [ebx]
// 00812d58  8b5078               mov edx, dword ptr [eax + 0x78]
// 00812d5b  8bcb                 mov ecx, ebx
// 00812d5d  ffd2                 call edx
// 00812d5f  85c0                 test eax, eax
// 00812d61  7532                 jne 0x812d95
// 00812d63  8b03                 mov eax, dword ptr [ebx]
// 00812d65  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00812d68  8bcb                 mov ecx, ebx
// 00812d6a  ffd2                 call edx
// 00812d6c  85c0                 test eax, eax
// 00812d6e  7525                 jne 0x812d95
// 00812d70  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00812d73  83f8ff               cmp eax, -1
// 00812d76  750f                 jne 0x812d87
// 00812d78  8b7f58               mov edi, dword ptr [edi + 0x58]
// 00812d7b  8b06                 mov eax, dword ptr [esi]
// 00812d7d  8b5038               mov edx, dword ptr [eax + 0x38]
// 00812d80  57                   push edi
// 00812d81  8bce                 mov ecx, esi
// 00812d83  ffd2                 call edx
// 00812d85  eb22                 jmp 0x812da9
// 00812d87  8bf8                 mov edi, eax
// 00812d89  8b06                 mov eax, dword ptr [esi]
// 00812d8b  8b5038               mov edx, dword ptr [eax + 0x38]
// 00812d8e  57                   push edi
// 00812d8f  8bce                 mov ecx, esi
// 00812d91  ffd2                 call edx
// 00812d93  eb14                 jmp 0x812da9
// 00812d95  8b07                 mov eax, dword ptr [edi]
// 00812d97  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00812d9a  8b2e                 mov ebp, dword ptr [esi]
// 00812d9c  53                   push ebx
// 00812d9d  8bcf                 mov ecx, edi
// 00812d9f  ffd2                 call edx
// 00812da1  50                   push eax
// 00812da2  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00812da5  8bce                 mov ecx, esi
// 00812da7  ffd0                 call eax
// 00812da9  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 00812daf  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 00812db5  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 00812dbb  6a25                 push 0x25
// 00812dbd  89442430             mov dword ptr [esp + 0x30], eax
// 00812dc1  8d442428             lea eax, [esp + 0x28]
// 00812dc5  894c2428             mov dword ptr [esp + 0x28], ecx
// 00812dc9  8b8bcc000000         mov ecx, dword ptr [ebx + 0xcc]
// 00812dcf  50                   push eax
// 00812dd0  89542430             mov dword ptr [esp + 0x30], edx
// 00812dd4  8b16                 mov edx, dword ptr [esi]
// 00812dd6  8b5270               mov edx, dword ptr [edx + 0x70]
// 00812dd9  6a01                 push 1
// 00812ddb  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00812ddf  6868fba700           push 0xa7fb68
// 00812de4  8bce                 mov ecx, esi
// 00812de6  ffd2                 call edx
// 00812de8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00812dec  8b06                 mov eax, dword ptr [esi]
// 00812dee  8b5030               mov edx, dword ptr [eax + 0x30]
// 00812df1  51                   push ecx
// 00812df2  8bce                 mov ecx, esi
// 00812df4  ffd2                 call edx
// 00812df6  8d4c2414             lea ecx, [esp + 0x14]
// 00812dfa  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00812e02  c74424149041a700     mov dword ptr [esp + 0x14], 0xa74190
// 00812e0a  e8210bc0ff           call 0x413930
// 00812e0f  e9b9fcffff           jmp 0x812acd
// 00812e14  83f801               cmp eax, 1
// 00812e17  0f85b0fcffff         jne 0x812acd
// 00812e1d  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 00812e25  0f8426010000         je 0x812f51
// 00812e2b  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00812e2f  8b07                 mov eax, dword ptr [edi]
// 00812e31  8b742474             mov esi, dword ptr [esp + 0x74]
// 00812e35  8b5078               mov edx, dword ptr [eax + 0x78]
// 00812e38  53                   push ebx
// 00812e39  56                   push esi
// 00812e3a  ffd2                 call edx
// 00812e3c  8d442424             lea eax, [esp + 0x24]
// 00812e40  50                   push eax
// 00812e41  8bcb                 mov ecx, ebx
// 00812e43  e89895ffff           call 0x80c3e0
// 00812e48  8d4c2414             lea ecx, [esp + 0x14]
// 00812e4c  51                   push ecx
// 00812e4d  8d4c2428             lea ecx, [esp + 0x28]
// 00812e51  e86a32c1ff           call 0x4260c0
// 00812e56  8b18                 mov ebx, dword ptr [eax]
// 00812e58  85f6                 test esi, esi
// 00812e5a  7504                 jne 0x812e60
// 00812e5c  33c0                 xor eax, eax
// 00812e5e  eb03                 jmp 0x812e63
// 00812e60  8b4604               mov eax, dword ptr [esi + 4]
// 00812e63  6a00                 push 0
// 00812e65  50                   push eax
// 00812e66  8d4c2454             lea ecx, [esp + 0x54]
// 00812e6a  e851a30400           call 0x85d1c0
// 00812e6f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00812e73  8d4702               lea eax, [edi + 2]
// 00812e76  50                   push eax
// 00812e77  8d6bfe               lea ebp, [ebx - 2]
// 00812e7a  55                   push ebp
// 00812e7b  8d54241c             lea edx, [esp + 0x1c]
// 00812e7f  52                   push edx
// 00812e80  8bce                 mov ecx, esi
// 00812e82  c744247403000000     mov dword ptr [esp + 0x74], 3
// 00812e8a  e8e180ffff           call 0x80af70
// 00812e8f  8d4704               lea eax, [edi + 4]
// 00812e92  50                   push eax
// 00812e93  53                   push ebx
// 00812e94  8bce                 mov ecx, esi
// 00812e96  e8cf80ffff           call 0x80af6a
// 00812e9b  8d4f01               lea ecx, [edi + 1]
// 00812e9e  8d4303               lea eax, [ebx + 3]
// 00812ea1  51                   push ecx
// 00812ea2  50                   push eax
// 00812ea3  8bce                 mov ecx, esi
// 00812ea5  89842484000000       mov dword ptr [esp + 0x84], eax
// 00812eac  e8b980ffff           call 0x80af6a
// 00812eb1  8d5703               lea edx, [edi + 3]
// 00812eb4  52                   push edx
// 00812eb5  55                   push ebp
// 00812eb6  8d44241c             lea eax, [esp + 0x1c]
// 00812eba  50                   push eax
// 00812ebb  8bce                 mov ecx, esi
// 00812ebd  e8ae80ffff           call 0x80af70
// 00812ec2  8d4705               lea eax, [edi + 5]
// 00812ec5  50                   push eax
// 00812ec6  53                   push ebx
// 00812ec7  8bce                 mov ecx, esi
// 00812ec9  e89c80ffff           call 0x80af6a
// 00812ece  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00812ed2  8d4702               lea eax, [edi + 2]
// 00812ed5  50                   push eax
// 00812ed6  51                   push ecx
// 00812ed7  8bce                 mov ecx, esi
// 00812ed9  e88c80ffff           call 0x80af6a
// 00812ede  8d4706               lea eax, [edi + 6]
// 00812ee1  50                   push eax
// 00812ee2  55                   push ebp
// 00812ee3  8d54241c             lea edx, [esp + 0x1c]
// 00812ee7  52                   push edx
// 00812ee8  8bce                 mov ecx, esi
// 00812eea  89842480000000       mov dword ptr [esp + 0x80], eax
// 00812ef1  e87a80ffff           call 0x80af70
// 00812ef6  8d4708               lea eax, [edi + 8]
// 00812ef9  50                   push eax
// 00812efa  53                   push ebx
// 00812efb  8bce                 mov ecx, esi
// 00812efd  e86880ffff           call 0x80af6a
// 00812f02  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00812f06  8d4705               lea eax, [edi + 5]
// 00812f09  50                   push eax
// 00812f0a  51                   push ecx
// 00812f0b  8bce                 mov ecx, esi
// 00812f0d  e85880ffff           call 0x80af6a
// 00812f12  8d5707               lea edx, [edi + 7]
// 00812f15  52                   push edx
// 00812f16  55                   push ebp
// 00812f17  8d442424             lea eax, [esp + 0x24]
// 00812f1b  50                   push eax
// 00812f1c  8bce                 mov ecx, esi
// 00812f1e  e84d80ffff           call 0x80af70
// 00812f23  83c709               add edi, 9
// 00812f26  57                   push edi
// 00812f27  53                   push ebx
// 00812f28  8bce                 mov ecx, esi
// 00812f2a  e83b80ffff           call 0x80af6a
// 00812f2f  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00812f33  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00812f37  51                   push ecx
// 00812f38  52                   push edx
// 00812f39  8bce                 mov ecx, esi
// 00812f3b  e82a80ffff           call 0x80af6a
// 00812f40  8d4c244c             lea ecx, [esp + 0x4c]
// 00812f44  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00812f4c  e8ffa20400           call 0x85d250
// 00812f51  8b442470             mov eax, dword ptr [esp + 0x70]
// 00812f55  c740040c000000       mov dword ptr [eax + 4], 0xc
// 00812f5c  e977fbffff           jmp 0x812ad8
// copied from an identical function in another client (function ?DrawSpecialControl@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp