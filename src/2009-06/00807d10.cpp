// roc 2009-06 00807d10  unit: CXTColorSelectorCtrl  size: 1620 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00807d10
//
// 00807d10  6aff                 push -1
// 00807d12  681d1c8800           push 0x881c1d
// 00807d17  64a100000000         mov eax, dword ptr fs:[0]
// 00807d1d  50                   push eax
// 00807d1e  83ec38               sub esp, 0x38
// 00807d21  53                   push ebx
// 00807d22  55                   push ebp
// 00807d23  56                   push esi
// 00807d24  57                   push edi
// 00807d25  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00807d2a  33c4                 xor eax, esp
// 00807d2c  50                   push eax
// 00807d2d  8d44244c             lea eax, [esp + 0x4c]
// 00807d31  64a300000000         mov dword ptr fs:[0], eax
// 00807d37  8bf1                 mov esi, ecx
// 00807d39  e8ca12f1ff           call 0x719008
// 00807d3e  83f8ff               cmp eax, -1
// 00807d41  7507                 jne 0x807d4a
// 00807d43  0bc0                 or eax, eax
// 00807d45  e904060000           jmp 0x80834e
// 00807d4a  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00807d50  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00807d56  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00807d5c  6a00                 push 0
// 00807d5e  56                   push esi
// 00807d5f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00807d67  c644241f00           mov byte ptr [esp + 0x1f], 0
// 00807d6c  ffd2                 call edx
// 00807d6e  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00807d74  6a00                 push 0
// 00807d76  6a01                 push 1
// 00807d78  6801040000           push 0x401
// 00807d7d  50                   push eax
// 00807d7e  ff1590ee8900         call dword ptr [0x89ee90]
// 00807d84  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00807d88  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00807d8b  2b869c000000         sub eax, dword ptr [esi + 0x9c]
// 00807d91  8bbe94000000         mov edi, dword ptr [esi + 0x94]
// 00807d97  8b9e98000000         mov ebx, dword ptr [esi + 0x98]
// 00807d9d  8d4c241c             lea ecx, [esp + 0x1c]
// 00807da1  897c2428             mov dword ptr [esp + 0x28], edi
// 00807da5  89442438             mov dword ptr [esp + 0x38], eax
// 00807da9  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00807daf  8d4c2420             lea ecx, [esp + 0x20]
// 00807db3  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00807dbb  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00807dc1  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00807dc7  c644245401           mov byte ptr [esp + 0x54], 1
// 00807dcc  a810                 test al, 0x10
// 00807dce  0f855c010000         jne 0x807f30
// 00807dd4  2401                 and al, 1
// 00807dd6  0fb6e8               movzx ebp, al
// 00807dd9  f7dd                 neg ebp
// 00807ddb  1bed                 sbb ebp, ebp
// 00807ddd  81c5dc260000         add ebp, 0x26dc
// 00807de3  896c2434             mov dword ptr [esp + 0x34], ebp
// 00807de7  e85433f9ff           call 0x79b140
// 00807dec  8b10                 mov edx, dword ptr [eax]
// 00807dee  8b5208               mov edx, dword ptr [edx + 8]
// 00807df1  55                   push ebp
// 00807df2  8d4c2420             lea ecx, [esp + 0x20]
// 00807df6  51                   push ecx
// 00807df7  8bc8                 mov ecx, eax
// 00807df9  ffd2                 call edx
// 00807dfb  6a00                 push 0
// 00807dfd  6a0a                 push 0xa
// 00807dff  8d4c2424             lea ecx, [esp + 0x24]
// 00807e03  ff1500008a00         call dword ptr [0x8a0000]
// 00807e09  8bf8                 mov edi, eax
// 00807e0b  85ff                 test edi, edi
// 00807e0d  7e3f                 jle 0x807e4e
// 00807e0f  8d4701               lea eax, [edi + 1]
// 00807e12  50                   push eax
// 00807e13  8d4c2460             lea ecx, [esp + 0x60]
// 00807e17  51                   push ecx
// 00807e18  8d4c2424             lea ecx, [esp + 0x24]
// 00807e1c  ff1504008a00         call dword ptr [0x8a0004]
// 00807e22  50                   push eax
// 00807e23  8d4c2424             lea ecx, [esp + 0x24]
// 00807e27  c644245802           mov byte ptr [esp + 0x58], 2
// 00807e2c  ff1508fa8900         call dword ptr [0x89fa08]
// 00807e32  8d4c245c             lea ecx, [esp + 0x5c]
// 00807e36  c644245401           mov byte ptr [esp + 0x54], 1
// 00807e3b  ff1510fd8900         call dword ptr [0x89fd10]
// 00807e41  57                   push edi
// 00807e42  8d4c2420             lea ecx, [esp + 0x20]
// 00807e46  ff1504f18900         call dword ptr [0x89f104]
// 00807e4c  eb0f                 jmp 0x807e5d
// 00807e4e  8d54241c             lea edx, [esp + 0x1c]
// 00807e52  52                   push edx
// 00807e53  8d4c2424             lea ecx, [esp + 0x24]
// 00807e57  ff1508fa8900         call dword ptr [0x89fa08]
// 00807e5d  6824010000           push 0x124
// 00807e62  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00807e6a  e8c90bf1ff           call 0x718a38
// 00807e6f  83c404               add esp, 4
// 00807e72  8d4c241c             lea ecx, [esp + 0x1c]
// 00807e76  8bf8                 mov edi, eax
// 00807e78  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00807e7e  50                   push eax
// 00807e7f  8d4720               lea eax, [edi + 0x20]
// 00807e82  6800010000           push 0x100
// 00807e87  50                   push eax
// 00807e88  ff1550e98900         call dword ptr [0x89e950]
// 00807e8e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00807e92  8b542444             mov edx, dword ptr [esp + 0x44]
// 00807e96  892f                 mov dword ptr [edi], ebp
// 00807e98  894f0c               mov dword ptr [edi + 0xc], ecx
// 00807e9b  8d6f0c               lea ebp, [edi + 0xc]
// 00807e9e  895d04               mov dword ptr [ebp + 4], ebx
// 00807ea1  895508               mov dword ptr [ebp + 8], edx
// 00807ea4  8d4317               lea eax, [ebx + 0x17]
// 00807ea7  89450c               mov dword ptr [ebp + 0xc], eax
// 00807eaa  c7470400000000       mov dword ptr [edi + 4], 0
// 00807eb1  c6470800             mov byte ptr [edi + 8], 0
// 00807eb5  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00807ebb  89471c               mov dword ptr [edi + 0x1c], eax
// 00807ebe  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00807ec4  83c40c               add esp, 0xc
// 00807ec7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 00807ecd  57                   push edi
// 00807ece  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00807ed4  e8f7d9fdff           call 0x7e58d0
// 00807ed9  8b542434             mov edx, dword ptr [esp + 0x34]
// 00807edd  52                   push edx
// 00807ede  55                   push ebp
// 00807edf  8d4c2428             lea ecx, [esp + 0x28]
// 00807ee3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00807ee9  50                   push eax
// 00807eea  56                   push esi
// 00807eeb  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00807ef1  e894490400           call 0x84c88a
// 00807ef6  f686a400000001       test byte ptr [esi + 0xa4], 1
// 00807efd  750e                 jne 0x807f0d
// 00807eff  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00807f05  3b86b4000000         cmp eax, dword ptr [esi + 0xb4]
// 00807f0b  eb11                 jmp 0x807f1e
// 00807f0d  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00807f13  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 00807f19  750e                 jne 0x807f29
// 00807f1b  83f8ff               cmp eax, -1
// 00807f1e  7509                 jne 0x807f29
// 00807f20  c6470801             mov byte ptr [edi + 8], 1
// 00807f24  c644241701           mov byte ptr [esp + 0x17], 1
// 00807f29  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00807f2d  83c31b               add ebx, 0x1b
// 00807f30  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00807f36  83e002               and eax, 2
// 00807f39  741a                 je 0x807f55
// 00807f3b  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00807f41  85c9                 test ecx, ecx
// 00807f43  7406                 je 0x807f4b
// 00807f45  894c2430             mov dword ptr [esp + 0x30], ecx
// 00807f49  eb12                 jmp 0x807f5d
// 00807f4b  c744243088a4a200     mov dword ptr [esp + 0x30], 0xa2a488
// 00807f53  eb08                 jmp 0x807f5d
// 00807f55  c744243008a4a200     mov dword ptr [esp + 0x30], 0xa2a408
// 00807f5d  85c0                 test eax, eax
// 00807f5f  741f                 je 0x807f80
// 00807f61  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 00807f68  740c                 je 0x807f76
// 00807f6a  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 00807f70  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00807f74  eb12                 jmp 0x807f88
// 00807f76  c744242c28000000     mov dword ptr [esp + 0x2c], 0x28
// 00807f7e  eb08                 jmp 0x807f88
// 00807f80  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 00807f88  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00807f8b  f7d8                 neg eax
// 00807f8d  1bc0                 sbb eax, eax
// 00807f8f  83e0ea               and eax, 0xffffffea
// 00807f92  83c016               add eax, 0x16
// 00807f95  03d8                 add ebx, eax
// 00807f97  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00807f9d  03cf                 add ecx, edi
// 00807f9f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00807fa3  33c9                 xor ecx, ecx
// 00807fa5  03c3                 add eax, ebx
// 00807fa7  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 00807fab  895c2424             mov dword ptr [esp + 0x24], ebx
// 00807faf  897c243c             mov dword ptr [esp + 0x3c], edi
// 00807fb3  895c2440             mov dword ptr [esp + 0x40], ebx
// 00807fb7  89442448             mov dword ptr [esp + 0x48], eax
// 00807fbb  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00807fbf  0f8e1f010000         jle 0x8080e4
// 00807fc5  eb04                 jmp 0x807fcb
// 00807fc7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00807fcb  85c9                 test ecx, ecx
// 00807fcd  7e2b                 jle 0x807ffa
// 00807fcf  8bc1                 mov eax, ecx
// 00807fd1  99                   cdq 
// 00807fd2  f77e6c               idiv dword ptr [esi + 0x6c]
// 00807fd5  85d2                 test edx, edx
// 00807fd7  7521                 jne 0x807ffa
// 00807fd9  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00807fdf  03d8                 add ebx, eax
// 00807fe1  8d1418               lea edx, [eax + ebx]
// 00807fe4  03c7                 add eax, edi
// 00807fe6  895c2424             mov dword ptr [esp + 0x24], ebx
// 00807fea  897c243c             mov dword ptr [esp + 0x3c], edi
// 00807fee  895c2440             mov dword ptr [esp + 0x40], ebx
// 00807ff2  89442444             mov dword ptr [esp + 0x44], eax
// 00807ff6  89542448             mov dword ptr [esp + 0x48], edx
// 00807ffa  8b442430             mov eax, dword ptr [esp + 0x30]
// 00807ffe  8b14c8               mov edx, dword ptr [eax + ecx*8]
// 00808001  ff442418             inc dword ptr [esp + 0x18]
// 00808005  8b5cc804             mov ebx, dword ptr [eax + ecx*8 + 4]
// 00808009  6824010000           push 0x124
// 0080800e  89542438             mov dword ptr [esp + 0x38], edx
// 00808012  e8210af1ff           call 0x718a38
// 00808017  8bf8                 mov edi, eax
// 00808019  c6472000             mov byte ptr [edi + 0x20], 0
// 0080801d  891f                 mov dword ptr [edi], ebx
// 0080801f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00808023  89470c               mov dword ptr [edi + 0xc], eax
// 00808026  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080802a  8d6f0c               lea ebp, [edi + 0xc]
// 0080802d  894d04               mov dword ptr [ebp + 4], ecx
// 00808030  8b542448             mov edx, dword ptr [esp + 0x48]
// 00808034  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00808038  895508               mov dword ptr [ebp + 8], edx
// 0080803b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0080803f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00808043  83c404               add esp, 4
// 00808046  894f04               mov dword ptr [edi + 4], ecx
// 00808049  57                   push edi
// 0080804a  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00808050  89450c               mov dword ptr [ebp + 0xc], eax
// 00808053  c6470800             mov byte ptr [edi + 8], 0
// 00808057  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 0080805e  899720010000         mov dword ptr [edi + 0x120], edx
// 00808064  e867d8fdff           call 0x7e58d0
// 00808069  e8d230f9ff           call 0x79b140
// 0080806e  8b10                 mov edx, dword ptr [eax]
// 00808070  8b5208               mov edx, dword ptr [edx + 8]
// 00808073  53                   push ebx
// 00808074  8d4c2424             lea ecx, [esp + 0x24]
// 00808078  51                   push ecx
// 00808079  8bc8                 mov ecx, eax
// 0080807b  ffd2                 call edx
// 0080807d  53                   push ebx
// 0080807e  55                   push ebp
// 0080807f  8d4c2428             lea ecx, [esp + 0x28]
// 00808083  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00808089  50                   push eax
// 0080808a  56                   push esi
// 0080808b  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00808091  e8f4470400           call 0x84c88a
// 00808096  8b442434             mov eax, dword ptr [esp + 0x34]
// 0080809a  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 008080a0  7516                 jne 0x8080b8
// 008080a2  807c241700           cmp byte ptr [esp + 0x17], 0
// 008080a7  750f                 jne 0x8080b8
// 008080a9  8b4f04               mov ecx, dword ptr [edi + 4]
// 008080ac  c6470801             mov byte ptr [edi + 8], 1
// 008080b0  c644241701           mov byte ptr [esp + 0x17], 1
// 008080b5  894e70               mov dword ptr [esi + 0x70], ecx
// 008080b8  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008080bb  6a00                 push 0
// 008080bd  50                   push eax
// 008080be  8d542444             lea edx, [esp + 0x44]
// 008080c2  52                   push edx
// 008080c3  ff15f8ed8900         call dword ptr [0x89edf8]
// 008080c9  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008080cd  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008080d1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008080d5  40                   inc eax
// 008080d6  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008080da  8944245c             mov dword ptr [esp + 0x5c], eax
// 008080de  0f8ce3feffff         jl 0x807fc7
// 008080e4  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008080ea  03d8                 add ebx, eax
// 008080ec  8d0c18               lea ecx, [eax + ebx]
// 008080ef  03c7                 add eax, edi
// 008080f1  f686a400000004       test byte ptr [esi + 0xa4], 4
// 008080f8  897c243c             mov dword ptr [esp + 0x3c], edi
// 008080fc  895c2440             mov dword ptr [esp + 0x40], ebx
// 00808100  89442444             mov dword ptr [esp + 0x44], eax
// 00808104  894c2448             mov dword ptr [esp + 0x48], ecx
// 00808108  0f8423020000         je 0x808331
// 0080810e  833d242ba50000       cmp dword ptr [0xa52b24], 0
// 00808115  0f8e35010000         jle 0x808250
// 0080811b  6a04                 push 4
// 0080811d  6a00                 push 0
// 0080811f  8d442444             lea eax, [esp + 0x44]
// 00808123  50                   push eax
// 00808124  ff15f8ed8900         call dword ptr [0x89edf8]
// 0080812a  33c0                 xor eax, eax
// 0080812c  8944245c             mov dword ptr [esp + 0x5c], eax
// 00808130  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00808133  8b15242ba500         mov edx, dword ptr [0xa52b24]
// 00808139  3bd1                 cmp edx, ecx
// 0080813b  7d02                 jge 0x80813f
// 0080813d  8bca                 mov ecx, edx
// 0080813f  3bc1                 cmp eax, ecx
// 00808141  0f8df7000000         jge 0x80823e
// 00808147  ff442418             inc dword ptr [esp + 0x18]
// 0080814b  85c0                 test eax, eax
// 0080814d  0f8ce6000000         jl 0x808239
// 00808153  3bc2                 cmp eax, edx
// 00808155  0f8dde000000         jge 0x808239
// 0080815b  8b0d202ba500         mov ecx, dword ptr [0xa52b20]
// 00808161  8b1481               mov edx, dword ptr [ecx + eax*4]
// 00808164  6824010000           push 0x124
// 00808169  89542434             mov dword ptr [esp + 0x34], edx
// 0080816d  e8c608f1ff           call 0x718a38
// 00808172  8bf8                 mov edi, eax
// 00808174  c6472000             mov byte ptr [edi + 0x20], 0
// 00808178  c70700000000         mov dword ptr [edi], 0
// 0080817e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00808182  89470c               mov dword ptr [edi + 0xc], eax
// 00808185  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00808189  8d6f0c               lea ebp, [edi + 0xc]
// 0080818c  894d04               mov dword ptr [ebp + 4], ecx
// 0080818f  8b542448             mov edx, dword ptr [esp + 0x48]
// 00808193  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00808197  895508               mov dword ptr [ebp + 8], edx
// 0080819a  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0080819e  8b542434             mov edx, dword ptr [esp + 0x34]
// 008081a2  83c404               add esp, 4
// 008081a5  894f04               mov dword ptr [edi + 4], ecx
// 008081a8  57                   push edi
// 008081a9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008081af  89450c               mov dword ptr [ebp + 0xc], eax
// 008081b2  c6470800             mov byte ptr [edi + 8], 0
// 008081b6  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 008081bd  899720010000         mov dword ptr [edi + 0x120], edx
// 008081c3  e808d7fdff           call 0x7e58d0
// 008081c8  8b442430             mov eax, dword ptr [esp + 0x30]
// 008081cc  50                   push eax
// 008081cd  8d4c2430             lea ecx, [esp + 0x30]
// 008081d1  51                   push ecx
// 008081d2  e809bef7ff           call 0x783fe0
// 008081d7  83c408               add esp, 8
// 008081da  6a01                 push 1
// 008081dc  55                   push ebp
// 008081dd  8bc8                 mov ecx, eax
// 008081df  c644245c03           mov byte ptr [esp + 0x5c], 3
// 008081e4  ff15d0fc8900         call dword ptr [0x89fcd0]
// 008081ea  50                   push eax
// 008081eb  56                   push esi
// 008081ec  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008081f2  e893460400           call 0x84c88a
// 008081f7  8d4c242c             lea ecx, [esp + 0x2c]
// 008081fb  c644245401           mov byte ptr [esp + 0x54], 1
// 00808200  ff1510fd8900         call dword ptr [0x89fd10]
// 00808206  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080820a  3996b0000000         cmp dword ptr [esi + 0xb0], edx
// 00808210  7509                 jne 0x80821b
// 00808212  c644241701           mov byte ptr [esp + 0x17], 1
// 00808217  c6470801             mov byte ptr [edi + 8], 1
// 0080821b  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0080821e  6a00                 push 0
// 00808220  50                   push eax
// 00808221  8d4c2444             lea ecx, [esp + 0x44]
// 00808225  51                   push ecx
// 00808226  ff15f8ed8900         call dword ptr [0x89edf8]
// 0080822c  ff44245c             inc dword ptr [esp + 0x5c]
// 00808230  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00808234  e9f7feffff           jmp 0x808130
// 00808239  e8a60af1ff           call 0x718ce4
// 0080823e  8b542448             mov edx, dword ptr [esp + 0x48]
// 00808242  2b542440             sub edx, dword ptr [esp + 0x40]
// 00808246  8d441304             lea eax, [ebx + edx + 4]
// 0080824a  89442424             mov dword ptr [esp + 0x24], eax
// 0080824e  8bd8                 mov ebx, eax
// 00808250  83c304               add ebx, 4
// 00808253  e8e82ef9ff           call 0x79b140
// 00808258  8b10                 mov edx, dword ptr [eax]
// 0080825a  8b5208               mov edx, dword ptr [edx + 8]
// 0080825d  68dd260000           push 0x26dd
// 00808262  8d4c2420             lea ecx, [esp + 0x20]
// 00808266  51                   push ecx
// 00808267  8bc8                 mov ecx, eax
// 00808269  ffd2                 call edx
// 0080826b  ff442418             inc dword ptr [esp + 0x18]
// 0080826f  6824010000           push 0x124
// 00808274  e8bf07f1ff           call 0x718a38
// 00808279  83c404               add esp, 4
// 0080827c  8d4c241c             lea ecx, [esp + 0x1c]
// 00808280  8bf8                 mov edi, eax
// 00808282  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00808288  50                   push eax
// 00808289  8d4720               lea eax, [edi + 0x20]
// 0080828c  6800010000           push 0x100
// 00808291  50                   push eax
// 00808292  ff1550e98900         call dword ptr [0x89e950]
// 00808298  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080829c  8b542444             mov edx, dword ptr [esp + 0x44]
// 008082a0  8d6f0c               lea ebp, [edi + 0xc]
// 008082a3  894d00               mov dword ptr [ebp], ecx
// 008082a6  895d04               mov dword ptr [ebp + 4], ebx
// 008082a9  895508               mov dword ptr [ebp + 8], edx
// 008082ac  8d4317               lea eax, [ebx + 0x17]
// 008082af  89450c               mov dword ptr [ebp + 0xc], eax
// 008082b2  8b442424             mov eax, dword ptr [esp + 0x24]
// 008082b6  c707dd260000         mov dword ptr [edi], 0x26dd
// 008082bc  894704               mov dword ptr [edi + 4], eax
// 008082bf  c6470800             mov byte ptr [edi + 8], 0
// 008082c3  c7471c04000000       mov dword ptr [edi + 0x1c], 4
// 008082ca  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 008082d0  83c40c               add esp, 0xc
// 008082d3  8d54241c             lea edx, [esp + 0x1c]
// 008082d7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 008082dd  52                   push edx
// 008082de  8d4c2438             lea ecx, [esp + 0x38]
// 008082e2  ff15e4fc8900         call dword ptr [0x89fce4]
// 008082e8  57                   push edi
// 008082e9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008082ef  c644245804           mov byte ptr [esp + 0x58], 4
// 008082f4  e8d7d5fdff           call 0x7e58d0
// 008082f9  6a01                 push 1
// 008082fb  55                   push ebp
// 008082fc  8d4c243c             lea ecx, [esp + 0x3c]
// 00808300  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00808306  50                   push eax
// 00808307  56                   push esi
// 00808308  8d8eb8000000         lea ecx, [esi + 0xb8]
// 0080830e  e877450400           call 0x84c88a
// 00808313  83beb0000000ff       cmp dword ptr [esi + 0xb0], -1
// 0080831a  740b                 je 0x808327
// 0080831c  807c241700           cmp byte ptr [esp + 0x17], 0
// 00808321  7504                 jne 0x808327
// 00808323  c6470801             mov byte ptr [edi + 8], 1
// 00808327  8d4c2434             lea ecx, [esp + 0x34]
// 0080832b  ff1510fd8900         call dword ptr [0x89fd10]
// 00808331  8d4c2420             lea ecx, [esp + 0x20]
// 00808335  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 0080833c  ff1510fd8900         call dword ptr [0x89fd10]
// 00808342  8d4c241c             lea ecx, [esp + 0x1c]
// 00808346  ff1510fd8900         call dword ptr [0x89fd10]
// 0080834c  33c0                 xor eax, eax
// 0080834e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00808352  64890d00000000       mov dword ptr fs:[0], ecx
// 00808359  59                   pop ecx
// 0080835a  5f                   pop edi
// 0080835b  5e                   pop esi
// 0080835c  5d                   pop ebp
// 0080835d  5b                   pop ebx
// 0080835e  83c444               add esp, 0x44
// 00808361  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorSelectorCtrl@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp