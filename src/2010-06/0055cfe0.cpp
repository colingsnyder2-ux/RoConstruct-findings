// roc 2010-06 0055cfe0  unit: G3D::TextInput::WrongSymbol  size: 3042 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055cfe0
//
// 0055cfe0  6aff                 push -1
// 0055cfe2  685e169900           push 0x99165e
// 0055cfe7  64a100000000         mov eax, dword ptr fs:[0]
// 0055cfed  50                   push eax
// 0055cfee  64892500000000       mov dword ptr fs:[0], esp
// 0055cff5  81ec90000000         sub esp, 0x90
// 0055cffb  53                   push ebx
// 0055cffc  55                   push ebp
// 0055cffd  56                   push esi
// 0055cffe  8bf1                 mov esi, ecx
// 0055d000  68fe08a000           push 0xa008fe
// 0055d005  8d4c2414             lea ecx, [esp + 0x14]
// 0055d009  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055d011  ff1510a49e00         call dword ptr [0x9ea410]
// 0055d017  8b4630               mov eax, dword ptr [esi + 0x30]
// 0055d01a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055d01d  8944242c             mov dword ptr [esp + 0x2c], eax
// 0055d021  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d024  894c2430             mov dword ptr [esp + 0x30], ecx
// 0055d028  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0055d02b  bd01000000           mov ebp, 1
// 0055d030  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 0055d037  c744243403000000     mov dword ptr [esp + 0x34], 3
// 0055d03f  c744243805000000     mov dword ptr [esp + 0x38], 5
// 0055d047  3bc1                 cmp eax, ecx
// 0055d049  730c                 jae 0x55d057
// 0055d04b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055d04e  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 0055d052  83fbff               cmp ebx, -1
// 0055d055  754b                 jne 0x55d0a2
// 0055d057  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 0055d05e  8d442410             lea eax, [esp + 0x10]
// 0055d062  50                   push eax
// 0055d063  8bce                 mov ecx, esi
// 0055d065  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055d06b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055d06f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0055d073  8b442434             mov eax, dword ptr [esp + 0x34]
// 0055d077  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0055d07a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0055d07e  895620               mov dword ptr [esi + 0x20], edx
// 0055d081  894624               mov dword ptr [esi + 0x24], eax
// 0055d084  894e28               mov dword ptr [esi + 0x28], ecx
// 0055d087  8d4c2410             lea ecx, [esp + 0x10]
// 0055d08b  896c240c             mov dword ptr [esp + 0xc], ebp
// 0055d08f  c68424a400000000     mov byte ptr [esp + 0xa4], 0
// 0055d097  ff1500a49e00         call dword ptr [0x9ea400]
// 0055d09d  e97f0a0000           jmp 0x55db21
// 0055d0a2  57                   push edi
// 0055d0a3  8b3d40a79e00         mov edi, dword ptr [0x9ea740]
// 0055d0a9  8da42400000000       lea esp, [esp]
// 0055d0b0  0fbed3               movsx edx, bl
// 0055d0b3  52                   push edx
// 0055d0b4  ffd7                 call edi
// 0055d0b6  83c404               add esp, 4
// 0055d0b9  85c0                 test eax, eax
// 0055d0bb  7447                 je 0x55d104
// 0055d0bd  8d4900               lea ecx, [ecx]
// 0055d0c0  8b5624               mov edx, dword ptr [esi + 0x24]
// 0055d0c3  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d0c6  3bc2                 cmp eax, edx
// 0055d0c8  731a                 jae 0x55d0e4
// 0055d0ca  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0055d0cd  8a0c08               mov cl, byte ptr [eax + ecx]
// 0055d0d0  40                   inc eax
// 0055d0d1  89462c               mov dword ptr [esi + 0x2c], eax
// 0055d0d4  80f90a               cmp cl, 0xa
// 0055d0d7  7508                 jne 0x55d0e1
// 0055d0d9  016e30               add dword ptr [esi + 0x30], ebp
// 0055d0dc  896e34               mov dword ptr [esi + 0x34], ebp
// 0055d0df  eb03                 jmp 0x55d0e4
// 0055d0e1  016e34               add dword ptr [esi + 0x34], ebp
// 0055d0e4  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d0e7  3bc2                 cmp eax, edx
// 0055d0e9  7205                 jb 0x55d0f0
// 0055d0eb  83cbff               or ebx, 0xffffffff
// 0055d0ee  eb07                 jmp 0x55d0f7
// 0055d0f0  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055d0f3  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 0055d0f7  0fbec3               movsx eax, bl
// 0055d0fa  50                   push eax
// 0055d0fb  ffd7                 call edi
// 0055d0fd  83c404               add esp, 4
// 0055d100  85c0                 test eax, eax
// 0055d102  75bc                 jne 0x55d0c0
// 0055d104  55                   push ebp
// 0055d105  8bce                 mov ecx, esi
// 0055d107  e8c4fcffff           call 0x55cdd0
// 0055d10c  807e3900             cmp byte ptr [esi + 0x39], 0
// 0055d110  7409                 je 0x55d11b
// 0055d112  83fb2f               cmp ebx, 0x2f
// 0055d115  7504                 jne 0x55d11b
// 0055d117  3bc3                 cmp eax, ebx
// 0055d119  741c                 je 0x55d137
// 0055d11b  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 0055d11e  84c9                 test cl, cl
// 0055d120  7407                 je 0x55d129
// 0055d122  0fbec9               movsx ecx, cl
// 0055d125  3bd9                 cmp ebx, ecx
// 0055d127  740e                 je 0x55d137
// 0055d129  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 0055d12c  84c9                 test cl, cl
// 0055d12e  7460                 je 0x55d190
// 0055d130  0fbed1               movsx edx, cl
// 0055d133  3bda                 cmp ebx, edx
// 0055d135  7559                 jne 0x55d190
// 0055d137  8b5624               mov edx, dword ptr [esi + 0x24]
// 0055d13a  8d9b00000000         lea ebx, [ebx]
// 0055d140  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d143  3bc2                 cmp eax, edx
// 0055d145  731a                 jae 0x55d161
// 0055d147  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0055d14a  8a0c08               mov cl, byte ptr [eax + ecx]
// 0055d14d  40                   inc eax
// 0055d14e  89462c               mov dword ptr [esi + 0x2c], eax
// 0055d151  80f90a               cmp cl, 0xa
// 0055d154  7508                 jne 0x55d15e
// 0055d156  016e30               add dword ptr [esi + 0x30], ebp
// 0055d159  896e34               mov dword ptr [esi + 0x34], ebp
// 0055d15c  eb03                 jmp 0x55d161
// 0055d15e  016e34               add dword ptr [esi + 0x34], ebp
// 0055d161  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d164  3bc2                 cmp eax, edx
// 0055d166  7205                 jb 0x55d16d
// 0055d168  83cbff               or ebx, 0xffffffff
// 0055d16b  eb07                 jmp 0x55d174
// 0055d16d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0055d170  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 0055d174  80fb0a               cmp bl, 0xa
// 0055d177  0f8433ffffff         je 0x55d0b0
// 0055d17d  80fb0d               cmp bl, 0xd
// 0055d180  0f842affffff         je 0x55d0b0
// 0055d186  83fbff               cmp ebx, -1
// 0055d189  75b5                 jne 0x55d140
// 0055d18b  e920ffffff           jmp 0x55d0b0
// 0055d190  807e3800             cmp byte ptr [esi + 0x38], 0
// 0055d194  0f84fc000000         je 0x55d296
// 0055d19a  83fb2f               cmp ebx, 0x2f
// 0055d19d  0f85f3000000         jne 0x55d296
// 0055d1a3  83f82a               cmp eax, 0x2a
// 0055d1a6  0f85ea000000         jne 0x55d296
// 0055d1ac  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0055d1af  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d1b2  3bc3                 cmp eax, ebx
// 0055d1b4  731a                 jae 0x55d1d0
// 0055d1b6  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055d1b9  8a0c10               mov cl, byte ptr [eax + edx]
// 0055d1bc  40                   inc eax
// 0055d1bd  89462c               mov dword ptr [esi + 0x2c], eax
// 0055d1c0  80f90a               cmp cl, 0xa
// 0055d1c3  7508                 jne 0x55d1cd
// 0055d1c5  016e30               add dword ptr [esi + 0x30], ebp
// 0055d1c8  896e34               mov dword ptr [esi + 0x34], ebp
// 0055d1cb  eb03                 jmp 0x55d1d0
// 0055d1cd  016e34               add dword ptr [esi + 0x34], ebp
// 0055d1d0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d1d3  3bc3                 cmp eax, ebx
// 0055d1d5  731a                 jae 0x55d1f1
// 0055d1d7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0055d1da  8a0c08               mov cl, byte ptr [eax + ecx]
// 0055d1dd  40                   inc eax
// 0055d1de  89462c               mov dword ptr [esi + 0x2c], eax
// 0055d1e1  80f90a               cmp cl, 0xa
// 0055d1e4  7508                 jne 0x55d1ee
// 0055d1e6  016e30               add dword ptr [esi + 0x30], ebp
// 0055d1e9  896e34               mov dword ptr [esi + 0x34], ebp
// 0055d1ec  eb03                 jmp 0x55d1f1
// 0055d1ee  016e34               add dword ptr [esi + 0x34], ebp
// 0055d1f1  6a00                 push 0
// 0055d1f3  8bce                 mov ecx, esi
// 0055d1f5  e8d6fbffff           call 0x55cdd0
// 0055d1fa  55                   push ebp
// 0055d1fb  8bce                 mov ecx, esi
// 0055d1fd  8bf8                 mov edi, eax
// 0055d1ff  e8ccfbffff           call 0x55cdd0
// 0055d204  83ff2a               cmp edi, 0x2a
// 0055d207  7505                 jne 0x55d20e
// 0055d209  83f82f               cmp eax, 0x2f
// 0055d20c  eb03                 jmp 0x55d211
// 0055d20e  83ffff               cmp edi, -1
// 0055d211  7423                 je 0x55d236
// 0055d213  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0055d216  3bcb                 cmp ecx, ebx
// 0055d218  73e0                 jae 0x55d1fa
// 0055d21a  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055d21d  8a1411               mov dl, byte ptr [ecx + edx]
// 0055d220  41                   inc ecx
// 0055d221  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0055d224  80fa0a               cmp dl, 0xa
// 0055d227  7508                 jne 0x55d231
// 0055d229  016e30               add dword ptr [esi + 0x30], ebp
// 0055d22c  896e34               mov dword ptr [esi + 0x34], ebp
// 0055d22f  ebc9                 jmp 0x55d1fa
// 0055d231  016e34               add dword ptr [esi + 0x34], ebp
// 0055d234  ebc4                 jmp 0x55d1fa
// 0055d236  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d239  3bc3                 cmp eax, ebx
// 0055d23b  731a                 jae 0x55d257
// 0055d23d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0055d240  8a0c08               mov cl, byte ptr [eax + ecx]
// 0055d243  40                   inc eax
// 0055d244  89462c               mov dword ptr [esi + 0x2c], eax
// 0055d247  80f90a               cmp cl, 0xa
// 0055d24a  7508                 jne 0x55d254
// 0055d24c  016e30               add dword ptr [esi + 0x30], ebp
// 0055d24f  896e34               mov dword ptr [esi + 0x34], ebp
// 0055d252  eb03                 jmp 0x55d257
// 0055d254  016e34               add dword ptr [esi + 0x34], ebp
// 0055d257  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d25a  3bc3                 cmp eax, ebx
// 0055d25c  7328                 jae 0x55d286
// 0055d25e  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055d261  8a0c10               mov cl, byte ptr [eax + edx]
// 0055d264  40                   inc eax
// 0055d265  89462c               mov dword ptr [esi + 0x2c], eax
// 0055d268  80f90a               cmp cl, 0xa
// 0055d26b  7516                 jne 0x55d283
// 0055d26d  016e30               add dword ptr [esi + 0x30], ebp
// 0055d270  6a00                 push 0
// 0055d272  8bce                 mov ecx, esi
// 0055d274  896e34               mov dword ptr [esi + 0x34], ebp
// 0055d277  e854fbffff           call 0x55cdd0
// 0055d27c  8bd8                 mov ebx, eax
// 0055d27e  e920feffff           jmp 0x55d0a3
// 0055d283  016e34               add dword ptr [esi + 0x34], ebp
// 0055d286  6a00                 push 0
// 0055d288  8bce                 mov ecx, esi
// 0055d28a  e841fbffff           call 0x55cdd0
// 0055d28f  8bd8                 mov ebx, eax
// 0055d291  e90dfeffff           jmp 0x55d0a3
// 0055d296  8b4630               mov eax, dword ptr [esi + 0x30]
// 0055d299  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055d29c  89442430             mov dword ptr [esp + 0x30], eax
// 0055d2a0  894c2434             mov dword ptr [esp + 0x34], ecx
// 0055d2a4  83fbff               cmp ebx, -1
// 0055d2a7  7539                 jne 0x55d2e2
// 0055d2a9  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d2b0  8d542414             lea edx, [esp + 0x14]
// 0055d2b4  52                   push edx
// 0055d2b5  8bce                 mov ecx, esi
// 0055d2b7  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055d2bd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0055d2c1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0055d2c5  8b542438             mov edx, dword ptr [esp + 0x38]
// 0055d2c9  89461c               mov dword ptr [esi + 0x1c], eax
// 0055d2cc  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0055d2d0  894e20               mov dword ptr [esi + 0x20], ecx
// 0055d2d3  895624               mov dword ptr [esi + 0x24], edx
// 0055d2d6  894628               mov dword ptr [esi + 0x28], eax
// 0055d2d9  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d2dd  e92c080000           jmp 0x55db0e
// 0055d2e2  8d43df               lea eax, [ebx - 0x21]
// 0055d2e5  b902000000           mov ecx, 2
// 0055d2ea  83f85d               cmp eax, 0x5d
// 0055d2ed  0f8755010000         ja 0x55d448
// 0055d2f3  0fb69064db5500       movzx edx, byte ptr [eax + 0x55db64]
// 0055d2fa  ff249540db5500       jmp dword ptr [edx*4 + 0x55db40]
// 0055d301  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0055d305  53                   push ebx
// 0055d306  8d4c2418             lea ecx, [esp + 0x18]
// 0055d30a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0055d30e  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d314  8bce                 mov ecx, esi
// 0055d316  e885fcffff           call 0x55cfa0
// 0055d31b  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d322  8d442414             lea eax, [esp + 0x14]
// 0055d326  50                   push eax
// 0055d327  8bce                 mov ecx, esi
// 0055d329  e8c2f5ffff           call 0x55c8f0
// 0055d32e  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d332  e9d7070000           jmp 0x55db0e
// 0055d337  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0055d33b  53                   push ebx
// 0055d33c  8d4c2418             lea ecx, [esp + 0x18]
// 0055d340  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0055d344  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d34a  8bce                 mov ecx, esi
// 0055d34c  e84ffcffff           call 0x55cfa0
// 0055d351  8bd8                 mov ebx, eax
// 0055d353  83fb2d               cmp ebx, 0x2d
// 0055d356  745b                 je 0x55d3b3
// 0055d358  83fb3c               cmp ebx, 0x3c
// 0055d35b  7e05                 jle 0x55d362
// 0055d35d  83fb3e               cmp ebx, 0x3e
// 0055d360  7e51                 jle 0x55d3b3
// 0055d362  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 0055d366  742f                 je 0x55d397
// 0055d368  53                   push ebx
// 0055d369  e842f5ffff           call 0x55c8b0
// 0055d36e  83c404               add esp, 4
// 0055d371  84c0                 test al, al
// 0055d373  0f85cf000000         jne 0x55d448
// 0055d379  83fb2e               cmp ebx, 0x2e
// 0055d37c  7519                 jne 0x55d397
// 0055d37e  55                   push ebp
// 0055d37f  8bce                 mov ecx, esi
// 0055d381  e84afaffff           call 0x55cdd0
// 0055d386  50                   push eax
// 0055d387  e824f5ffff           call 0x55c8b0
// 0055d38c  83c404               add esp, 4
// 0055d38f  84c0                 test al, al
// 0055d391  0f85b1000000         jne 0x55d448
// 0055d397  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d39e  8d4c2414             lea ecx, [esp + 0x14]
// 0055d3a2  51                   push ecx
// 0055d3a3  8bce                 mov ecx, esi
// 0055d3a5  e846f5ffff           call 0x55c8f0
// 0055d3aa  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d3ae  e95b070000           jmp 0x55db0e
// 0055d3b3  53                   push ebx
// 0055d3b4  8d4c2418             lea ecx, [esp + 0x18]
// 0055d3b8  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d3be  8bce                 mov ecx, esi
// 0055d3c0  e8cbf9ffff           call 0x55cd90
// 0055d3c5  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d3cc  8d542414             lea edx, [esp + 0x14]
// 0055d3d0  52                   push edx
// 0055d3d1  8bce                 mov ecx, esi
// 0055d3d3  e818f5ffff           call 0x55c8f0
// 0055d3d8  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d3dc  e92d070000           jmp 0x55db0e
// 0055d3e1  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0055d3e5  53                   push ebx
// 0055d3e6  8d4c2418             lea ecx, [esp + 0x18]
// 0055d3ea  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0055d3ee  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d3f4  8bce                 mov ecx, esi
// 0055d3f6  e8a5fbffff           call 0x55cfa0
// 0055d3fb  8bd8                 mov ebx, eax
// 0055d3fd  83fb2b               cmp ebx, 0x2b
// 0055d400  0f84a1000000         je 0x55d4a7
// 0055d406  83fb3d               cmp ebx, 0x3d
// 0055d409  0f8498000000         je 0x55d4a7
// 0055d40f  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 0055d413  0f8402ffffff         je 0x55d31b
// 0055d419  53                   push ebx
// 0055d41a  e891f4ffff           call 0x55c8b0
// 0055d41f  83c404               add esp, 4
// 0055d422  84c0                 test al, al
// 0055d424  7522                 jne 0x55d448
// 0055d426  83fb2e               cmp ebx, 0x2e
// 0055d429  0f85ecfeffff         jne 0x55d31b
// 0055d42f  55                   push ebp
// 0055d430  8bce                 mov ecx, esi
// 0055d432  e899f9ffff           call 0x55cdd0
// 0055d437  50                   push eax
// 0055d438  e873f4ffff           call 0x55c8b0
// 0055d43d  83c404               add esp, 4
// 0055d440  84c0                 test al, al
// 0055d442  0f84d3feffff         je 0x55d31b
// 0055d448  8b2deca79e00         mov ebp, dword ptr [0x9ea7ec]
// 0055d44e  0fbefb               movsx edi, bl
// 0055d451  57                   push edi
// 0055d452  ffd5                 call ebp
// 0055d454  83c404               add esp, 4
// 0055d457  85c0                 test eax, eax
// 0055d459  0f853a030000         jne 0x55d799
// 0055d45f  83fb2e               cmp ebx, 0x2e
// 0055d462  0f8431030000         je 0x55d799
// 0055d468  53                   push ebx
// 0055d469  e862f4ffff           call 0x55c8d0
// 0055d46e  83c404               add esp, 4
// 0055d471  84c0                 test al, al
// 0055d473  0f85bd020000         jne 0x55d736
// 0055d479  83fb5f               cmp ebx, 0x5f
// 0055d47c  0f84b4020000         je 0x55d736
// 0055d482  83fb22               cmp ebx, 0x22
// 0055d485  0f8530020000         jne 0x55d6bb
// 0055d48b  8bce                 mov ecx, esi
// 0055d48d  e8fef8ffff           call 0x55cd90
// 0055d492  8d442414             lea eax, [esp + 0x14]
// 0055d496  50                   push eax
// 0055d497  53                   push ebx
// 0055d498  e863f9ffff           call 0x55ce00
// 0055d49d  8d4c2414             lea ecx, [esp + 0x14]
// 0055d4a1  51                   push ecx
// 0055d4a2  e951060000           jmp 0x55daf8
// 0055d4a7  53                   push ebx
// 0055d4a8  8d4c2418             lea ecx, [esp + 0x18]
// 0055d4ac  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d4b2  8bce                 mov ecx, esi
// 0055d4b4  e8d7f8ffff           call 0x55cd90
// 0055d4b9  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d4c0  8d4c2414             lea ecx, [esp + 0x14]
// 0055d4c4  51                   push ecx
// 0055d4c5  8bce                 mov ecx, esi
// 0055d4c7  e824f4ffff           call 0x55c8f0
// 0055d4cc  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d4d0  e939060000           jmp 0x55db0e
// 0055d4d5  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0055d4d9  53                   push ebx
// 0055d4da  8d4c2418             lea ecx, [esp + 0x18]
// 0055d4de  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0055d4e2  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d4e8  8bce                 mov ecx, esi
// 0055d4ea  e8b1faffff           call 0x55cfa0
// 0055d4ef  83f83a               cmp eax, 0x3a
// 0055d4f2  0f8523feffff         jne 0x55d31b
// 0055d4f8  50                   push eax
// 0055d4f9  8d4c2418             lea ecx, [esp + 0x18]
// 0055d4fd  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d503  8bce                 mov ecx, esi
// 0055d505  e886f8ffff           call 0x55cd90
// 0055d50a  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d511  8d542414             lea edx, [esp + 0x14]
// 0055d515  52                   push edx
// 0055d516  8bce                 mov ecx, esi
// 0055d518  e8d3f3ffff           call 0x55c8f0
// 0055d51d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d521  e9e8050000           jmp 0x55db0e
// 0055d526  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0055d52a  53                   push ebx
// 0055d52b  8d4c2418             lea ecx, [esp + 0x18]
// 0055d52f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0055d533  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d539  8bce                 mov ecx, esi
// 0055d53b  e860faffff           call 0x55cfa0
// 0055d540  83f83d               cmp eax, 0x3d
// 0055d543  75c5                 jne 0x55d50a
// 0055d545  50                   push eax
// 0055d546  8d4c2418             lea ecx, [esp + 0x18]
// 0055d54a  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d550  8bce                 mov ecx, esi
// 0055d552  e839f8ffff           call 0x55cd90
// 0055d557  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d55e  8d4c2414             lea ecx, [esp + 0x14]
// 0055d562  51                   push ecx
// 0055d563  8bce                 mov ecx, esi
// 0055d565  e886f3ffff           call 0x55c8f0
// 0055d56a  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d56e  e99b050000           jmp 0x55db0e
// 0055d573  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0055d577  53                   push ebx
// 0055d578  8d4c2418             lea ecx, [esp + 0x18]
// 0055d57c  8bfb                 mov edi, ebx
// 0055d57e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0055d582  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d588  8bce                 mov ecx, esi
// 0055d58a  e811faffff           call 0x55cfa0
// 0055d58f  83f83d               cmp eax, 0x3d
// 0055d592  7408                 je 0x55d59c
// 0055d594  3bf8                 cmp edi, eax
// 0055d596  0f857ffdffff         jne 0x55d31b
// 0055d59c  50                   push eax
// 0055d59d  8d4c2418             lea ecx, [esp + 0x18]
// 0055d5a1  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d5a7  8bce                 mov ecx, esi
// 0055d5a9  e8e2f7ffff           call 0x55cd90
// 0055d5ae  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d5b5  8d4c2414             lea ecx, [esp + 0x14]
// 0055d5b9  51                   push ecx
// 0055d5ba  8bce                 mov ecx, esi
// 0055d5bc  e82ff3ffff           call 0x55c8f0
// 0055d5c1  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d5c5  e944050000           jmp 0x55db0e
// 0055d5ca  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0055d5ce  53                   push ebx
// 0055d5cf  8d4c2418             lea ecx, [esp + 0x18]
// 0055d5d3  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0055d5d7  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d5dd  8bce                 mov ecx, esi
// 0055d5df  e8bcf9ffff           call 0x55cfa0
// 0055d5e4  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 0055d5e7  84c9                 test cl, cl
// 0055d5e9  7407                 je 0x55d5f2
// 0055d5eb  0fbed1               movsx edx, cl
// 0055d5ee  3bc2                 cmp eax, edx
// 0055d5f0  7416                 je 0x55d608
// 0055d5f2  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 0055d5f5  84c9                 test cl, cl
// 0055d5f7  0f841efdffff         je 0x55d31b
// 0055d5fd  0fbec9               movsx ecx, cl
// 0055d600  3bc1                 cmp eax, ecx
// 0055d602  0f8513fdffff         jne 0x55d31b
// 0055d608  50                   push eax
// 0055d609  8d4c2418             lea ecx, [esp + 0x18]
// 0055d60d  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d613  8bce                 mov ecx, esi
// 0055d615  e876f7ffff           call 0x55cd90
// 0055d61a  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d621  8d542414             lea edx, [esp + 0x14]
// 0055d625  52                   push edx
// 0055d626  8bce                 mov ecx, esi
// 0055d628  e8c3f2ffff           call 0x55c8f0
// 0055d62d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d631  e9d8040000           jmp 0x55db0e
// 0055d636  55                   push ebp
// 0055d637  8bce                 mov ecx, esi
// 0055d639  e892f7ffff           call 0x55cdd0
// 0055d63e  50                   push eax
// 0055d63f  e86cf2ffff           call 0x55c8b0
// 0055d644  83c404               add esp, 4
// 0055d647  84c0                 test al, al
// 0055d649  0f85f9fdffff         jne 0x55d448
// 0055d64f  53                   push ebx
// 0055d650  8d4c2418             lea ecx, [esp + 0x18]
// 0055d654  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0055d658  c744244002000000     mov dword ptr [esp + 0x40], 2
// 0055d660  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d666  8bce                 mov ecx, esi
// 0055d668  e833f9ffff           call 0x55cfa0
// 0055d66d  83f82e               cmp eax, 0x2e
// 0055d670  0f8594feffff         jne 0x55d50a
// 0055d676  50                   push eax
// 0055d677  8d4c2418             lea ecx, [esp + 0x18]
// 0055d67b  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d681  8bce                 mov ecx, esi
// 0055d683  e818f9ffff           call 0x55cfa0
// 0055d688  83f82e               cmp eax, 0x2e
// 0055d68b  7512                 jne 0x55d69f
// 0055d68d  50                   push eax
// 0055d68e  8d4c2418             lea ecx, [esp + 0x18]
// 0055d692  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d698  8bce                 mov ecx, esi
// 0055d69a  e8f1f6ffff           call 0x55cd90
// 0055d69f  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0055d6a6  8d4c2414             lea ecx, [esp + 0x14]
// 0055d6aa  51                   push ecx
// 0055d6ab  8bce                 mov ecx, esi
// 0055d6ad  e83ef2ffff           call 0x55c8f0
// 0055d6b2  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055d6b6  e953040000           jmp 0x55db0e
// 0055d6bb  83fb27               cmp ebx, 0x27
// 0055d6be  753e                 jne 0x55d6fe
// 0055d6c0  8bce                 mov ecx, esi
// 0055d6c2  e8c9f6ffff           call 0x55cd90
// 0055d6c7  807e3e00             cmp byte ptr [esi + 0x3e], 0
// 0055d6cb  7410                 je 0x55d6dd
// 0055d6cd  8d542414             lea edx, [esp + 0x14]
// 0055d6d1  52                   push edx
// 0055d6d2  53                   push ebx
// 0055d6d3  e828f7ffff           call 0x55ce00
// 0055d6d8  e916040000           jmp 0x55daf3
// 0055d6dd  6a27                 push 0x27
// 0055d6df  8d4c2418             lea ecx, [esp + 0x18]
// 0055d6e3  ff158ca69e00         call dword ptr [0x9ea68c]
// 0055d6e9  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0055d6f1  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 0055d6f9  e9f5030000           jmp 0x55daf3
// 0055d6fe  83fbff               cmp ebx, -1
// 0055d701  7529                 jne 0x55d72c
// 0055d703  68fe08a000           push 0xa008fe
// 0055d708  8d4c2418             lea ecx, [esp + 0x18]
// 0055d70c  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0055d714  c744244005000000     mov dword ptr [esp + 0x40], 5
// 0055d71c  ff151ca49e00         call dword ptr [0x9ea41c]
// 0055d722  8d4c2414             lea ecx, [esp + 0x14]
// 0055d726  51                   push ecx
// 0055d727  e9cc030000           jmp 0x55daf8
// 0055d72c  8d542414             lea edx, [esp + 0x14]
// 0055d730  52                   push edx
// 0055d731  e9c2030000           jmp 0x55daf8
// 0055d736  68fe08a000           push 0xa008fe
// 0055d73b  8d4c2418             lea ecx, [esp + 0x18]
// 0055d73f  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 0055d747  c744244002000000     mov dword ptr [esp + 0x40], 2
// 0055d74f  ff151ca49e00         call dword ptr [0x9ea41c]
// 0055d755  8b2df0a79e00         mov ebp, dword ptr [0x9ea7f0]
// 0055d75b  eb03                 jmp 0x55d760
// 0055d75d  8d4900               lea ecx, [ecx]
// 0055d760  53                   push ebx
// 0055d761  8d4c2418             lea ecx, [esp + 0x18]
// 0055d765  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d76b  8bce                 mov ecx, esi
// 0055d76d  e82ef8ffff           call 0x55cfa0
// 0055d772  8bd8                 mov ebx, eax
// 0055d774  0fbefb               movsx edi, bl
// 0055d777  57                   push edi
// 0055d778  ffd5                 call ebp
// 0055d77a  83c404               add esp, 4
// 0055d77d  85c0                 test eax, eax
// 0055d77f  75df                 jne 0x55d760
// 0055d781  57                   push edi
// 0055d782  ff15eca79e00         call dword ptr [0x9ea7ec]
// 0055d788  83c404               add esp, 4
// 0055d78b  85c0                 test eax, eax
// 0055d78d  75d1                 jne 0x55d760
// 0055d78f  83fb5f               cmp ebx, 0x5f
// 0055d792  74cc                 je 0x55d760
// 0055d794  e95a030000           jmp 0x55daf3
// 0055d799  8d4c2414             lea ecx, [esp + 0x14]
// 0055d79d  68bc0ba200           push 0xa20bbc
// 0055d7a2  51                   push ecx
// 0055d7a3  ff159ca49e00         call dword ptr [0x9ea49c]
// 0055d7a9  83c408               add esp, 8
// 0055d7ac  84c0                 test al, al
// 0055d7ae  740f                 je 0x55d7bf
// 0055d7b0  68fe08a000           push 0xa008fe
// 0055d7b5  8d4c2418             lea ecx, [esp + 0x18]
// 0055d7b9  ff151ca49e00         call dword ptr [0x9ea41c]
// 0055d7bf  c744243802000000     mov dword ptr [esp + 0x38], 2
// 0055d7c7  83fb2e               cmp ebx, 0x2e
// 0055d7ca  7554                 jne 0x55d820
// 0055d7cc  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0055d7d4  57                   push edi
// 0055d7d5  ffd5                 call ebp
// 0055d7d7  83c404               add esp, 4
// 0055d7da  85c0                 test eax, eax
// 0055d7dc  0f84db000000         je 0x55d8bd
// 0055d7e2  bf01000000           mov edi, 1
// 0055d7e7  eb07                 jmp 0x55d7f0
// 0055d7e9  8da42400000000       lea esp, [esp]
// 0055d7f0  53                   push ebx
// 0055d7f1  8d4c2418             lea ecx, [esp + 0x18]
// 0055d7f5  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d7fb  8b5624               mov edx, dword ptr [esi + 0x24]
// 0055d7fe  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d801  3bc2                 cmp eax, edx
// 0055d803  0f8390000000         jae 0x55d899
// 0055d809  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0055d80c  8a0c08               mov cl, byte ptr [eax + ecx]
// 0055d80f  40                   inc eax
// 0055d810  89462c               mov dword ptr [esi + 0x2c], eax
// 0055d813  80f90a               cmp cl, 0xa
// 0055d816  757e                 jne 0x55d896
// 0055d818  017e30               add dword ptr [esi + 0x30], edi
// 0055d81b  897e34               mov dword ptr [esi + 0x34], edi
// 0055d81e  eb79                 jmp 0x55d899
// 0055d820  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0055d828  83fb30               cmp ebx, 0x30
// 0055d82b  75a7                 jne 0x55d7d4
// 0055d82d  6a01                 push 1
// 0055d82f  8bce                 mov ecx, esi
// 0055d831  e89af5ffff           call 0x55cdd0
// 0055d836  83f878               cmp eax, 0x78
// 0055d839  7599                 jne 0x55d7d4
// 0055d83b  68b80ba200           push 0xa20bb8
// 0055d840  8d4c2418             lea ecx, [esp + 0x18]
// 0055d844  ff1520a49e00         call dword ptr [0x9ea420]
// 0055d84a  8bce                 mov ecx, esi
// 0055d84c  e83ff5ffff           call 0x55cd90
// 0055d851  e83af5ffff           call 0x55cd90
// 0055d856  6a00                 push 0
// 0055d858  e873f5ffff           call 0x55cdd0
// 0055d85d  8bd8                 mov ebx, eax
// 0055d85f  0fbed3               movsx edx, bl
// 0055d862  52                   push edx
// 0055d863  ffd5                 call ebp
// 0055d865  83c404               add esp, 4
// 0055d868  85c0                 test eax, eax
// 0055d86a  7516                 jne 0x55d882
// 0055d86c  83fb41               cmp ebx, 0x41
// 0055d86f  7c05                 jl 0x55d876
// 0055d871  83fb46               cmp ebx, 0x46
// 0055d874  7e0c                 jle 0x55d882
// 0055d876  8d439f               lea eax, [ebx - 0x61]
// 0055d879  83f805               cmp eax, 5
// 0055d87c  0f8771020000         ja 0x55daf3
// 0055d882  53                   push ebx
// 0055d883  8d4c2418             lea ecx, [esp + 0x18]
// 0055d887  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d88d  8bce                 mov ecx, esi
// 0055d88f  e80cf7ffff           call 0x55cfa0
// 0055d894  ebc7                 jmp 0x55d85d
// 0055d896  017e34               add dword ptr [esi + 0x34], edi
// 0055d899  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055d89c  3bc2                 cmp eax, edx
// 0055d89e  7205                 jb 0x55d8a5
// 0055d8a0  83cbff               or ebx, 0xffffffff
// 0055d8a3  eb07                 jmp 0x55d8ac
// 0055d8a5  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055d8a8  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 0055d8ac  0fbec3               movsx eax, bl
// 0055d8af  50                   push eax
// 0055d8b0  ffd5                 call ebp
// 0055d8b2  83c404               add esp, 4
// 0055d8b5  85c0                 test eax, eax
// 0055d8b7  0f8533ffffff         jne 0x55d7f0
// 0055d8bd  83fb2e               cmp ebx, 0x2e
// 0055d8c0  0f85bb010000         jne 0x55da81
// 0055d8c6  53                   push ebx
// 0055d8c7  8d4c2418             lea ecx, [esp + 0x18]
// 0055d8cb  c744244004000000     mov dword ptr [esp + 0x40], 4
// 0055d8d3  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d8d9  8bce                 mov ecx, esi
// 0055d8db  e8c0f6ffff           call 0x55cfa0
// 0055d8e0  807e6000             cmp byte ptr [esi + 0x60], 0
// 0055d8e4  8bd8                 mov ebx, eax
// 0055d8e6  0f8464010000         je 0x55da50
// 0055d8ec  83fb23               cmp ebx, 0x23
// 0055d8ef  0f855b010000         jne 0x55da50
// 0055d8f5  8bce                 mov ecx, esi
// 0055d8f7  e8a4f6ffff           call 0x55cfa0
// 0055d8fc  83f849               cmp eax, 0x49
// 0055d8ff  743d                 je 0x55d93e
// 0055d901  68800ba200           push 0xa20b80
// 0055d906  8d4c2444             lea ecx, [esp + 0x44]
// 0055d90a  ff1510a49e00         call dword ptr [0x9ea410]
// 0055d910  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055d913  8b542430             mov edx, dword ptr [esp + 0x30]
// 0055d917  51                   push ecx
// 0055d918  52                   push edx
// 0055d919  8d442448             lea eax, [esp + 0x48]
// 0055d91d  50                   push eax
// 0055d91e  8d4c2468             lea ecx, [esp + 0x68]
// 0055d922  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 0055d92a  e851f2ffff           call 0x55cb80
// 0055d92f  68fcecb100           push 0xb1ecfc
// 0055d934  8d4c2460             lea ecx, [esp + 0x60]
// 0055d938  51                   push ecx
// 0055d939  e874b02400           call 0x7a89b2
// 0055d93e  8bce                 mov ecx, esi
// 0055d940  e85bf6ffff           call 0x55cfa0
// 0055d945  83f84e               cmp eax, 0x4e
// 0055d948  743d                 je 0x55d987
// 0055d94a  68800ba200           push 0xa20b80
// 0055d94f  8d4c2444             lea ecx, [esp + 0x44]
// 0055d953  ff1510a49e00         call dword ptr [0x9ea410]
// 0055d959  8b5634               mov edx, dword ptr [esi + 0x34]
// 0055d95c  8b442430             mov eax, dword ptr [esp + 0x30]
// 0055d960  52                   push edx
// 0055d961  50                   push eax
// 0055d962  8d4c2448             lea ecx, [esp + 0x48]
// 0055d966  51                   push ecx
// 0055d967  8d4c2468             lea ecx, [esp + 0x68]
// 0055d96b  c68424b400000003     mov byte ptr [esp + 0xb4], 3
// 0055d973  e808f2ffff           call 0x55cb80
// 0055d978  68fcecb100           push 0xb1ecfc
// 0055d97d  8d542460             lea edx, [esp + 0x60]
// 0055d981  52                   push edx
// 0055d982  e82bb02400           call 0x7a89b2
// 0055d987  687c0ba200           push 0xa20b7c
// 0055d98c  8d4c2418             lea ecx, [esp + 0x18]
// 0055d990  ff1520a49e00         call dword ptr [0x9ea420]
// 0055d996  8bce                 mov ecx, esi
// 0055d998  e803f6ffff           call 0x55cfa0
// 0055d99d  83f846               cmp eax, 0x46
// 0055d9a0  7442                 je 0x55d9e4
// 0055d9a2  83f844               cmp eax, 0x44
// 0055d9a5  743d                 je 0x55d9e4
// 0055d9a7  68800ba200           push 0xa20b80
// 0055d9ac  8d4c2444             lea ecx, [esp + 0x44]
// 0055d9b0  ff1510a49e00         call dword ptr [0x9ea410]
// 0055d9b6  8b4634               mov eax, dword ptr [esi + 0x34]
// 0055d9b9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055d9bd  50                   push eax
// 0055d9be  51                   push ecx
// 0055d9bf  8d542448             lea edx, [esp + 0x48]
// 0055d9c3  52                   push edx
// 0055d9c4  8d4c2468             lea ecx, [esp + 0x68]
// 0055d9c8  c68424b400000004     mov byte ptr [esp + 0xb4], 4
// 0055d9d0  e8abf1ffff           call 0x55cb80
// 0055d9d5  68fcecb100           push 0xb1ecfc
// 0055d9da  8d442460             lea eax, [esp + 0x60]
// 0055d9de  50                   push eax
// 0055d9df  e8ceaf2400           call 0x7a89b2
// 0055d9e4  50                   push eax
// 0055d9e5  8d4c2418             lea ecx, [esp + 0x18]
// 0055d9e9  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055d9ef  33ff                 xor edi, edi
// 0055d9f1  8bce                 mov ecx, esi
// 0055d9f3  e8a8f5ffff           call 0x55cfa0
// 0055d9f8  83f830               cmp eax, 0x30
// 0055d9fb  7516                 jne 0x55da13
// 0055d9fd  50                   push eax
// 0055d9fe  8d4c2418             lea ecx, [esp + 0x18]
// 0055da02  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055da08  47                   inc edi
// 0055da09  83ff02               cmp edi, 2
// 0055da0c  7ce3                 jl 0x55d9f1
// 0055da0e  e9e0000000           jmp 0x55daf3
// 0055da13  68440ba200           push 0xa20b44
// 0055da18  8d4c2444             lea ecx, [esp + 0x44]
// 0055da1c  ff1510a49e00         call dword ptr [0x9ea410]
// 0055da22  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055da25  8b542430             mov edx, dword ptr [esp + 0x30]
// 0055da29  51                   push ecx
// 0055da2a  52                   push edx
// 0055da2b  8d442448             lea eax, [esp + 0x48]
// 0055da2f  50                   push eax
// 0055da30  8d4c2468             lea ecx, [esp + 0x68]
// 0055da34  c68424b400000005     mov byte ptr [esp + 0xb4], 5
// 0055da3c  e83ff1ffff           call 0x55cb80
// 0055da41  68fcecb100           push 0xb1ecfc
// 0055da46  8d4c2460             lea ecx, [esp + 0x60]
// 0055da4a  51                   push ecx
// 0055da4b  e862af2400           call 0x7a89b2
// 0055da50  0fbed3               movsx edx, bl
// 0055da53  52                   push edx
// 0055da54  ffd5                 call ebp
// 0055da56  83c404               add esp, 4
// 0055da59  85c0                 test eax, eax
// 0055da5b  7424                 je 0x55da81
// 0055da5d  8d4900               lea ecx, [ecx]
// 0055da60  53                   push ebx
// 0055da61  8d4c2418             lea ecx, [esp + 0x18]
// 0055da65  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055da6b  8bce                 mov ecx, esi
// 0055da6d  e82ef5ffff           call 0x55cfa0
// 0055da72  8bd8                 mov ebx, eax
// 0055da74  0fbec3               movsx eax, bl
// 0055da77  50                   push eax
// 0055da78  ffd5                 call ebp
// 0055da7a  83c404               add esp, 4
// 0055da7d  85c0                 test eax, eax
// 0055da7f  75df                 jne 0x55da60
// 0055da81  83fb65               cmp ebx, 0x65
// 0055da84  7405                 je 0x55da8b
// 0055da86  83fb45               cmp ebx, 0x45
// 0055da89  7568                 jne 0x55daf3
// 0055da8b  53                   push ebx
// 0055da8c  8d4c2418             lea ecx, [esp + 0x18]
// 0055da90  c744244004000000     mov dword ptr [esp + 0x40], 4
// 0055da98  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055da9e  8bce                 mov ecx, esi
// 0055daa0  e8fbf4ffff           call 0x55cfa0
// 0055daa5  8bd8                 mov ebx, eax
// 0055daa7  83fb2d               cmp ebx, 0x2d
// 0055daaa  7405                 je 0x55dab1
// 0055daac  83fb2b               cmp ebx, 0x2b
// 0055daaf  7514                 jne 0x55dac5
// 0055dab1  53                   push ebx
// 0055dab2  8d4c2418             lea ecx, [esp + 0x18]
// 0055dab6  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055dabc  8bce                 mov ecx, esi
// 0055dabe  e8ddf4ffff           call 0x55cfa0
// 0055dac3  8bd8                 mov ebx, eax
// 0055dac5  0fbecb               movsx ecx, bl
// 0055dac8  51                   push ecx
// 0055dac9  ffd5                 call ebp
// 0055dacb  83c404               add esp, 4
// 0055dace  85c0                 test eax, eax
// 0055dad0  7421                 je 0x55daf3
// 0055dad2  53                   push ebx
// 0055dad3  8d4c2418             lea ecx, [esp + 0x18]
// 0055dad7  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055dadd  8bce                 mov ecx, esi
// 0055dadf  e8bcf4ffff           call 0x55cfa0
// 0055dae4  8bd8                 mov ebx, eax
// 0055dae6  0fbed3               movsx edx, bl
// 0055dae9  52                   push edx
// 0055daea  ffd5                 call ebp
// 0055daec  83c404               add esp, 4
// 0055daef  85c0                 test eax, eax
// 0055daf1  75df                 jne 0x55dad2
// 0055daf3  8d442414             lea eax, [esp + 0x14]
// 0055daf7  50                   push eax
// 0055daf8  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 0055daff  8bce                 mov ecx, esi
// 0055db01  e8eaedffff           call 0x55c8f0
// 0055db06  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0055db0e  8d4c2414             lea ecx, [esp + 0x14]
// 0055db12  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 0055db1a  ff1500a49e00         call dword ptr [0x9ea400]
// 0055db20  5f                   pop edi
// 0055db21  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0055db28  8bc6                 mov eax, esi
// 0055db2a  5e                   pop esi
// 0055db2b  5d                   pop ebp
// 0055db2c  5b                   pop ebx
// 0055db2d  64890d00000000       mov dword ptr fs:[0], ecx
// 0055db34  81c49c000000         add esp, 0x9c
// 0055db3a  c20400               ret 4
// 0055db3d  8d4900               lea ecx, [ecx]
// 0055db40  26d555               aad 0x55
// 0055db43  0001                 add byte ptr [ecx], al
// 0055db45  d35500               rcl dword ptr [ebp], cl
// 0055db48  73d5                 jae 0x55db1f
// 0055db4a  55                   push ebp
// 0055db4b  00e1                 add cl, ah
// 0055db4d  d35500               rcl dword ptr [ebp], cl
// 0055db50  37                   aaa 
// 0055db51  d35500               rcl dword ptr [ebp], cl
// 0055db54  36d6                 salc 
// 0055db56  55                   push ebp
// 0055db57  00d5                 add ch, dl
// 0055db59  d455                 aam 0x55
// 0055db5b  00ca                 add dl, cl
// 0055db5d  d555                 aad 0x55
// 0055db5f  0048d4               add byte ptr [eax - 0x2c], cl
// 0055db62  55                   push ebp
// 0055db63  0000                 add byte ptr [eax], al
// 0055db65  0801                 or byte ptr [ecx], al
// 0055db67  0108                 add dword ptr [eax], ecx
// 0055db69  0208                 add cl, byte ptr [eax]
// 0055db6b  0101                 add dword ptr [ecx], eax
// 0055db6d  0003                 add byte ptr [ebx], al
// 0055db6f  01040500080808       add dword ptr [eax + 0x8080800], eax
// 0055db76  0808                 or byte ptr [eax], cl
// 0055db78  0808                 or byte ptr [eax], cl
// 0055db7a  0808                 or byte ptr [eax], cl
// 0055db7c  0806                 or byte ptr [esi], al
// 0055db7e  0102                 add dword ptr [edx], eax
// 0055db80  0002                 add byte ptr [edx], al
// 0055db82  0101                 add dword ptr [ecx], eax
// 0055db84  0808                 or byte ptr [eax], cl
// 0055db86  0808                 or byte ptr [eax], cl
// 0055db88  0808                 or byte ptr [eax], cl
// 0055db8a  0808                 or byte ptr [eax], cl
// 0055db8c  0808                 or byte ptr [eax], cl
// 0055db8e  0808                 or byte ptr [eax], cl
// 0055db90  0808                 or byte ptr [eax], cl
// 0055db92  0808                 or byte ptr [eax], cl
// 0055db94  0808                 or byte ptr [eax], cl
// 0055db96  0808                 or byte ptr [eax], cl
// 0055db98  0808                 or byte ptr [eax], cl
// 0055db9a  0808                 or byte ptr [eax], cl
// 0055db9c  0808                 or byte ptr [eax], cl
// 0055db9e  0107                 add dword ptr [edi], eax
// 0055dba0  0100                 add dword ptr [eax], eax
// 0055dba2  0808                 or byte ptr [eax], cl
// 0055dba4  0808                 or byte ptr [eax], cl
// 0055dba6  0808                 or byte ptr [eax], cl
// 0055dba8  0808                 or byte ptr [eax], cl
// 0055dbaa  0808                 or byte ptr [eax], cl
// 0055dbac  0808                 or byte ptr [eax], cl
// 0055dbae  0808                 or byte ptr [eax], cl
// 0055dbb0  0808                 or byte ptr [eax], cl
// 0055dbb2  0808                 or byte ptr [eax], cl
// 0055dbb4  0808                 or byte ptr [eax], cl
// 0055dbb6  0808                 or byte ptr [eax], cl
// 0055dbb8  0808                 or byte ptr [eax], cl
// 0055dbba  0808                 or byte ptr [eax], cl
// 0055dbbc  0808                 or byte ptr [eax], cl
// 0055dbbe  0102                 add dword ptr [edx], eax
// 0055dbc0  0100                 add dword ptr [eax], eax
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?nextToken@TextInput@G3D@@AAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
