// roc 2009-12 00629d50  unit: seg_00620000  size: 1740 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00629d50
//
// 00629d50  83ec14               sub esp, 0x14
// 00629d53  8b442418             mov eax, dword ptr [esp + 0x18]
// 00629d57  53                   push ebx
// 00629d58  55                   push ebp
// 00629d59  56                   push esi
// 00629d5a  83c008               add eax, 8
// 00629d5d  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 00629d65  57                   push edi
// 00629d66  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00629d69  8b78f8               mov edi, dword ptr [eax - 8]
// 00629d6c  8b7010               mov esi, dword ptr [eax + 0x10]
// 00629d6f  8d1439               lea edx, [ecx + edi]
// 00629d72  2bf9                 sub edi, ecx
// 00629d74  8b48fc               mov ecx, dword ptr [eax - 4]
// 00629d77  8d1c31               lea ebx, [ecx + esi]
// 00629d7a  2bce                 sub ecx, esi
// 00629d7c  8b700c               mov esi, dword ptr [eax + 0xc]
// 00629d7f  8be9                 mov ebp, ecx
// 00629d81  8b08                 mov ecx, dword ptr [eax]
// 00629d83  03f1                 add esi, ecx
// 00629d85  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00629d88  89742410             mov dword ptr [esp + 0x10], esi
// 00629d8c  8b7008               mov esi, dword ptr [eax + 8]
// 00629d8f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00629d93  8b4804               mov ecx, dword ptr [eax + 4]
// 00629d96  03f1                 add esi, ecx
// 00629d98  2b4808               sub ecx, dword ptr [eax + 8]
// 00629d9b  89742414             mov dword ptr [esp + 0x14], esi
// 00629d9f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00629da3  8d0c16               lea ecx, [esi + edx]
// 00629da6  2bd6                 sub edx, esi
// 00629da8  8b742410             mov esi, dword ptr [esp + 0x10]
// 00629dac  03f3                 add esi, ebx
// 00629dae  03f1                 add esi, ecx
// 00629db0  8970f8               mov dword ptr [eax - 8], esi
// 00629db3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00629db7  03f3                 add esi, ebx
// 00629db9  2bce                 sub ecx, esi
// 00629dbb  894808               mov dword ptr [eax + 8], ecx
// 00629dbe  8bca                 mov ecx, edx
// 00629dc0  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00629dc4  03cb                 add ecx, ebx
// 00629dc6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00629dca  69c9b5000000         imul ecx, ecx, 0xb5
// 00629dd0  c1f908               sar ecx, 8
// 00629dd3  8d3411               lea esi, [ecx + edx]
// 00629dd6  2bd1                 sub edx, ecx
// 00629dd8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00629ddc  895010               mov dword ptr [eax + 0x10], edx
// 00629ddf  8d1419               lea edx, [ecx + ebx]
// 00629de2  8930                 mov dword ptr [eax], esi
// 00629de4  8d342f               lea esi, [edi + ebp]
// 00629de7  8bca                 mov ecx, edx
// 00629de9  69d28b000000         imul edx, edx, 0x8b
// 00629def  2bce                 sub ecx, esi
// 00629df1  69f64e010000         imul esi, esi, 0x14e
// 00629df7  6bc962               imul ecx, ecx, 0x62
// 00629dfa  c1f908               sar ecx, 8
// 00629dfd  c1fe08               sar esi, 8
// 00629e00  03f1                 add esi, ecx
// 00629e02  c1fa08               sar edx, 8
// 00629e05  03d1                 add edx, ecx
// 00629e07  8d0c2b               lea ecx, [ebx + ebp]
// 00629e0a  69c9b5000000         imul ecx, ecx, 0xb5
// 00629e10  c1f908               sar ecx, 8
// 00629e13  8d1c39               lea ebx, [ecx + edi]
// 00629e16  2bf9                 sub edi, ecx
// 00629e18  8d0c17               lea ecx, [edi + edx]
// 00629e1b  2bfa                 sub edi, edx
// 00629e1d  8d1433               lea edx, [ebx + esi]
// 00629e20  89480c               mov dword ptr [eax + 0xc], ecx
// 00629e23  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00629e26  897804               mov dword ptr [eax + 4], edi
// 00629e29  8b7818               mov edi, dword ptr [eax + 0x18]
// 00629e2c  2bde                 sub ebx, esi
// 00629e2e  8b7030               mov esi, dword ptr [eax + 0x30]
// 00629e31  8950fc               mov dword ptr [eax - 4], edx
// 00629e34  8d1439               lea edx, [ecx + edi]
// 00629e37  2bf9                 sub edi, ecx
// 00629e39  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00629e3c  895814               mov dword ptr [eax + 0x14], ebx
// 00629e3f  8d1c31               lea ebx, [ecx + esi]
// 00629e42  2bce                 sub ecx, esi
// 00629e44  8b702c               mov esi, dword ptr [eax + 0x2c]
// 00629e47  8be9                 mov ebp, ecx
// 00629e49  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00629e4c  03f1                 add esi, ecx
// 00629e4e  2b482c               sub ecx, dword ptr [eax + 0x2c]
// 00629e51  89742410             mov dword ptr [esp + 0x10], esi
// 00629e55  8b7028               mov esi, dword ptr [eax + 0x28]
// 00629e58  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00629e5c  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00629e5f  03f1                 add esi, ecx
// 00629e61  2b4828               sub ecx, dword ptr [eax + 0x28]
// 00629e64  89742414             mov dword ptr [esp + 0x14], esi
// 00629e68  894c2418             mov dword ptr [esp + 0x18], ecx
// 00629e6c  8d0c16               lea ecx, [esi + edx]
// 00629e6f  2bd6                 sub edx, esi
// 00629e71  8b742410             mov esi, dword ptr [esp + 0x10]
// 00629e75  03f3                 add esi, ebx
// 00629e77  03f1                 add esi, ecx
// 00629e79  897018               mov dword ptr [eax + 0x18], esi
// 00629e7c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00629e80  03f3                 add esi, ebx
// 00629e82  2bce                 sub ecx, esi
// 00629e84  894828               mov dword ptr [eax + 0x28], ecx
// 00629e87  8bca                 mov ecx, edx
// 00629e89  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00629e8d  03cb                 add ecx, ebx
// 00629e8f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00629e93  69c9b5000000         imul ecx, ecx, 0xb5
// 00629e99  c1f908               sar ecx, 8
// 00629e9c  8d3411               lea esi, [ecx + edx]
// 00629e9f  2bd1                 sub edx, ecx
// 00629ea1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00629ea5  897020               mov dword ptr [eax + 0x20], esi
// 00629ea8  895030               mov dword ptr [eax + 0x30], edx
// 00629eab  8d1419               lea edx, [ecx + ebx]
// 00629eae  8d342f               lea esi, [edi + ebp]
// 00629eb1  8bca                 mov ecx, edx
// 00629eb3  69d28b000000         imul edx, edx, 0x8b
// 00629eb9  2bce                 sub ecx, esi
// 00629ebb  69f64e010000         imul esi, esi, 0x14e
// 00629ec1  6bc962               imul ecx, ecx, 0x62
// 00629ec4  c1f908               sar ecx, 8
// 00629ec7  c1fe08               sar esi, 8
// 00629eca  03f1                 add esi, ecx
// 00629ecc  c1fa08               sar edx, 8
// 00629ecf  03d1                 add edx, ecx
// 00629ed1  8d0c2b               lea ecx, [ebx + ebp]
// 00629ed4  69c9b5000000         imul ecx, ecx, 0xb5
// 00629eda  c1f908               sar ecx, 8
// 00629edd  8d1c39               lea ebx, [ecx + edi]
// 00629ee0  2bf9                 sub edi, ecx
// 00629ee2  8d0c17               lea ecx, [edi + edx]
// 00629ee5  2bfa                 sub edi, edx
// 00629ee7  8d1433               lea edx, [ebx + esi]
// 00629eea  89482c               mov dword ptr [eax + 0x2c], ecx
// 00629eed  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00629ef0  2bde                 sub ebx, esi
// 00629ef2  8b7050               mov esi, dword ptr [eax + 0x50]
// 00629ef5  897824               mov dword ptr [eax + 0x24], edi
// 00629ef8  8b7838               mov edi, dword ptr [eax + 0x38]
// 00629efb  89501c               mov dword ptr [eax + 0x1c], edx
// 00629efe  8d1439               lea edx, [ecx + edi]
// 00629f01  2bf9                 sub edi, ecx
// 00629f03  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00629f06  895834               mov dword ptr [eax + 0x34], ebx
// 00629f09  8d1c31               lea ebx, [ecx + esi]
// 00629f0c  2bce                 sub ecx, esi
// 00629f0e  8b704c               mov esi, dword ptr [eax + 0x4c]
// 00629f11  8be9                 mov ebp, ecx
// 00629f13  8b4840               mov ecx, dword ptr [eax + 0x40]
// 00629f16  03f1                 add esi, ecx
// 00629f18  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 00629f1b  89742410             mov dword ptr [esp + 0x10], esi
// 00629f1f  8b7048               mov esi, dword ptr [eax + 0x48]
// 00629f22  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00629f26  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00629f29  03f1                 add esi, ecx
// 00629f2b  2b4848               sub ecx, dword ptr [eax + 0x48]
// 00629f2e  89742414             mov dword ptr [esp + 0x14], esi
// 00629f32  894c2418             mov dword ptr [esp + 0x18], ecx
// 00629f36  8d0c16               lea ecx, [esi + edx]
// 00629f39  2bd6                 sub edx, esi
// 00629f3b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00629f3f  03f3                 add esi, ebx
// 00629f41  03f1                 add esi, ecx
// 00629f43  897038               mov dword ptr [eax + 0x38], esi
// 00629f46  8b742410             mov esi, dword ptr [esp + 0x10]
// 00629f4a  03f3                 add esi, ebx
// 00629f4c  2bce                 sub ecx, esi
// 00629f4e  894848               mov dword ptr [eax + 0x48], ecx
// 00629f51  8bca                 mov ecx, edx
// 00629f53  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00629f57  03cb                 add ecx, ebx
// 00629f59  69c9b5000000         imul ecx, ecx, 0xb5
// 00629f5f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00629f63  c1f908               sar ecx, 8
// 00629f66  8d3411               lea esi, [ecx + edx]
// 00629f69  2bd1                 sub edx, ecx
// 00629f6b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00629f6f  897040               mov dword ptr [eax + 0x40], esi
// 00629f72  895050               mov dword ptr [eax + 0x50], edx
// 00629f75  8d1419               lea edx, [ecx + ebx]
// 00629f78  8bca                 mov ecx, edx
// 00629f7a  69d28b000000         imul edx, edx, 0x8b
// 00629f80  8d342f               lea esi, [edi + ebp]
// 00629f83  2bce                 sub ecx, esi
// 00629f85  69f64e010000         imul esi, esi, 0x14e
// 00629f8b  6bc962               imul ecx, ecx, 0x62
// 00629f8e  c1f908               sar ecx, 8
// 00629f91  c1fe08               sar esi, 8
// 00629f94  03f1                 add esi, ecx
// 00629f96  c1fa08               sar edx, 8
// 00629f99  03d1                 add edx, ecx
// 00629f9b  8d0c2b               lea ecx, [ebx + ebp]
// 00629f9e  69c9b5000000         imul ecx, ecx, 0xb5
// 00629fa4  c1f908               sar ecx, 8
// 00629fa7  8d1c39               lea ebx, [ecx + edi]
// 00629faa  2bf9                 sub edi, ecx
// 00629fac  8d0c17               lea ecx, [edi + edx]
// 00629faf  89484c               mov dword ptr [eax + 0x4c], ecx
// 00629fb2  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00629fb5  2bfa                 sub edi, edx
// 00629fb7  8d1433               lea edx, [ebx + esi]
// 00629fba  2bde                 sub ebx, esi
// 00629fbc  8b7070               mov esi, dword ptr [eax + 0x70]
// 00629fbf  897844               mov dword ptr [eax + 0x44], edi
// 00629fc2  8b7858               mov edi, dword ptr [eax + 0x58]
// 00629fc5  89503c               mov dword ptr [eax + 0x3c], edx
// 00629fc8  8d140f               lea edx, [edi + ecx]
// 00629fcb  2bf9                 sub edi, ecx
// 00629fcd  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00629fd0  895854               mov dword ptr [eax + 0x54], ebx
// 00629fd3  8d1c0e               lea ebx, [esi + ecx]
// 00629fd6  2bce                 sub ecx, esi
// 00629fd8  8b706c               mov esi, dword ptr [eax + 0x6c]
// 00629fdb  8be9                 mov ebp, ecx
// 00629fdd  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00629fe0  03f1                 add esi, ecx
// 00629fe2  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 00629fe5  89742410             mov dword ptr [esp + 0x10], esi
// 00629fe9  8b7068               mov esi, dword ptr [eax + 0x68]
// 00629fec  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00629ff0  8b4864               mov ecx, dword ptr [eax + 0x64]
// 00629ff3  03f1                 add esi, ecx
// 00629ff5  2b4868               sub ecx, dword ptr [eax + 0x68]
// 00629ff8  89742414             mov dword ptr [esp + 0x14], esi
// 00629ffc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062a000  8d0c16               lea ecx, [esi + edx]
// 0062a003  2bd6                 sub edx, esi
// 0062a005  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a009  03f3                 add esi, ebx
// 0062a00b  03f1                 add esi, ecx
// 0062a00d  897058               mov dword ptr [eax + 0x58], esi
// 0062a010  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a014  03f3                 add esi, ebx
// 0062a016  2bce                 sub ecx, esi
// 0062a018  894868               mov dword ptr [eax + 0x68], ecx
// 0062a01b  8bca                 mov ecx, edx
// 0062a01d  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0062a021  03cb                 add ecx, ebx
// 0062a023  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0062a027  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a02d  c1f908               sar ecx, 8
// 0062a030  8d3411               lea esi, [ecx + edx]
// 0062a033  2bd1                 sub edx, ecx
// 0062a035  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062a039  897060               mov dword ptr [eax + 0x60], esi
// 0062a03c  895070               mov dword ptr [eax + 0x70], edx
// 0062a03f  8d1419               lea edx, [ecx + ebx]
// 0062a042  8bca                 mov ecx, edx
// 0062a044  69d28b000000         imul edx, edx, 0x8b
// 0062a04a  8d342f               lea esi, [edi + ebp]
// 0062a04d  2bce                 sub ecx, esi
// 0062a04f  69f64e010000         imul esi, esi, 0x14e
// 0062a055  6bc962               imul ecx, ecx, 0x62
// 0062a058  c1f908               sar ecx, 8
// 0062a05b  c1fa08               sar edx, 8
// 0062a05e  03d1                 add edx, ecx
// 0062a060  c1fe08               sar esi, 8
// 0062a063  03f1                 add esi, ecx
// 0062a065  8d0c2b               lea ecx, [ebx + ebp]
// 0062a068  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a06e  c1f908               sar ecx, 8
// 0062a071  8d1c39               lea ebx, [ecx + edi]
// 0062a074  2bf9                 sub edi, ecx
// 0062a076  8d0c17               lea ecx, [edi + edx]
// 0062a079  2bfa                 sub edi, edx
// 0062a07b  8d1433               lea edx, [ebx + esi]
// 0062a07e  2bde                 sub ebx, esi
// 0062a080  89486c               mov dword ptr [eax + 0x6c], ecx
// 0062a083  897864               mov dword ptr [eax + 0x64], edi
// 0062a086  89505c               mov dword ptr [eax + 0x5c], edx
// 0062a089  895874               mov dword ptr [eax + 0x74], ebx
// 0062a08c  83e880               sub eax, -0x80
// 0062a08f  836c242001           sub dword ptr [esp + 0x20], 1
// 0062a094  0f85ccfcffff         jne 0x629d66
// 0062a09a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062a09e  83c040               add eax, 0x40
// 0062a0a1  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0062a0a9  8da42400000000       lea esp, [esp]
// 0062a0b0  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0062a0b6  8b78c0               mov edi, dword ptr [eax - 0x40]
// 0062a0b9  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 0062a0bf  8d1439               lea edx, [ecx + edi]
// 0062a0c2  2bf9                 sub edi, ecx
// 0062a0c4  8b48e0               mov ecx, dword ptr [eax - 0x20]
// 0062a0c7  8d1c31               lea ebx, [ecx + esi]
// 0062a0ca  2bce                 sub ecx, esi
// 0062a0cc  8b7060               mov esi, dword ptr [eax + 0x60]
// 0062a0cf  8be9                 mov ebp, ecx
// 0062a0d1  8b08                 mov ecx, dword ptr [eax]
// 0062a0d3  03f1                 add esi, ecx
// 0062a0d5  2b4860               sub ecx, dword ptr [eax + 0x60]
// 0062a0d8  89742410             mov dword ptr [esp + 0x10], esi
// 0062a0dc  8b7040               mov esi, dword ptr [eax + 0x40]
// 0062a0df  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062a0e3  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0062a0e6  03f1                 add esi, ecx
// 0062a0e8  2b4840               sub ecx, dword ptr [eax + 0x40]
// 0062a0eb  89742414             mov dword ptr [esp + 0x14], esi
// 0062a0ef  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062a0f3  8d0c16               lea ecx, [esi + edx]
// 0062a0f6  2bd6                 sub edx, esi
// 0062a0f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a0fc  03f3                 add esi, ebx
// 0062a0fe  03f1                 add esi, ecx
// 0062a100  8970c0               mov dword ptr [eax - 0x40], esi
// 0062a103  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a107  03f3                 add esi, ebx
// 0062a109  2bce                 sub ecx, esi
// 0062a10b  894840               mov dword ptr [eax + 0x40], ecx
// 0062a10e  8bca                 mov ecx, edx
// 0062a110  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0062a114  03cb                 add ecx, ebx
// 0062a116  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0062a11a  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a120  c1f908               sar ecx, 8
// 0062a123  8d3411               lea esi, [ecx + edx]
// 0062a126  2bd1                 sub edx, ecx
// 0062a128  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062a12c  899080000000         mov dword ptr [eax + 0x80], edx
// 0062a132  8d1419               lea edx, [ecx + ebx]
// 0062a135  8930                 mov dword ptr [eax], esi
// 0062a137  8d342f               lea esi, [edi + ebp]
// 0062a13a  8bca                 mov ecx, edx
// 0062a13c  69d28b000000         imul edx, edx, 0x8b
// 0062a142  2bce                 sub ecx, esi
// 0062a144  69f64e010000         imul esi, esi, 0x14e
// 0062a14a  6bc962               imul ecx, ecx, 0x62
// 0062a14d  c1f908               sar ecx, 8
// 0062a150  c1fe08               sar esi, 8
// 0062a153  03f1                 add esi, ecx
// 0062a155  c1fa08               sar edx, 8
// 0062a158  03d1                 add edx, ecx
// 0062a15a  8d0c2b               lea ecx, [ebx + ebp]
// 0062a15d  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a163  c1f908               sar ecx, 8
// 0062a166  8d1c39               lea ebx, [ecx + edi]
// 0062a169  2bf9                 sub edi, ecx
// 0062a16b  8d0c17               lea ecx, [edi + edx]
// 0062a16e  2bfa                 sub edi, edx
// 0062a170  8d1433               lea edx, [ebx + esi]
// 0062a173  894860               mov dword ptr [eax + 0x60], ecx
// 0062a176  8b88a4000000         mov ecx, dword ptr [eax + 0xa4]
// 0062a17c  897820               mov dword ptr [eax + 0x20], edi
// 0062a17f  8b78c4               mov edi, dword ptr [eax - 0x3c]
// 0062a182  2bde                 sub ebx, esi
// 0062a184  8bb084000000         mov esi, dword ptr [eax + 0x84]
// 0062a18a  8950e0               mov dword ptr [eax - 0x20], edx
// 0062a18d  8d1439               lea edx, [ecx + edi]
// 0062a190  2bf9                 sub edi, ecx
// 0062a192  8b48e4               mov ecx, dword ptr [eax - 0x1c]
// 0062a195  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0062a19b  8d1c31               lea ebx, [ecx + esi]
// 0062a19e  2bce                 sub ecx, esi
// 0062a1a0  8b7064               mov esi, dword ptr [eax + 0x64]
// 0062a1a3  8be9                 mov ebp, ecx
// 0062a1a5  8b4804               mov ecx, dword ptr [eax + 4]
// 0062a1a8  03f1                 add esi, ecx
// 0062a1aa  2b4864               sub ecx, dword ptr [eax + 0x64]
// 0062a1ad  89742410             mov dword ptr [esp + 0x10], esi
// 0062a1b1  8b7044               mov esi, dword ptr [eax + 0x44]
// 0062a1b4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062a1b8  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0062a1bb  03f1                 add esi, ecx
// 0062a1bd  2b4844               sub ecx, dword ptr [eax + 0x44]
// 0062a1c0  89742414             mov dword ptr [esp + 0x14], esi
// 0062a1c4  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062a1c8  8d0c16               lea ecx, [esi + edx]
// 0062a1cb  2bd6                 sub edx, esi
// 0062a1cd  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a1d1  03f3                 add esi, ebx
// 0062a1d3  03f1                 add esi, ecx
// 0062a1d5  8970c4               mov dword ptr [eax - 0x3c], esi
// 0062a1d8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a1dc  03f3                 add esi, ebx
// 0062a1de  2bce                 sub ecx, esi
// 0062a1e0  894844               mov dword ptr [eax + 0x44], ecx
// 0062a1e3  8bca                 mov ecx, edx
// 0062a1e5  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0062a1e9  03cb                 add ecx, ebx
// 0062a1eb  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0062a1ef  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a1f5  c1f908               sar ecx, 8
// 0062a1f8  8d3411               lea esi, [ecx + edx]
// 0062a1fb  2bd1                 sub edx, ecx
// 0062a1fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062a201  897004               mov dword ptr [eax + 4], esi
// 0062a204  899084000000         mov dword ptr [eax + 0x84], edx
// 0062a20a  8d1419               lea edx, [ecx + ebx]
// 0062a20d  8d342f               lea esi, [edi + ebp]
// 0062a210  8bca                 mov ecx, edx
// 0062a212  69d28b000000         imul edx, edx, 0x8b
// 0062a218  2bce                 sub ecx, esi
// 0062a21a  69f64e010000         imul esi, esi, 0x14e
// 0062a220  6bc962               imul ecx, ecx, 0x62
// 0062a223  c1f908               sar ecx, 8
// 0062a226  c1fe08               sar esi, 8
// 0062a229  03f1                 add esi, ecx
// 0062a22b  c1fa08               sar edx, 8
// 0062a22e  03d1                 add edx, ecx
// 0062a230  8d0c2b               lea ecx, [ebx + ebp]
// 0062a233  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a239  c1f908               sar ecx, 8
// 0062a23c  8d1c39               lea ebx, [ecx + edi]
// 0062a23f  2bf9                 sub edi, ecx
// 0062a241  8d0c17               lea ecx, [edi + edx]
// 0062a244  2bfa                 sub edi, edx
// 0062a246  8d1433               lea edx, [ebx + esi]
// 0062a249  894864               mov dword ptr [eax + 0x64], ecx
// 0062a24c  8b88a8000000         mov ecx, dword ptr [eax + 0xa8]
// 0062a252  2bde                 sub ebx, esi
// 0062a254  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 0062a25a  897824               mov dword ptr [eax + 0x24], edi
// 0062a25d  8b78c8               mov edi, dword ptr [eax - 0x38]
// 0062a260  8950e4               mov dword ptr [eax - 0x1c], edx
// 0062a263  8d1439               lea edx, [ecx + edi]
// 0062a266  2bf9                 sub edi, ecx
// 0062a268  8b48e8               mov ecx, dword ptr [eax - 0x18]
// 0062a26b  8998a4000000         mov dword ptr [eax + 0xa4], ebx
// 0062a271  8d1c31               lea ebx, [ecx + esi]
// 0062a274  2bce                 sub ecx, esi
// 0062a276  8b7068               mov esi, dword ptr [eax + 0x68]
// 0062a279  8be9                 mov ebp, ecx
// 0062a27b  8b4808               mov ecx, dword ptr [eax + 8]
// 0062a27e  03f1                 add esi, ecx
// 0062a280  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0062a283  89742410             mov dword ptr [esp + 0x10], esi
// 0062a287  8b7048               mov esi, dword ptr [eax + 0x48]
// 0062a28a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062a28e  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0062a291  03f1                 add esi, ecx
// 0062a293  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0062a296  89742414             mov dword ptr [esp + 0x14], esi
// 0062a29a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062a29e  8d0c16               lea ecx, [esi + edx]
// 0062a2a1  2bd6                 sub edx, esi
// 0062a2a3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a2a7  03f3                 add esi, ebx
// 0062a2a9  03f1                 add esi, ecx
// 0062a2ab  8970c8               mov dword ptr [eax - 0x38], esi
// 0062a2ae  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a2b2  03f3                 add esi, ebx
// 0062a2b4  2bce                 sub ecx, esi
// 0062a2b6  894848               mov dword ptr [eax + 0x48], ecx
// 0062a2b9  8bca                 mov ecx, edx
// 0062a2bb  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0062a2bf  03cb                 add ecx, ebx
// 0062a2c1  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a2c7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0062a2cb  c1f908               sar ecx, 8
// 0062a2ce  8d3411               lea esi, [ecx + edx]
// 0062a2d1  2bd1                 sub edx, ecx
// 0062a2d3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062a2d7  897008               mov dword ptr [eax + 8], esi
// 0062a2da  899088000000         mov dword ptr [eax + 0x88], edx
// 0062a2e0  8d1419               lea edx, [ecx + ebx]
// 0062a2e3  8bca                 mov ecx, edx
// 0062a2e5  69d28b000000         imul edx, edx, 0x8b
// 0062a2eb  8d342f               lea esi, [edi + ebp]
// 0062a2ee  2bce                 sub ecx, esi
// 0062a2f0  69f64e010000         imul esi, esi, 0x14e
// 0062a2f6  6bc962               imul ecx, ecx, 0x62
// 0062a2f9  c1f908               sar ecx, 8
// 0062a2fc  c1fe08               sar esi, 8
// 0062a2ff  03f1                 add esi, ecx
// 0062a301  c1fa08               sar edx, 8
// 0062a304  03d1                 add edx, ecx
// 0062a306  8d0c2b               lea ecx, [ebx + ebp]
// 0062a309  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a30f  c1f908               sar ecx, 8
// 0062a312  8d1c39               lea ebx, [ecx + edi]
// 0062a315  2bf9                 sub edi, ecx
// 0062a317  8d0c17               lea ecx, [edi + edx]
// 0062a31a  894868               mov dword ptr [eax + 0x68], ecx
// 0062a31d  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 0062a323  2bfa                 sub edi, edx
// 0062a325  8d1433               lea edx, [ebx + esi]
// 0062a328  2bde                 sub ebx, esi
// 0062a32a  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 0062a330  897828               mov dword ptr [eax + 0x28], edi
// 0062a333  8b78cc               mov edi, dword ptr [eax - 0x34]
// 0062a336  8950e8               mov dword ptr [eax - 0x18], edx
// 0062a339  8d140f               lea edx, [edi + ecx]
// 0062a33c  2bf9                 sub edi, ecx
// 0062a33e  8b48ec               mov ecx, dword ptr [eax - 0x14]
// 0062a341  8998a8000000         mov dword ptr [eax + 0xa8], ebx
// 0062a347  8d1c0e               lea ebx, [esi + ecx]
// 0062a34a  2bce                 sub ecx, esi
// 0062a34c  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0062a34f  8be9                 mov ebp, ecx
// 0062a351  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0062a354  03f1                 add esi, ecx
// 0062a356  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0062a359  89742410             mov dword ptr [esp + 0x10], esi
// 0062a35d  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0062a360  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062a364  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0062a367  03f1                 add esi, ecx
// 0062a369  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0062a36c  89742414             mov dword ptr [esp + 0x14], esi
// 0062a370  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062a374  8d0c16               lea ecx, [esi + edx]
// 0062a377  2bd6                 sub edx, esi
// 0062a379  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a37d  03f3                 add esi, ebx
// 0062a37f  03f1                 add esi, ecx
// 0062a381  8970cc               mov dword ptr [eax - 0x34], esi
// 0062a384  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a388  03f3                 add esi, ebx
// 0062a38a  2bce                 sub ecx, esi
// 0062a38c  89484c               mov dword ptr [eax + 0x4c], ecx
// 0062a38f  8bca                 mov ecx, edx
// 0062a391  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0062a395  03cb                 add ecx, ebx
// 0062a397  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0062a39b  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a3a1  c1f908               sar ecx, 8
// 0062a3a4  8d3411               lea esi, [ecx + edx]
// 0062a3a7  2bd1                 sub edx, ecx
// 0062a3a9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062a3ad  89700c               mov dword ptr [eax + 0xc], esi
// 0062a3b0  89908c000000         mov dword ptr [eax + 0x8c], edx
// 0062a3b6  8d1419               lea edx, [ecx + ebx]
// 0062a3b9  8bca                 mov ecx, edx
// 0062a3bb  69d28b000000         imul edx, edx, 0x8b
// 0062a3c1  8d342f               lea esi, [edi + ebp]
// 0062a3c4  2bce                 sub ecx, esi
// 0062a3c6  69f64e010000         imul esi, esi, 0x14e
// 0062a3cc  6bc962               imul ecx, ecx, 0x62
// 0062a3cf  c1f908               sar ecx, 8
// 0062a3d2  c1fa08               sar edx, 8
// 0062a3d5  03d1                 add edx, ecx
// 0062a3d7  c1fe08               sar esi, 8
// 0062a3da  03f1                 add esi, ecx
// 0062a3dc  8d0c2b               lea ecx, [ebx + ebp]
// 0062a3df  69c9b5000000         imul ecx, ecx, 0xb5
// 0062a3e5  c1f908               sar ecx, 8
// 0062a3e8  8d1c39               lea ebx, [ecx + edi]
// 0062a3eb  2bf9                 sub edi, ecx
// 0062a3ed  8d0c17               lea ecx, [edi + edx]
// 0062a3f0  2bfa                 sub edi, edx
// 0062a3f2  8d1433               lea edx, [ebx + esi]
// 0062a3f5  2bde                 sub ebx, esi
// 0062a3f7  89486c               mov dword ptr [eax + 0x6c], ecx
// 0062a3fa  89782c               mov dword ptr [eax + 0x2c], edi
// 0062a3fd  8950ec               mov dword ptr [eax - 0x14], edx
// 0062a400  8998ac000000         mov dword ptr [eax + 0xac], ebx
// 0062a406  83c010               add eax, 0x10
// 0062a409  836c242801           sub dword ptr [esp + 0x28], 1
// 0062a40e  0f859cfcffff         jne 0x62a0b0
// 0062a414  5f                   pop edi
// 0062a415  5e                   pop esi
// 0062a416  5d                   pop ebp
// 0062a417  5b                   pop ebx
// 0062a418  83c414               add esp, 0x14
// 0062a41b  c3                   ret 
// library jpeg-6b/jfdctfst.c (function _jpeg_fdct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctfst.c
