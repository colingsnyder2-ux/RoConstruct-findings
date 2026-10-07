// roc 2012-06 0066d2b0  unit: seg_00660000  size: 1740 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066d2b0
//
// 0066d2b0  83ec14               sub esp, 0x14
// 0066d2b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066d2b7  53                   push ebx
// 0066d2b8  55                   push ebp
// 0066d2b9  56                   push esi
// 0066d2ba  83c008               add eax, 8
// 0066d2bd  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 0066d2c5  57                   push edi
// 0066d2c6  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0066d2c9  8b78f8               mov edi, dword ptr [eax - 8]
// 0066d2cc  8b7010               mov esi, dword ptr [eax + 0x10]
// 0066d2cf  8d1439               lea edx, [ecx + edi]
// 0066d2d2  2bf9                 sub edi, ecx
// 0066d2d4  8b48fc               mov ecx, dword ptr [eax - 4]
// 0066d2d7  8d1c31               lea ebx, [ecx + esi]
// 0066d2da  2bce                 sub ecx, esi
// 0066d2dc  8b700c               mov esi, dword ptr [eax + 0xc]
// 0066d2df  8be9                 mov ebp, ecx
// 0066d2e1  8b08                 mov ecx, dword ptr [eax]
// 0066d2e3  03f1                 add esi, ecx
// 0066d2e5  2b480c               sub ecx, dword ptr [eax + 0xc]
// 0066d2e8  89742410             mov dword ptr [esp + 0x10], esi
// 0066d2ec  8b7008               mov esi, dword ptr [eax + 8]
// 0066d2ef  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066d2f3  8b4804               mov ecx, dword ptr [eax + 4]
// 0066d2f6  03f1                 add esi, ecx
// 0066d2f8  2b4808               sub ecx, dword ptr [eax + 8]
// 0066d2fb  89742414             mov dword ptr [esp + 0x14], esi
// 0066d2ff  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066d303  8d0c16               lea ecx, [esi + edx]
// 0066d306  2bd6                 sub edx, esi
// 0066d308  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d30c  03f3                 add esi, ebx
// 0066d30e  03f1                 add esi, ecx
// 0066d310  8970f8               mov dword ptr [eax - 8], esi
// 0066d313  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d317  03f3                 add esi, ebx
// 0066d319  2bce                 sub ecx, esi
// 0066d31b  894808               mov dword ptr [eax + 8], ecx
// 0066d31e  8bca                 mov ecx, edx
// 0066d320  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d324  03cb                 add ecx, ebx
// 0066d326  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d32a  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d330  c1f908               sar ecx, 8
// 0066d333  8d3411               lea esi, [ecx + edx]
// 0066d336  2bd1                 sub edx, ecx
// 0066d338  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d33c  895010               mov dword ptr [eax + 0x10], edx
// 0066d33f  8d1419               lea edx, [ecx + ebx]
// 0066d342  8930                 mov dword ptr [eax], esi
// 0066d344  8d342f               lea esi, [edi + ebp]
// 0066d347  8bca                 mov ecx, edx
// 0066d349  69d28b000000         imul edx, edx, 0x8b
// 0066d34f  2bce                 sub ecx, esi
// 0066d351  69f64e010000         imul esi, esi, 0x14e
// 0066d357  6bc962               imul ecx, ecx, 0x62
// 0066d35a  c1f908               sar ecx, 8
// 0066d35d  c1fe08               sar esi, 8
// 0066d360  03f1                 add esi, ecx
// 0066d362  c1fa08               sar edx, 8
// 0066d365  03d1                 add edx, ecx
// 0066d367  8d0c2b               lea ecx, [ebx + ebp]
// 0066d36a  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d370  c1f908               sar ecx, 8
// 0066d373  8d1c39               lea ebx, [ecx + edi]
// 0066d376  2bf9                 sub edi, ecx
// 0066d378  8d0c17               lea ecx, [edi + edx]
// 0066d37b  2bfa                 sub edi, edx
// 0066d37d  8d1433               lea edx, [ebx + esi]
// 0066d380  89480c               mov dword ptr [eax + 0xc], ecx
// 0066d383  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0066d386  897804               mov dword ptr [eax + 4], edi
// 0066d389  8b7818               mov edi, dword ptr [eax + 0x18]
// 0066d38c  2bde                 sub ebx, esi
// 0066d38e  8b7030               mov esi, dword ptr [eax + 0x30]
// 0066d391  8950fc               mov dword ptr [eax - 4], edx
// 0066d394  8d1439               lea edx, [ecx + edi]
// 0066d397  2bf9                 sub edi, ecx
// 0066d399  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0066d39c  895814               mov dword ptr [eax + 0x14], ebx
// 0066d39f  8d1c31               lea ebx, [ecx + esi]
// 0066d3a2  2bce                 sub ecx, esi
// 0066d3a4  8b702c               mov esi, dword ptr [eax + 0x2c]
// 0066d3a7  8be9                 mov ebp, ecx
// 0066d3a9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0066d3ac  03f1                 add esi, ecx
// 0066d3ae  2b482c               sub ecx, dword ptr [eax + 0x2c]
// 0066d3b1  89742410             mov dword ptr [esp + 0x10], esi
// 0066d3b5  8b7028               mov esi, dword ptr [eax + 0x28]
// 0066d3b8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066d3bc  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0066d3bf  03f1                 add esi, ecx
// 0066d3c1  2b4828               sub ecx, dword ptr [eax + 0x28]
// 0066d3c4  89742414             mov dword ptr [esp + 0x14], esi
// 0066d3c8  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066d3cc  8d0c16               lea ecx, [esi + edx]
// 0066d3cf  2bd6                 sub edx, esi
// 0066d3d1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d3d5  03f3                 add esi, ebx
// 0066d3d7  03f1                 add esi, ecx
// 0066d3d9  897018               mov dword ptr [eax + 0x18], esi
// 0066d3dc  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d3e0  03f3                 add esi, ebx
// 0066d3e2  2bce                 sub ecx, esi
// 0066d3e4  894828               mov dword ptr [eax + 0x28], ecx
// 0066d3e7  8bca                 mov ecx, edx
// 0066d3e9  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d3ed  03cb                 add ecx, ebx
// 0066d3ef  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d3f3  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d3f9  c1f908               sar ecx, 8
// 0066d3fc  8d3411               lea esi, [ecx + edx]
// 0066d3ff  2bd1                 sub edx, ecx
// 0066d401  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d405  897020               mov dword ptr [eax + 0x20], esi
// 0066d408  895030               mov dword ptr [eax + 0x30], edx
// 0066d40b  8d1419               lea edx, [ecx + ebx]
// 0066d40e  8d342f               lea esi, [edi + ebp]
// 0066d411  8bca                 mov ecx, edx
// 0066d413  69d28b000000         imul edx, edx, 0x8b
// 0066d419  2bce                 sub ecx, esi
// 0066d41b  69f64e010000         imul esi, esi, 0x14e
// 0066d421  6bc962               imul ecx, ecx, 0x62
// 0066d424  c1f908               sar ecx, 8
// 0066d427  c1fe08               sar esi, 8
// 0066d42a  03f1                 add esi, ecx
// 0066d42c  c1fa08               sar edx, 8
// 0066d42f  03d1                 add edx, ecx
// 0066d431  8d0c2b               lea ecx, [ebx + ebp]
// 0066d434  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d43a  c1f908               sar ecx, 8
// 0066d43d  8d1c39               lea ebx, [ecx + edi]
// 0066d440  2bf9                 sub edi, ecx
// 0066d442  8d0c17               lea ecx, [edi + edx]
// 0066d445  2bfa                 sub edi, edx
// 0066d447  8d1433               lea edx, [ebx + esi]
// 0066d44a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0066d44d  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0066d450  2bde                 sub ebx, esi
// 0066d452  8b7050               mov esi, dword ptr [eax + 0x50]
// 0066d455  897824               mov dword ptr [eax + 0x24], edi
// 0066d458  8b7838               mov edi, dword ptr [eax + 0x38]
// 0066d45b  89501c               mov dword ptr [eax + 0x1c], edx
// 0066d45e  8d1439               lea edx, [ecx + edi]
// 0066d461  2bf9                 sub edi, ecx
// 0066d463  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0066d466  895834               mov dword ptr [eax + 0x34], ebx
// 0066d469  8d1c31               lea ebx, [ecx + esi]
// 0066d46c  2bce                 sub ecx, esi
// 0066d46e  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0066d471  8be9                 mov ebp, ecx
// 0066d473  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0066d476  03f1                 add esi, ecx
// 0066d478  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0066d47b  89742410             mov dword ptr [esp + 0x10], esi
// 0066d47f  8b7048               mov esi, dword ptr [eax + 0x48]
// 0066d482  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066d486  8b4844               mov ecx, dword ptr [eax + 0x44]
// 0066d489  03f1                 add esi, ecx
// 0066d48b  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0066d48e  89742414             mov dword ptr [esp + 0x14], esi
// 0066d492  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066d496  8d0c16               lea ecx, [esi + edx]
// 0066d499  2bd6                 sub edx, esi
// 0066d49b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d49f  03f3                 add esi, ebx
// 0066d4a1  03f1                 add esi, ecx
// 0066d4a3  897038               mov dword ptr [eax + 0x38], esi
// 0066d4a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d4aa  03f3                 add esi, ebx
// 0066d4ac  2bce                 sub ecx, esi
// 0066d4ae  894848               mov dword ptr [eax + 0x48], ecx
// 0066d4b1  8bca                 mov ecx, edx
// 0066d4b3  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d4b7  03cb                 add ecx, ebx
// 0066d4b9  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d4bf  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d4c3  c1f908               sar ecx, 8
// 0066d4c6  8d3411               lea esi, [ecx + edx]
// 0066d4c9  2bd1                 sub edx, ecx
// 0066d4cb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d4cf  897040               mov dword ptr [eax + 0x40], esi
// 0066d4d2  895050               mov dword ptr [eax + 0x50], edx
// 0066d4d5  8d1419               lea edx, [ecx + ebx]
// 0066d4d8  8bca                 mov ecx, edx
// 0066d4da  69d28b000000         imul edx, edx, 0x8b
// 0066d4e0  8d342f               lea esi, [edi + ebp]
// 0066d4e3  2bce                 sub ecx, esi
// 0066d4e5  69f64e010000         imul esi, esi, 0x14e
// 0066d4eb  6bc962               imul ecx, ecx, 0x62
// 0066d4ee  c1f908               sar ecx, 8
// 0066d4f1  c1fe08               sar esi, 8
// 0066d4f4  03f1                 add esi, ecx
// 0066d4f6  c1fa08               sar edx, 8
// 0066d4f9  03d1                 add edx, ecx
// 0066d4fb  8d0c2b               lea ecx, [ebx + ebp]
// 0066d4fe  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d504  c1f908               sar ecx, 8
// 0066d507  8d1c39               lea ebx, [ecx + edi]
// 0066d50a  2bf9                 sub edi, ecx
// 0066d50c  8d0c17               lea ecx, [edi + edx]
// 0066d50f  89484c               mov dword ptr [eax + 0x4c], ecx
// 0066d512  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0066d515  2bfa                 sub edi, edx
// 0066d517  8d1433               lea edx, [ebx + esi]
// 0066d51a  2bde                 sub ebx, esi
// 0066d51c  8b7070               mov esi, dword ptr [eax + 0x70]
// 0066d51f  897844               mov dword ptr [eax + 0x44], edi
// 0066d522  8b7858               mov edi, dword ptr [eax + 0x58]
// 0066d525  89503c               mov dword ptr [eax + 0x3c], edx
// 0066d528  8d140f               lea edx, [edi + ecx]
// 0066d52b  2bf9                 sub edi, ecx
// 0066d52d  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0066d530  895854               mov dword ptr [eax + 0x54], ebx
// 0066d533  8d1c0e               lea ebx, [esi + ecx]
// 0066d536  2bce                 sub ecx, esi
// 0066d538  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0066d53b  8be9                 mov ebp, ecx
// 0066d53d  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0066d540  03f1                 add esi, ecx
// 0066d542  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0066d545  89742410             mov dword ptr [esp + 0x10], esi
// 0066d549  8b7068               mov esi, dword ptr [eax + 0x68]
// 0066d54c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066d550  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0066d553  03f1                 add esi, ecx
// 0066d555  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0066d558  89742414             mov dword ptr [esp + 0x14], esi
// 0066d55c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066d560  8d0c16               lea ecx, [esi + edx]
// 0066d563  2bd6                 sub edx, esi
// 0066d565  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d569  03f3                 add esi, ebx
// 0066d56b  03f1                 add esi, ecx
// 0066d56d  897058               mov dword ptr [eax + 0x58], esi
// 0066d570  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d574  03f3                 add esi, ebx
// 0066d576  2bce                 sub ecx, esi
// 0066d578  894868               mov dword ptr [eax + 0x68], ecx
// 0066d57b  8bca                 mov ecx, edx
// 0066d57d  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d581  03cb                 add ecx, ebx
// 0066d583  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d587  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d58d  c1f908               sar ecx, 8
// 0066d590  8d3411               lea esi, [ecx + edx]
// 0066d593  2bd1                 sub edx, ecx
// 0066d595  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d599  897060               mov dword ptr [eax + 0x60], esi
// 0066d59c  895070               mov dword ptr [eax + 0x70], edx
// 0066d59f  8d1419               lea edx, [ecx + ebx]
// 0066d5a2  8bca                 mov ecx, edx
// 0066d5a4  69d28b000000         imul edx, edx, 0x8b
// 0066d5aa  8d342f               lea esi, [edi + ebp]
// 0066d5ad  2bce                 sub ecx, esi
// 0066d5af  69f64e010000         imul esi, esi, 0x14e
// 0066d5b5  6bc962               imul ecx, ecx, 0x62
// 0066d5b8  c1f908               sar ecx, 8
// 0066d5bb  c1fa08               sar edx, 8
// 0066d5be  03d1                 add edx, ecx
// 0066d5c0  c1fe08               sar esi, 8
// 0066d5c3  03f1                 add esi, ecx
// 0066d5c5  8d0c2b               lea ecx, [ebx + ebp]
// 0066d5c8  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d5ce  c1f908               sar ecx, 8
// 0066d5d1  8d1c39               lea ebx, [ecx + edi]
// 0066d5d4  2bf9                 sub edi, ecx
// 0066d5d6  8d0c17               lea ecx, [edi + edx]
// 0066d5d9  2bfa                 sub edi, edx
// 0066d5db  8d1433               lea edx, [ebx + esi]
// 0066d5de  2bde                 sub ebx, esi
// 0066d5e0  89486c               mov dword ptr [eax + 0x6c], ecx
// 0066d5e3  897864               mov dword ptr [eax + 0x64], edi
// 0066d5e6  89505c               mov dword ptr [eax + 0x5c], edx
// 0066d5e9  895874               mov dword ptr [eax + 0x74], ebx
// 0066d5ec  83e880               sub eax, -0x80
// 0066d5ef  836c242001           sub dword ptr [esp + 0x20], 1
// 0066d5f4  0f85ccfcffff         jne 0x66d2c6
// 0066d5fa  8b442428             mov eax, dword ptr [esp + 0x28]
// 0066d5fe  83c040               add eax, 0x40
// 0066d601  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0066d609  8da42400000000       lea esp, [esp]
// 0066d610  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0066d616  8b78c0               mov edi, dword ptr [eax - 0x40]
// 0066d619  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 0066d61f  8d1439               lea edx, [ecx + edi]
// 0066d622  2bf9                 sub edi, ecx
// 0066d624  8b48e0               mov ecx, dword ptr [eax - 0x20]
// 0066d627  8d1c31               lea ebx, [ecx + esi]
// 0066d62a  2bce                 sub ecx, esi
// 0066d62c  8b7060               mov esi, dword ptr [eax + 0x60]
// 0066d62f  8be9                 mov ebp, ecx
// 0066d631  8b08                 mov ecx, dword ptr [eax]
// 0066d633  03f1                 add esi, ecx
// 0066d635  2b4860               sub ecx, dword ptr [eax + 0x60]
// 0066d638  89742410             mov dword ptr [esp + 0x10], esi
// 0066d63c  8b7040               mov esi, dword ptr [eax + 0x40]
// 0066d63f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066d643  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0066d646  03f1                 add esi, ecx
// 0066d648  2b4840               sub ecx, dword ptr [eax + 0x40]
// 0066d64b  89742414             mov dword ptr [esp + 0x14], esi
// 0066d64f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066d653  8d0c16               lea ecx, [esi + edx]
// 0066d656  2bd6                 sub edx, esi
// 0066d658  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d65c  03f3                 add esi, ebx
// 0066d65e  03f1                 add esi, ecx
// 0066d660  8970c0               mov dword ptr [eax - 0x40], esi
// 0066d663  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d667  03f3                 add esi, ebx
// 0066d669  2bce                 sub ecx, esi
// 0066d66b  894840               mov dword ptr [eax + 0x40], ecx
// 0066d66e  8bca                 mov ecx, edx
// 0066d670  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d674  03cb                 add ecx, ebx
// 0066d676  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d67a  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d680  c1f908               sar ecx, 8
// 0066d683  8d3411               lea esi, [ecx + edx]
// 0066d686  2bd1                 sub edx, ecx
// 0066d688  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d68c  899080000000         mov dword ptr [eax + 0x80], edx
// 0066d692  8d1419               lea edx, [ecx + ebx]
// 0066d695  8930                 mov dword ptr [eax], esi
// 0066d697  8d342f               lea esi, [edi + ebp]
// 0066d69a  8bca                 mov ecx, edx
// 0066d69c  69d28b000000         imul edx, edx, 0x8b
// 0066d6a2  2bce                 sub ecx, esi
// 0066d6a4  69f64e010000         imul esi, esi, 0x14e
// 0066d6aa  6bc962               imul ecx, ecx, 0x62
// 0066d6ad  c1f908               sar ecx, 8
// 0066d6b0  c1fe08               sar esi, 8
// 0066d6b3  03f1                 add esi, ecx
// 0066d6b5  c1fa08               sar edx, 8
// 0066d6b8  03d1                 add edx, ecx
// 0066d6ba  8d0c2b               lea ecx, [ebx + ebp]
// 0066d6bd  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d6c3  c1f908               sar ecx, 8
// 0066d6c6  8d1c39               lea ebx, [ecx + edi]
// 0066d6c9  2bf9                 sub edi, ecx
// 0066d6cb  8d0c17               lea ecx, [edi + edx]
// 0066d6ce  2bfa                 sub edi, edx
// 0066d6d0  8d1433               lea edx, [ebx + esi]
// 0066d6d3  894860               mov dword ptr [eax + 0x60], ecx
// 0066d6d6  8b88a4000000         mov ecx, dword ptr [eax + 0xa4]
// 0066d6dc  897820               mov dword ptr [eax + 0x20], edi
// 0066d6df  8b78c4               mov edi, dword ptr [eax - 0x3c]
// 0066d6e2  2bde                 sub ebx, esi
// 0066d6e4  8bb084000000         mov esi, dword ptr [eax + 0x84]
// 0066d6ea  8950e0               mov dword ptr [eax - 0x20], edx
// 0066d6ed  8d1439               lea edx, [ecx + edi]
// 0066d6f0  2bf9                 sub edi, ecx
// 0066d6f2  8b48e4               mov ecx, dword ptr [eax - 0x1c]
// 0066d6f5  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0066d6fb  8d1c31               lea ebx, [ecx + esi]
// 0066d6fe  2bce                 sub ecx, esi
// 0066d700  8b7064               mov esi, dword ptr [eax + 0x64]
// 0066d703  8be9                 mov ebp, ecx
// 0066d705  8b4804               mov ecx, dword ptr [eax + 4]
// 0066d708  03f1                 add esi, ecx
// 0066d70a  2b4864               sub ecx, dword ptr [eax + 0x64]
// 0066d70d  89742410             mov dword ptr [esp + 0x10], esi
// 0066d711  8b7044               mov esi, dword ptr [eax + 0x44]
// 0066d714  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066d718  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0066d71b  03f1                 add esi, ecx
// 0066d71d  2b4844               sub ecx, dword ptr [eax + 0x44]
// 0066d720  89742414             mov dword ptr [esp + 0x14], esi
// 0066d724  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066d728  8d0c16               lea ecx, [esi + edx]
// 0066d72b  2bd6                 sub edx, esi
// 0066d72d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d731  03f3                 add esi, ebx
// 0066d733  03f1                 add esi, ecx
// 0066d735  8970c4               mov dword ptr [eax - 0x3c], esi
// 0066d738  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d73c  03f3                 add esi, ebx
// 0066d73e  2bce                 sub ecx, esi
// 0066d740  894844               mov dword ptr [eax + 0x44], ecx
// 0066d743  8bca                 mov ecx, edx
// 0066d745  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d749  03cb                 add ecx, ebx
// 0066d74b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d74f  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d755  c1f908               sar ecx, 8
// 0066d758  8d3411               lea esi, [ecx + edx]
// 0066d75b  2bd1                 sub edx, ecx
// 0066d75d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d761  897004               mov dword ptr [eax + 4], esi
// 0066d764  899084000000         mov dword ptr [eax + 0x84], edx
// 0066d76a  8d1419               lea edx, [ecx + ebx]
// 0066d76d  8d342f               lea esi, [edi + ebp]
// 0066d770  8bca                 mov ecx, edx
// 0066d772  69d28b000000         imul edx, edx, 0x8b
// 0066d778  2bce                 sub ecx, esi
// 0066d77a  69f64e010000         imul esi, esi, 0x14e
// 0066d780  6bc962               imul ecx, ecx, 0x62
// 0066d783  c1f908               sar ecx, 8
// 0066d786  c1fe08               sar esi, 8
// 0066d789  03f1                 add esi, ecx
// 0066d78b  c1fa08               sar edx, 8
// 0066d78e  03d1                 add edx, ecx
// 0066d790  8d0c2b               lea ecx, [ebx + ebp]
// 0066d793  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d799  c1f908               sar ecx, 8
// 0066d79c  8d1c39               lea ebx, [ecx + edi]
// 0066d79f  2bf9                 sub edi, ecx
// 0066d7a1  8d0c17               lea ecx, [edi + edx]
// 0066d7a4  2bfa                 sub edi, edx
// 0066d7a6  8d1433               lea edx, [ebx + esi]
// 0066d7a9  894864               mov dword ptr [eax + 0x64], ecx
// 0066d7ac  8b88a8000000         mov ecx, dword ptr [eax + 0xa8]
// 0066d7b2  2bde                 sub ebx, esi
// 0066d7b4  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 0066d7ba  897824               mov dword ptr [eax + 0x24], edi
// 0066d7bd  8b78c8               mov edi, dword ptr [eax - 0x38]
// 0066d7c0  8950e4               mov dword ptr [eax - 0x1c], edx
// 0066d7c3  8d1439               lea edx, [ecx + edi]
// 0066d7c6  2bf9                 sub edi, ecx
// 0066d7c8  8b48e8               mov ecx, dword ptr [eax - 0x18]
// 0066d7cb  8998a4000000         mov dword ptr [eax + 0xa4], ebx
// 0066d7d1  8d1c31               lea ebx, [ecx + esi]
// 0066d7d4  2bce                 sub ecx, esi
// 0066d7d6  8b7068               mov esi, dword ptr [eax + 0x68]
// 0066d7d9  8be9                 mov ebp, ecx
// 0066d7db  8b4808               mov ecx, dword ptr [eax + 8]
// 0066d7de  03f1                 add esi, ecx
// 0066d7e0  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0066d7e3  89742410             mov dword ptr [esp + 0x10], esi
// 0066d7e7  8b7048               mov esi, dword ptr [eax + 0x48]
// 0066d7ea  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066d7ee  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0066d7f1  03f1                 add esi, ecx
// 0066d7f3  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0066d7f6  89742414             mov dword ptr [esp + 0x14], esi
// 0066d7fa  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066d7fe  8d0c16               lea ecx, [esi + edx]
// 0066d801  2bd6                 sub edx, esi
// 0066d803  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d807  03f3                 add esi, ebx
// 0066d809  03f1                 add esi, ecx
// 0066d80b  8970c8               mov dword ptr [eax - 0x38], esi
// 0066d80e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d812  03f3                 add esi, ebx
// 0066d814  2bce                 sub ecx, esi
// 0066d816  894848               mov dword ptr [eax + 0x48], ecx
// 0066d819  8bca                 mov ecx, edx
// 0066d81b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d81f  03cb                 add ecx, ebx
// 0066d821  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d827  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d82b  c1f908               sar ecx, 8
// 0066d82e  8d3411               lea esi, [ecx + edx]
// 0066d831  2bd1                 sub edx, ecx
// 0066d833  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d837  897008               mov dword ptr [eax + 8], esi
// 0066d83a  899088000000         mov dword ptr [eax + 0x88], edx
// 0066d840  8d1419               lea edx, [ecx + ebx]
// 0066d843  8bca                 mov ecx, edx
// 0066d845  69d28b000000         imul edx, edx, 0x8b
// 0066d84b  8d342f               lea esi, [edi + ebp]
// 0066d84e  2bce                 sub ecx, esi
// 0066d850  69f64e010000         imul esi, esi, 0x14e
// 0066d856  6bc962               imul ecx, ecx, 0x62
// 0066d859  c1f908               sar ecx, 8
// 0066d85c  c1fe08               sar esi, 8
// 0066d85f  03f1                 add esi, ecx
// 0066d861  c1fa08               sar edx, 8
// 0066d864  03d1                 add edx, ecx
// 0066d866  8d0c2b               lea ecx, [ebx + ebp]
// 0066d869  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d86f  c1f908               sar ecx, 8
// 0066d872  8d1c39               lea ebx, [ecx + edi]
// 0066d875  2bf9                 sub edi, ecx
// 0066d877  8d0c17               lea ecx, [edi + edx]
// 0066d87a  894868               mov dword ptr [eax + 0x68], ecx
// 0066d87d  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 0066d883  2bfa                 sub edi, edx
// 0066d885  8d1433               lea edx, [ebx + esi]
// 0066d888  2bde                 sub ebx, esi
// 0066d88a  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 0066d890  897828               mov dword ptr [eax + 0x28], edi
// 0066d893  8b78cc               mov edi, dword ptr [eax - 0x34]
// 0066d896  8950e8               mov dword ptr [eax - 0x18], edx
// 0066d899  8d140f               lea edx, [edi + ecx]
// 0066d89c  2bf9                 sub edi, ecx
// 0066d89e  8b48ec               mov ecx, dword ptr [eax - 0x14]
// 0066d8a1  8998a8000000         mov dword ptr [eax + 0xa8], ebx
// 0066d8a7  8d1c0e               lea ebx, [esi + ecx]
// 0066d8aa  2bce                 sub ecx, esi
// 0066d8ac  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0066d8af  8be9                 mov ebp, ecx
// 0066d8b1  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0066d8b4  03f1                 add esi, ecx
// 0066d8b6  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0066d8b9  89742410             mov dword ptr [esp + 0x10], esi
// 0066d8bd  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0066d8c0  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066d8c4  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0066d8c7  03f1                 add esi, ecx
// 0066d8c9  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0066d8cc  89742414             mov dword ptr [esp + 0x14], esi
// 0066d8d0  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066d8d4  8d0c16               lea ecx, [esi + edx]
// 0066d8d7  2bd6                 sub edx, esi
// 0066d8d9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d8dd  03f3                 add esi, ebx
// 0066d8df  03f1                 add esi, ecx
// 0066d8e1  8970cc               mov dword ptr [eax - 0x34], esi
// 0066d8e4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066d8e8  03f3                 add esi, ebx
// 0066d8ea  2bce                 sub ecx, esi
// 0066d8ec  89484c               mov dword ptr [eax + 0x4c], ecx
// 0066d8ef  8bca                 mov ecx, edx
// 0066d8f1  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d8f5  03cb                 add ecx, ebx
// 0066d8f7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d8fb  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d901  c1f908               sar ecx, 8
// 0066d904  8d3411               lea esi, [ecx + edx]
// 0066d907  2bd1                 sub edx, ecx
// 0066d909  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d90d  89700c               mov dword ptr [eax + 0xc], esi
// 0066d910  89908c000000         mov dword ptr [eax + 0x8c], edx
// 0066d916  8d1419               lea edx, [ecx + ebx]
// 0066d919  8bca                 mov ecx, edx
// 0066d91b  69d28b000000         imul edx, edx, 0x8b
// 0066d921  8d342f               lea esi, [edi + ebp]
// 0066d924  2bce                 sub ecx, esi
// 0066d926  69f64e010000         imul esi, esi, 0x14e
// 0066d92c  6bc962               imul ecx, ecx, 0x62
// 0066d92f  c1f908               sar ecx, 8
// 0066d932  c1fa08               sar edx, 8
// 0066d935  03d1                 add edx, ecx
// 0066d937  c1fe08               sar esi, 8
// 0066d93a  03f1                 add esi, ecx
// 0066d93c  8d0c2b               lea ecx, [ebx + ebp]
// 0066d93f  69c9b5000000         imul ecx, ecx, 0xb5
// 0066d945  c1f908               sar ecx, 8
// 0066d948  8d1c39               lea ebx, [ecx + edi]
// 0066d94b  2bf9                 sub edi, ecx
// 0066d94d  8d0c17               lea ecx, [edi + edx]
// 0066d950  2bfa                 sub edi, edx
// 0066d952  8d1433               lea edx, [ebx + esi]
// 0066d955  2bde                 sub ebx, esi
// 0066d957  89486c               mov dword ptr [eax + 0x6c], ecx
// 0066d95a  89782c               mov dword ptr [eax + 0x2c], edi
// 0066d95d  8950ec               mov dword ptr [eax - 0x14], edx
// 0066d960  8998ac000000         mov dword ptr [eax + 0xac], ebx
// 0066d966  83c010               add eax, 0x10
// 0066d969  836c242801           sub dword ptr [esp + 0x28], 1
// 0066d96e  0f859cfcffff         jne 0x66d610
// 0066d974  5f                   pop edi
// 0066d975  5e                   pop esi
// 0066d976  5d                   pop ebp
// 0066d977  5b                   pop ebx
// 0066d978  83c414               add esp, 0x14
// 0066d97b  c3                   ret 
// library jpeg-6b/jfdctfst.c (function _jpeg_fdct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctfst.c
