// roc 2010-06 0058b8b0  unit: seg_00580000  size: 1740 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058b8b0
//
// 0058b8b0  83ec14               sub esp, 0x14
// 0058b8b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058b8b7  53                   push ebx
// 0058b8b8  55                   push ebp
// 0058b8b9  56                   push esi
// 0058b8ba  83c008               add eax, 8
// 0058b8bd  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 0058b8c5  57                   push edi
// 0058b8c6  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0058b8c9  8b78f8               mov edi, dword ptr [eax - 8]
// 0058b8cc  8b7010               mov esi, dword ptr [eax + 0x10]
// 0058b8cf  8d1439               lea edx, [ecx + edi]
// 0058b8d2  2bf9                 sub edi, ecx
// 0058b8d4  8b48fc               mov ecx, dword ptr [eax - 4]
// 0058b8d7  8d1c31               lea ebx, [ecx + esi]
// 0058b8da  2bce                 sub ecx, esi
// 0058b8dc  8b700c               mov esi, dword ptr [eax + 0xc]
// 0058b8df  8be9                 mov ebp, ecx
// 0058b8e1  8b08                 mov ecx, dword ptr [eax]
// 0058b8e3  03f1                 add esi, ecx
// 0058b8e5  2b480c               sub ecx, dword ptr [eax + 0xc]
// 0058b8e8  89742410             mov dword ptr [esp + 0x10], esi
// 0058b8ec  8b7008               mov esi, dword ptr [eax + 8]
// 0058b8ef  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058b8f3  8b4804               mov ecx, dword ptr [eax + 4]
// 0058b8f6  03f1                 add esi, ecx
// 0058b8f8  2b4808               sub ecx, dword ptr [eax + 8]
// 0058b8fb  89742414             mov dword ptr [esp + 0x14], esi
// 0058b8ff  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058b903  8d0c16               lea ecx, [esi + edx]
// 0058b906  2bd6                 sub edx, esi
// 0058b908  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058b90c  03f3                 add esi, ebx
// 0058b90e  03f1                 add esi, ecx
// 0058b910  8970f8               mov dword ptr [eax - 8], esi
// 0058b913  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058b917  03f3                 add esi, ebx
// 0058b919  2bce                 sub ecx, esi
// 0058b91b  894808               mov dword ptr [eax + 8], ecx
// 0058b91e  8bca                 mov ecx, edx
// 0058b920  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058b924  03cb                 add ecx, ebx
// 0058b926  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058b92a  69c9b5000000         imul ecx, ecx, 0xb5
// 0058b930  c1f908               sar ecx, 8
// 0058b933  8d3411               lea esi, [ecx + edx]
// 0058b936  2bd1                 sub edx, ecx
// 0058b938  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058b93c  895010               mov dword ptr [eax + 0x10], edx
// 0058b93f  8d1419               lea edx, [ecx + ebx]
// 0058b942  8930                 mov dword ptr [eax], esi
// 0058b944  8d342f               lea esi, [edi + ebp]
// 0058b947  8bca                 mov ecx, edx
// 0058b949  69d28b000000         imul edx, edx, 0x8b
// 0058b94f  2bce                 sub ecx, esi
// 0058b951  69f64e010000         imul esi, esi, 0x14e
// 0058b957  6bc962               imul ecx, ecx, 0x62
// 0058b95a  c1f908               sar ecx, 8
// 0058b95d  c1fe08               sar esi, 8
// 0058b960  03f1                 add esi, ecx
// 0058b962  c1fa08               sar edx, 8
// 0058b965  03d1                 add edx, ecx
// 0058b967  8d0c2b               lea ecx, [ebx + ebp]
// 0058b96a  69c9b5000000         imul ecx, ecx, 0xb5
// 0058b970  c1f908               sar ecx, 8
// 0058b973  8d1c39               lea ebx, [ecx + edi]
// 0058b976  2bf9                 sub edi, ecx
// 0058b978  8d0c17               lea ecx, [edi + edx]
// 0058b97b  2bfa                 sub edi, edx
// 0058b97d  8d1433               lea edx, [ebx + esi]
// 0058b980  89480c               mov dword ptr [eax + 0xc], ecx
// 0058b983  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0058b986  897804               mov dword ptr [eax + 4], edi
// 0058b989  8b7818               mov edi, dword ptr [eax + 0x18]
// 0058b98c  2bde                 sub ebx, esi
// 0058b98e  8b7030               mov esi, dword ptr [eax + 0x30]
// 0058b991  8950fc               mov dword ptr [eax - 4], edx
// 0058b994  8d1439               lea edx, [ecx + edi]
// 0058b997  2bf9                 sub edi, ecx
// 0058b999  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0058b99c  895814               mov dword ptr [eax + 0x14], ebx
// 0058b99f  8d1c31               lea ebx, [ecx + esi]
// 0058b9a2  2bce                 sub ecx, esi
// 0058b9a4  8b702c               mov esi, dword ptr [eax + 0x2c]
// 0058b9a7  8be9                 mov ebp, ecx
// 0058b9a9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0058b9ac  03f1                 add esi, ecx
// 0058b9ae  2b482c               sub ecx, dword ptr [eax + 0x2c]
// 0058b9b1  89742410             mov dword ptr [esp + 0x10], esi
// 0058b9b5  8b7028               mov esi, dword ptr [eax + 0x28]
// 0058b9b8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058b9bc  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0058b9bf  03f1                 add esi, ecx
// 0058b9c1  2b4828               sub ecx, dword ptr [eax + 0x28]
// 0058b9c4  89742414             mov dword ptr [esp + 0x14], esi
// 0058b9c8  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058b9cc  8d0c16               lea ecx, [esi + edx]
// 0058b9cf  2bd6                 sub edx, esi
// 0058b9d1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058b9d5  03f3                 add esi, ebx
// 0058b9d7  03f1                 add esi, ecx
// 0058b9d9  897018               mov dword ptr [eax + 0x18], esi
// 0058b9dc  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058b9e0  03f3                 add esi, ebx
// 0058b9e2  2bce                 sub ecx, esi
// 0058b9e4  894828               mov dword ptr [eax + 0x28], ecx
// 0058b9e7  8bca                 mov ecx, edx
// 0058b9e9  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058b9ed  03cb                 add ecx, ebx
// 0058b9ef  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058b9f3  69c9b5000000         imul ecx, ecx, 0xb5
// 0058b9f9  c1f908               sar ecx, 8
// 0058b9fc  8d3411               lea esi, [ecx + edx]
// 0058b9ff  2bd1                 sub edx, ecx
// 0058ba01  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058ba05  897020               mov dword ptr [eax + 0x20], esi
// 0058ba08  895030               mov dword ptr [eax + 0x30], edx
// 0058ba0b  8d1419               lea edx, [ecx + ebx]
// 0058ba0e  8d342f               lea esi, [edi + ebp]
// 0058ba11  8bca                 mov ecx, edx
// 0058ba13  69d28b000000         imul edx, edx, 0x8b
// 0058ba19  2bce                 sub ecx, esi
// 0058ba1b  69f64e010000         imul esi, esi, 0x14e
// 0058ba21  6bc962               imul ecx, ecx, 0x62
// 0058ba24  c1f908               sar ecx, 8
// 0058ba27  c1fe08               sar esi, 8
// 0058ba2a  03f1                 add esi, ecx
// 0058ba2c  c1fa08               sar edx, 8
// 0058ba2f  03d1                 add edx, ecx
// 0058ba31  8d0c2b               lea ecx, [ebx + ebp]
// 0058ba34  69c9b5000000         imul ecx, ecx, 0xb5
// 0058ba3a  c1f908               sar ecx, 8
// 0058ba3d  8d1c39               lea ebx, [ecx + edi]
// 0058ba40  2bf9                 sub edi, ecx
// 0058ba42  8d0c17               lea ecx, [edi + edx]
// 0058ba45  2bfa                 sub edi, edx
// 0058ba47  8d1433               lea edx, [ebx + esi]
// 0058ba4a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0058ba4d  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0058ba50  2bde                 sub ebx, esi
// 0058ba52  8b7050               mov esi, dword ptr [eax + 0x50]
// 0058ba55  897824               mov dword ptr [eax + 0x24], edi
// 0058ba58  8b7838               mov edi, dword ptr [eax + 0x38]
// 0058ba5b  89501c               mov dword ptr [eax + 0x1c], edx
// 0058ba5e  8d1439               lea edx, [ecx + edi]
// 0058ba61  2bf9                 sub edi, ecx
// 0058ba63  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0058ba66  895834               mov dword ptr [eax + 0x34], ebx
// 0058ba69  8d1c31               lea ebx, [ecx + esi]
// 0058ba6c  2bce                 sub ecx, esi
// 0058ba6e  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0058ba71  8be9                 mov ebp, ecx
// 0058ba73  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0058ba76  03f1                 add esi, ecx
// 0058ba78  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0058ba7b  89742410             mov dword ptr [esp + 0x10], esi
// 0058ba7f  8b7048               mov esi, dword ptr [eax + 0x48]
// 0058ba82  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058ba86  8b4844               mov ecx, dword ptr [eax + 0x44]
// 0058ba89  03f1                 add esi, ecx
// 0058ba8b  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0058ba8e  89742414             mov dword ptr [esp + 0x14], esi
// 0058ba92  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058ba96  8d0c16               lea ecx, [esi + edx]
// 0058ba99  2bd6                 sub edx, esi
// 0058ba9b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058ba9f  03f3                 add esi, ebx
// 0058baa1  03f1                 add esi, ecx
// 0058baa3  897038               mov dword ptr [eax + 0x38], esi
// 0058baa6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058baaa  03f3                 add esi, ebx
// 0058baac  2bce                 sub ecx, esi
// 0058baae  894848               mov dword ptr [eax + 0x48], ecx
// 0058bab1  8bca                 mov ecx, edx
// 0058bab3  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058bab7  03cb                 add ecx, ebx
// 0058bab9  69c9b5000000         imul ecx, ecx, 0xb5
// 0058babf  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058bac3  c1f908               sar ecx, 8
// 0058bac6  8d3411               lea esi, [ecx + edx]
// 0058bac9  2bd1                 sub edx, ecx
// 0058bacb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058bacf  897040               mov dword ptr [eax + 0x40], esi
// 0058bad2  895050               mov dword ptr [eax + 0x50], edx
// 0058bad5  8d1419               lea edx, [ecx + ebx]
// 0058bad8  8bca                 mov ecx, edx
// 0058bada  69d28b000000         imul edx, edx, 0x8b
// 0058bae0  8d342f               lea esi, [edi + ebp]
// 0058bae3  2bce                 sub ecx, esi
// 0058bae5  69f64e010000         imul esi, esi, 0x14e
// 0058baeb  6bc962               imul ecx, ecx, 0x62
// 0058baee  c1f908               sar ecx, 8
// 0058baf1  c1fe08               sar esi, 8
// 0058baf4  03f1                 add esi, ecx
// 0058baf6  c1fa08               sar edx, 8
// 0058baf9  03d1                 add edx, ecx
// 0058bafb  8d0c2b               lea ecx, [ebx + ebp]
// 0058bafe  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bb04  c1f908               sar ecx, 8
// 0058bb07  8d1c39               lea ebx, [ecx + edi]
// 0058bb0a  2bf9                 sub edi, ecx
// 0058bb0c  8d0c17               lea ecx, [edi + edx]
// 0058bb0f  89484c               mov dword ptr [eax + 0x4c], ecx
// 0058bb12  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0058bb15  2bfa                 sub edi, edx
// 0058bb17  8d1433               lea edx, [ebx + esi]
// 0058bb1a  2bde                 sub ebx, esi
// 0058bb1c  8b7070               mov esi, dword ptr [eax + 0x70]
// 0058bb1f  897844               mov dword ptr [eax + 0x44], edi
// 0058bb22  8b7858               mov edi, dword ptr [eax + 0x58]
// 0058bb25  89503c               mov dword ptr [eax + 0x3c], edx
// 0058bb28  8d140f               lea edx, [edi + ecx]
// 0058bb2b  2bf9                 sub edi, ecx
// 0058bb2d  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0058bb30  895854               mov dword ptr [eax + 0x54], ebx
// 0058bb33  8d1c0e               lea ebx, [esi + ecx]
// 0058bb36  2bce                 sub ecx, esi
// 0058bb38  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0058bb3b  8be9                 mov ebp, ecx
// 0058bb3d  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0058bb40  03f1                 add esi, ecx
// 0058bb42  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0058bb45  89742410             mov dword ptr [esp + 0x10], esi
// 0058bb49  8b7068               mov esi, dword ptr [eax + 0x68]
// 0058bb4c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058bb50  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0058bb53  03f1                 add esi, ecx
// 0058bb55  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0058bb58  89742414             mov dword ptr [esp + 0x14], esi
// 0058bb5c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058bb60  8d0c16               lea ecx, [esi + edx]
// 0058bb63  2bd6                 sub edx, esi
// 0058bb65  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058bb69  03f3                 add esi, ebx
// 0058bb6b  03f1                 add esi, ecx
// 0058bb6d  897058               mov dword ptr [eax + 0x58], esi
// 0058bb70  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058bb74  03f3                 add esi, ebx
// 0058bb76  2bce                 sub ecx, esi
// 0058bb78  894868               mov dword ptr [eax + 0x68], ecx
// 0058bb7b  8bca                 mov ecx, edx
// 0058bb7d  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058bb81  03cb                 add ecx, ebx
// 0058bb83  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058bb87  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bb8d  c1f908               sar ecx, 8
// 0058bb90  8d3411               lea esi, [ecx + edx]
// 0058bb93  2bd1                 sub edx, ecx
// 0058bb95  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058bb99  897060               mov dword ptr [eax + 0x60], esi
// 0058bb9c  895070               mov dword ptr [eax + 0x70], edx
// 0058bb9f  8d1419               lea edx, [ecx + ebx]
// 0058bba2  8bca                 mov ecx, edx
// 0058bba4  69d28b000000         imul edx, edx, 0x8b
// 0058bbaa  8d342f               lea esi, [edi + ebp]
// 0058bbad  2bce                 sub ecx, esi
// 0058bbaf  69f64e010000         imul esi, esi, 0x14e
// 0058bbb5  6bc962               imul ecx, ecx, 0x62
// 0058bbb8  c1f908               sar ecx, 8
// 0058bbbb  c1fa08               sar edx, 8
// 0058bbbe  03d1                 add edx, ecx
// 0058bbc0  c1fe08               sar esi, 8
// 0058bbc3  03f1                 add esi, ecx
// 0058bbc5  8d0c2b               lea ecx, [ebx + ebp]
// 0058bbc8  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bbce  c1f908               sar ecx, 8
// 0058bbd1  8d1c39               lea ebx, [ecx + edi]
// 0058bbd4  2bf9                 sub edi, ecx
// 0058bbd6  8d0c17               lea ecx, [edi + edx]
// 0058bbd9  2bfa                 sub edi, edx
// 0058bbdb  8d1433               lea edx, [ebx + esi]
// 0058bbde  2bde                 sub ebx, esi
// 0058bbe0  89486c               mov dword ptr [eax + 0x6c], ecx
// 0058bbe3  897864               mov dword ptr [eax + 0x64], edi
// 0058bbe6  89505c               mov dword ptr [eax + 0x5c], edx
// 0058bbe9  895874               mov dword ptr [eax + 0x74], ebx
// 0058bbec  83e880               sub eax, -0x80
// 0058bbef  836c242001           sub dword ptr [esp + 0x20], 1
// 0058bbf4  0f85ccfcffff         jne 0x58b8c6
// 0058bbfa  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058bbfe  83c040               add eax, 0x40
// 0058bc01  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0058bc09  8da42400000000       lea esp, [esp]
// 0058bc10  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0058bc16  8b78c0               mov edi, dword ptr [eax - 0x40]
// 0058bc19  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 0058bc1f  8d1439               lea edx, [ecx + edi]
// 0058bc22  2bf9                 sub edi, ecx
// 0058bc24  8b48e0               mov ecx, dword ptr [eax - 0x20]
// 0058bc27  8d1c31               lea ebx, [ecx + esi]
// 0058bc2a  2bce                 sub ecx, esi
// 0058bc2c  8b7060               mov esi, dword ptr [eax + 0x60]
// 0058bc2f  8be9                 mov ebp, ecx
// 0058bc31  8b08                 mov ecx, dword ptr [eax]
// 0058bc33  03f1                 add esi, ecx
// 0058bc35  2b4860               sub ecx, dword ptr [eax + 0x60]
// 0058bc38  89742410             mov dword ptr [esp + 0x10], esi
// 0058bc3c  8b7040               mov esi, dword ptr [eax + 0x40]
// 0058bc3f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058bc43  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0058bc46  03f1                 add esi, ecx
// 0058bc48  2b4840               sub ecx, dword ptr [eax + 0x40]
// 0058bc4b  89742414             mov dword ptr [esp + 0x14], esi
// 0058bc4f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058bc53  8d0c16               lea ecx, [esi + edx]
// 0058bc56  2bd6                 sub edx, esi
// 0058bc58  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058bc5c  03f3                 add esi, ebx
// 0058bc5e  03f1                 add esi, ecx
// 0058bc60  8970c0               mov dword ptr [eax - 0x40], esi
// 0058bc63  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058bc67  03f3                 add esi, ebx
// 0058bc69  2bce                 sub ecx, esi
// 0058bc6b  894840               mov dword ptr [eax + 0x40], ecx
// 0058bc6e  8bca                 mov ecx, edx
// 0058bc70  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058bc74  03cb                 add ecx, ebx
// 0058bc76  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058bc7a  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bc80  c1f908               sar ecx, 8
// 0058bc83  8d3411               lea esi, [ecx + edx]
// 0058bc86  2bd1                 sub edx, ecx
// 0058bc88  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058bc8c  899080000000         mov dword ptr [eax + 0x80], edx
// 0058bc92  8d1419               lea edx, [ecx + ebx]
// 0058bc95  8930                 mov dword ptr [eax], esi
// 0058bc97  8d342f               lea esi, [edi + ebp]
// 0058bc9a  8bca                 mov ecx, edx
// 0058bc9c  69d28b000000         imul edx, edx, 0x8b
// 0058bca2  2bce                 sub ecx, esi
// 0058bca4  69f64e010000         imul esi, esi, 0x14e
// 0058bcaa  6bc962               imul ecx, ecx, 0x62
// 0058bcad  c1f908               sar ecx, 8
// 0058bcb0  c1fe08               sar esi, 8
// 0058bcb3  03f1                 add esi, ecx
// 0058bcb5  c1fa08               sar edx, 8
// 0058bcb8  03d1                 add edx, ecx
// 0058bcba  8d0c2b               lea ecx, [ebx + ebp]
// 0058bcbd  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bcc3  c1f908               sar ecx, 8
// 0058bcc6  8d1c39               lea ebx, [ecx + edi]
// 0058bcc9  2bf9                 sub edi, ecx
// 0058bccb  8d0c17               lea ecx, [edi + edx]
// 0058bcce  2bfa                 sub edi, edx
// 0058bcd0  8d1433               lea edx, [ebx + esi]
// 0058bcd3  894860               mov dword ptr [eax + 0x60], ecx
// 0058bcd6  8b88a4000000         mov ecx, dword ptr [eax + 0xa4]
// 0058bcdc  897820               mov dword ptr [eax + 0x20], edi
// 0058bcdf  8b78c4               mov edi, dword ptr [eax - 0x3c]
// 0058bce2  2bde                 sub ebx, esi
// 0058bce4  8bb084000000         mov esi, dword ptr [eax + 0x84]
// 0058bcea  8950e0               mov dword ptr [eax - 0x20], edx
// 0058bced  8d1439               lea edx, [ecx + edi]
// 0058bcf0  2bf9                 sub edi, ecx
// 0058bcf2  8b48e4               mov ecx, dword ptr [eax - 0x1c]
// 0058bcf5  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0058bcfb  8d1c31               lea ebx, [ecx + esi]
// 0058bcfe  2bce                 sub ecx, esi
// 0058bd00  8b7064               mov esi, dword ptr [eax + 0x64]
// 0058bd03  8be9                 mov ebp, ecx
// 0058bd05  8b4804               mov ecx, dword ptr [eax + 4]
// 0058bd08  03f1                 add esi, ecx
// 0058bd0a  2b4864               sub ecx, dword ptr [eax + 0x64]
// 0058bd0d  89742410             mov dword ptr [esp + 0x10], esi
// 0058bd11  8b7044               mov esi, dword ptr [eax + 0x44]
// 0058bd14  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058bd18  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0058bd1b  03f1                 add esi, ecx
// 0058bd1d  2b4844               sub ecx, dword ptr [eax + 0x44]
// 0058bd20  89742414             mov dword ptr [esp + 0x14], esi
// 0058bd24  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058bd28  8d0c16               lea ecx, [esi + edx]
// 0058bd2b  2bd6                 sub edx, esi
// 0058bd2d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058bd31  03f3                 add esi, ebx
// 0058bd33  03f1                 add esi, ecx
// 0058bd35  8970c4               mov dword ptr [eax - 0x3c], esi
// 0058bd38  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058bd3c  03f3                 add esi, ebx
// 0058bd3e  2bce                 sub ecx, esi
// 0058bd40  894844               mov dword ptr [eax + 0x44], ecx
// 0058bd43  8bca                 mov ecx, edx
// 0058bd45  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058bd49  03cb                 add ecx, ebx
// 0058bd4b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058bd4f  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bd55  c1f908               sar ecx, 8
// 0058bd58  8d3411               lea esi, [ecx + edx]
// 0058bd5b  2bd1                 sub edx, ecx
// 0058bd5d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058bd61  897004               mov dword ptr [eax + 4], esi
// 0058bd64  899084000000         mov dword ptr [eax + 0x84], edx
// 0058bd6a  8d1419               lea edx, [ecx + ebx]
// 0058bd6d  8d342f               lea esi, [edi + ebp]
// 0058bd70  8bca                 mov ecx, edx
// 0058bd72  69d28b000000         imul edx, edx, 0x8b
// 0058bd78  2bce                 sub ecx, esi
// 0058bd7a  69f64e010000         imul esi, esi, 0x14e
// 0058bd80  6bc962               imul ecx, ecx, 0x62
// 0058bd83  c1f908               sar ecx, 8
// 0058bd86  c1fe08               sar esi, 8
// 0058bd89  03f1                 add esi, ecx
// 0058bd8b  c1fa08               sar edx, 8
// 0058bd8e  03d1                 add edx, ecx
// 0058bd90  8d0c2b               lea ecx, [ebx + ebp]
// 0058bd93  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bd99  c1f908               sar ecx, 8
// 0058bd9c  8d1c39               lea ebx, [ecx + edi]
// 0058bd9f  2bf9                 sub edi, ecx
// 0058bda1  8d0c17               lea ecx, [edi + edx]
// 0058bda4  2bfa                 sub edi, edx
// 0058bda6  8d1433               lea edx, [ebx + esi]
// 0058bda9  894864               mov dword ptr [eax + 0x64], ecx
// 0058bdac  8b88a8000000         mov ecx, dword ptr [eax + 0xa8]
// 0058bdb2  2bde                 sub ebx, esi
// 0058bdb4  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 0058bdba  897824               mov dword ptr [eax + 0x24], edi
// 0058bdbd  8b78c8               mov edi, dword ptr [eax - 0x38]
// 0058bdc0  8950e4               mov dword ptr [eax - 0x1c], edx
// 0058bdc3  8d1439               lea edx, [ecx + edi]
// 0058bdc6  2bf9                 sub edi, ecx
// 0058bdc8  8b48e8               mov ecx, dword ptr [eax - 0x18]
// 0058bdcb  8998a4000000         mov dword ptr [eax + 0xa4], ebx
// 0058bdd1  8d1c31               lea ebx, [ecx + esi]
// 0058bdd4  2bce                 sub ecx, esi
// 0058bdd6  8b7068               mov esi, dword ptr [eax + 0x68]
// 0058bdd9  8be9                 mov ebp, ecx
// 0058bddb  8b4808               mov ecx, dword ptr [eax + 8]
// 0058bdde  03f1                 add esi, ecx
// 0058bde0  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0058bde3  89742410             mov dword ptr [esp + 0x10], esi
// 0058bde7  8b7048               mov esi, dword ptr [eax + 0x48]
// 0058bdea  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058bdee  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0058bdf1  03f1                 add esi, ecx
// 0058bdf3  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0058bdf6  89742414             mov dword ptr [esp + 0x14], esi
// 0058bdfa  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058bdfe  8d0c16               lea ecx, [esi + edx]
// 0058be01  2bd6                 sub edx, esi
// 0058be03  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058be07  03f3                 add esi, ebx
// 0058be09  03f1                 add esi, ecx
// 0058be0b  8970c8               mov dword ptr [eax - 0x38], esi
// 0058be0e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058be12  03f3                 add esi, ebx
// 0058be14  2bce                 sub ecx, esi
// 0058be16  894848               mov dword ptr [eax + 0x48], ecx
// 0058be19  8bca                 mov ecx, edx
// 0058be1b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058be1f  03cb                 add ecx, ebx
// 0058be21  69c9b5000000         imul ecx, ecx, 0xb5
// 0058be27  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058be2b  c1f908               sar ecx, 8
// 0058be2e  8d3411               lea esi, [ecx + edx]
// 0058be31  2bd1                 sub edx, ecx
// 0058be33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058be37  897008               mov dword ptr [eax + 8], esi
// 0058be3a  899088000000         mov dword ptr [eax + 0x88], edx
// 0058be40  8d1419               lea edx, [ecx + ebx]
// 0058be43  8bca                 mov ecx, edx
// 0058be45  69d28b000000         imul edx, edx, 0x8b
// 0058be4b  8d342f               lea esi, [edi + ebp]
// 0058be4e  2bce                 sub ecx, esi
// 0058be50  69f64e010000         imul esi, esi, 0x14e
// 0058be56  6bc962               imul ecx, ecx, 0x62
// 0058be59  c1f908               sar ecx, 8
// 0058be5c  c1fe08               sar esi, 8
// 0058be5f  03f1                 add esi, ecx
// 0058be61  c1fa08               sar edx, 8
// 0058be64  03d1                 add edx, ecx
// 0058be66  8d0c2b               lea ecx, [ebx + ebp]
// 0058be69  69c9b5000000         imul ecx, ecx, 0xb5
// 0058be6f  c1f908               sar ecx, 8
// 0058be72  8d1c39               lea ebx, [ecx + edi]
// 0058be75  2bf9                 sub edi, ecx
// 0058be77  8d0c17               lea ecx, [edi + edx]
// 0058be7a  894868               mov dword ptr [eax + 0x68], ecx
// 0058be7d  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 0058be83  2bfa                 sub edi, edx
// 0058be85  8d1433               lea edx, [ebx + esi]
// 0058be88  2bde                 sub ebx, esi
// 0058be8a  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 0058be90  897828               mov dword ptr [eax + 0x28], edi
// 0058be93  8b78cc               mov edi, dword ptr [eax - 0x34]
// 0058be96  8950e8               mov dword ptr [eax - 0x18], edx
// 0058be99  8d140f               lea edx, [edi + ecx]
// 0058be9c  2bf9                 sub edi, ecx
// 0058be9e  8b48ec               mov ecx, dword ptr [eax - 0x14]
// 0058bea1  8998a8000000         mov dword ptr [eax + 0xa8], ebx
// 0058bea7  8d1c0e               lea ebx, [esi + ecx]
// 0058beaa  2bce                 sub ecx, esi
// 0058beac  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0058beaf  8be9                 mov ebp, ecx
// 0058beb1  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0058beb4  03f1                 add esi, ecx
// 0058beb6  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0058beb9  89742410             mov dword ptr [esp + 0x10], esi
// 0058bebd  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0058bec0  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058bec4  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0058bec7  03f1                 add esi, ecx
// 0058bec9  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0058becc  89742414             mov dword ptr [esp + 0x14], esi
// 0058bed0  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058bed4  8d0c16               lea ecx, [esi + edx]
// 0058bed7  2bd6                 sub edx, esi
// 0058bed9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058bedd  03f3                 add esi, ebx
// 0058bedf  03f1                 add esi, ecx
// 0058bee1  8970cc               mov dword ptr [eax - 0x34], esi
// 0058bee4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058bee8  03f3                 add esi, ebx
// 0058beea  2bce                 sub ecx, esi
// 0058beec  89484c               mov dword ptr [eax + 0x4c], ecx
// 0058beef  8bca                 mov ecx, edx
// 0058bef1  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058bef5  03cb                 add ecx, ebx
// 0058bef7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058befb  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bf01  c1f908               sar ecx, 8
// 0058bf04  8d3411               lea esi, [ecx + edx]
// 0058bf07  2bd1                 sub edx, ecx
// 0058bf09  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058bf0d  89700c               mov dword ptr [eax + 0xc], esi
// 0058bf10  89908c000000         mov dword ptr [eax + 0x8c], edx
// 0058bf16  8d1419               lea edx, [ecx + ebx]
// 0058bf19  8bca                 mov ecx, edx
// 0058bf1b  69d28b000000         imul edx, edx, 0x8b
// 0058bf21  8d342f               lea esi, [edi + ebp]
// 0058bf24  2bce                 sub ecx, esi
// 0058bf26  69f64e010000         imul esi, esi, 0x14e
// 0058bf2c  6bc962               imul ecx, ecx, 0x62
// 0058bf2f  c1f908               sar ecx, 8
// 0058bf32  c1fa08               sar edx, 8
// 0058bf35  03d1                 add edx, ecx
// 0058bf37  c1fe08               sar esi, 8
// 0058bf3a  03f1                 add esi, ecx
// 0058bf3c  8d0c2b               lea ecx, [ebx + ebp]
// 0058bf3f  69c9b5000000         imul ecx, ecx, 0xb5
// 0058bf45  c1f908               sar ecx, 8
// 0058bf48  8d1c39               lea ebx, [ecx + edi]
// 0058bf4b  2bf9                 sub edi, ecx
// 0058bf4d  8d0c17               lea ecx, [edi + edx]
// 0058bf50  2bfa                 sub edi, edx
// 0058bf52  8d1433               lea edx, [ebx + esi]
// 0058bf55  2bde                 sub ebx, esi
// 0058bf57  89486c               mov dword ptr [eax + 0x6c], ecx
// 0058bf5a  89782c               mov dword ptr [eax + 0x2c], edi
// 0058bf5d  8950ec               mov dword ptr [eax - 0x14], edx
// 0058bf60  8998ac000000         mov dword ptr [eax + 0xac], ebx
// 0058bf66  83c010               add eax, 0x10
// 0058bf69  836c242801           sub dword ptr [esp + 0x28], 1
// 0058bf6e  0f859cfcffff         jne 0x58bc10
// 0058bf74  5f                   pop edi
// 0058bf75  5e                   pop esi
// 0058bf76  5d                   pop ebp
// 0058bf77  5b                   pop ebx
// 0058bf78  83c414               add esp, 0x14
// 0058bf7b  c3                   ret 
// library jpeg-6b/jfdctfst.c (function _jpeg_fdct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctfst.c
