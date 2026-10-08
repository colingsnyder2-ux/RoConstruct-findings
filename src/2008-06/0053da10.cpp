// from server: 100% by auto
// roc 2008-06 0053da10  unit: seg_00530000  size: 1740 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053da10
//
// 0053da10  83ec14               sub esp, 0x14
// 0053da13  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053da17  53                   push ebx
// 0053da18  55                   push ebp
// 0053da19  56                   push esi
// 0053da1a  83c008               add eax, 8
// 0053da1d  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 0053da25  57                   push edi
// 0053da26  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0053da29  8b78f8               mov edi, dword ptr [eax - 8]
// 0053da2c  8b7010               mov esi, dword ptr [eax + 0x10]
// 0053da2f  8d1439               lea edx, [ecx + edi]
// 0053da32  2bf9                 sub edi, ecx
// 0053da34  8b48fc               mov ecx, dword ptr [eax - 4]
// 0053da37  8d1c31               lea ebx, [ecx + esi]
// 0053da3a  2bce                 sub ecx, esi
// 0053da3c  8b700c               mov esi, dword ptr [eax + 0xc]
// 0053da3f  8be9                 mov ebp, ecx
// 0053da41  8b08                 mov ecx, dword ptr [eax]
// 0053da43  03f1                 add esi, ecx
// 0053da45  2b480c               sub ecx, dword ptr [eax + 0xc]
// 0053da48  89742410             mov dword ptr [esp + 0x10], esi
// 0053da4c  8b7008               mov esi, dword ptr [eax + 8]
// 0053da4f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053da53  8b4804               mov ecx, dword ptr [eax + 4]
// 0053da56  03f1                 add esi, ecx
// 0053da58  2b4808               sub ecx, dword ptr [eax + 8]
// 0053da5b  89742414             mov dword ptr [esp + 0x14], esi
// 0053da5f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053da63  8d0c16               lea ecx, [esi + edx]
// 0053da66  2bd6                 sub edx, esi
// 0053da68  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053da6c  03f3                 add esi, ebx
// 0053da6e  03f1                 add esi, ecx
// 0053da70  8970f8               mov dword ptr [eax - 8], esi
// 0053da73  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053da77  03f3                 add esi, ebx
// 0053da79  2bce                 sub ecx, esi
// 0053da7b  894808               mov dword ptr [eax + 8], ecx
// 0053da7e  8bca                 mov ecx, edx
// 0053da80  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053da84  03cb                 add ecx, ebx
// 0053da86  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053da8a  69c9b5000000         imul ecx, ecx, 0xb5
// 0053da90  c1f908               sar ecx, 8
// 0053da93  8d3411               lea esi, [ecx + edx]
// 0053da96  2bd1                 sub edx, ecx
// 0053da98  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053da9c  895010               mov dword ptr [eax + 0x10], edx
// 0053da9f  8d1419               lea edx, [ecx + ebx]
// 0053daa2  8930                 mov dword ptr [eax], esi
// 0053daa4  8d342f               lea esi, [edi + ebp]
// 0053daa7  8bca                 mov ecx, edx
// 0053daa9  69d28b000000         imul edx, edx, 0x8b
// 0053daaf  2bce                 sub ecx, esi
// 0053dab1  69f64e010000         imul esi, esi, 0x14e
// 0053dab7  6bc962               imul ecx, ecx, 0x62
// 0053daba  c1f908               sar ecx, 8
// 0053dabd  c1fe08               sar esi, 8
// 0053dac0  03f1                 add esi, ecx
// 0053dac2  c1fa08               sar edx, 8
// 0053dac5  03d1                 add edx, ecx
// 0053dac7  8d0c2b               lea ecx, [ebx + ebp]
// 0053daca  69c9b5000000         imul ecx, ecx, 0xb5
// 0053dad0  c1f908               sar ecx, 8
// 0053dad3  8d1c39               lea ebx, [ecx + edi]
// 0053dad6  2bf9                 sub edi, ecx
// 0053dad8  8d0c17               lea ecx, [edi + edx]
// 0053dadb  2bfa                 sub edi, edx
// 0053dadd  8d1433               lea edx, [ebx + esi]
// 0053dae0  89480c               mov dword ptr [eax + 0xc], ecx
// 0053dae3  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0053dae6  897804               mov dword ptr [eax + 4], edi
// 0053dae9  8b7818               mov edi, dword ptr [eax + 0x18]
// 0053daec  2bde                 sub ebx, esi
// 0053daee  8b7030               mov esi, dword ptr [eax + 0x30]
// 0053daf1  8950fc               mov dword ptr [eax - 4], edx
// 0053daf4  8d1439               lea edx, [ecx + edi]
// 0053daf7  2bf9                 sub edi, ecx
// 0053daf9  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0053dafc  895814               mov dword ptr [eax + 0x14], ebx
// 0053daff  8d1c31               lea ebx, [ecx + esi]
// 0053db02  2bce                 sub ecx, esi
// 0053db04  8b702c               mov esi, dword ptr [eax + 0x2c]
// 0053db07  8be9                 mov ebp, ecx
// 0053db09  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0053db0c  03f1                 add esi, ecx
// 0053db0e  2b482c               sub ecx, dword ptr [eax + 0x2c]
// 0053db11  89742410             mov dword ptr [esp + 0x10], esi
// 0053db15  8b7028               mov esi, dword ptr [eax + 0x28]
// 0053db18  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053db1c  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0053db1f  03f1                 add esi, ecx
// 0053db21  2b4828               sub ecx, dword ptr [eax + 0x28]
// 0053db24  89742414             mov dword ptr [esp + 0x14], esi
// 0053db28  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053db2c  8d0c16               lea ecx, [esi + edx]
// 0053db2f  2bd6                 sub edx, esi
// 0053db31  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053db35  03f3                 add esi, ebx
// 0053db37  03f1                 add esi, ecx
// 0053db39  897018               mov dword ptr [eax + 0x18], esi
// 0053db3c  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053db40  03f3                 add esi, ebx
// 0053db42  2bce                 sub ecx, esi
// 0053db44  894828               mov dword ptr [eax + 0x28], ecx
// 0053db47  8bca                 mov ecx, edx
// 0053db49  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053db4d  03cb                 add ecx, ebx
// 0053db4f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053db53  69c9b5000000         imul ecx, ecx, 0xb5
// 0053db59  c1f908               sar ecx, 8
// 0053db5c  8d3411               lea esi, [ecx + edx]
// 0053db5f  2bd1                 sub edx, ecx
// 0053db61  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053db65  897020               mov dword ptr [eax + 0x20], esi
// 0053db68  895030               mov dword ptr [eax + 0x30], edx
// 0053db6b  8d1419               lea edx, [ecx + ebx]
// 0053db6e  8d342f               lea esi, [edi + ebp]
// 0053db71  8bca                 mov ecx, edx
// 0053db73  69d28b000000         imul edx, edx, 0x8b
// 0053db79  2bce                 sub ecx, esi
// 0053db7b  69f64e010000         imul esi, esi, 0x14e
// 0053db81  6bc962               imul ecx, ecx, 0x62
// 0053db84  c1f908               sar ecx, 8
// 0053db87  c1fe08               sar esi, 8
// 0053db8a  03f1                 add esi, ecx
// 0053db8c  c1fa08               sar edx, 8
// 0053db8f  03d1                 add edx, ecx
// 0053db91  8d0c2b               lea ecx, [ebx + ebp]
// 0053db94  69c9b5000000         imul ecx, ecx, 0xb5
// 0053db9a  c1f908               sar ecx, 8
// 0053db9d  8d1c39               lea ebx, [ecx + edi]
// 0053dba0  2bf9                 sub edi, ecx
// 0053dba2  8d0c17               lea ecx, [edi + edx]
// 0053dba5  2bfa                 sub edi, edx
// 0053dba7  8d1433               lea edx, [ebx + esi]
// 0053dbaa  89482c               mov dword ptr [eax + 0x2c], ecx
// 0053dbad  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0053dbb0  2bde                 sub ebx, esi
// 0053dbb2  8b7050               mov esi, dword ptr [eax + 0x50]
// 0053dbb5  897824               mov dword ptr [eax + 0x24], edi
// 0053dbb8  8b7838               mov edi, dword ptr [eax + 0x38]
// 0053dbbb  89501c               mov dword ptr [eax + 0x1c], edx
// 0053dbbe  8d1439               lea edx, [ecx + edi]
// 0053dbc1  2bf9                 sub edi, ecx
// 0053dbc3  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0053dbc6  895834               mov dword ptr [eax + 0x34], ebx
// 0053dbc9  8d1c31               lea ebx, [ecx + esi]
// 0053dbcc  2bce                 sub ecx, esi
// 0053dbce  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0053dbd1  8be9                 mov ebp, ecx
// 0053dbd3  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0053dbd6  03f1                 add esi, ecx
// 0053dbd8  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0053dbdb  89742410             mov dword ptr [esp + 0x10], esi
// 0053dbdf  8b7048               mov esi, dword ptr [eax + 0x48]
// 0053dbe2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053dbe6  8b4844               mov ecx, dword ptr [eax + 0x44]
// 0053dbe9  03f1                 add esi, ecx
// 0053dbeb  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0053dbee  89742414             mov dword ptr [esp + 0x14], esi
// 0053dbf2  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053dbf6  8d0c16               lea ecx, [esi + edx]
// 0053dbf9  2bd6                 sub edx, esi
// 0053dbfb  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053dbff  03f3                 add esi, ebx
// 0053dc01  03f1                 add esi, ecx
// 0053dc03  897038               mov dword ptr [eax + 0x38], esi
// 0053dc06  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053dc0a  03f3                 add esi, ebx
// 0053dc0c  2bce                 sub ecx, esi
// 0053dc0e  894848               mov dword ptr [eax + 0x48], ecx
// 0053dc11  8bca                 mov ecx, edx
// 0053dc13  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053dc17  03cb                 add ecx, ebx
// 0053dc19  69c9b5000000         imul ecx, ecx, 0xb5
// 0053dc1f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053dc23  c1f908               sar ecx, 8
// 0053dc26  8d3411               lea esi, [ecx + edx]
// 0053dc29  2bd1                 sub edx, ecx
// 0053dc2b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053dc2f  897040               mov dword ptr [eax + 0x40], esi
// 0053dc32  895050               mov dword ptr [eax + 0x50], edx
// 0053dc35  8d1419               lea edx, [ecx + ebx]
// 0053dc38  8bca                 mov ecx, edx
// 0053dc3a  69d28b000000         imul edx, edx, 0x8b
// 0053dc40  8d342f               lea esi, [edi + ebp]
// 0053dc43  2bce                 sub ecx, esi
// 0053dc45  69f64e010000         imul esi, esi, 0x14e
// 0053dc4b  6bc962               imul ecx, ecx, 0x62
// 0053dc4e  c1f908               sar ecx, 8
// 0053dc51  c1fe08               sar esi, 8
// 0053dc54  03f1                 add esi, ecx
// 0053dc56  c1fa08               sar edx, 8
// 0053dc59  03d1                 add edx, ecx
// 0053dc5b  8d0c2b               lea ecx, [ebx + ebp]
// 0053dc5e  69c9b5000000         imul ecx, ecx, 0xb5
// 0053dc64  c1f908               sar ecx, 8
// 0053dc67  8d1c39               lea ebx, [ecx + edi]
// 0053dc6a  2bf9                 sub edi, ecx
// 0053dc6c  8d0c17               lea ecx, [edi + edx]
// 0053dc6f  89484c               mov dword ptr [eax + 0x4c], ecx
// 0053dc72  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0053dc75  2bfa                 sub edi, edx
// 0053dc77  8d1433               lea edx, [ebx + esi]
// 0053dc7a  2bde                 sub ebx, esi
// 0053dc7c  8b7070               mov esi, dword ptr [eax + 0x70]
// 0053dc7f  897844               mov dword ptr [eax + 0x44], edi
// 0053dc82  8b7858               mov edi, dword ptr [eax + 0x58]
// 0053dc85  89503c               mov dword ptr [eax + 0x3c], edx
// 0053dc88  8d140f               lea edx, [edi + ecx]
// 0053dc8b  2bf9                 sub edi, ecx
// 0053dc8d  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0053dc90  895854               mov dword ptr [eax + 0x54], ebx
// 0053dc93  8d1c0e               lea ebx, [esi + ecx]
// 0053dc96  2bce                 sub ecx, esi
// 0053dc98  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0053dc9b  8be9                 mov ebp, ecx
// 0053dc9d  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0053dca0  03f1                 add esi, ecx
// 0053dca2  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0053dca5  89742410             mov dword ptr [esp + 0x10], esi
// 0053dca9  8b7068               mov esi, dword ptr [eax + 0x68]
// 0053dcac  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053dcb0  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0053dcb3  03f1                 add esi, ecx
// 0053dcb5  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0053dcb8  89742414             mov dword ptr [esp + 0x14], esi
// 0053dcbc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053dcc0  8d0c16               lea ecx, [esi + edx]
// 0053dcc3  2bd6                 sub edx, esi
// 0053dcc5  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053dcc9  03f3                 add esi, ebx
// 0053dccb  03f1                 add esi, ecx
// 0053dccd  897058               mov dword ptr [eax + 0x58], esi
// 0053dcd0  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053dcd4  03f3                 add esi, ebx
// 0053dcd6  2bce                 sub ecx, esi
// 0053dcd8  894868               mov dword ptr [eax + 0x68], ecx
// 0053dcdb  8bca                 mov ecx, edx
// 0053dcdd  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053dce1  03cb                 add ecx, ebx
// 0053dce3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053dce7  69c9b5000000         imul ecx, ecx, 0xb5
// 0053dced  c1f908               sar ecx, 8
// 0053dcf0  8d3411               lea esi, [ecx + edx]
// 0053dcf3  2bd1                 sub edx, ecx
// 0053dcf5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053dcf9  897060               mov dword ptr [eax + 0x60], esi
// 0053dcfc  895070               mov dword ptr [eax + 0x70], edx
// 0053dcff  8d1419               lea edx, [ecx + ebx]
// 0053dd02  8bca                 mov ecx, edx
// 0053dd04  69d28b000000         imul edx, edx, 0x8b
// 0053dd0a  8d342f               lea esi, [edi + ebp]
// 0053dd0d  2bce                 sub ecx, esi
// 0053dd0f  69f64e010000         imul esi, esi, 0x14e
// 0053dd15  6bc962               imul ecx, ecx, 0x62
// 0053dd18  c1f908               sar ecx, 8
// 0053dd1b  c1fa08               sar edx, 8
// 0053dd1e  03d1                 add edx, ecx
// 0053dd20  c1fe08               sar esi, 8
// 0053dd23  03f1                 add esi, ecx
// 0053dd25  8d0c2b               lea ecx, [ebx + ebp]
// 0053dd28  69c9b5000000         imul ecx, ecx, 0xb5
// 0053dd2e  c1f908               sar ecx, 8
// 0053dd31  8d1c39               lea ebx, [ecx + edi]
// 0053dd34  2bf9                 sub edi, ecx
// 0053dd36  8d0c17               lea ecx, [edi + edx]
// 0053dd39  2bfa                 sub edi, edx
// 0053dd3b  8d1433               lea edx, [ebx + esi]
// 0053dd3e  2bde                 sub ebx, esi
// 0053dd40  89486c               mov dword ptr [eax + 0x6c], ecx
// 0053dd43  897864               mov dword ptr [eax + 0x64], edi
// 0053dd46  89505c               mov dword ptr [eax + 0x5c], edx
// 0053dd49  895874               mov dword ptr [eax + 0x74], ebx
// 0053dd4c  83e880               sub eax, -0x80
// 0053dd4f  836c242001           sub dword ptr [esp + 0x20], 1
// 0053dd54  0f85ccfcffff         jne 0x53da26
// 0053dd5a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053dd5e  83c040               add eax, 0x40
// 0053dd61  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0053dd69  8da42400000000       lea esp, [esp]
// 0053dd70  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0053dd76  8b78c0               mov edi, dword ptr [eax - 0x40]
// 0053dd79  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 0053dd7f  8d1439               lea edx, [ecx + edi]
// 0053dd82  2bf9                 sub edi, ecx
// 0053dd84  8b48e0               mov ecx, dword ptr [eax - 0x20]
// 0053dd87  8d1c31               lea ebx, [ecx + esi]
// 0053dd8a  2bce                 sub ecx, esi
// 0053dd8c  8b7060               mov esi, dword ptr [eax + 0x60]
// 0053dd8f  8be9                 mov ebp, ecx
// 0053dd91  8b08                 mov ecx, dword ptr [eax]
// 0053dd93  03f1                 add esi, ecx
// 0053dd95  2b4860               sub ecx, dword ptr [eax + 0x60]
// 0053dd98  89742410             mov dword ptr [esp + 0x10], esi
// 0053dd9c  8b7040               mov esi, dword ptr [eax + 0x40]
// 0053dd9f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053dda3  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0053dda6  03f1                 add esi, ecx
// 0053dda8  2b4840               sub ecx, dword ptr [eax + 0x40]
// 0053ddab  89742414             mov dword ptr [esp + 0x14], esi
// 0053ddaf  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053ddb3  8d0c16               lea ecx, [esi + edx]
// 0053ddb6  2bd6                 sub edx, esi
// 0053ddb8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053ddbc  03f3                 add esi, ebx
// 0053ddbe  03f1                 add esi, ecx
// 0053ddc0  8970c0               mov dword ptr [eax - 0x40], esi
// 0053ddc3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053ddc7  03f3                 add esi, ebx
// 0053ddc9  2bce                 sub ecx, esi
// 0053ddcb  894840               mov dword ptr [eax + 0x40], ecx
// 0053ddce  8bca                 mov ecx, edx
// 0053ddd0  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053ddd4  03cb                 add ecx, ebx
// 0053ddd6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053ddda  69c9b5000000         imul ecx, ecx, 0xb5
// 0053dde0  c1f908               sar ecx, 8
// 0053dde3  8d3411               lea esi, [ecx + edx]
// 0053dde6  2bd1                 sub edx, ecx
// 0053dde8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053ddec  899080000000         mov dword ptr [eax + 0x80], edx
// 0053ddf2  8d1419               lea edx, [ecx + ebx]
// 0053ddf5  8930                 mov dword ptr [eax], esi
// 0053ddf7  8d342f               lea esi, [edi + ebp]
// 0053ddfa  8bca                 mov ecx, edx
// 0053ddfc  69d28b000000         imul edx, edx, 0x8b
// 0053de02  2bce                 sub ecx, esi
// 0053de04  69f64e010000         imul esi, esi, 0x14e
// 0053de0a  6bc962               imul ecx, ecx, 0x62
// 0053de0d  c1f908               sar ecx, 8
// 0053de10  c1fe08               sar esi, 8
// 0053de13  03f1                 add esi, ecx
// 0053de15  c1fa08               sar edx, 8
// 0053de18  03d1                 add edx, ecx
// 0053de1a  8d0c2b               lea ecx, [ebx + ebp]
// 0053de1d  69c9b5000000         imul ecx, ecx, 0xb5
// 0053de23  c1f908               sar ecx, 8
// 0053de26  8d1c39               lea ebx, [ecx + edi]
// 0053de29  2bf9                 sub edi, ecx
// 0053de2b  8d0c17               lea ecx, [edi + edx]
// 0053de2e  2bfa                 sub edi, edx
// 0053de30  8d1433               lea edx, [ebx + esi]
// 0053de33  894860               mov dword ptr [eax + 0x60], ecx
// 0053de36  8b88a4000000         mov ecx, dword ptr [eax + 0xa4]
// 0053de3c  897820               mov dword ptr [eax + 0x20], edi
// 0053de3f  8b78c4               mov edi, dword ptr [eax - 0x3c]
// 0053de42  2bde                 sub ebx, esi
// 0053de44  8bb084000000         mov esi, dword ptr [eax + 0x84]
// 0053de4a  8950e0               mov dword ptr [eax - 0x20], edx
// 0053de4d  8d1439               lea edx, [ecx + edi]
// 0053de50  2bf9                 sub edi, ecx
// 0053de52  8b48e4               mov ecx, dword ptr [eax - 0x1c]
// 0053de55  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0053de5b  8d1c31               lea ebx, [ecx + esi]
// 0053de5e  2bce                 sub ecx, esi
// 0053de60  8b7064               mov esi, dword ptr [eax + 0x64]
// 0053de63  8be9                 mov ebp, ecx
// 0053de65  8b4804               mov ecx, dword ptr [eax + 4]
// 0053de68  03f1                 add esi, ecx
// 0053de6a  2b4864               sub ecx, dword ptr [eax + 0x64]
// 0053de6d  89742410             mov dword ptr [esp + 0x10], esi
// 0053de71  8b7044               mov esi, dword ptr [eax + 0x44]
// 0053de74  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053de78  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0053de7b  03f1                 add esi, ecx
// 0053de7d  2b4844               sub ecx, dword ptr [eax + 0x44]
// 0053de80  89742414             mov dword ptr [esp + 0x14], esi
// 0053de84  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053de88  8d0c16               lea ecx, [esi + edx]
// 0053de8b  2bd6                 sub edx, esi
// 0053de8d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053de91  03f3                 add esi, ebx
// 0053de93  03f1                 add esi, ecx
// 0053de95  8970c4               mov dword ptr [eax - 0x3c], esi
// 0053de98  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053de9c  03f3                 add esi, ebx
// 0053de9e  2bce                 sub ecx, esi
// 0053dea0  894844               mov dword ptr [eax + 0x44], ecx
// 0053dea3  8bca                 mov ecx, edx
// 0053dea5  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053dea9  03cb                 add ecx, ebx
// 0053deab  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053deaf  69c9b5000000         imul ecx, ecx, 0xb5
// 0053deb5  c1f908               sar ecx, 8
// 0053deb8  8d3411               lea esi, [ecx + edx]
// 0053debb  2bd1                 sub edx, ecx
// 0053debd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053dec1  897004               mov dword ptr [eax + 4], esi
// 0053dec4  899084000000         mov dword ptr [eax + 0x84], edx
// 0053deca  8d1419               lea edx, [ecx + ebx]
// 0053decd  8d342f               lea esi, [edi + ebp]
// 0053ded0  8bca                 mov ecx, edx
// 0053ded2  69d28b000000         imul edx, edx, 0x8b
// 0053ded8  2bce                 sub ecx, esi
// 0053deda  69f64e010000         imul esi, esi, 0x14e
// 0053dee0  6bc962               imul ecx, ecx, 0x62
// 0053dee3  c1f908               sar ecx, 8
// 0053dee6  c1fe08               sar esi, 8
// 0053dee9  03f1                 add esi, ecx
// 0053deeb  c1fa08               sar edx, 8
// 0053deee  03d1                 add edx, ecx
// 0053def0  8d0c2b               lea ecx, [ebx + ebp]
// 0053def3  69c9b5000000         imul ecx, ecx, 0xb5
// 0053def9  c1f908               sar ecx, 8
// 0053defc  8d1c39               lea ebx, [ecx + edi]
// 0053deff  2bf9                 sub edi, ecx
// 0053df01  8d0c17               lea ecx, [edi + edx]
// 0053df04  2bfa                 sub edi, edx
// 0053df06  8d1433               lea edx, [ebx + esi]
// 0053df09  894864               mov dword ptr [eax + 0x64], ecx
// 0053df0c  8b88a8000000         mov ecx, dword ptr [eax + 0xa8]
// 0053df12  2bde                 sub ebx, esi
// 0053df14  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 0053df1a  897824               mov dword ptr [eax + 0x24], edi
// 0053df1d  8b78c8               mov edi, dword ptr [eax - 0x38]
// 0053df20  8950e4               mov dword ptr [eax - 0x1c], edx
// 0053df23  8d1439               lea edx, [ecx + edi]
// 0053df26  2bf9                 sub edi, ecx
// 0053df28  8b48e8               mov ecx, dword ptr [eax - 0x18]
// 0053df2b  8998a4000000         mov dword ptr [eax + 0xa4], ebx
// 0053df31  8d1c31               lea ebx, [ecx + esi]
// 0053df34  2bce                 sub ecx, esi
// 0053df36  8b7068               mov esi, dword ptr [eax + 0x68]
// 0053df39  8be9                 mov ebp, ecx
// 0053df3b  8b4808               mov ecx, dword ptr [eax + 8]
// 0053df3e  03f1                 add esi, ecx
// 0053df40  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0053df43  89742410             mov dword ptr [esp + 0x10], esi
// 0053df47  8b7048               mov esi, dword ptr [eax + 0x48]
// 0053df4a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053df4e  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0053df51  03f1                 add esi, ecx
// 0053df53  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0053df56  89742414             mov dword ptr [esp + 0x14], esi
// 0053df5a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053df5e  8d0c16               lea ecx, [esi + edx]
// 0053df61  2bd6                 sub edx, esi
// 0053df63  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053df67  03f3                 add esi, ebx
// 0053df69  03f1                 add esi, ecx
// 0053df6b  8970c8               mov dword ptr [eax - 0x38], esi
// 0053df6e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053df72  03f3                 add esi, ebx
// 0053df74  2bce                 sub ecx, esi
// 0053df76  894848               mov dword ptr [eax + 0x48], ecx
// 0053df79  8bca                 mov ecx, edx
// 0053df7b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053df7f  03cb                 add ecx, ebx
// 0053df81  69c9b5000000         imul ecx, ecx, 0xb5
// 0053df87  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053df8b  c1f908               sar ecx, 8
// 0053df8e  8d3411               lea esi, [ecx + edx]
// 0053df91  2bd1                 sub edx, ecx
// 0053df93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053df97  897008               mov dword ptr [eax + 8], esi
// 0053df9a  899088000000         mov dword ptr [eax + 0x88], edx
// 0053dfa0  8d1419               lea edx, [ecx + ebx]
// 0053dfa3  8bca                 mov ecx, edx
// 0053dfa5  69d28b000000         imul edx, edx, 0x8b
// 0053dfab  8d342f               lea esi, [edi + ebp]
// 0053dfae  2bce                 sub ecx, esi
// 0053dfb0  69f64e010000         imul esi, esi, 0x14e
// 0053dfb6  6bc962               imul ecx, ecx, 0x62
// 0053dfb9  c1f908               sar ecx, 8
// 0053dfbc  c1fe08               sar esi, 8
// 0053dfbf  03f1                 add esi, ecx
// 0053dfc1  c1fa08               sar edx, 8
// 0053dfc4  03d1                 add edx, ecx
// 0053dfc6  8d0c2b               lea ecx, [ebx + ebp]
// 0053dfc9  69c9b5000000         imul ecx, ecx, 0xb5
// 0053dfcf  c1f908               sar ecx, 8
// 0053dfd2  8d1c39               lea ebx, [ecx + edi]
// 0053dfd5  2bf9                 sub edi, ecx
// 0053dfd7  8d0c17               lea ecx, [edi + edx]
// 0053dfda  894868               mov dword ptr [eax + 0x68], ecx
// 0053dfdd  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 0053dfe3  2bfa                 sub edi, edx
// 0053dfe5  8d1433               lea edx, [ebx + esi]
// 0053dfe8  2bde                 sub ebx, esi
// 0053dfea  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 0053dff0  897828               mov dword ptr [eax + 0x28], edi
// 0053dff3  8b78cc               mov edi, dword ptr [eax - 0x34]
// 0053dff6  8950e8               mov dword ptr [eax - 0x18], edx
// 0053dff9  8d140f               lea edx, [edi + ecx]
// 0053dffc  2bf9                 sub edi, ecx
// 0053dffe  8b48ec               mov ecx, dword ptr [eax - 0x14]
// 0053e001  8998a8000000         mov dword ptr [eax + 0xa8], ebx
// 0053e007  8d1c0e               lea ebx, [esi + ecx]
// 0053e00a  2bce                 sub ecx, esi
// 0053e00c  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0053e00f  8be9                 mov ebp, ecx
// 0053e011  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0053e014  03f1                 add esi, ecx
// 0053e016  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0053e019  89742410             mov dword ptr [esp + 0x10], esi
// 0053e01d  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0053e020  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053e024  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0053e027  03f1                 add esi, ecx
// 0053e029  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0053e02c  89742414             mov dword ptr [esp + 0x14], esi
// 0053e030  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053e034  8d0c16               lea ecx, [esi + edx]
// 0053e037  2bd6                 sub edx, esi
// 0053e039  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053e03d  03f3                 add esi, ebx
// 0053e03f  03f1                 add esi, ecx
// 0053e041  8970cc               mov dword ptr [eax - 0x34], esi
// 0053e044  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053e048  03f3                 add esi, ebx
// 0053e04a  2bce                 sub ecx, esi
// 0053e04c  89484c               mov dword ptr [eax + 0x4c], ecx
// 0053e04f  8bca                 mov ecx, edx
// 0053e051  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053e055  03cb                 add ecx, ebx
// 0053e057  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053e05b  69c9b5000000         imul ecx, ecx, 0xb5
// 0053e061  c1f908               sar ecx, 8
// 0053e064  8d3411               lea esi, [ecx + edx]
// 0053e067  2bd1                 sub edx, ecx
// 0053e069  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053e06d  89700c               mov dword ptr [eax + 0xc], esi
// 0053e070  89908c000000         mov dword ptr [eax + 0x8c], edx
// 0053e076  8d1419               lea edx, [ecx + ebx]
// 0053e079  8bca                 mov ecx, edx
// 0053e07b  69d28b000000         imul edx, edx, 0x8b
// 0053e081  8d342f               lea esi, [edi + ebp]
// 0053e084  2bce                 sub ecx, esi
// 0053e086  69f64e010000         imul esi, esi, 0x14e
// 0053e08c  6bc962               imul ecx, ecx, 0x62
// 0053e08f  c1f908               sar ecx, 8
// 0053e092  c1fa08               sar edx, 8
// 0053e095  03d1                 add edx, ecx
// 0053e097  c1fe08               sar esi, 8
// 0053e09a  03f1                 add esi, ecx
// 0053e09c  8d0c2b               lea ecx, [ebx + ebp]
// 0053e09f  69c9b5000000         imul ecx, ecx, 0xb5
// 0053e0a5  c1f908               sar ecx, 8
// 0053e0a8  8d1c39               lea ebx, [ecx + edi]
// 0053e0ab  2bf9                 sub edi, ecx
// 0053e0ad  8d0c17               lea ecx, [edi + edx]
// 0053e0b0  2bfa                 sub edi, edx
// 0053e0b2  8d1433               lea edx, [ebx + esi]
// 0053e0b5  2bde                 sub ebx, esi
// 0053e0b7  89486c               mov dword ptr [eax + 0x6c], ecx
// 0053e0ba  89782c               mov dword ptr [eax + 0x2c], edi
// 0053e0bd  8950ec               mov dword ptr [eax - 0x14], edx
// 0053e0c0  8998ac000000         mov dword ptr [eax + 0xac], ebx
// 0053e0c6  83c010               add eax, 0x10
// 0053e0c9  836c242801           sub dword ptr [esp + 0x28], 1
// 0053e0ce  0f859cfcffff         jne 0x53dd70
// 0053e0d4  5f                   pop edi
// 0053e0d5  5e                   pop esi
// 0053e0d6  5d                   pop ebp
// 0053e0d7  5b                   pop ebx
// 0053e0d8  83c414               add esp, 0x14
// 0053e0db  c3                   ret 
// library jpeg-6b/jfdctfst.c (function _jpeg_fdct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctfst.c
