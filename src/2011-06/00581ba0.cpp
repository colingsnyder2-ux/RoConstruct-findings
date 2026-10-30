// from server: 100% by auto
// roc 2011-06 00581ba0  unit: seg_00580000  size: 1740 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00581ba0
//
// 00581ba0  83ec14               sub esp, 0x14
// 00581ba3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00581ba7  53                   push ebx
// 00581ba8  55                   push ebp
// 00581ba9  56                   push esi
// 00581baa  83c008               add eax, 8
// 00581bad  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 00581bb5  57                   push edi
// 00581bb6  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00581bb9  8b78f8               mov edi, dword ptr [eax - 8]
// 00581bbc  8b7010               mov esi, dword ptr [eax + 0x10]
// 00581bbf  8d1439               lea edx, [ecx + edi]
// 00581bc2  2bf9                 sub edi, ecx
// 00581bc4  8b48fc               mov ecx, dword ptr [eax - 4]
// 00581bc7  8d1c31               lea ebx, [ecx + esi]
// 00581bca  2bce                 sub ecx, esi
// 00581bcc  8b700c               mov esi, dword ptr [eax + 0xc]
// 00581bcf  8be9                 mov ebp, ecx
// 00581bd1  8b08                 mov ecx, dword ptr [eax]
// 00581bd3  03f1                 add esi, ecx
// 00581bd5  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00581bd8  89742410             mov dword ptr [esp + 0x10], esi
// 00581bdc  8b7008               mov esi, dword ptr [eax + 8]
// 00581bdf  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00581be3  8b4804               mov ecx, dword ptr [eax + 4]
// 00581be6  03f1                 add esi, ecx
// 00581be8  2b4808               sub ecx, dword ptr [eax + 8]
// 00581beb  89742414             mov dword ptr [esp + 0x14], esi
// 00581bef  894c2418             mov dword ptr [esp + 0x18], ecx
// 00581bf3  8d0c16               lea ecx, [esi + edx]
// 00581bf6  2bd6                 sub edx, esi
// 00581bf8  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581bfc  03f3                 add esi, ebx
// 00581bfe  03f1                 add esi, ecx
// 00581c00  8970f8               mov dword ptr [eax - 8], esi
// 00581c03  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581c07  03f3                 add esi, ebx
// 00581c09  2bce                 sub ecx, esi
// 00581c0b  894808               mov dword ptr [eax + 8], ecx
// 00581c0e  8bca                 mov ecx, edx
// 00581c10  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00581c14  03cb                 add ecx, ebx
// 00581c16  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00581c1a  69c9b5000000         imul ecx, ecx, 0xb5
// 00581c20  c1f908               sar ecx, 8
// 00581c23  8d3411               lea esi, [ecx + edx]
// 00581c26  2bd1                 sub edx, ecx
// 00581c28  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581c2c  895010               mov dword ptr [eax + 0x10], edx
// 00581c2f  8d1419               lea edx, [ecx + ebx]
// 00581c32  8930                 mov dword ptr [eax], esi
// 00581c34  8d342f               lea esi, [edi + ebp]
// 00581c37  8bca                 mov ecx, edx
// 00581c39  69d28b000000         imul edx, edx, 0x8b
// 00581c3f  2bce                 sub ecx, esi
// 00581c41  69f64e010000         imul esi, esi, 0x14e
// 00581c47  6bc962               imul ecx, ecx, 0x62
// 00581c4a  c1f908               sar ecx, 8
// 00581c4d  c1fe08               sar esi, 8
// 00581c50  03f1                 add esi, ecx
// 00581c52  c1fa08               sar edx, 8
// 00581c55  03d1                 add edx, ecx
// 00581c57  8d0c2b               lea ecx, [ebx + ebp]
// 00581c5a  69c9b5000000         imul ecx, ecx, 0xb5
// 00581c60  c1f908               sar ecx, 8
// 00581c63  8d1c39               lea ebx, [ecx + edi]
// 00581c66  2bf9                 sub edi, ecx
// 00581c68  8d0c17               lea ecx, [edi + edx]
// 00581c6b  2bfa                 sub edi, edx
// 00581c6d  8d1433               lea edx, [ebx + esi]
// 00581c70  89480c               mov dword ptr [eax + 0xc], ecx
// 00581c73  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00581c76  897804               mov dword ptr [eax + 4], edi
// 00581c79  8b7818               mov edi, dword ptr [eax + 0x18]
// 00581c7c  2bde                 sub ebx, esi
// 00581c7e  8b7030               mov esi, dword ptr [eax + 0x30]
// 00581c81  8950fc               mov dword ptr [eax - 4], edx
// 00581c84  8d1439               lea edx, [ecx + edi]
// 00581c87  2bf9                 sub edi, ecx
// 00581c89  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00581c8c  895814               mov dword ptr [eax + 0x14], ebx
// 00581c8f  8d1c31               lea ebx, [ecx + esi]
// 00581c92  2bce                 sub ecx, esi
// 00581c94  8b702c               mov esi, dword ptr [eax + 0x2c]
// 00581c97  8be9                 mov ebp, ecx
// 00581c99  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00581c9c  03f1                 add esi, ecx
// 00581c9e  2b482c               sub ecx, dword ptr [eax + 0x2c]
// 00581ca1  89742410             mov dword ptr [esp + 0x10], esi
// 00581ca5  8b7028               mov esi, dword ptr [eax + 0x28]
// 00581ca8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00581cac  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00581caf  03f1                 add esi, ecx
// 00581cb1  2b4828               sub ecx, dword ptr [eax + 0x28]
// 00581cb4  89742414             mov dword ptr [esp + 0x14], esi
// 00581cb8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00581cbc  8d0c16               lea ecx, [esi + edx]
// 00581cbf  2bd6                 sub edx, esi
// 00581cc1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581cc5  03f3                 add esi, ebx
// 00581cc7  03f1                 add esi, ecx
// 00581cc9  897018               mov dword ptr [eax + 0x18], esi
// 00581ccc  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581cd0  03f3                 add esi, ebx
// 00581cd2  2bce                 sub ecx, esi
// 00581cd4  894828               mov dword ptr [eax + 0x28], ecx
// 00581cd7  8bca                 mov ecx, edx
// 00581cd9  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00581cdd  03cb                 add ecx, ebx
// 00581cdf  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00581ce3  69c9b5000000         imul ecx, ecx, 0xb5
// 00581ce9  c1f908               sar ecx, 8
// 00581cec  8d3411               lea esi, [ecx + edx]
// 00581cef  2bd1                 sub edx, ecx
// 00581cf1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581cf5  897020               mov dword ptr [eax + 0x20], esi
// 00581cf8  895030               mov dword ptr [eax + 0x30], edx
// 00581cfb  8d1419               lea edx, [ecx + ebx]
// 00581cfe  8d342f               lea esi, [edi + ebp]
// 00581d01  8bca                 mov ecx, edx
// 00581d03  69d28b000000         imul edx, edx, 0x8b
// 00581d09  2bce                 sub ecx, esi
// 00581d0b  69f64e010000         imul esi, esi, 0x14e
// 00581d11  6bc962               imul ecx, ecx, 0x62
// 00581d14  c1f908               sar ecx, 8
// 00581d17  c1fe08               sar esi, 8
// 00581d1a  03f1                 add esi, ecx
// 00581d1c  c1fa08               sar edx, 8
// 00581d1f  03d1                 add edx, ecx
// 00581d21  8d0c2b               lea ecx, [ebx + ebp]
// 00581d24  69c9b5000000         imul ecx, ecx, 0xb5
// 00581d2a  c1f908               sar ecx, 8
// 00581d2d  8d1c39               lea ebx, [ecx + edi]
// 00581d30  2bf9                 sub edi, ecx
// 00581d32  8d0c17               lea ecx, [edi + edx]
// 00581d35  2bfa                 sub edi, edx
// 00581d37  8d1433               lea edx, [ebx + esi]
// 00581d3a  89482c               mov dword ptr [eax + 0x2c], ecx
// 00581d3d  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00581d40  2bde                 sub ebx, esi
// 00581d42  8b7050               mov esi, dword ptr [eax + 0x50]
// 00581d45  897824               mov dword ptr [eax + 0x24], edi
// 00581d48  8b7838               mov edi, dword ptr [eax + 0x38]
// 00581d4b  89501c               mov dword ptr [eax + 0x1c], edx
// 00581d4e  8d1439               lea edx, [ecx + edi]
// 00581d51  2bf9                 sub edi, ecx
// 00581d53  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00581d56  895834               mov dword ptr [eax + 0x34], ebx
// 00581d59  8d1c31               lea ebx, [ecx + esi]
// 00581d5c  2bce                 sub ecx, esi
// 00581d5e  8b704c               mov esi, dword ptr [eax + 0x4c]
// 00581d61  8be9                 mov ebp, ecx
// 00581d63  8b4840               mov ecx, dword ptr [eax + 0x40]
// 00581d66  03f1                 add esi, ecx
// 00581d68  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 00581d6b  89742410             mov dword ptr [esp + 0x10], esi
// 00581d6f  8b7048               mov esi, dword ptr [eax + 0x48]
// 00581d72  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00581d76  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00581d79  03f1                 add esi, ecx
// 00581d7b  2b4848               sub ecx, dword ptr [eax + 0x48]
// 00581d7e  89742414             mov dword ptr [esp + 0x14], esi
// 00581d82  894c2418             mov dword ptr [esp + 0x18], ecx
// 00581d86  8d0c16               lea ecx, [esi + edx]
// 00581d89  2bd6                 sub edx, esi
// 00581d8b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581d8f  03f3                 add esi, ebx
// 00581d91  03f1                 add esi, ecx
// 00581d93  897038               mov dword ptr [eax + 0x38], esi
// 00581d96  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581d9a  03f3                 add esi, ebx
// 00581d9c  2bce                 sub ecx, esi
// 00581d9e  894848               mov dword ptr [eax + 0x48], ecx
// 00581da1  8bca                 mov ecx, edx
// 00581da3  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00581da7  03cb                 add ecx, ebx
// 00581da9  69c9b5000000         imul ecx, ecx, 0xb5
// 00581daf  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00581db3  c1f908               sar ecx, 8
// 00581db6  8d3411               lea esi, [ecx + edx]
// 00581db9  2bd1                 sub edx, ecx
// 00581dbb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581dbf  897040               mov dword ptr [eax + 0x40], esi
// 00581dc2  895050               mov dword ptr [eax + 0x50], edx
// 00581dc5  8d1419               lea edx, [ecx + ebx]
// 00581dc8  8bca                 mov ecx, edx
// 00581dca  69d28b000000         imul edx, edx, 0x8b
// 00581dd0  8d342f               lea esi, [edi + ebp]
// 00581dd3  2bce                 sub ecx, esi
// 00581dd5  69f64e010000         imul esi, esi, 0x14e
// 00581ddb  6bc962               imul ecx, ecx, 0x62
// 00581dde  c1f908               sar ecx, 8
// 00581de1  c1fe08               sar esi, 8
// 00581de4  03f1                 add esi, ecx
// 00581de6  c1fa08               sar edx, 8
// 00581de9  03d1                 add edx, ecx
// 00581deb  8d0c2b               lea ecx, [ebx + ebp]
// 00581dee  69c9b5000000         imul ecx, ecx, 0xb5
// 00581df4  c1f908               sar ecx, 8
// 00581df7  8d1c39               lea ebx, [ecx + edi]
// 00581dfa  2bf9                 sub edi, ecx
// 00581dfc  8d0c17               lea ecx, [edi + edx]
// 00581dff  89484c               mov dword ptr [eax + 0x4c], ecx
// 00581e02  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00581e05  2bfa                 sub edi, edx
// 00581e07  8d1433               lea edx, [ebx + esi]
// 00581e0a  2bde                 sub ebx, esi
// 00581e0c  8b7070               mov esi, dword ptr [eax + 0x70]
// 00581e0f  897844               mov dword ptr [eax + 0x44], edi
// 00581e12  8b7858               mov edi, dword ptr [eax + 0x58]
// 00581e15  89503c               mov dword ptr [eax + 0x3c], edx
// 00581e18  8d140f               lea edx, [edi + ecx]
// 00581e1b  2bf9                 sub edi, ecx
// 00581e1d  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00581e20  895854               mov dword ptr [eax + 0x54], ebx
// 00581e23  8d1c0e               lea ebx, [esi + ecx]
// 00581e26  2bce                 sub ecx, esi
// 00581e28  8b706c               mov esi, dword ptr [eax + 0x6c]
// 00581e2b  8be9                 mov ebp, ecx
// 00581e2d  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00581e30  03f1                 add esi, ecx
// 00581e32  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 00581e35  89742410             mov dword ptr [esp + 0x10], esi
// 00581e39  8b7068               mov esi, dword ptr [eax + 0x68]
// 00581e3c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00581e40  8b4864               mov ecx, dword ptr [eax + 0x64]
// 00581e43  03f1                 add esi, ecx
// 00581e45  2b4868               sub ecx, dword ptr [eax + 0x68]
// 00581e48  89742414             mov dword ptr [esp + 0x14], esi
// 00581e4c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00581e50  8d0c16               lea ecx, [esi + edx]
// 00581e53  2bd6                 sub edx, esi
// 00581e55  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581e59  03f3                 add esi, ebx
// 00581e5b  03f1                 add esi, ecx
// 00581e5d  897058               mov dword ptr [eax + 0x58], esi
// 00581e60  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581e64  03f3                 add esi, ebx
// 00581e66  2bce                 sub ecx, esi
// 00581e68  894868               mov dword ptr [eax + 0x68], ecx
// 00581e6b  8bca                 mov ecx, edx
// 00581e6d  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00581e71  03cb                 add ecx, ebx
// 00581e73  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00581e77  69c9b5000000         imul ecx, ecx, 0xb5
// 00581e7d  c1f908               sar ecx, 8
// 00581e80  8d3411               lea esi, [ecx + edx]
// 00581e83  2bd1                 sub edx, ecx
// 00581e85  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581e89  897060               mov dword ptr [eax + 0x60], esi
// 00581e8c  895070               mov dword ptr [eax + 0x70], edx
// 00581e8f  8d1419               lea edx, [ecx + ebx]
// 00581e92  8bca                 mov ecx, edx
// 00581e94  69d28b000000         imul edx, edx, 0x8b
// 00581e9a  8d342f               lea esi, [edi + ebp]
// 00581e9d  2bce                 sub ecx, esi
// 00581e9f  69f64e010000         imul esi, esi, 0x14e
// 00581ea5  6bc962               imul ecx, ecx, 0x62
// 00581ea8  c1f908               sar ecx, 8
// 00581eab  c1fa08               sar edx, 8
// 00581eae  03d1                 add edx, ecx
// 00581eb0  c1fe08               sar esi, 8
// 00581eb3  03f1                 add esi, ecx
// 00581eb5  8d0c2b               lea ecx, [ebx + ebp]
// 00581eb8  69c9b5000000         imul ecx, ecx, 0xb5
// 00581ebe  c1f908               sar ecx, 8
// 00581ec1  8d1c39               lea ebx, [ecx + edi]
// 00581ec4  2bf9                 sub edi, ecx
// 00581ec6  8d0c17               lea ecx, [edi + edx]
// 00581ec9  2bfa                 sub edi, edx
// 00581ecb  8d1433               lea edx, [ebx + esi]
// 00581ece  2bde                 sub ebx, esi
// 00581ed0  89486c               mov dword ptr [eax + 0x6c], ecx
// 00581ed3  897864               mov dword ptr [eax + 0x64], edi
// 00581ed6  89505c               mov dword ptr [eax + 0x5c], edx
// 00581ed9  895874               mov dword ptr [eax + 0x74], ebx
// 00581edc  83e880               sub eax, -0x80
// 00581edf  836c242001           sub dword ptr [esp + 0x20], 1
// 00581ee4  0f85ccfcffff         jne 0x581bb6
// 00581eea  8b442428             mov eax, dword ptr [esp + 0x28]
// 00581eee  83c040               add eax, 0x40
// 00581ef1  c744242802000000     mov dword ptr [esp + 0x28], 2
// 00581ef9  8da42400000000       lea esp, [esp]
// 00581f00  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 00581f06  8b78c0               mov edi, dword ptr [eax - 0x40]
// 00581f09  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 00581f0f  8d1439               lea edx, [ecx + edi]
// 00581f12  2bf9                 sub edi, ecx
// 00581f14  8b48e0               mov ecx, dword ptr [eax - 0x20]
// 00581f17  8d1c31               lea ebx, [ecx + esi]
// 00581f1a  2bce                 sub ecx, esi
// 00581f1c  8b7060               mov esi, dword ptr [eax + 0x60]
// 00581f1f  8be9                 mov ebp, ecx
// 00581f21  8b08                 mov ecx, dword ptr [eax]
// 00581f23  03f1                 add esi, ecx
// 00581f25  2b4860               sub ecx, dword ptr [eax + 0x60]
// 00581f28  89742410             mov dword ptr [esp + 0x10], esi
// 00581f2c  8b7040               mov esi, dword ptr [eax + 0x40]
// 00581f2f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00581f33  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00581f36  03f1                 add esi, ecx
// 00581f38  2b4840               sub ecx, dword ptr [eax + 0x40]
// 00581f3b  89742414             mov dword ptr [esp + 0x14], esi
// 00581f3f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00581f43  8d0c16               lea ecx, [esi + edx]
// 00581f46  2bd6                 sub edx, esi
// 00581f48  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581f4c  03f3                 add esi, ebx
// 00581f4e  03f1                 add esi, ecx
// 00581f50  8970c0               mov dword ptr [eax - 0x40], esi
// 00581f53  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581f57  03f3                 add esi, ebx
// 00581f59  2bce                 sub ecx, esi
// 00581f5b  894840               mov dword ptr [eax + 0x40], ecx
// 00581f5e  8bca                 mov ecx, edx
// 00581f60  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00581f64  03cb                 add ecx, ebx
// 00581f66  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00581f6a  69c9b5000000         imul ecx, ecx, 0xb5
// 00581f70  c1f908               sar ecx, 8
// 00581f73  8d3411               lea esi, [ecx + edx]
// 00581f76  2bd1                 sub edx, ecx
// 00581f78  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581f7c  899080000000         mov dword ptr [eax + 0x80], edx
// 00581f82  8d1419               lea edx, [ecx + ebx]
// 00581f85  8930                 mov dword ptr [eax], esi
// 00581f87  8d342f               lea esi, [edi + ebp]
// 00581f8a  8bca                 mov ecx, edx
// 00581f8c  69d28b000000         imul edx, edx, 0x8b
// 00581f92  2bce                 sub ecx, esi
// 00581f94  69f64e010000         imul esi, esi, 0x14e
// 00581f9a  6bc962               imul ecx, ecx, 0x62
// 00581f9d  c1f908               sar ecx, 8
// 00581fa0  c1fe08               sar esi, 8
// 00581fa3  03f1                 add esi, ecx
// 00581fa5  c1fa08               sar edx, 8
// 00581fa8  03d1                 add edx, ecx
// 00581faa  8d0c2b               lea ecx, [ebx + ebp]
// 00581fad  69c9b5000000         imul ecx, ecx, 0xb5
// 00581fb3  c1f908               sar ecx, 8
// 00581fb6  8d1c39               lea ebx, [ecx + edi]
// 00581fb9  2bf9                 sub edi, ecx
// 00581fbb  8d0c17               lea ecx, [edi + edx]
// 00581fbe  2bfa                 sub edi, edx
// 00581fc0  8d1433               lea edx, [ebx + esi]
// 00581fc3  894860               mov dword ptr [eax + 0x60], ecx
// 00581fc6  8b88a4000000         mov ecx, dword ptr [eax + 0xa4]
// 00581fcc  897820               mov dword ptr [eax + 0x20], edi
// 00581fcf  8b78c4               mov edi, dword ptr [eax - 0x3c]
// 00581fd2  2bde                 sub ebx, esi
// 00581fd4  8bb084000000         mov esi, dword ptr [eax + 0x84]
// 00581fda  8950e0               mov dword ptr [eax - 0x20], edx
// 00581fdd  8d1439               lea edx, [ecx + edi]
// 00581fe0  2bf9                 sub edi, ecx
// 00581fe2  8b48e4               mov ecx, dword ptr [eax - 0x1c]
// 00581fe5  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 00581feb  8d1c31               lea ebx, [ecx + esi]
// 00581fee  2bce                 sub ecx, esi
// 00581ff0  8b7064               mov esi, dword ptr [eax + 0x64]
// 00581ff3  8be9                 mov ebp, ecx
// 00581ff5  8b4804               mov ecx, dword ptr [eax + 4]
// 00581ff8  03f1                 add esi, ecx
// 00581ffa  2b4864               sub ecx, dword ptr [eax + 0x64]
// 00581ffd  89742410             mov dword ptr [esp + 0x10], esi
// 00582001  8b7044               mov esi, dword ptr [eax + 0x44]
// 00582004  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00582008  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0058200b  03f1                 add esi, ecx
// 0058200d  2b4844               sub ecx, dword ptr [eax + 0x44]
// 00582010  89742414             mov dword ptr [esp + 0x14], esi
// 00582014  894c2418             mov dword ptr [esp + 0x18], ecx
// 00582018  8d0c16               lea ecx, [esi + edx]
// 0058201b  2bd6                 sub edx, esi
// 0058201d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00582021  03f3                 add esi, ebx
// 00582023  03f1                 add esi, ecx
// 00582025  8970c4               mov dword ptr [eax - 0x3c], esi
// 00582028  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058202c  03f3                 add esi, ebx
// 0058202e  2bce                 sub ecx, esi
// 00582030  894844               mov dword ptr [eax + 0x44], ecx
// 00582033  8bca                 mov ecx, edx
// 00582035  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00582039  03cb                 add ecx, ebx
// 0058203b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058203f  69c9b5000000         imul ecx, ecx, 0xb5
// 00582045  c1f908               sar ecx, 8
// 00582048  8d3411               lea esi, [ecx + edx]
// 0058204b  2bd1                 sub edx, ecx
// 0058204d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00582051  897004               mov dword ptr [eax + 4], esi
// 00582054  899084000000         mov dword ptr [eax + 0x84], edx
// 0058205a  8d1419               lea edx, [ecx + ebx]
// 0058205d  8d342f               lea esi, [edi + ebp]
// 00582060  8bca                 mov ecx, edx
// 00582062  69d28b000000         imul edx, edx, 0x8b
// 00582068  2bce                 sub ecx, esi
// 0058206a  69f64e010000         imul esi, esi, 0x14e
// 00582070  6bc962               imul ecx, ecx, 0x62
// 00582073  c1f908               sar ecx, 8
// 00582076  c1fe08               sar esi, 8
// 00582079  03f1                 add esi, ecx
// 0058207b  c1fa08               sar edx, 8
// 0058207e  03d1                 add edx, ecx
// 00582080  8d0c2b               lea ecx, [ebx + ebp]
// 00582083  69c9b5000000         imul ecx, ecx, 0xb5
// 00582089  c1f908               sar ecx, 8
// 0058208c  8d1c39               lea ebx, [ecx + edi]
// 0058208f  2bf9                 sub edi, ecx
// 00582091  8d0c17               lea ecx, [edi + edx]
// 00582094  2bfa                 sub edi, edx
// 00582096  8d1433               lea edx, [ebx + esi]
// 00582099  894864               mov dword ptr [eax + 0x64], ecx
// 0058209c  8b88a8000000         mov ecx, dword ptr [eax + 0xa8]
// 005820a2  2bde                 sub ebx, esi
// 005820a4  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 005820aa  897824               mov dword ptr [eax + 0x24], edi
// 005820ad  8b78c8               mov edi, dword ptr [eax - 0x38]
// 005820b0  8950e4               mov dword ptr [eax - 0x1c], edx
// 005820b3  8d1439               lea edx, [ecx + edi]
// 005820b6  2bf9                 sub edi, ecx
// 005820b8  8b48e8               mov ecx, dword ptr [eax - 0x18]
// 005820bb  8998a4000000         mov dword ptr [eax + 0xa4], ebx
// 005820c1  8d1c31               lea ebx, [ecx + esi]
// 005820c4  2bce                 sub ecx, esi
// 005820c6  8b7068               mov esi, dword ptr [eax + 0x68]
// 005820c9  8be9                 mov ebp, ecx
// 005820cb  8b4808               mov ecx, dword ptr [eax + 8]
// 005820ce  03f1                 add esi, ecx
// 005820d0  2b4868               sub ecx, dword ptr [eax + 0x68]
// 005820d3  89742410             mov dword ptr [esp + 0x10], esi
// 005820d7  8b7048               mov esi, dword ptr [eax + 0x48]
// 005820da  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005820de  8b4828               mov ecx, dword ptr [eax + 0x28]
// 005820e1  03f1                 add esi, ecx
// 005820e3  2b4848               sub ecx, dword ptr [eax + 0x48]
// 005820e6  89742414             mov dword ptr [esp + 0x14], esi
// 005820ea  894c2418             mov dword ptr [esp + 0x18], ecx
// 005820ee  8d0c16               lea ecx, [esi + edx]
// 005820f1  2bd6                 sub edx, esi
// 005820f3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005820f7  03f3                 add esi, ebx
// 005820f9  03f1                 add esi, ecx
// 005820fb  8970c8               mov dword ptr [eax - 0x38], esi
// 005820fe  8b742410             mov esi, dword ptr [esp + 0x10]
// 00582102  03f3                 add esi, ebx
// 00582104  2bce                 sub ecx, esi
// 00582106  894848               mov dword ptr [eax + 0x48], ecx
// 00582109  8bca                 mov ecx, edx
// 0058210b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058210f  03cb                 add ecx, ebx
// 00582111  69c9b5000000         imul ecx, ecx, 0xb5
// 00582117  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058211b  c1f908               sar ecx, 8
// 0058211e  8d3411               lea esi, [ecx + edx]
// 00582121  2bd1                 sub edx, ecx
// 00582123  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00582127  897008               mov dword ptr [eax + 8], esi
// 0058212a  899088000000         mov dword ptr [eax + 0x88], edx
// 00582130  8d1419               lea edx, [ecx + ebx]
// 00582133  8bca                 mov ecx, edx
// 00582135  69d28b000000         imul edx, edx, 0x8b
// 0058213b  8d342f               lea esi, [edi + ebp]
// 0058213e  2bce                 sub ecx, esi
// 00582140  69f64e010000         imul esi, esi, 0x14e
// 00582146  6bc962               imul ecx, ecx, 0x62
// 00582149  c1f908               sar ecx, 8
// 0058214c  c1fe08               sar esi, 8
// 0058214f  03f1                 add esi, ecx
// 00582151  c1fa08               sar edx, 8
// 00582154  03d1                 add edx, ecx
// 00582156  8d0c2b               lea ecx, [ebx + ebp]
// 00582159  69c9b5000000         imul ecx, ecx, 0xb5
// 0058215f  c1f908               sar ecx, 8
// 00582162  8d1c39               lea ebx, [ecx + edi]
// 00582165  2bf9                 sub edi, ecx
// 00582167  8d0c17               lea ecx, [edi + edx]
// 0058216a  894868               mov dword ptr [eax + 0x68], ecx
// 0058216d  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 00582173  2bfa                 sub edi, edx
// 00582175  8d1433               lea edx, [ebx + esi]
// 00582178  2bde                 sub ebx, esi
// 0058217a  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 00582180  897828               mov dword ptr [eax + 0x28], edi
// 00582183  8b78cc               mov edi, dword ptr [eax - 0x34]
// 00582186  8950e8               mov dword ptr [eax - 0x18], edx
// 00582189  8d140f               lea edx, [edi + ecx]
// 0058218c  2bf9                 sub edi, ecx
// 0058218e  8b48ec               mov ecx, dword ptr [eax - 0x14]
// 00582191  8998a8000000         mov dword ptr [eax + 0xa8], ebx
// 00582197  8d1c0e               lea ebx, [esi + ecx]
// 0058219a  2bce                 sub ecx, esi
// 0058219c  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0058219f  8be9                 mov ebp, ecx
// 005821a1  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005821a4  03f1                 add esi, ecx
// 005821a6  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 005821a9  89742410             mov dword ptr [esp + 0x10], esi
// 005821ad  8b704c               mov esi, dword ptr [eax + 0x4c]
// 005821b0  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005821b4  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 005821b7  03f1                 add esi, ecx
// 005821b9  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 005821bc  89742414             mov dword ptr [esp + 0x14], esi
// 005821c0  894c2418             mov dword ptr [esp + 0x18], ecx
// 005821c4  8d0c16               lea ecx, [esi + edx]
// 005821c7  2bd6                 sub edx, esi
// 005821c9  8b742410             mov esi, dword ptr [esp + 0x10]
// 005821cd  03f3                 add esi, ebx
// 005821cf  03f1                 add esi, ecx
// 005821d1  8970cc               mov dword ptr [eax - 0x34], esi
// 005821d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005821d8  03f3                 add esi, ebx
// 005821da  2bce                 sub ecx, esi
// 005821dc  89484c               mov dword ptr [eax + 0x4c], ecx
// 005821df  8bca                 mov ecx, edx
// 005821e1  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005821e5  03cb                 add ecx, ebx
// 005821e7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005821eb  69c9b5000000         imul ecx, ecx, 0xb5
// 005821f1  c1f908               sar ecx, 8
// 005821f4  8d3411               lea esi, [ecx + edx]
// 005821f7  2bd1                 sub edx, ecx
// 005821f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005821fd  89700c               mov dword ptr [eax + 0xc], esi
// 00582200  89908c000000         mov dword ptr [eax + 0x8c], edx
// 00582206  8d1419               lea edx, [ecx + ebx]
// 00582209  8bca                 mov ecx, edx
// 0058220b  69d28b000000         imul edx, edx, 0x8b
// 00582211  8d342f               lea esi, [edi + ebp]
// 00582214  2bce                 sub ecx, esi
// 00582216  69f64e010000         imul esi, esi, 0x14e
// 0058221c  6bc962               imul ecx, ecx, 0x62
// 0058221f  c1f908               sar ecx, 8
// 00582222  c1fa08               sar edx, 8
// 00582225  03d1                 add edx, ecx
// 00582227  c1fe08               sar esi, 8
// 0058222a  03f1                 add esi, ecx
// 0058222c  8d0c2b               lea ecx, [ebx + ebp]
// 0058222f  69c9b5000000         imul ecx, ecx, 0xb5
// 00582235  c1f908               sar ecx, 8
// 00582238  8d1c39               lea ebx, [ecx + edi]
// 0058223b  2bf9                 sub edi, ecx
// 0058223d  8d0c17               lea ecx, [edi + edx]
// 00582240  2bfa                 sub edi, edx
// 00582242  8d1433               lea edx, [ebx + esi]
// 00582245  2bde                 sub ebx, esi
// 00582247  89486c               mov dword ptr [eax + 0x6c], ecx
// 0058224a  89782c               mov dword ptr [eax + 0x2c], edi
// 0058224d  8950ec               mov dword ptr [eax - 0x14], edx
// 00582250  8998ac000000         mov dword ptr [eax + 0xac], ebx
// 00582256  83c010               add eax, 0x10
// 00582259  836c242801           sub dword ptr [esp + 0x28], 1
// 0058225e  0f859cfcffff         jne 0x581f00
// 00582264  5f                   pop edi
// 00582265  5e                   pop esi
// 00582266  5d                   pop ebp
// 00582267  5b                   pop ebx
// 00582268  83c414               add esp, 0x14
// 0058226b  c3                   ret 
// library jpeg-6b/jfdctfst.c (function _jpeg_fdct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctfst.c
