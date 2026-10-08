// from server: 100% by auto
// roc 2008-06 00516d50  unit: G3D::TextInput::WrongSymbol  size: 3042 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516d50
//
// 00516d50  6aff                 push -1
// 00516d52  684ec77c00           push 0x7cc74e
// 00516d57  64a100000000         mov eax, dword ptr fs:[0]
// 00516d5d  50                   push eax
// 00516d5e  64892500000000       mov dword ptr fs:[0], esp
// 00516d65  81ec90000000         sub esp, 0x90
// 00516d6b  53                   push ebx
// 00516d6c  55                   push ebp
// 00516d6d  56                   push esi
// 00516d6e  8bf1                 mov esi, ecx
// 00516d70  6816b78000           push 0x80b716
// 00516d75  8d4c2414             lea ecx, [esp + 0x14]
// 00516d79  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00516d81  ff1558248000         call dword ptr [0x802458]
// 00516d87  8b4630               mov eax, dword ptr [esi + 0x30]
// 00516d8a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00516d8d  8944242c             mov dword ptr [esp + 0x2c], eax
// 00516d91  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516d94  894c2430             mov dword ptr [esp + 0x30], ecx
// 00516d98  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00516d9b  bd01000000           mov ebp, 1
// 00516da0  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 00516da7  c744243403000000     mov dword ptr [esp + 0x34], 3
// 00516daf  c744243805000000     mov dword ptr [esp + 0x38], 5
// 00516db7  3bc1                 cmp eax, ecx
// 00516db9  730c                 jae 0x516dc7
// 00516dbb  8b5620               mov edx, dword ptr [esi + 0x20]
// 00516dbe  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 00516dc2  83fbff               cmp ebx, -1
// 00516dc5  754b                 jne 0x516e12
// 00516dc7  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 00516dce  8d442410             lea eax, [esp + 0x10]
// 00516dd2  50                   push eax
// 00516dd3  8bce                 mov ecx, esi
// 00516dd5  ff155c248000         call dword ptr [0x80245c]
// 00516ddb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00516ddf  8b542430             mov edx, dword ptr [esp + 0x30]
// 00516de3  8b442434             mov eax, dword ptr [esp + 0x34]
// 00516de7  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00516dea  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00516dee  895620               mov dword ptr [esi + 0x20], edx
// 00516df1  894624               mov dword ptr [esi + 0x24], eax
// 00516df4  894e28               mov dword ptr [esi + 0x28], ecx
// 00516df7  8d4c2410             lea ecx, [esp + 0x10]
// 00516dfb  896c240c             mov dword ptr [esp + 0xc], ebp
// 00516dff  c68424a400000000     mov byte ptr [esp + 0xa4], 0
// 00516e07  ff1568248000         call dword ptr [0x802468]
// 00516e0d  e97f0a0000           jmp 0x517891
// 00516e12  57                   push edi
// 00516e13  8b3d84278000         mov edi, dword ptr [0x802784]
// 00516e19  8da42400000000       lea esp, [esp]
// 00516e20  0fbed3               movsx edx, bl
// 00516e23  52                   push edx
// 00516e24  ffd7                 call edi
// 00516e26  83c404               add esp, 4
// 00516e29  85c0                 test eax, eax
// 00516e2b  7447                 je 0x516e74
// 00516e2d  8d4900               lea ecx, [ecx]
// 00516e30  8b5624               mov edx, dword ptr [esi + 0x24]
// 00516e33  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516e36  3bc2                 cmp eax, edx
// 00516e38  731a                 jae 0x516e54
// 00516e3a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00516e3d  8a0c08               mov cl, byte ptr [eax + ecx]
// 00516e40  40                   inc eax
// 00516e41  89462c               mov dword ptr [esi + 0x2c], eax
// 00516e44  80f90a               cmp cl, 0xa
// 00516e47  7508                 jne 0x516e51
// 00516e49  016e30               add dword ptr [esi + 0x30], ebp
// 00516e4c  896e34               mov dword ptr [esi + 0x34], ebp
// 00516e4f  eb03                 jmp 0x516e54
// 00516e51  016e34               add dword ptr [esi + 0x34], ebp
// 00516e54  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516e57  3bc2                 cmp eax, edx
// 00516e59  7205                 jb 0x516e60
// 00516e5b  83cbff               or ebx, 0xffffffff
// 00516e5e  eb07                 jmp 0x516e67
// 00516e60  8b5620               mov edx, dword ptr [esi + 0x20]
// 00516e63  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 00516e67  0fbec3               movsx eax, bl
// 00516e6a  50                   push eax
// 00516e6b  ffd7                 call edi
// 00516e6d  83c404               add esp, 4
// 00516e70  85c0                 test eax, eax
// 00516e72  75bc                 jne 0x516e30
// 00516e74  55                   push ebp
// 00516e75  8bce                 mov ecx, esi
// 00516e77  e8c4fcffff           call 0x516b40
// 00516e7c  807e3900             cmp byte ptr [esi + 0x39], 0
// 00516e80  7409                 je 0x516e8b
// 00516e82  83fb2f               cmp ebx, 0x2f
// 00516e85  7504                 jne 0x516e8b
// 00516e87  3bc3                 cmp eax, ebx
// 00516e89  741c                 je 0x516ea7
// 00516e8b  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 00516e8e  84c9                 test cl, cl
// 00516e90  7407                 je 0x516e99
// 00516e92  0fbec9               movsx ecx, cl
// 00516e95  3bd9                 cmp ebx, ecx
// 00516e97  740e                 je 0x516ea7
// 00516e99  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 00516e9c  84c9                 test cl, cl
// 00516e9e  7460                 je 0x516f00
// 00516ea0  0fbed1               movsx edx, cl
// 00516ea3  3bda                 cmp ebx, edx
// 00516ea5  7559                 jne 0x516f00
// 00516ea7  8b5624               mov edx, dword ptr [esi + 0x24]
// 00516eaa  8d9b00000000         lea ebx, [ebx]
// 00516eb0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516eb3  3bc2                 cmp eax, edx
// 00516eb5  731a                 jae 0x516ed1
// 00516eb7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00516eba  8a0c08               mov cl, byte ptr [eax + ecx]
// 00516ebd  40                   inc eax
// 00516ebe  89462c               mov dword ptr [esi + 0x2c], eax
// 00516ec1  80f90a               cmp cl, 0xa
// 00516ec4  7508                 jne 0x516ece
// 00516ec6  016e30               add dword ptr [esi + 0x30], ebp
// 00516ec9  896e34               mov dword ptr [esi + 0x34], ebp
// 00516ecc  eb03                 jmp 0x516ed1
// 00516ece  016e34               add dword ptr [esi + 0x34], ebp
// 00516ed1  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516ed4  3bc2                 cmp eax, edx
// 00516ed6  7205                 jb 0x516edd
// 00516ed8  83cbff               or ebx, 0xffffffff
// 00516edb  eb07                 jmp 0x516ee4
// 00516edd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00516ee0  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 00516ee4  80fb0a               cmp bl, 0xa
// 00516ee7  0f8433ffffff         je 0x516e20
// 00516eed  80fb0d               cmp bl, 0xd
// 00516ef0  0f842affffff         je 0x516e20
// 00516ef6  83fbff               cmp ebx, -1
// 00516ef9  75b5                 jne 0x516eb0
// 00516efb  e920ffffff           jmp 0x516e20
// 00516f00  807e3800             cmp byte ptr [esi + 0x38], 0
// 00516f04  0f84fc000000         je 0x517006
// 00516f0a  83fb2f               cmp ebx, 0x2f
// 00516f0d  0f85f3000000         jne 0x517006
// 00516f13  83f82a               cmp eax, 0x2a
// 00516f16  0f85ea000000         jne 0x517006
// 00516f1c  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 00516f1f  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516f22  3bc3                 cmp eax, ebx
// 00516f24  731a                 jae 0x516f40
// 00516f26  8b5620               mov edx, dword ptr [esi + 0x20]
// 00516f29  8a0c10               mov cl, byte ptr [eax + edx]
// 00516f2c  40                   inc eax
// 00516f2d  89462c               mov dword ptr [esi + 0x2c], eax
// 00516f30  80f90a               cmp cl, 0xa
// 00516f33  7508                 jne 0x516f3d
// 00516f35  016e30               add dword ptr [esi + 0x30], ebp
// 00516f38  896e34               mov dword ptr [esi + 0x34], ebp
// 00516f3b  eb03                 jmp 0x516f40
// 00516f3d  016e34               add dword ptr [esi + 0x34], ebp
// 00516f40  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516f43  3bc3                 cmp eax, ebx
// 00516f45  731a                 jae 0x516f61
// 00516f47  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00516f4a  8a0c08               mov cl, byte ptr [eax + ecx]
// 00516f4d  40                   inc eax
// 00516f4e  89462c               mov dword ptr [esi + 0x2c], eax
// 00516f51  80f90a               cmp cl, 0xa
// 00516f54  7508                 jne 0x516f5e
// 00516f56  016e30               add dword ptr [esi + 0x30], ebp
// 00516f59  896e34               mov dword ptr [esi + 0x34], ebp
// 00516f5c  eb03                 jmp 0x516f61
// 00516f5e  016e34               add dword ptr [esi + 0x34], ebp
// 00516f61  6a00                 push 0
// 00516f63  8bce                 mov ecx, esi
// 00516f65  e8d6fbffff           call 0x516b40
// 00516f6a  55                   push ebp
// 00516f6b  8bce                 mov ecx, esi
// 00516f6d  8bf8                 mov edi, eax
// 00516f6f  e8ccfbffff           call 0x516b40
// 00516f74  83ff2a               cmp edi, 0x2a
// 00516f77  7505                 jne 0x516f7e
// 00516f79  83f82f               cmp eax, 0x2f
// 00516f7c  eb03                 jmp 0x516f81
// 00516f7e  83ffff               cmp edi, -1
// 00516f81  7423                 je 0x516fa6
// 00516f83  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00516f86  3bcb                 cmp ecx, ebx
// 00516f88  73e0                 jae 0x516f6a
// 00516f8a  8b5620               mov edx, dword ptr [esi + 0x20]
// 00516f8d  8a1411               mov dl, byte ptr [ecx + edx]
// 00516f90  41                   inc ecx
// 00516f91  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00516f94  80fa0a               cmp dl, 0xa
// 00516f97  7508                 jne 0x516fa1
// 00516f99  016e30               add dword ptr [esi + 0x30], ebp
// 00516f9c  896e34               mov dword ptr [esi + 0x34], ebp
// 00516f9f  ebc9                 jmp 0x516f6a
// 00516fa1  016e34               add dword ptr [esi + 0x34], ebp
// 00516fa4  ebc4                 jmp 0x516f6a
// 00516fa6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516fa9  3bc3                 cmp eax, ebx
// 00516fab  731a                 jae 0x516fc7
// 00516fad  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00516fb0  8a0c08               mov cl, byte ptr [eax + ecx]
// 00516fb3  40                   inc eax
// 00516fb4  89462c               mov dword ptr [esi + 0x2c], eax
// 00516fb7  80f90a               cmp cl, 0xa
// 00516fba  7508                 jne 0x516fc4
// 00516fbc  016e30               add dword ptr [esi + 0x30], ebp
// 00516fbf  896e34               mov dword ptr [esi + 0x34], ebp
// 00516fc2  eb03                 jmp 0x516fc7
// 00516fc4  016e34               add dword ptr [esi + 0x34], ebp
// 00516fc7  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516fca  3bc3                 cmp eax, ebx
// 00516fcc  7328                 jae 0x516ff6
// 00516fce  8b5620               mov edx, dword ptr [esi + 0x20]
// 00516fd1  8a0c10               mov cl, byte ptr [eax + edx]
// 00516fd4  40                   inc eax
// 00516fd5  89462c               mov dword ptr [esi + 0x2c], eax
// 00516fd8  80f90a               cmp cl, 0xa
// 00516fdb  7516                 jne 0x516ff3
// 00516fdd  016e30               add dword ptr [esi + 0x30], ebp
// 00516fe0  6a00                 push 0
// 00516fe2  8bce                 mov ecx, esi
// 00516fe4  896e34               mov dword ptr [esi + 0x34], ebp
// 00516fe7  e854fbffff           call 0x516b40
// 00516fec  8bd8                 mov ebx, eax
// 00516fee  e920feffff           jmp 0x516e13
// 00516ff3  016e34               add dword ptr [esi + 0x34], ebp
// 00516ff6  6a00                 push 0
// 00516ff8  8bce                 mov ecx, esi
// 00516ffa  e841fbffff           call 0x516b40
// 00516fff  8bd8                 mov ebx, eax
// 00517001  e90dfeffff           jmp 0x516e13
// 00517006  8b4630               mov eax, dword ptr [esi + 0x30]
// 00517009  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0051700c  89442430             mov dword ptr [esp + 0x30], eax
// 00517010  894c2434             mov dword ptr [esp + 0x34], ecx
// 00517014  83fbff               cmp ebx, -1
// 00517017  7539                 jne 0x517052
// 00517019  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 00517020  8d542414             lea edx, [esp + 0x14]
// 00517024  52                   push edx
// 00517025  8bce                 mov ecx, esi
// 00517027  ff155c248000         call dword ptr [0x80245c]
// 0051702d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00517031  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00517035  8b542438             mov edx, dword ptr [esp + 0x38]
// 00517039  89461c               mov dword ptr [esi + 0x1c], eax
// 0051703c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00517040  894e20               mov dword ptr [esi + 0x20], ecx
// 00517043  895624               mov dword ptr [esi + 0x24], edx
// 00517046  894628               mov dword ptr [esi + 0x28], eax
// 00517049  896c2410             mov dword ptr [esp + 0x10], ebp
// 0051704d  e92c080000           jmp 0x51787e
// 00517052  8d43df               lea eax, [ebx - 0x21]
// 00517055  b902000000           mov ecx, 2
// 0051705a  83f85d               cmp eax, 0x5d
// 0051705d  0f8755010000         ja 0x5171b8
// 00517063  0fb690d4785100       movzx edx, byte ptr [eax + 0x5178d4]
// 0051706a  ff2495b0785100       jmp dword ptr [edx*4 + 0x5178b0]
// 00517071  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00517075  53                   push ebx
// 00517076  8d4c2418             lea ecx, [esp + 0x18]
// 0051707a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0051707e  ff15d4248000         call dword ptr [0x8024d4]
// 00517084  8bce                 mov ecx, esi
// 00517086  e885fcffff           call 0x516d10
// 0051708b  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 00517092  8d442414             lea eax, [esp + 0x14]
// 00517096  50                   push eax
// 00517097  8bce                 mov ecx, esi
// 00517099  e842f5ffff           call 0x5165e0
// 0051709e  896c2410             mov dword ptr [esp + 0x10], ebp
// 005170a2  e9d7070000           jmp 0x51787e
// 005170a7  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005170ab  53                   push ebx
// 005170ac  8d4c2418             lea ecx, [esp + 0x18]
// 005170b0  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005170b4  ff15d4248000         call dword ptr [0x8024d4]
// 005170ba  8bce                 mov ecx, esi
// 005170bc  e84ffcffff           call 0x516d10
// 005170c1  8bd8                 mov ebx, eax
// 005170c3  83fb2d               cmp ebx, 0x2d
// 005170c6  745b                 je 0x517123
// 005170c8  83fb3c               cmp ebx, 0x3c
// 005170cb  7e05                 jle 0x5170d2
// 005170cd  83fb3e               cmp ebx, 0x3e
// 005170d0  7e51                 jle 0x517123
// 005170d2  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 005170d6  742f                 je 0x517107
// 005170d8  53                   push ebx
// 005170d9  e8c2f4ffff           call 0x5165a0
// 005170de  83c404               add esp, 4
// 005170e1  84c0                 test al, al
// 005170e3  0f85cf000000         jne 0x5171b8
// 005170e9  83fb2e               cmp ebx, 0x2e
// 005170ec  7519                 jne 0x517107
// 005170ee  55                   push ebp
// 005170ef  8bce                 mov ecx, esi
// 005170f1  e84afaffff           call 0x516b40
// 005170f6  50                   push eax
// 005170f7  e8a4f4ffff           call 0x5165a0
// 005170fc  83c404               add esp, 4
// 005170ff  84c0                 test al, al
// 00517101  0f85b1000000         jne 0x5171b8
// 00517107  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0051710e  8d4c2414             lea ecx, [esp + 0x14]
// 00517112  51                   push ecx
// 00517113  8bce                 mov ecx, esi
// 00517115  e8c6f4ffff           call 0x5165e0
// 0051711a  896c2410             mov dword ptr [esp + 0x10], ebp
// 0051711e  e95b070000           jmp 0x51787e
// 00517123  53                   push ebx
// 00517124  8d4c2418             lea ecx, [esp + 0x18]
// 00517128  ff15b4248000         call dword ptr [0x8024b4]
// 0051712e  8bce                 mov ecx, esi
// 00517130  e8cbf9ffff           call 0x516b00
// 00517135  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0051713c  8d542414             lea edx, [esp + 0x14]
// 00517140  52                   push edx
// 00517141  8bce                 mov ecx, esi
// 00517143  e898f4ffff           call 0x5165e0
// 00517148  896c2410             mov dword ptr [esp + 0x10], ebp
// 0051714c  e92d070000           jmp 0x51787e
// 00517151  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00517155  53                   push ebx
// 00517156  8d4c2418             lea ecx, [esp + 0x18]
// 0051715a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0051715e  ff15d4248000         call dword ptr [0x8024d4]
// 00517164  8bce                 mov ecx, esi
// 00517166  e8a5fbffff           call 0x516d10
// 0051716b  8bd8                 mov ebx, eax
// 0051716d  83fb2b               cmp ebx, 0x2b
// 00517170  0f84a1000000         je 0x517217
// 00517176  83fb3d               cmp ebx, 0x3d
// 00517179  0f8498000000         je 0x517217
// 0051717f  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 00517183  0f8402ffffff         je 0x51708b
// 00517189  53                   push ebx
// 0051718a  e811f4ffff           call 0x5165a0
// 0051718f  83c404               add esp, 4
// 00517192  84c0                 test al, al
// 00517194  7522                 jne 0x5171b8
// 00517196  83fb2e               cmp ebx, 0x2e
// 00517199  0f85ecfeffff         jne 0x51708b
// 0051719f  55                   push ebp
// 005171a0  8bce                 mov ecx, esi
// 005171a2  e899f9ffff           call 0x516b40
// 005171a7  50                   push eax
// 005171a8  e8f3f3ffff           call 0x5165a0
// 005171ad  83c404               add esp, 4
// 005171b0  84c0                 test al, al
// 005171b2  0f84d3feffff         je 0x51708b
// 005171b8  8b2d68278000         mov ebp, dword ptr [0x802768]
// 005171be  0fbefb               movsx edi, bl
// 005171c1  57                   push edi
// 005171c2  ffd5                 call ebp
// 005171c4  83c404               add esp, 4
// 005171c7  85c0                 test eax, eax
// 005171c9  0f853a030000         jne 0x517509
// 005171cf  83fb2e               cmp ebx, 0x2e
// 005171d2  0f8431030000         je 0x517509
// 005171d8  53                   push ebx
// 005171d9  e8e2f3ffff           call 0x5165c0
// 005171de  83c404               add esp, 4
// 005171e1  84c0                 test al, al
// 005171e3  0f85bd020000         jne 0x5174a6
// 005171e9  83fb5f               cmp ebx, 0x5f
// 005171ec  0f84b4020000         je 0x5174a6
// 005171f2  83fb22               cmp ebx, 0x22
// 005171f5  0f8530020000         jne 0x51742b
// 005171fb  8bce                 mov ecx, esi
// 005171fd  e8fef8ffff           call 0x516b00
// 00517202  8d442414             lea eax, [esp + 0x14]
// 00517206  50                   push eax
// 00517207  53                   push ebx
// 00517208  e863f9ffff           call 0x516b70
// 0051720d  8d4c2414             lea ecx, [esp + 0x14]
// 00517211  51                   push ecx
// 00517212  e951060000           jmp 0x517868
// 00517217  53                   push ebx
// 00517218  8d4c2418             lea ecx, [esp + 0x18]
// 0051721c  ff15b4248000         call dword ptr [0x8024b4]
// 00517222  8bce                 mov ecx, esi
// 00517224  e8d7f8ffff           call 0x516b00
// 00517229  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 00517230  8d4c2414             lea ecx, [esp + 0x14]
// 00517234  51                   push ecx
// 00517235  8bce                 mov ecx, esi
// 00517237  e8a4f3ffff           call 0x5165e0
// 0051723c  896c2410             mov dword ptr [esp + 0x10], ebp
// 00517240  e939060000           jmp 0x51787e
// 00517245  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00517249  53                   push ebx
// 0051724a  8d4c2418             lea ecx, [esp + 0x18]
// 0051724e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00517252  ff15d4248000         call dword ptr [0x8024d4]
// 00517258  8bce                 mov ecx, esi
// 0051725a  e8b1faffff           call 0x516d10
// 0051725f  83f83a               cmp eax, 0x3a
// 00517262  0f8523feffff         jne 0x51708b
// 00517268  50                   push eax
// 00517269  8d4c2418             lea ecx, [esp + 0x18]
// 0051726d  ff15b4248000         call dword ptr [0x8024b4]
// 00517273  8bce                 mov ecx, esi
// 00517275  e886f8ffff           call 0x516b00
// 0051727a  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 00517281  8d542414             lea edx, [esp + 0x14]
// 00517285  52                   push edx
// 00517286  8bce                 mov ecx, esi
// 00517288  e853f3ffff           call 0x5165e0
// 0051728d  896c2410             mov dword ptr [esp + 0x10], ebp
// 00517291  e9e8050000           jmp 0x51787e
// 00517296  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0051729a  53                   push ebx
// 0051729b  8d4c2418             lea ecx, [esp + 0x18]
// 0051729f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005172a3  ff15d4248000         call dword ptr [0x8024d4]
// 005172a9  8bce                 mov ecx, esi
// 005172ab  e860faffff           call 0x516d10
// 005172b0  83f83d               cmp eax, 0x3d
// 005172b3  75c5                 jne 0x51727a
// 005172b5  50                   push eax
// 005172b6  8d4c2418             lea ecx, [esp + 0x18]
// 005172ba  ff15b4248000         call dword ptr [0x8024b4]
// 005172c0  8bce                 mov ecx, esi
// 005172c2  e839f8ffff           call 0x516b00
// 005172c7  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005172ce  8d4c2414             lea ecx, [esp + 0x14]
// 005172d2  51                   push ecx
// 005172d3  8bce                 mov ecx, esi
// 005172d5  e806f3ffff           call 0x5165e0
// 005172da  896c2410             mov dword ptr [esp + 0x10], ebp
// 005172de  e99b050000           jmp 0x51787e
// 005172e3  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005172e7  53                   push ebx
// 005172e8  8d4c2418             lea ecx, [esp + 0x18]
// 005172ec  8bfb                 mov edi, ebx
// 005172ee  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005172f2  ff15d4248000         call dword ptr [0x8024d4]
// 005172f8  8bce                 mov ecx, esi
// 005172fa  e811faffff           call 0x516d10
// 005172ff  83f83d               cmp eax, 0x3d
// 00517302  7408                 je 0x51730c
// 00517304  3bf8                 cmp edi, eax
// 00517306  0f857ffdffff         jne 0x51708b
// 0051730c  50                   push eax
// 0051730d  8d4c2418             lea ecx, [esp + 0x18]
// 00517311  ff15b4248000         call dword ptr [0x8024b4]
// 00517317  8bce                 mov ecx, esi
// 00517319  e8e2f7ffff           call 0x516b00
// 0051731e  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 00517325  8d4c2414             lea ecx, [esp + 0x14]
// 00517329  51                   push ecx
// 0051732a  8bce                 mov ecx, esi
// 0051732c  e8aff2ffff           call 0x5165e0
// 00517331  896c2410             mov dword ptr [esp + 0x10], ebp
// 00517335  e944050000           jmp 0x51787e
// 0051733a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0051733e  53                   push ebx
// 0051733f  8d4c2418             lea ecx, [esp + 0x18]
// 00517343  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00517347  ff15d4248000         call dword ptr [0x8024d4]
// 0051734d  8bce                 mov ecx, esi
// 0051734f  e8bcf9ffff           call 0x516d10
// 00517354  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 00517357  84c9                 test cl, cl
// 00517359  7407                 je 0x517362
// 0051735b  0fbed1               movsx edx, cl
// 0051735e  3bc2                 cmp eax, edx
// 00517360  7416                 je 0x517378
// 00517362  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 00517365  84c9                 test cl, cl
// 00517367  0f841efdffff         je 0x51708b
// 0051736d  0fbec9               movsx ecx, cl
// 00517370  3bc1                 cmp eax, ecx
// 00517372  0f8513fdffff         jne 0x51708b
// 00517378  50                   push eax
// 00517379  8d4c2418             lea ecx, [esp + 0x18]
// 0051737d  ff15d4248000         call dword ptr [0x8024d4]
// 00517383  8bce                 mov ecx, esi
// 00517385  e876f7ffff           call 0x516b00
// 0051738a  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 00517391  8d542414             lea edx, [esp + 0x14]
// 00517395  52                   push edx
// 00517396  8bce                 mov ecx, esi
// 00517398  e843f2ffff           call 0x5165e0
// 0051739d  896c2410             mov dword ptr [esp + 0x10], ebp
// 005173a1  e9d8040000           jmp 0x51787e
// 005173a6  55                   push ebp
// 005173a7  8bce                 mov ecx, esi
// 005173a9  e892f7ffff           call 0x516b40
// 005173ae  50                   push eax
// 005173af  e8ecf1ffff           call 0x5165a0
// 005173b4  83c404               add esp, 4
// 005173b7  84c0                 test al, al
// 005173b9  0f85f9fdffff         jne 0x5171b8
// 005173bf  53                   push ebx
// 005173c0  8d4c2418             lea ecx, [esp + 0x18]
// 005173c4  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005173c8  c744244002000000     mov dword ptr [esp + 0x40], 2
// 005173d0  ff15d4248000         call dword ptr [0x8024d4]
// 005173d6  8bce                 mov ecx, esi
// 005173d8  e833f9ffff           call 0x516d10
// 005173dd  83f82e               cmp eax, 0x2e
// 005173e0  0f8594feffff         jne 0x51727a
// 005173e6  50                   push eax
// 005173e7  8d4c2418             lea ecx, [esp + 0x18]
// 005173eb  ff15b4248000         call dword ptr [0x8024b4]
// 005173f1  8bce                 mov ecx, esi
// 005173f3  e818f9ffff           call 0x516d10
// 005173f8  83f82e               cmp eax, 0x2e
// 005173fb  7512                 jne 0x51740f
// 005173fd  50                   push eax
// 005173fe  8d4c2418             lea ecx, [esp + 0x18]
// 00517402  ff15b4248000         call dword ptr [0x8024b4]
// 00517408  8bce                 mov ecx, esi
// 0051740a  e8f1f6ffff           call 0x516b00
// 0051740f  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 00517416  8d4c2414             lea ecx, [esp + 0x14]
// 0051741a  51                   push ecx
// 0051741b  8bce                 mov ecx, esi
// 0051741d  e8bef1ffff           call 0x5165e0
// 00517422  896c2410             mov dword ptr [esp + 0x10], ebp
// 00517426  e953040000           jmp 0x51787e
// 0051742b  83fb27               cmp ebx, 0x27
// 0051742e  753e                 jne 0x51746e
// 00517430  8bce                 mov ecx, esi
// 00517432  e8c9f6ffff           call 0x516b00
// 00517437  807e3e00             cmp byte ptr [esi + 0x3e], 0
// 0051743b  7410                 je 0x51744d
// 0051743d  8d542414             lea edx, [esp + 0x14]
// 00517441  52                   push edx
// 00517442  53                   push ebx
// 00517443  e828f7ffff           call 0x516b70
// 00517448  e916040000           jmp 0x517863
// 0051744d  6a27                 push 0x27
// 0051744f  8d4c2418             lea ecx, [esp + 0x18]
// 00517453  ff15d4248000         call dword ptr [0x8024d4]
// 00517459  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00517461  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 00517469  e9f5030000           jmp 0x517863
// 0051746e  83fbff               cmp ebx, -1
// 00517471  7529                 jne 0x51749c
// 00517473  6816b78000           push 0x80b716
// 00517478  8d4c2418             lea ecx, [esp + 0x18]
// 0051747c  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 00517484  c744244005000000     mov dword ptr [esp + 0x40], 5
// 0051748c  ff154c248000         call dword ptr [0x80244c]
// 00517492  8d4c2414             lea ecx, [esp + 0x14]
// 00517496  51                   push ecx
// 00517497  e9cc030000           jmp 0x517868
// 0051749c  8d542414             lea edx, [esp + 0x14]
// 005174a0  52                   push edx
// 005174a1  e9c2030000           jmp 0x517868
// 005174a6  6816b78000           push 0x80b716
// 005174ab  8d4c2418             lea ecx, [esp + 0x18]
// 005174af  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 005174b7  c744244002000000     mov dword ptr [esp + 0x40], 2
// 005174bf  ff154c248000         call dword ptr [0x80244c]
// 005174c5  8b2d64278000         mov ebp, dword ptr [0x802764]
// 005174cb  eb03                 jmp 0x5174d0
// 005174cd  8d4900               lea ecx, [ecx]
// 005174d0  53                   push ebx
// 005174d1  8d4c2418             lea ecx, [esp + 0x18]
// 005174d5  ff15b4248000         call dword ptr [0x8024b4]
// 005174db  8bce                 mov ecx, esi
// 005174dd  e82ef8ffff           call 0x516d10
// 005174e2  8bd8                 mov ebx, eax
// 005174e4  0fbefb               movsx edi, bl
// 005174e7  57                   push edi
// 005174e8  ffd5                 call ebp
// 005174ea  83c404               add esp, 4
// 005174ed  85c0                 test eax, eax
// 005174ef  75df                 jne 0x5174d0
// 005174f1  57                   push edi
// 005174f2  ff1568278000         call dword ptr [0x802768]
// 005174f8  83c404               add esp, 4
// 005174fb  85c0                 test eax, eax
// 005174fd  75d1                 jne 0x5174d0
// 005174ff  83fb5f               cmp ebx, 0x5f
// 00517502  74cc                 je 0x5174d0
// 00517504  e95a030000           jmp 0x517863
// 00517509  8d4c2414             lea ecx, [esp + 0x14]
// 0051750d  68348b8200           push 0x828b34
// 00517512  51                   push ecx
// 00517513  ff15cc238000         call dword ptr [0x8023cc]
// 00517519  83c408               add esp, 8
// 0051751c  84c0                 test al, al
// 0051751e  740f                 je 0x51752f
// 00517520  6816b78000           push 0x80b716
// 00517525  8d4c2418             lea ecx, [esp + 0x18]
// 00517529  ff154c248000         call dword ptr [0x80244c]
// 0051752f  c744243802000000     mov dword ptr [esp + 0x38], 2
// 00517537  83fb2e               cmp ebx, 0x2e
// 0051753a  7554                 jne 0x517590
// 0051753c  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 00517544  57                   push edi
// 00517545  ffd5                 call ebp
// 00517547  83c404               add esp, 4
// 0051754a  85c0                 test eax, eax
// 0051754c  0f84db000000         je 0x51762d
// 00517552  bf01000000           mov edi, 1
// 00517557  eb07                 jmp 0x517560
// 00517559  8da42400000000       lea esp, [esp]
// 00517560  53                   push ebx
// 00517561  8d4c2418             lea ecx, [esp + 0x18]
// 00517565  ff15b4248000         call dword ptr [0x8024b4]
// 0051756b  8b5624               mov edx, dword ptr [esi + 0x24]
// 0051756e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00517571  3bc2                 cmp eax, edx
// 00517573  0f8390000000         jae 0x517609
// 00517579  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0051757c  8a0c08               mov cl, byte ptr [eax + ecx]
// 0051757f  40                   inc eax
// 00517580  89462c               mov dword ptr [esi + 0x2c], eax
// 00517583  80f90a               cmp cl, 0xa
// 00517586  757e                 jne 0x517606
// 00517588  017e30               add dword ptr [esi + 0x30], edi
// 0051758b  897e34               mov dword ptr [esi + 0x34], edi
// 0051758e  eb79                 jmp 0x517609
// 00517590  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 00517598  83fb30               cmp ebx, 0x30
// 0051759b  75a7                 jne 0x517544
// 0051759d  6a01                 push 1
// 0051759f  8bce                 mov ecx, esi
// 005175a1  e89af5ffff           call 0x516b40
// 005175a6  83f878               cmp eax, 0x78
// 005175a9  7599                 jne 0x517544
// 005175ab  68308b8200           push 0x828b30
// 005175b0  8d4c2418             lea ecx, [esp + 0x18]
// 005175b4  ff1548248000         call dword ptr [0x802448]
// 005175ba  8bce                 mov ecx, esi
// 005175bc  e83ff5ffff           call 0x516b00
// 005175c1  e83af5ffff           call 0x516b00
// 005175c6  6a00                 push 0
// 005175c8  e873f5ffff           call 0x516b40
// 005175cd  8bd8                 mov ebx, eax
// 005175cf  0fbed3               movsx edx, bl
// 005175d2  52                   push edx
// 005175d3  ffd5                 call ebp
// 005175d5  83c404               add esp, 4
// 005175d8  85c0                 test eax, eax
// 005175da  7516                 jne 0x5175f2
// 005175dc  83fb41               cmp ebx, 0x41
// 005175df  7c05                 jl 0x5175e6
// 005175e1  83fb46               cmp ebx, 0x46
// 005175e4  7e0c                 jle 0x5175f2
// 005175e6  8d439f               lea eax, [ebx - 0x61]
// 005175e9  83f805               cmp eax, 5
// 005175ec  0f8771020000         ja 0x517863
// 005175f2  53                   push ebx
// 005175f3  8d4c2418             lea ecx, [esp + 0x18]
// 005175f7  ff15b4248000         call dword ptr [0x8024b4]
// 005175fd  8bce                 mov ecx, esi
// 005175ff  e80cf7ffff           call 0x516d10
// 00517604  ebc7                 jmp 0x5175cd
// 00517606  017e34               add dword ptr [esi + 0x34], edi
// 00517609  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0051760c  3bc2                 cmp eax, edx
// 0051760e  7205                 jb 0x517615
// 00517610  83cbff               or ebx, 0xffffffff
// 00517613  eb07                 jmp 0x51761c
// 00517615  8b5620               mov edx, dword ptr [esi + 0x20]
// 00517618  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 0051761c  0fbec3               movsx eax, bl
// 0051761f  50                   push eax
// 00517620  ffd5                 call ebp
// 00517622  83c404               add esp, 4
// 00517625  85c0                 test eax, eax
// 00517627  0f8533ffffff         jne 0x517560
// 0051762d  83fb2e               cmp ebx, 0x2e
// 00517630  0f85bb010000         jne 0x5177f1
// 00517636  53                   push ebx
// 00517637  8d4c2418             lea ecx, [esp + 0x18]
// 0051763b  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00517643  ff15b4248000         call dword ptr [0x8024b4]
// 00517649  8bce                 mov ecx, esi
// 0051764b  e8c0f6ffff           call 0x516d10
// 00517650  807e6000             cmp byte ptr [esi + 0x60], 0
// 00517654  8bd8                 mov ebx, eax
// 00517656  0f8464010000         je 0x5177c0
// 0051765c  83fb23               cmp ebx, 0x23
// 0051765f  0f855b010000         jne 0x5177c0
// 00517665  8bce                 mov ecx, esi
// 00517667  e8a4f6ffff           call 0x516d10
// 0051766c  83f849               cmp eax, 0x49
// 0051766f  743d                 je 0x5176ae
// 00517671  68f88a8200           push 0x828af8
// 00517676  8d4c2444             lea ecx, [esp + 0x44]
// 0051767a  ff1558248000         call dword ptr [0x802458]
// 00517680  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00517683  8b542430             mov edx, dword ptr [esp + 0x30]
// 00517687  51                   push ecx
// 00517688  52                   push edx
// 00517689  8d442448             lea eax, [esp + 0x48]
// 0051768d  50                   push eax
// 0051768e  8d4c2468             lea ecx, [esp + 0x68]
// 00517692  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 0051769a  e8c1f1ffff           call 0x516860
// 0051769f  6868718e00           push 0x8e7168
// 005176a4  8d4c2460             lea ecx, [esp + 0x60]
// 005176a8  51                   push ecx
// 005176a9  e8de9e1800           call 0x6a158c
// 005176ae  8bce                 mov ecx, esi
// 005176b0  e85bf6ffff           call 0x516d10
// 005176b5  83f84e               cmp eax, 0x4e
// 005176b8  743d                 je 0x5176f7
// 005176ba  68f88a8200           push 0x828af8
// 005176bf  8d4c2444             lea ecx, [esp + 0x44]
// 005176c3  ff1558248000         call dword ptr [0x802458]
// 005176c9  8b5634               mov edx, dword ptr [esi + 0x34]
// 005176cc  8b442430             mov eax, dword ptr [esp + 0x30]
// 005176d0  52                   push edx
// 005176d1  50                   push eax
// 005176d2  8d4c2448             lea ecx, [esp + 0x48]
// 005176d6  51                   push ecx
// 005176d7  8d4c2468             lea ecx, [esp + 0x68]
// 005176db  c68424b400000003     mov byte ptr [esp + 0xb4], 3
// 005176e3  e878f1ffff           call 0x516860
// 005176e8  6868718e00           push 0x8e7168
// 005176ed  8d542460             lea edx, [esp + 0x60]
// 005176f1  52                   push edx
// 005176f2  e8959e1800           call 0x6a158c
// 005176f7  68f48a8200           push 0x828af4
// 005176fc  8d4c2418             lea ecx, [esp + 0x18]
// 00517700  ff1548248000         call dword ptr [0x802448]
// 00517706  8bce                 mov ecx, esi
// 00517708  e803f6ffff           call 0x516d10
// 0051770d  83f846               cmp eax, 0x46
// 00517710  7442                 je 0x517754
// 00517712  83f844               cmp eax, 0x44
// 00517715  743d                 je 0x517754
// 00517717  68f88a8200           push 0x828af8
// 0051771c  8d4c2444             lea ecx, [esp + 0x44]
// 00517720  ff1558248000         call dword ptr [0x802458]
// 00517726  8b4634               mov eax, dword ptr [esi + 0x34]
// 00517729  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0051772d  50                   push eax
// 0051772e  51                   push ecx
// 0051772f  8d542448             lea edx, [esp + 0x48]
// 00517733  52                   push edx
// 00517734  8d4c2468             lea ecx, [esp + 0x68]
// 00517738  c68424b400000004     mov byte ptr [esp + 0xb4], 4
// 00517740  e81bf1ffff           call 0x516860
// 00517745  6868718e00           push 0x8e7168
// 0051774a  8d442460             lea eax, [esp + 0x60]
// 0051774e  50                   push eax
// 0051774f  e8389e1800           call 0x6a158c
// 00517754  50                   push eax
// 00517755  8d4c2418             lea ecx, [esp + 0x18]
// 00517759  ff15b4248000         call dword ptr [0x8024b4]
// 0051775f  33ff                 xor edi, edi
// 00517761  8bce                 mov ecx, esi
// 00517763  e8a8f5ffff           call 0x516d10
// 00517768  83f830               cmp eax, 0x30
// 0051776b  7516                 jne 0x517783
// 0051776d  50                   push eax
// 0051776e  8d4c2418             lea ecx, [esp + 0x18]
// 00517772  ff15b4248000         call dword ptr [0x8024b4]
// 00517778  47                   inc edi
// 00517779  83ff02               cmp edi, 2
// 0051777c  7ce3                 jl 0x517761
// 0051777e  e9e0000000           jmp 0x517863
// 00517783  68bc8a8200           push 0x828abc
// 00517788  8d4c2444             lea ecx, [esp + 0x44]
// 0051778c  ff1558248000         call dword ptr [0x802458]
// 00517792  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00517795  8b542430             mov edx, dword ptr [esp + 0x30]
// 00517799  51                   push ecx
// 0051779a  52                   push edx
// 0051779b  8d442448             lea eax, [esp + 0x48]
// 0051779f  50                   push eax
// 005177a0  8d4c2468             lea ecx, [esp + 0x68]
// 005177a4  c68424b400000005     mov byte ptr [esp + 0xb4], 5
// 005177ac  e8aff0ffff           call 0x516860
// 005177b1  6868718e00           push 0x8e7168
// 005177b6  8d4c2460             lea ecx, [esp + 0x60]
// 005177ba  51                   push ecx
// 005177bb  e8cc9d1800           call 0x6a158c
// 005177c0  0fbed3               movsx edx, bl
// 005177c3  52                   push edx
// 005177c4  ffd5                 call ebp
// 005177c6  83c404               add esp, 4
// 005177c9  85c0                 test eax, eax
// 005177cb  7424                 je 0x5177f1
// 005177cd  8d4900               lea ecx, [ecx]
// 005177d0  53                   push ebx
// 005177d1  8d4c2418             lea ecx, [esp + 0x18]
// 005177d5  ff15b4248000         call dword ptr [0x8024b4]
// 005177db  8bce                 mov ecx, esi
// 005177dd  e82ef5ffff           call 0x516d10
// 005177e2  8bd8                 mov ebx, eax
// 005177e4  0fbec3               movsx eax, bl
// 005177e7  50                   push eax
// 005177e8  ffd5                 call ebp
// 005177ea  83c404               add esp, 4
// 005177ed  85c0                 test eax, eax
// 005177ef  75df                 jne 0x5177d0
// 005177f1  83fb65               cmp ebx, 0x65
// 005177f4  7405                 je 0x5177fb
// 005177f6  83fb45               cmp ebx, 0x45
// 005177f9  7568                 jne 0x517863
// 005177fb  53                   push ebx
// 005177fc  8d4c2418             lea ecx, [esp + 0x18]
// 00517800  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00517808  ff15b4248000         call dword ptr [0x8024b4]
// 0051780e  8bce                 mov ecx, esi
// 00517810  e8fbf4ffff           call 0x516d10
// 00517815  8bd8                 mov ebx, eax
// 00517817  83fb2d               cmp ebx, 0x2d
// 0051781a  7405                 je 0x517821
// 0051781c  83fb2b               cmp ebx, 0x2b
// 0051781f  7514                 jne 0x517835
// 00517821  53                   push ebx
// 00517822  8d4c2418             lea ecx, [esp + 0x18]
// 00517826  ff15b4248000         call dword ptr [0x8024b4]
// 0051782c  8bce                 mov ecx, esi
// 0051782e  e8ddf4ffff           call 0x516d10
// 00517833  8bd8                 mov ebx, eax
// 00517835  0fbecb               movsx ecx, bl
// 00517838  51                   push ecx
// 00517839  ffd5                 call ebp
// 0051783b  83c404               add esp, 4
// 0051783e  85c0                 test eax, eax
// 00517840  7421                 je 0x517863
// 00517842  53                   push ebx
// 00517843  8d4c2418             lea ecx, [esp + 0x18]
// 00517847  ff15b4248000         call dword ptr [0x8024b4]
// 0051784d  8bce                 mov ecx, esi
// 0051784f  e8bcf4ffff           call 0x516d10
// 00517854  8bd8                 mov ebx, eax
// 00517856  0fbed3               movsx edx, bl
// 00517859  52                   push edx
// 0051785a  ffd5                 call ebp
// 0051785c  83c404               add esp, 4
// 0051785f  85c0                 test eax, eax
// 00517861  75df                 jne 0x517842
// 00517863  8d442414             lea eax, [esp + 0x14]
// 00517867  50                   push eax
// 00517868  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 0051786f  8bce                 mov ecx, esi
// 00517871  e86aedffff           call 0x5165e0
// 00517876  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0051787e  8d4c2414             lea ecx, [esp + 0x14]
// 00517882  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 0051788a  ff1568248000         call dword ptr [0x802468]
// 00517890  5f                   pop edi
// 00517891  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00517898  8bc6                 mov eax, esi
// 0051789a  5e                   pop esi
// 0051789b  5d                   pop ebp
// 0051789c  5b                   pop ebx
// 0051789d  64890d00000000       mov dword ptr fs:[0], ecx
// 005178a4  81c49c000000         add esp, 0x9c
// 005178aa  c20400               ret 4
// 005178ad  8d4900               lea ecx, [ecx]
// 005178b0  96                   xchg esi, eax
// 005178b1  7251                 jb 0x517904
// 005178b3  007170               add byte ptr [ecx + 0x70], dh
// 005178b6  51                   push ecx
// 005178b7  00e3                 add bl, ah
// 005178b9  7251                 jb 0x51790c
// 005178bb  005171               add byte ptr [ecx + 0x71], dl
// 005178be  51                   push ecx
// 005178bf  00a7705100a6         add byte ptr [edi - 0x59ffae90], ah
// 005178c5  7351                 jae 0x517918
// 005178c7  004572               add byte ptr [ebp + 0x72], al
// 005178ca  51                   push ecx
// 005178cb  003a                 add byte ptr [edx], bh
// 005178cd  7351                 jae 0x517920
// 005178cf  00b871510000         add byte ptr [eax + 0x5171], bh
// 005178d5  0801                 or byte ptr [ecx], al
// 005178d7  0108                 add dword ptr [eax], ecx
// 005178d9  0208                 add cl, byte ptr [eax]
// 005178db  0101                 add dword ptr [ecx], eax
// 005178dd  0003                 add byte ptr [ebx], al
// 005178df  01040500080808       add dword ptr [eax + 0x8080800], eax
// 005178e6  0808                 or byte ptr [eax], cl
// 005178e8  0808                 or byte ptr [eax], cl
// 005178ea  0808                 or byte ptr [eax], cl
// 005178ec  0806                 or byte ptr [esi], al
// 005178ee  0102                 add dword ptr [edx], eax
// 005178f0  0002                 add byte ptr [edx], al
// 005178f2  0101                 add dword ptr [ecx], eax
// 005178f4  0808                 or byte ptr [eax], cl
// 005178f6  0808                 or byte ptr [eax], cl
// 005178f8  0808                 or byte ptr [eax], cl
// 005178fa  0808                 or byte ptr [eax], cl
// 005178fc  0808                 or byte ptr [eax], cl
// 005178fe  0808                 or byte ptr [eax], cl
// 00517900  0808                 or byte ptr [eax], cl
// 00517902  0808                 or byte ptr [eax], cl
// 00517904  0808                 or byte ptr [eax], cl
// 00517906  0808                 or byte ptr [eax], cl
// 00517908  0808                 or byte ptr [eax], cl
// 0051790a  0808                 or byte ptr [eax], cl
// 0051790c  0808                 or byte ptr [eax], cl
// 0051790e  0107                 add dword ptr [edi], eax
// 00517910  0100                 add dword ptr [eax], eax
// 00517912  0808                 or byte ptr [eax], cl
// 00517914  0808                 or byte ptr [eax], cl
// 00517916  0808                 or byte ptr [eax], cl
// 00517918  0808                 or byte ptr [eax], cl
// 0051791a  0808                 or byte ptr [eax], cl
// 0051791c  0808                 or byte ptr [eax], cl
// 0051791e  0808                 or byte ptr [eax], cl
// 00517920  0808                 or byte ptr [eax], cl
// 00517922  0808                 or byte ptr [eax], cl
// 00517924  0808                 or byte ptr [eax], cl
// 00517926  0808                 or byte ptr [eax], cl
// 00517928  0808                 or byte ptr [eax], cl
// 0051792a  0808                 or byte ptr [eax], cl
// 0051792c  0808                 or byte ptr [eax], cl
// 0051792e  0102                 add dword ptr [edx], eax
// 00517930  0100                 add dword ptr [eax], eax
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?nextToken@TextInput@G3D@@AAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
