// from server: 100% by auto
// roc 2009-06 005a7cf0  unit: seg_005a0000  size: 1740 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a7cf0
//
// 005a7cf0  83ec14               sub esp, 0x14
// 005a7cf3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a7cf7  53                   push ebx
// 005a7cf8  55                   push ebp
// 005a7cf9  56                   push esi
// 005a7cfa  83c008               add eax, 8
// 005a7cfd  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 005a7d05  57                   push edi
// 005a7d06  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005a7d09  8b78f8               mov edi, dword ptr [eax - 8]
// 005a7d0c  8b7010               mov esi, dword ptr [eax + 0x10]
// 005a7d0f  8d1439               lea edx, [ecx + edi]
// 005a7d12  2bf9                 sub edi, ecx
// 005a7d14  8b48fc               mov ecx, dword ptr [eax - 4]
// 005a7d17  8d1c31               lea ebx, [ecx + esi]
// 005a7d1a  2bce                 sub ecx, esi
// 005a7d1c  8b700c               mov esi, dword ptr [eax + 0xc]
// 005a7d1f  8be9                 mov ebp, ecx
// 005a7d21  8b08                 mov ecx, dword ptr [eax]
// 005a7d23  03f1                 add esi, ecx
// 005a7d25  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005a7d28  89742410             mov dword ptr [esp + 0x10], esi
// 005a7d2c  8b7008               mov esi, dword ptr [eax + 8]
// 005a7d2f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a7d33  8b4804               mov ecx, dword ptr [eax + 4]
// 005a7d36  03f1                 add esi, ecx
// 005a7d38  2b4808               sub ecx, dword ptr [eax + 8]
// 005a7d3b  89742414             mov dword ptr [esp + 0x14], esi
// 005a7d3f  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a7d43  8d0c16               lea ecx, [esi + edx]
// 005a7d46  2bd6                 sub edx, esi
// 005a7d48  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7d4c  03f3                 add esi, ebx
// 005a7d4e  03f1                 add esi, ecx
// 005a7d50  8970f8               mov dword ptr [eax - 8], esi
// 005a7d53  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7d57  03f3                 add esi, ebx
// 005a7d59  2bce                 sub ecx, esi
// 005a7d5b  894808               mov dword ptr [eax + 8], ecx
// 005a7d5e  8bca                 mov ecx, edx
// 005a7d60  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a7d64  03cb                 add ecx, ebx
// 005a7d66  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a7d6a  69c9b5000000         imul ecx, ecx, 0xb5
// 005a7d70  c1f908               sar ecx, 8
// 005a7d73  8d3411               lea esi, [ecx + edx]
// 005a7d76  2bd1                 sub edx, ecx
// 005a7d78  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a7d7c  895010               mov dword ptr [eax + 0x10], edx
// 005a7d7f  8d1419               lea edx, [ecx + ebx]
// 005a7d82  8930                 mov dword ptr [eax], esi
// 005a7d84  8d342f               lea esi, [edi + ebp]
// 005a7d87  8bca                 mov ecx, edx
// 005a7d89  69d28b000000         imul edx, edx, 0x8b
// 005a7d8f  2bce                 sub ecx, esi
// 005a7d91  69f64e010000         imul esi, esi, 0x14e
// 005a7d97  6bc962               imul ecx, ecx, 0x62
// 005a7d9a  c1f908               sar ecx, 8
// 005a7d9d  c1fe08               sar esi, 8
// 005a7da0  03f1                 add esi, ecx
// 005a7da2  c1fa08               sar edx, 8
// 005a7da5  03d1                 add edx, ecx
// 005a7da7  8d0c2b               lea ecx, [ebx + ebp]
// 005a7daa  69c9b5000000         imul ecx, ecx, 0xb5
// 005a7db0  c1f908               sar ecx, 8
// 005a7db3  8d1c39               lea ebx, [ecx + edi]
// 005a7db6  2bf9                 sub edi, ecx
// 005a7db8  8d0c17               lea ecx, [edi + edx]
// 005a7dbb  2bfa                 sub edi, edx
// 005a7dbd  8d1433               lea edx, [ebx + esi]
// 005a7dc0  89480c               mov dword ptr [eax + 0xc], ecx
// 005a7dc3  8b4834               mov ecx, dword ptr [eax + 0x34]
// 005a7dc6  897804               mov dword ptr [eax + 4], edi
// 005a7dc9  8b7818               mov edi, dword ptr [eax + 0x18]
// 005a7dcc  2bde                 sub ebx, esi
// 005a7dce  8b7030               mov esi, dword ptr [eax + 0x30]
// 005a7dd1  8950fc               mov dword ptr [eax - 4], edx
// 005a7dd4  8d1439               lea edx, [ecx + edi]
// 005a7dd7  2bf9                 sub edi, ecx
// 005a7dd9  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 005a7ddc  895814               mov dword ptr [eax + 0x14], ebx
// 005a7ddf  8d1c31               lea ebx, [ecx + esi]
// 005a7de2  2bce                 sub ecx, esi
// 005a7de4  8b702c               mov esi, dword ptr [eax + 0x2c]
// 005a7de7  8be9                 mov ebp, ecx
// 005a7de9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 005a7dec  03f1                 add esi, ecx
// 005a7dee  2b482c               sub ecx, dword ptr [eax + 0x2c]
// 005a7df1  89742410             mov dword ptr [esp + 0x10], esi
// 005a7df5  8b7028               mov esi, dword ptr [eax + 0x28]
// 005a7df8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a7dfc  8b4824               mov ecx, dword ptr [eax + 0x24]
// 005a7dff  03f1                 add esi, ecx
// 005a7e01  2b4828               sub ecx, dword ptr [eax + 0x28]
// 005a7e04  89742414             mov dword ptr [esp + 0x14], esi
// 005a7e08  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a7e0c  8d0c16               lea ecx, [esi + edx]
// 005a7e0f  2bd6                 sub edx, esi
// 005a7e11  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7e15  03f3                 add esi, ebx
// 005a7e17  03f1                 add esi, ecx
// 005a7e19  897018               mov dword ptr [eax + 0x18], esi
// 005a7e1c  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7e20  03f3                 add esi, ebx
// 005a7e22  2bce                 sub ecx, esi
// 005a7e24  894828               mov dword ptr [eax + 0x28], ecx
// 005a7e27  8bca                 mov ecx, edx
// 005a7e29  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a7e2d  03cb                 add ecx, ebx
// 005a7e2f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a7e33  69c9b5000000         imul ecx, ecx, 0xb5
// 005a7e39  c1f908               sar ecx, 8
// 005a7e3c  8d3411               lea esi, [ecx + edx]
// 005a7e3f  2bd1                 sub edx, ecx
// 005a7e41  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a7e45  897020               mov dword ptr [eax + 0x20], esi
// 005a7e48  895030               mov dword ptr [eax + 0x30], edx
// 005a7e4b  8d1419               lea edx, [ecx + ebx]
// 005a7e4e  8d342f               lea esi, [edi + ebp]
// 005a7e51  8bca                 mov ecx, edx
// 005a7e53  69d28b000000         imul edx, edx, 0x8b
// 005a7e59  2bce                 sub ecx, esi
// 005a7e5b  69f64e010000         imul esi, esi, 0x14e
// 005a7e61  6bc962               imul ecx, ecx, 0x62
// 005a7e64  c1f908               sar ecx, 8
// 005a7e67  c1fe08               sar esi, 8
// 005a7e6a  03f1                 add esi, ecx
// 005a7e6c  c1fa08               sar edx, 8
// 005a7e6f  03d1                 add edx, ecx
// 005a7e71  8d0c2b               lea ecx, [ebx + ebp]
// 005a7e74  69c9b5000000         imul ecx, ecx, 0xb5
// 005a7e7a  c1f908               sar ecx, 8
// 005a7e7d  8d1c39               lea ebx, [ecx + edi]
// 005a7e80  2bf9                 sub edi, ecx
// 005a7e82  8d0c17               lea ecx, [edi + edx]
// 005a7e85  2bfa                 sub edi, edx
// 005a7e87  8d1433               lea edx, [ebx + esi]
// 005a7e8a  89482c               mov dword ptr [eax + 0x2c], ecx
// 005a7e8d  8b4854               mov ecx, dword ptr [eax + 0x54]
// 005a7e90  2bde                 sub ebx, esi
// 005a7e92  8b7050               mov esi, dword ptr [eax + 0x50]
// 005a7e95  897824               mov dword ptr [eax + 0x24], edi
// 005a7e98  8b7838               mov edi, dword ptr [eax + 0x38]
// 005a7e9b  89501c               mov dword ptr [eax + 0x1c], edx
// 005a7e9e  8d1439               lea edx, [ecx + edi]
// 005a7ea1  2bf9                 sub edi, ecx
// 005a7ea3  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 005a7ea6  895834               mov dword ptr [eax + 0x34], ebx
// 005a7ea9  8d1c31               lea ebx, [ecx + esi]
// 005a7eac  2bce                 sub ecx, esi
// 005a7eae  8b704c               mov esi, dword ptr [eax + 0x4c]
// 005a7eb1  8be9                 mov ebp, ecx
// 005a7eb3  8b4840               mov ecx, dword ptr [eax + 0x40]
// 005a7eb6  03f1                 add esi, ecx
// 005a7eb8  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 005a7ebb  89742410             mov dword ptr [esp + 0x10], esi
// 005a7ebf  8b7048               mov esi, dword ptr [eax + 0x48]
// 005a7ec2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a7ec6  8b4844               mov ecx, dword ptr [eax + 0x44]
// 005a7ec9  03f1                 add esi, ecx
// 005a7ecb  2b4848               sub ecx, dword ptr [eax + 0x48]
// 005a7ece  89742414             mov dword ptr [esp + 0x14], esi
// 005a7ed2  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a7ed6  8d0c16               lea ecx, [esi + edx]
// 005a7ed9  2bd6                 sub edx, esi
// 005a7edb  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7edf  03f3                 add esi, ebx
// 005a7ee1  03f1                 add esi, ecx
// 005a7ee3  897038               mov dword ptr [eax + 0x38], esi
// 005a7ee6  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7eea  03f3                 add esi, ebx
// 005a7eec  2bce                 sub ecx, esi
// 005a7eee  894848               mov dword ptr [eax + 0x48], ecx
// 005a7ef1  8bca                 mov ecx, edx
// 005a7ef3  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a7ef7  03cb                 add ecx, ebx
// 005a7ef9  69c9b5000000         imul ecx, ecx, 0xb5
// 005a7eff  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a7f03  c1f908               sar ecx, 8
// 005a7f06  8d3411               lea esi, [ecx + edx]
// 005a7f09  2bd1                 sub edx, ecx
// 005a7f0b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a7f0f  897040               mov dword ptr [eax + 0x40], esi
// 005a7f12  895050               mov dword ptr [eax + 0x50], edx
// 005a7f15  8d1419               lea edx, [ecx + ebx]
// 005a7f18  8bca                 mov ecx, edx
// 005a7f1a  69d28b000000         imul edx, edx, 0x8b
// 005a7f20  8d342f               lea esi, [edi + ebp]
// 005a7f23  2bce                 sub ecx, esi
// 005a7f25  69f64e010000         imul esi, esi, 0x14e
// 005a7f2b  6bc962               imul ecx, ecx, 0x62
// 005a7f2e  c1f908               sar ecx, 8
// 005a7f31  c1fe08               sar esi, 8
// 005a7f34  03f1                 add esi, ecx
// 005a7f36  c1fa08               sar edx, 8
// 005a7f39  03d1                 add edx, ecx
// 005a7f3b  8d0c2b               lea ecx, [ebx + ebp]
// 005a7f3e  69c9b5000000         imul ecx, ecx, 0xb5
// 005a7f44  c1f908               sar ecx, 8
// 005a7f47  8d1c39               lea ebx, [ecx + edi]
// 005a7f4a  2bf9                 sub edi, ecx
// 005a7f4c  8d0c17               lea ecx, [edi + edx]
// 005a7f4f  89484c               mov dword ptr [eax + 0x4c], ecx
// 005a7f52  8b4874               mov ecx, dword ptr [eax + 0x74]
// 005a7f55  2bfa                 sub edi, edx
// 005a7f57  8d1433               lea edx, [ebx + esi]
// 005a7f5a  2bde                 sub ebx, esi
// 005a7f5c  8b7070               mov esi, dword ptr [eax + 0x70]
// 005a7f5f  897844               mov dword ptr [eax + 0x44], edi
// 005a7f62  8b7858               mov edi, dword ptr [eax + 0x58]
// 005a7f65  89503c               mov dword ptr [eax + 0x3c], edx
// 005a7f68  8d140f               lea edx, [edi + ecx]
// 005a7f6b  2bf9                 sub edi, ecx
// 005a7f6d  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 005a7f70  895854               mov dword ptr [eax + 0x54], ebx
// 005a7f73  8d1c0e               lea ebx, [esi + ecx]
// 005a7f76  2bce                 sub ecx, esi
// 005a7f78  8b706c               mov esi, dword ptr [eax + 0x6c]
// 005a7f7b  8be9                 mov ebp, ecx
// 005a7f7d  8b4860               mov ecx, dword ptr [eax + 0x60]
// 005a7f80  03f1                 add esi, ecx
// 005a7f82  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 005a7f85  89742410             mov dword ptr [esp + 0x10], esi
// 005a7f89  8b7068               mov esi, dword ptr [eax + 0x68]
// 005a7f8c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a7f90  8b4864               mov ecx, dword ptr [eax + 0x64]
// 005a7f93  03f1                 add esi, ecx
// 005a7f95  2b4868               sub ecx, dword ptr [eax + 0x68]
// 005a7f98  89742414             mov dword ptr [esp + 0x14], esi
// 005a7f9c  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a7fa0  8d0c16               lea ecx, [esi + edx]
// 005a7fa3  2bd6                 sub edx, esi
// 005a7fa5  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7fa9  03f3                 add esi, ebx
// 005a7fab  03f1                 add esi, ecx
// 005a7fad  897058               mov dword ptr [eax + 0x58], esi
// 005a7fb0  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7fb4  03f3                 add esi, ebx
// 005a7fb6  2bce                 sub ecx, esi
// 005a7fb8  894868               mov dword ptr [eax + 0x68], ecx
// 005a7fbb  8bca                 mov ecx, edx
// 005a7fbd  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a7fc1  03cb                 add ecx, ebx
// 005a7fc3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a7fc7  69c9b5000000         imul ecx, ecx, 0xb5
// 005a7fcd  c1f908               sar ecx, 8
// 005a7fd0  8d3411               lea esi, [ecx + edx]
// 005a7fd3  2bd1                 sub edx, ecx
// 005a7fd5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a7fd9  897060               mov dword ptr [eax + 0x60], esi
// 005a7fdc  895070               mov dword ptr [eax + 0x70], edx
// 005a7fdf  8d1419               lea edx, [ecx + ebx]
// 005a7fe2  8bca                 mov ecx, edx
// 005a7fe4  69d28b000000         imul edx, edx, 0x8b
// 005a7fea  8d342f               lea esi, [edi + ebp]
// 005a7fed  2bce                 sub ecx, esi
// 005a7fef  69f64e010000         imul esi, esi, 0x14e
// 005a7ff5  6bc962               imul ecx, ecx, 0x62
// 005a7ff8  c1f908               sar ecx, 8
// 005a7ffb  c1fa08               sar edx, 8
// 005a7ffe  03d1                 add edx, ecx
// 005a8000  c1fe08               sar esi, 8
// 005a8003  03f1                 add esi, ecx
// 005a8005  8d0c2b               lea ecx, [ebx + ebp]
// 005a8008  69c9b5000000         imul ecx, ecx, 0xb5
// 005a800e  c1f908               sar ecx, 8
// 005a8011  8d1c39               lea ebx, [ecx + edi]
// 005a8014  2bf9                 sub edi, ecx
// 005a8016  8d0c17               lea ecx, [edi + edx]
// 005a8019  2bfa                 sub edi, edx
// 005a801b  8d1433               lea edx, [ebx + esi]
// 005a801e  2bde                 sub ebx, esi
// 005a8020  89486c               mov dword ptr [eax + 0x6c], ecx
// 005a8023  897864               mov dword ptr [eax + 0x64], edi
// 005a8026  89505c               mov dword ptr [eax + 0x5c], edx
// 005a8029  895874               mov dword ptr [eax + 0x74], ebx
// 005a802c  83e880               sub eax, -0x80
// 005a802f  836c242001           sub dword ptr [esp + 0x20], 1
// 005a8034  0f85ccfcffff         jne 0x5a7d06
// 005a803a  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a803e  83c040               add eax, 0x40
// 005a8041  c744242802000000     mov dword ptr [esp + 0x28], 2
// 005a8049  8da42400000000       lea esp, [esp]
// 005a8050  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 005a8056  8b78c0               mov edi, dword ptr [eax - 0x40]
// 005a8059  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 005a805f  8d1439               lea edx, [ecx + edi]
// 005a8062  2bf9                 sub edi, ecx
// 005a8064  8b48e0               mov ecx, dword ptr [eax - 0x20]
// 005a8067  8d1c31               lea ebx, [ecx + esi]
// 005a806a  2bce                 sub ecx, esi
// 005a806c  8b7060               mov esi, dword ptr [eax + 0x60]
// 005a806f  8be9                 mov ebp, ecx
// 005a8071  8b08                 mov ecx, dword ptr [eax]
// 005a8073  03f1                 add esi, ecx
// 005a8075  2b4860               sub ecx, dword ptr [eax + 0x60]
// 005a8078  89742410             mov dword ptr [esp + 0x10], esi
// 005a807c  8b7040               mov esi, dword ptr [eax + 0x40]
// 005a807f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a8083  8b4820               mov ecx, dword ptr [eax + 0x20]
// 005a8086  03f1                 add esi, ecx
// 005a8088  2b4840               sub ecx, dword ptr [eax + 0x40]
// 005a808b  89742414             mov dword ptr [esp + 0x14], esi
// 005a808f  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a8093  8d0c16               lea ecx, [esi + edx]
// 005a8096  2bd6                 sub edx, esi
// 005a8098  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a809c  03f3                 add esi, ebx
// 005a809e  03f1                 add esi, ecx
// 005a80a0  8970c0               mov dword ptr [eax - 0x40], esi
// 005a80a3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a80a7  03f3                 add esi, ebx
// 005a80a9  2bce                 sub ecx, esi
// 005a80ab  894840               mov dword ptr [eax + 0x40], ecx
// 005a80ae  8bca                 mov ecx, edx
// 005a80b0  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a80b4  03cb                 add ecx, ebx
// 005a80b6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a80ba  69c9b5000000         imul ecx, ecx, 0xb5
// 005a80c0  c1f908               sar ecx, 8
// 005a80c3  8d3411               lea esi, [ecx + edx]
// 005a80c6  2bd1                 sub edx, ecx
// 005a80c8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a80cc  899080000000         mov dword ptr [eax + 0x80], edx
// 005a80d2  8d1419               lea edx, [ecx + ebx]
// 005a80d5  8930                 mov dword ptr [eax], esi
// 005a80d7  8d342f               lea esi, [edi + ebp]
// 005a80da  8bca                 mov ecx, edx
// 005a80dc  69d28b000000         imul edx, edx, 0x8b
// 005a80e2  2bce                 sub ecx, esi
// 005a80e4  69f64e010000         imul esi, esi, 0x14e
// 005a80ea  6bc962               imul ecx, ecx, 0x62
// 005a80ed  c1f908               sar ecx, 8
// 005a80f0  c1fe08               sar esi, 8
// 005a80f3  03f1                 add esi, ecx
// 005a80f5  c1fa08               sar edx, 8
// 005a80f8  03d1                 add edx, ecx
// 005a80fa  8d0c2b               lea ecx, [ebx + ebp]
// 005a80fd  69c9b5000000         imul ecx, ecx, 0xb5
// 005a8103  c1f908               sar ecx, 8
// 005a8106  8d1c39               lea ebx, [ecx + edi]
// 005a8109  2bf9                 sub edi, ecx
// 005a810b  8d0c17               lea ecx, [edi + edx]
// 005a810e  2bfa                 sub edi, edx
// 005a8110  8d1433               lea edx, [ebx + esi]
// 005a8113  894860               mov dword ptr [eax + 0x60], ecx
// 005a8116  8b88a4000000         mov ecx, dword ptr [eax + 0xa4]
// 005a811c  897820               mov dword ptr [eax + 0x20], edi
// 005a811f  8b78c4               mov edi, dword ptr [eax - 0x3c]
// 005a8122  2bde                 sub ebx, esi
// 005a8124  8bb084000000         mov esi, dword ptr [eax + 0x84]
// 005a812a  8950e0               mov dword ptr [eax - 0x20], edx
// 005a812d  8d1439               lea edx, [ecx + edi]
// 005a8130  2bf9                 sub edi, ecx
// 005a8132  8b48e4               mov ecx, dword ptr [eax - 0x1c]
// 005a8135  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 005a813b  8d1c31               lea ebx, [ecx + esi]
// 005a813e  2bce                 sub ecx, esi
// 005a8140  8b7064               mov esi, dword ptr [eax + 0x64]
// 005a8143  8be9                 mov ebp, ecx
// 005a8145  8b4804               mov ecx, dword ptr [eax + 4]
// 005a8148  03f1                 add esi, ecx
// 005a814a  2b4864               sub ecx, dword ptr [eax + 0x64]
// 005a814d  89742410             mov dword ptr [esp + 0x10], esi
// 005a8151  8b7044               mov esi, dword ptr [eax + 0x44]
// 005a8154  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a8158  8b4824               mov ecx, dword ptr [eax + 0x24]
// 005a815b  03f1                 add esi, ecx
// 005a815d  2b4844               sub ecx, dword ptr [eax + 0x44]
// 005a8160  89742414             mov dword ptr [esp + 0x14], esi
// 005a8164  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a8168  8d0c16               lea ecx, [esi + edx]
// 005a816b  2bd6                 sub edx, esi
// 005a816d  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a8171  03f3                 add esi, ebx
// 005a8173  03f1                 add esi, ecx
// 005a8175  8970c4               mov dword ptr [eax - 0x3c], esi
// 005a8178  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a817c  03f3                 add esi, ebx
// 005a817e  2bce                 sub ecx, esi
// 005a8180  894844               mov dword ptr [eax + 0x44], ecx
// 005a8183  8bca                 mov ecx, edx
// 005a8185  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a8189  03cb                 add ecx, ebx
// 005a818b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a818f  69c9b5000000         imul ecx, ecx, 0xb5
// 005a8195  c1f908               sar ecx, 8
// 005a8198  8d3411               lea esi, [ecx + edx]
// 005a819b  2bd1                 sub edx, ecx
// 005a819d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a81a1  897004               mov dword ptr [eax + 4], esi
// 005a81a4  899084000000         mov dword ptr [eax + 0x84], edx
// 005a81aa  8d1419               lea edx, [ecx + ebx]
// 005a81ad  8d342f               lea esi, [edi + ebp]
// 005a81b0  8bca                 mov ecx, edx
// 005a81b2  69d28b000000         imul edx, edx, 0x8b
// 005a81b8  2bce                 sub ecx, esi
// 005a81ba  69f64e010000         imul esi, esi, 0x14e
// 005a81c0  6bc962               imul ecx, ecx, 0x62
// 005a81c3  c1f908               sar ecx, 8
// 005a81c6  c1fe08               sar esi, 8
// 005a81c9  03f1                 add esi, ecx
// 005a81cb  c1fa08               sar edx, 8
// 005a81ce  03d1                 add edx, ecx
// 005a81d0  8d0c2b               lea ecx, [ebx + ebp]
// 005a81d3  69c9b5000000         imul ecx, ecx, 0xb5
// 005a81d9  c1f908               sar ecx, 8
// 005a81dc  8d1c39               lea ebx, [ecx + edi]
// 005a81df  2bf9                 sub edi, ecx
// 005a81e1  8d0c17               lea ecx, [edi + edx]
// 005a81e4  2bfa                 sub edi, edx
// 005a81e6  8d1433               lea edx, [ebx + esi]
// 005a81e9  894864               mov dword ptr [eax + 0x64], ecx
// 005a81ec  8b88a8000000         mov ecx, dword ptr [eax + 0xa8]
// 005a81f2  2bde                 sub ebx, esi
// 005a81f4  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 005a81fa  897824               mov dword ptr [eax + 0x24], edi
// 005a81fd  8b78c8               mov edi, dword ptr [eax - 0x38]
// 005a8200  8950e4               mov dword ptr [eax - 0x1c], edx
// 005a8203  8d1439               lea edx, [ecx + edi]
// 005a8206  2bf9                 sub edi, ecx
// 005a8208  8b48e8               mov ecx, dword ptr [eax - 0x18]
// 005a820b  8998a4000000         mov dword ptr [eax + 0xa4], ebx
// 005a8211  8d1c31               lea ebx, [ecx + esi]
// 005a8214  2bce                 sub ecx, esi
// 005a8216  8b7068               mov esi, dword ptr [eax + 0x68]
// 005a8219  8be9                 mov ebp, ecx
// 005a821b  8b4808               mov ecx, dword ptr [eax + 8]
// 005a821e  03f1                 add esi, ecx
// 005a8220  2b4868               sub ecx, dword ptr [eax + 0x68]
// 005a8223  89742410             mov dword ptr [esp + 0x10], esi
// 005a8227  8b7048               mov esi, dword ptr [eax + 0x48]
// 005a822a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a822e  8b4828               mov ecx, dword ptr [eax + 0x28]
// 005a8231  03f1                 add esi, ecx
// 005a8233  2b4848               sub ecx, dword ptr [eax + 0x48]
// 005a8236  89742414             mov dword ptr [esp + 0x14], esi
// 005a823a  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a823e  8d0c16               lea ecx, [esi + edx]
// 005a8241  2bd6                 sub edx, esi
// 005a8243  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a8247  03f3                 add esi, ebx
// 005a8249  03f1                 add esi, ecx
// 005a824b  8970c8               mov dword ptr [eax - 0x38], esi
// 005a824e  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a8252  03f3                 add esi, ebx
// 005a8254  2bce                 sub ecx, esi
// 005a8256  894848               mov dword ptr [eax + 0x48], ecx
// 005a8259  8bca                 mov ecx, edx
// 005a825b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a825f  03cb                 add ecx, ebx
// 005a8261  69c9b5000000         imul ecx, ecx, 0xb5
// 005a8267  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a826b  c1f908               sar ecx, 8
// 005a826e  8d3411               lea esi, [ecx + edx]
// 005a8271  2bd1                 sub edx, ecx
// 005a8273  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a8277  897008               mov dword ptr [eax + 8], esi
// 005a827a  899088000000         mov dword ptr [eax + 0x88], edx
// 005a8280  8d1419               lea edx, [ecx + ebx]
// 005a8283  8bca                 mov ecx, edx
// 005a8285  69d28b000000         imul edx, edx, 0x8b
// 005a828b  8d342f               lea esi, [edi + ebp]
// 005a828e  2bce                 sub ecx, esi
// 005a8290  69f64e010000         imul esi, esi, 0x14e
// 005a8296  6bc962               imul ecx, ecx, 0x62
// 005a8299  c1f908               sar ecx, 8
// 005a829c  c1fe08               sar esi, 8
// 005a829f  03f1                 add esi, ecx
// 005a82a1  c1fa08               sar edx, 8
// 005a82a4  03d1                 add edx, ecx
// 005a82a6  8d0c2b               lea ecx, [ebx + ebp]
// 005a82a9  69c9b5000000         imul ecx, ecx, 0xb5
// 005a82af  c1f908               sar ecx, 8
// 005a82b2  8d1c39               lea ebx, [ecx + edi]
// 005a82b5  2bf9                 sub edi, ecx
// 005a82b7  8d0c17               lea ecx, [edi + edx]
// 005a82ba  894868               mov dword ptr [eax + 0x68], ecx
// 005a82bd  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 005a82c3  2bfa                 sub edi, edx
// 005a82c5  8d1433               lea edx, [ebx + esi]
// 005a82c8  2bde                 sub ebx, esi
// 005a82ca  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 005a82d0  897828               mov dword ptr [eax + 0x28], edi
// 005a82d3  8b78cc               mov edi, dword ptr [eax - 0x34]
// 005a82d6  8950e8               mov dword ptr [eax - 0x18], edx
// 005a82d9  8d140f               lea edx, [edi + ecx]
// 005a82dc  2bf9                 sub edi, ecx
// 005a82de  8b48ec               mov ecx, dword ptr [eax - 0x14]
// 005a82e1  8998a8000000         mov dword ptr [eax + 0xa8], ebx
// 005a82e7  8d1c0e               lea ebx, [esi + ecx]
// 005a82ea  2bce                 sub ecx, esi
// 005a82ec  8b706c               mov esi, dword ptr [eax + 0x6c]
// 005a82ef  8be9                 mov ebp, ecx
// 005a82f1  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005a82f4  03f1                 add esi, ecx
// 005a82f6  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 005a82f9  89742410             mov dword ptr [esp + 0x10], esi
// 005a82fd  8b704c               mov esi, dword ptr [eax + 0x4c]
// 005a8300  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a8304  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 005a8307  03f1                 add esi, ecx
// 005a8309  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 005a830c  89742414             mov dword ptr [esp + 0x14], esi
// 005a8310  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a8314  8d0c16               lea ecx, [esi + edx]
// 005a8317  2bd6                 sub edx, esi
// 005a8319  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a831d  03f3                 add esi, ebx
// 005a831f  03f1                 add esi, ecx
// 005a8321  8970cc               mov dword ptr [eax - 0x34], esi
// 005a8324  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a8328  03f3                 add esi, ebx
// 005a832a  2bce                 sub ecx, esi
// 005a832c  89484c               mov dword ptr [eax + 0x4c], ecx
// 005a832f  8bca                 mov ecx, edx
// 005a8331  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a8335  03cb                 add ecx, ebx
// 005a8337  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a833b  69c9b5000000         imul ecx, ecx, 0xb5
// 005a8341  c1f908               sar ecx, 8
// 005a8344  8d3411               lea esi, [ecx + edx]
// 005a8347  2bd1                 sub edx, ecx
// 005a8349  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a834d  89700c               mov dword ptr [eax + 0xc], esi
// 005a8350  89908c000000         mov dword ptr [eax + 0x8c], edx
// 005a8356  8d1419               lea edx, [ecx + ebx]
// 005a8359  8bca                 mov ecx, edx
// 005a835b  69d28b000000         imul edx, edx, 0x8b
// 005a8361  8d342f               lea esi, [edi + ebp]
// 005a8364  2bce                 sub ecx, esi
// 005a8366  69f64e010000         imul esi, esi, 0x14e
// 005a836c  6bc962               imul ecx, ecx, 0x62
// 005a836f  c1f908               sar ecx, 8
// 005a8372  c1fa08               sar edx, 8
// 005a8375  03d1                 add edx, ecx
// 005a8377  c1fe08               sar esi, 8
// 005a837a  03f1                 add esi, ecx
// 005a837c  8d0c2b               lea ecx, [ebx + ebp]
// 005a837f  69c9b5000000         imul ecx, ecx, 0xb5
// 005a8385  c1f908               sar ecx, 8
// 005a8388  8d1c39               lea ebx, [ecx + edi]
// 005a838b  2bf9                 sub edi, ecx
// 005a838d  8d0c17               lea ecx, [edi + edx]
// 005a8390  2bfa                 sub edi, edx
// 005a8392  8d1433               lea edx, [ebx + esi]
// 005a8395  2bde                 sub ebx, esi
// 005a8397  89486c               mov dword ptr [eax + 0x6c], ecx
// 005a839a  89782c               mov dword ptr [eax + 0x2c], edi
// 005a839d  8950ec               mov dword ptr [eax - 0x14], edx
// 005a83a0  8998ac000000         mov dword ptr [eax + 0xac], ebx
// 005a83a6  83c010               add eax, 0x10
// 005a83a9  836c242801           sub dword ptr [esp + 0x28], 1
// 005a83ae  0f859cfcffff         jne 0x5a8050
// 005a83b4  5f                   pop edi
// 005a83b5  5e                   pop esi
// 005a83b6  5d                   pop ebp
// 005a83b7  5b                   pop ebx
// 005a83b8  83c414               add esp, 0x14
// 005a83bb  c3                   ret 
// library jpeg-6b/jfdctfst.c (function _jpeg_fdct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctfst.c
