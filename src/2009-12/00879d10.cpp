// roc 2009-12 00879d10  unit: CXTPControlGalleryPaintManager  size: 1274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00879d10
//
// 00879d10  83ec64               sub esp, 0x64
// 00879d13  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00879d17  53                   push ebx
// 00879d18  55                   push ebp
// 00879d19  56                   push esi
// 00879d1a  8bf1                 mov esi, ecx
// 00879d1c  8b88e4010000         mov ecx, dword ptr [eax + 0x1e4]
// 00879d22  57                   push edi
// 00879d23  05cc010000           add eax, 0x1cc
// 00879d28  50                   push eax
// 00879d29  8d542458             lea edx, [esp + 0x58]
// 00879d2d  52                   push edx
// 00879d2e  894c2434             mov dword ptr [esp + 0x34], ecx
// 00879d32  ff1564cc9800         call dword ptr [0x98cc64]
// 00879d38  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00879d3b  6a1e                 push 0x1e
// 00879d3d  e8fe38f8ff           call 0x7fd640
// 00879d42  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00879d46  50                   push eax
// 00879d47  8d442458             lea eax, [esp + 0x58]
// 00879d4b  50                   push eax
// 00879d4c  8bcf                 mov ecx, edi
// 00879d4e  e8aba8f7ff           call 0x7f45fe
// 00879d53  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00879d57  8b442454             mov eax, dword ptr [esp + 0x54]
// 00879d5b  8b542458             mov edx, dword ptr [esp + 0x58]
// 00879d5f  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 00879d62  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00879d65  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00879d69  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00879d6d  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00879d71  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00879d75  894c2450             mov dword ptr [esp + 0x50], ecx
// 00879d79  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00879d7d  03da                 add ebx, edx
// 00879d7f  89442434             mov dword ptr [esp + 0x34], eax
// 00879d83  89442464             mov dword ptr [esp + 0x64], eax
// 00879d87  89442444             mov dword ptr [esp + 0x44], eax
// 00879d8b  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00879d91  03eb                 add ebp, ebx
// 00879d93  89542438             mov dword ptr [esp + 0x38], edx
// 00879d97  83f8ff               cmp eax, -1
// 00879d9a  7515                 jne 0x879db1
// 00879d9c  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 00879da2  85d2                 test edx, edx
// 00879da4  740b                 je 0x879db1
// 00879da6  8bca                 mov ecx, edx
// 00879da8  e803c8f7ff           call 0x7f65b0
// 00879dad  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00879db1  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00879db6  89442420             mov dword ptr [esp + 0x20], eax
// 00879dba  7414                 je 0x879dd0
// 00879dbc  8b91dc010000         mov edx, dword ptr [ecx + 0x1dc]
// 00879dc2  89542424             mov dword ptr [esp + 0x24], edx
// 00879dc6  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00879dce  eb12                 jmp 0x879de2
// 00879dd0  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 00879dd6  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00879dde  89442428             mov dword ptr [esp + 0x28], eax
// 00879de2  837c242000           cmp dword ptr [esp + 0x20], 0
// 00879de7  0f848b020000         je 0x87a078
// 00879ded  6a3c                 push 0x3c
// 00879def  e83cedffff           call 0x878b30
// 00879df4  85c0                 test eax, eax
// 00879df6  0f847c020000         je 0x87a078
// 00879dfc  b83c000000           mov eax, 0x3c
// 00879e01  39442424             cmp dword ptr [esp + 0x24], eax
// 00879e05  0f853b020000         jne 0x87a046
// 00879e0b  c744247803000000     mov dword ptr [esp + 0x78], 3
// 00879e13  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00879e1b  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00879e1e  8b00                 mov eax, dword ptr [eax]
// 00879e20  33d2                 xor edx, edx
// 00879e22  837c247804           cmp dword ptr [esp + 0x78], 4
// 00879e27  6a05                 push 5
// 00879e29  0f95c2               setne dl
// 00879e2c  33c9                 xor ecx, ecx
// 00879e2e  837c247c03           cmp dword ptr [esp + 0x7c], 3
// 00879e33  6a01                 push 1
// 00879e35  0f94c1               sete cl
// 00879e38  6a00                 push 0
// 00879e3a  6a00                 push 0
// 00879e3c  52                   push edx
// 00879e3d  89542424             mov dword ptr [esp + 0x24], edx
// 00879e41  8b542440             mov edx, dword ptr [esp + 0x40]
// 00879e45  89442440             mov dword ptr [esp + 0x40], eax
// 00879e49  51                   push ecx
// 00879e4a  52                   push edx
// 00879e4b  8b542454             mov edx, dword ptr [esp + 0x54]
// 00879e4f  894c2434             mov dword ptr [esp + 0x34], ecx
// 00879e53  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00879e57  83ec10               sub esp, 0x10
// 00879e5a  8bc4                 mov eax, esp
// 00879e5c  8908                 mov dword ptr [eax], ecx
// 00879e5e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00879e62  895004               mov dword ptr [eax + 4], edx
// 00879e65  894808               mov dword ptr [eax + 8], ecx
// 00879e68  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00879e6b  89580c               mov dword ptr [eax + 0xc], ebx
// 00879e6e  8b442458             mov eax, dword ptr [esp + 0x58]
// 00879e72  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00879e78  57                   push edi
// 00879e79  ffd2                 call edx
// 00879e7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00879e7f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00879e83  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00879e86  8b00                 mov eax, dword ptr [eax]
// 00879e88  6a05                 push 5
// 00879e8a  6a01                 push 1
// 00879e8c  6a00                 push 0
// 00879e8e  6a00                 push 0
// 00879e90  51                   push ecx
// 00879e91  33c9                 xor ecx, ecx
// 00879e93  83bc248c00000002     cmp dword ptr [esp + 0x8c], 2
// 00879e9b  52                   push edx
// 00879e9c  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00879ea2  0f94c1               sete cl
// 00879ea5  51                   push ecx
// 00879ea6  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00879ea9  ffd2                 call edx
// 00879eab  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00879eaf  89442478             mov dword ptr [esp + 0x78], eax
// 00879eb3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00879eb7  03c1                 add eax, ecx
// 00879eb9  99                   cdq 
// 00879eba  2bc2                 sub eax, edx
// 00879ebc  8b542438             mov edx, dword ptr [esp + 0x38]
// 00879ec0  8bc8                 mov ecx, eax
// 00879ec2  8d041a               lea eax, [edx + ebx]
// 00879ec5  99                   cdq 
// 00879ec6  2bc2                 sub eax, edx
// 00879ec8  d1f9                 sar ecx, 1
// 00879eca  d1f8                 sar eax, 1
// 00879ecc  8d50fe               lea edx, [eax - 2]
// 00879ecf  89542430             mov dword ptr [esp + 0x30], edx
// 00879ed3  8d5104               lea edx, [ecx + 4]
// 00879ed6  89542418             mov dword ptr [esp + 0x18], edx
// 00879eda  8d51fc               lea edx, [ecx - 4]
// 00879edd  89542410             mov dword ptr [esp + 0x10], edx
// 00879ee1  8b542478             mov edx, dword ptr [esp + 0x78]
// 00879ee5  52                   push edx
// 00879ee6  8b542434             mov edx, dword ptr [esp + 0x34]
// 00879eea  52                   push edx
// 00879eeb  8b542418             mov edx, dword ptr [esp + 0x18]
// 00879eef  51                   push ecx
// 00879ef0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00879ef4  83c002               add eax, 2
// 00879ef7  50                   push eax
// 00879ef8  51                   push ecx
// 00879ef9  50                   push eax
// 00879efa  52                   push edx
// 00879efb  57                   push edi
// 00879efc  e88f47f8ff           call 0x7fe690
// 00879f01  83c420               add esp, 0x20
// 00879f04  837c242000           cmp dword ptr [esp + 0x20], 0
// 00879f09  0f84b0010000         je 0x87a0bf
// 00879f0f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00879f13  6a3d                 push 0x3d
// 00879f15  e816ecffff           call 0x878b30
// 00879f1a  85c0                 test eax, eax
// 00879f1c  0f849d010000         je 0x87a0bf
// 00879f22  b83d000000           mov eax, 0x3d
// 00879f27  39442424             cmp dword ptr [esp + 0x24], eax
// 00879f2b  0f855c010000         jne 0x87a08d
// 00879f31  c744247803000000     mov dword ptr [esp + 0x78], 3
// 00879f39  c744247c01000000     mov dword ptr [esp + 0x7c], 1
// 00879f41  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00879f44  8b00                 mov eax, dword ptr [eax]
// 00879f46  33d2                 xor edx, edx
// 00879f48  837c247804           cmp dword ptr [esp + 0x78], 4
// 00879f4d  6a05                 push 5
// 00879f4f  0f95c2               setne dl
// 00879f52  33c9                 xor ecx, ecx
// 00879f54  837c247c03           cmp dword ptr [esp + 0x7c], 3
// 00879f59  6a01                 push 1
// 00879f5b  0f94c1               sete cl
// 00879f5e  6a00                 push 0
// 00879f60  6a00                 push 0
// 00879f62  52                   push edx
// 00879f63  89542424             mov dword ptr [esp + 0x24], edx
// 00879f67  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00879f6e  89842490000000       mov dword ptr [esp + 0x90], eax
// 00879f75  51                   push ecx
// 00879f76  52                   push edx
// 00879f77  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00879f7e  83ec10               sub esp, 0x10
// 00879f81  8bc4                 mov eax, esp
// 00879f83  894c2444             mov dword ptr [esp + 0x44], ecx
// 00879f87  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00879f8e  8908                 mov dword ptr [eax], ecx
// 00879f90  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00879f93  895804               mov dword ptr [eax + 4], ebx
// 00879f96  895008               mov dword ptr [eax + 8], edx
// 00879f99  89680c               mov dword ptr [eax + 0xc], ebp
// 00879f9c  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00879fa3  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 00879fa9  57                   push edi
// 00879faa  ffd0                 call eax
// 00879fac  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00879faf  8b10                 mov edx, dword ptr [eax]
// 00879fb1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00879fb5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00879fb9  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00879fbf  6a05                 push 5
// 00879fc1  6a01                 push 1
// 00879fc3  6a00                 push 0
// 00879fc5  6a00                 push 0
// 00879fc7  50                   push eax
// 00879fc8  33c0                 xor eax, eax
// 00879fca  83bc248c00000002     cmp dword ptr [esp + 0x8c], 2
// 00879fd2  51                   push ecx
// 00879fd3  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00879fd6  0f94c0               sete al
// 00879fd9  50                   push eax
// 00879fda  ffd2                 call edx
// 00879fdc  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00879fe0  89442478             mov dword ptr [esp + 0x78], eax
// 00879fe4  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00879fe8  03c1                 add eax, ecx
// 00879fea  99                   cdq 
// 00879feb  2bc2                 sub eax, edx
// 00879fed  8bc8                 mov ecx, eax
// 00879fef  d1f9                 sar ecx, 1
// 00879ff1  8d042b               lea eax, [ebx + ebp]
// 00879ff4  99                   cdq 
// 00879ff5  8d5904               lea ebx, [ecx + 4]
// 00879ff8  2bc2                 sub eax, edx
// 00879ffa  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00879ffe  8d59fc               lea ebx, [ecx - 4]
// 0087a001  d1f8                 sar eax, 1
// 0087a003  8d5002               lea edx, [eax + 2]
// 0087a006  895c2418             mov dword ptr [esp + 0x18], ebx
// 0087a00a  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 0087a00e  53                   push ebx
// 0087a00f  52                   push edx
// 0087a010  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087a014  51                   push ecx
// 0087a015  83c0fe               add eax, -2
// 0087a018  50                   push eax
// 0087a019  52                   push edx
// 0087a01a  50                   push eax
// 0087a01b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087a01f  50                   push eax
// 0087a020  57                   push edi
// 0087a021  e86a46f8ff           call 0x7fe690
// 0087a026  83c420               add esp, 0x20
// 0087a029  837c242000           cmp dword ptr [esp + 0x20], 0
// 0087a02e  0f85a0000000         jne 0x87a0d4
// 0087a034  bb04000000           mov ebx, 4
// 0087a039  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0087a041  e9aa000000           jmp 0x87a0f0
// 0087a046  33c9                 xor ecx, ecx
// 0087a048  39442428             cmp dword ptr [esp + 0x28], eax
// 0087a04c  0f95c1               setne cl
// 0087a04f  49                   dec ecx
// 0087a050  83e102               and ecx, 2
// 0087a053  8bc1                 mov eax, ecx
// 0087a055  89442478             mov dword ptr [esp + 0x78], eax
// 0087a059  83f803               cmp eax, 3
// 0087a05c  0f84b1fdffff         je 0x879e13
// 0087a062  83f902               cmp ecx, 2
// 0087a065  0f84a8fdffff         je 0x879e13
// 0087a06b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0087a073  e9a3fdffff           jmp 0x879e1b
// 0087a078  c744247804000000     mov dword ptr [esp + 0x78], 4
// 0087a080  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0087a088  e98efdffff           jmp 0x879e1b
// 0087a08d  33c9                 xor ecx, ecx
// 0087a08f  39442428             cmp dword ptr [esp + 0x28], eax
// 0087a093  0f95c1               setne cl
// 0087a096  49                   dec ecx
// 0087a097  83e102               and ecx, 2
// 0087a09a  8bc1                 mov eax, ecx
// 0087a09c  89442478             mov dword ptr [esp + 0x78], eax
// 0087a0a0  83f803               cmp eax, 3
// 0087a0a3  0f8490feffff         je 0x879f39
// 0087a0a9  83f902               cmp ecx, 2
// 0087a0ac  0f8487feffff         je 0x879f39
// 0087a0b2  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0087a0ba  e982feffff           jmp 0x879f41
// 0087a0bf  c744247804000000     mov dword ptr [esp + 0x78], 4
// 0087a0c7  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0087a0cf  e96dfeffff           jmp 0x879f41
// 0087a0d4  b841000000           mov eax, 0x41
// 0087a0d9  39442424             cmp dword ptr [esp + 0x24], eax
// 0087a0dd  0f85fb000000         jne 0x87a1de
// 0087a0e3  bb03000000           mov ebx, 3
// 0087a0e8  c744247c01000000     mov dword ptr [esp + 0x7c], 1
// 0087a0f0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0087a0f3  8b00                 mov eax, dword ptr [eax]
// 0087a0f5  33c9                 xor ecx, ecx
// 0087a0f7  6a05                 push 5
// 0087a0f9  83fb04               cmp ebx, 4
// 0087a0fc  0f95c1               setne cl
// 0087a0ff  33d2                 xor edx, edx
// 0087a101  6a01                 push 1
// 0087a103  6a00                 push 0
// 0087a105  83fb03               cmp ebx, 3
// 0087a108  0f94c2               sete dl
// 0087a10b  6a00                 push 0
// 0087a10d  51                   push ecx
// 0087a10e  894c2424             mov dword ptr [esp + 0x24], ecx
// 0087a112  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0087a119  89842490000000       mov dword ptr [esp + 0x90], eax
// 0087a120  52                   push edx
// 0087a121  51                   push ecx
// 0087a122  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0087a126  83ec10               sub esp, 0x10
// 0087a129  8bc4                 mov eax, esp
// 0087a12b  89542444             mov dword ptr [esp + 0x44], edx
// 0087a12f  8b542470             mov edx, dword ptr [esp + 0x70]
// 0087a133  8910                 mov dword ptr [eax], edx
// 0087a135  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0087a139  896804               mov dword ptr [eax + 4], ebp
// 0087a13c  894808               mov dword ptr [eax + 8], ecx
// 0087a13f  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0087a142  89500c               mov dword ptr [eax + 0xc], edx
// 0087a145  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 0087a14c  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0087a152  57                   push edi
// 0087a153  ffd0                 call eax
// 0087a155  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087a159  8b762c               mov esi, dword ptr [esi + 0x2c]
// 0087a15c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087a160  8b16                 mov edx, dword ptr [esi]
// 0087a162  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0087a168  6a05                 push 5
// 0087a16a  6a01                 push 1
// 0087a16c  6a00                 push 0
// 0087a16e  6a00                 push 0
// 0087a170  50                   push eax
// 0087a171  33c0                 xor eax, eax
// 0087a173  83fb02               cmp ebx, 2
// 0087a176  0f94c0               sete al
// 0087a179  51                   push ecx
// 0087a17a  8bce                 mov ecx, esi
// 0087a17c  50                   push eax
// 0087a17d  ffd2                 call edx
// 0087a17f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087a183  8bd8                 mov ebx, eax
// 0087a185  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0087a189  03c1                 add eax, ecx
// 0087a18b  99                   cdq 
// 0087a18c  2bc2                 sub eax, edx
// 0087a18e  8b542450             mov edx, dword ptr [esp + 0x50]
// 0087a192  8bc8                 mov ecx, eax
// 0087a194  8d042a               lea eax, [edx + ebp]
// 0087a197  99                   cdq 
// 0087a198  2bc2                 sub eax, edx
// 0087a19a  8bf0                 mov esi, eax
// 0087a19c  53                   push ebx
// 0087a19d  d1fe                 sar esi, 1
// 0087a19f  8d4603               lea eax, [esi + 3]
// 0087a1a2  89442434             mov dword ptr [esp + 0x34], eax
// 0087a1a6  ff742434             push dword ptr [esp + 0x34]
// 0087a1aa  d1f9                 sar ecx, 1
// 0087a1ac  51                   push ecx
// 0087a1ad  8d46ff               lea eax, [esi - 1]
// 0087a1b0  50                   push eax
// 0087a1b1  8d5104               lea edx, [ecx + 4]
// 0087a1b4  52                   push edx
// 0087a1b5  50                   push eax
// 0087a1b6  8d69fc               lea ebp, [ecx - 4]
// 0087a1b9  55                   push ebp
// 0087a1ba  57                   push edi
// 0087a1bb  e8d044f8ff           call 0x7fe690
// 0087a1c0  83c420               add esp, 0x20
// 0087a1c3  53                   push ebx
// 0087a1c4  6a02                 push 2
// 0087a1c6  6a09                 push 9
// 0087a1c8  83c6fc               add esi, -4
// 0087a1cb  56                   push esi
// 0087a1cc  55                   push ebp
// 0087a1cd  8bcf                 mov ecx, edi
// 0087a1cf  e8c2c20a00           call 0x926496
// 0087a1d4  5f                   pop edi
// 0087a1d5  5e                   pop esi
// 0087a1d6  5d                   pop ebp
// 0087a1d7  5b                   pop ebx
// 0087a1d8  83c464               add esp, 0x64
// 0087a1db  c20800               ret 8
// 0087a1de  33db                 xor ebx, ebx
// 0087a1e0  39442428             cmp dword ptr [esp + 0x28], eax
// 0087a1e4  0f95c3               setne bl
// 0087a1e7  4b                   dec ebx
// 0087a1e8  83e302               and ebx, 2
// 0087a1eb  83fb03               cmp ebx, 3
// 0087a1ee  0f84f4feffff         je 0x87a0e8
// 0087a1f4  83fb02               cmp ebx, 2
// 0087a1f7  0f84ebfeffff         je 0x87a0e8
// 0087a1fd  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0087a205  e9e6feffff           jmp 0x87a0f0
// copied from an identical function in another client (function ?DrawPopupScrollBar@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPControlGallery@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp