// roc 2007-03 0052cc00  unit: seg_00520000  size: 1740 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052cc00
//
// 0052cc00  83ec14               sub esp, 0x14
// 0052cc03  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052cc07  53                   push ebx
// 0052cc08  55                   push ebp
// 0052cc09  56                   push esi
// 0052cc0a  83c008               add eax, 8
// 0052cc0d  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 0052cc15  57                   push edi
// 0052cc16  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0052cc19  8b78f8               mov edi, dword ptr [eax - 8]
// 0052cc1c  8b7010               mov esi, dword ptr [eax + 0x10]
// 0052cc1f  8d1439               lea edx, [ecx + edi]
// 0052cc22  2bf9                 sub edi, ecx
// 0052cc24  8b48fc               mov ecx, dword ptr [eax - 4]
// 0052cc27  8d1c31               lea ebx, [ecx + esi]
// 0052cc2a  2bce                 sub ecx, esi
// 0052cc2c  8b700c               mov esi, dword ptr [eax + 0xc]
// 0052cc2f  8be9                 mov ebp, ecx
// 0052cc31  8b08                 mov ecx, dword ptr [eax]
// 0052cc33  03f1                 add esi, ecx
// 0052cc35  2b480c               sub ecx, dword ptr [eax + 0xc]
// 0052cc38  89742410             mov dword ptr [esp + 0x10], esi
// 0052cc3c  8b7008               mov esi, dword ptr [eax + 8]
// 0052cc3f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052cc43  8b4804               mov ecx, dword ptr [eax + 4]
// 0052cc46  03f1                 add esi, ecx
// 0052cc48  2b4808               sub ecx, dword ptr [eax + 8]
// 0052cc4b  89742414             mov dword ptr [esp + 0x14], esi
// 0052cc4f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052cc53  8d0c16               lea ecx, [esi + edx]
// 0052cc56  2bd6                 sub edx, esi
// 0052cc58  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cc5c  03f3                 add esi, ebx
// 0052cc5e  03f1                 add esi, ecx
// 0052cc60  8970f8               mov dword ptr [eax - 8], esi
// 0052cc63  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cc67  03f3                 add esi, ebx
// 0052cc69  2bce                 sub ecx, esi
// 0052cc6b  894808               mov dword ptr [eax + 8], ecx
// 0052cc6e  8bca                 mov ecx, edx
// 0052cc70  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052cc74  03cb                 add ecx, ebx
// 0052cc76  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052cc7a  69c9b5000000         imul ecx, ecx, 0xb5
// 0052cc80  c1f908               sar ecx, 8
// 0052cc83  8d3411               lea esi, [ecx + edx]
// 0052cc86  2bd1                 sub edx, ecx
// 0052cc88  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052cc8c  895010               mov dword ptr [eax + 0x10], edx
// 0052cc8f  8d1419               lea edx, [ecx + ebx]
// 0052cc92  8930                 mov dword ptr [eax], esi
// 0052cc94  8d342f               lea esi, [edi + ebp]
// 0052cc97  8bca                 mov ecx, edx
// 0052cc99  69d28b000000         imul edx, edx, 0x8b
// 0052cc9f  2bce                 sub ecx, esi
// 0052cca1  69f64e010000         imul esi, esi, 0x14e
// 0052cca7  6bc962               imul ecx, ecx, 0x62
// 0052ccaa  c1f908               sar ecx, 8
// 0052ccad  c1fe08               sar esi, 8
// 0052ccb0  03f1                 add esi, ecx
// 0052ccb2  c1fa08               sar edx, 8
// 0052ccb5  03d1                 add edx, ecx
// 0052ccb7  8d0c2b               lea ecx, [ebx + ebp]
// 0052ccba  69c9b5000000         imul ecx, ecx, 0xb5
// 0052ccc0  c1f908               sar ecx, 8
// 0052ccc3  8d1c39               lea ebx, [ecx + edi]
// 0052ccc6  2bf9                 sub edi, ecx
// 0052ccc8  8d0c17               lea ecx, [edi + edx]
// 0052cccb  2bfa                 sub edi, edx
// 0052cccd  8d1433               lea edx, [ebx + esi]
// 0052ccd0  89480c               mov dword ptr [eax + 0xc], ecx
// 0052ccd3  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0052ccd6  897804               mov dword ptr [eax + 4], edi
// 0052ccd9  8b7818               mov edi, dword ptr [eax + 0x18]
// 0052ccdc  2bde                 sub ebx, esi
// 0052ccde  8b7030               mov esi, dword ptr [eax + 0x30]
// 0052cce1  8950fc               mov dword ptr [eax - 4], edx
// 0052cce4  8d1439               lea edx, [ecx + edi]
// 0052cce7  2bf9                 sub edi, ecx
// 0052cce9  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0052ccec  895814               mov dword ptr [eax + 0x14], ebx
// 0052ccef  8d1c31               lea ebx, [ecx + esi]
// 0052ccf2  2bce                 sub ecx, esi
// 0052ccf4  8b702c               mov esi, dword ptr [eax + 0x2c]
// 0052ccf7  8be9                 mov ebp, ecx
// 0052ccf9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0052ccfc  03f1                 add esi, ecx
// 0052ccfe  2b482c               sub ecx, dword ptr [eax + 0x2c]
// 0052cd01  89742410             mov dword ptr [esp + 0x10], esi
// 0052cd05  8b7028               mov esi, dword ptr [eax + 0x28]
// 0052cd08  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052cd0c  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0052cd0f  03f1                 add esi, ecx
// 0052cd11  2b4828               sub ecx, dword ptr [eax + 0x28]
// 0052cd14  89742414             mov dword ptr [esp + 0x14], esi
// 0052cd18  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052cd1c  8d0c16               lea ecx, [esi + edx]
// 0052cd1f  2bd6                 sub edx, esi
// 0052cd21  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cd25  03f3                 add esi, ebx
// 0052cd27  03f1                 add esi, ecx
// 0052cd29  897018               mov dword ptr [eax + 0x18], esi
// 0052cd2c  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cd30  03f3                 add esi, ebx
// 0052cd32  2bce                 sub ecx, esi
// 0052cd34  894828               mov dword ptr [eax + 0x28], ecx
// 0052cd37  8bca                 mov ecx, edx
// 0052cd39  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052cd3d  03cb                 add ecx, ebx
// 0052cd3f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052cd43  69c9b5000000         imul ecx, ecx, 0xb5
// 0052cd49  c1f908               sar ecx, 8
// 0052cd4c  8d3411               lea esi, [ecx + edx]
// 0052cd4f  2bd1                 sub edx, ecx
// 0052cd51  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052cd55  897020               mov dword ptr [eax + 0x20], esi
// 0052cd58  895030               mov dword ptr [eax + 0x30], edx
// 0052cd5b  8d1419               lea edx, [ecx + ebx]
// 0052cd5e  8d342f               lea esi, [edi + ebp]
// 0052cd61  8bca                 mov ecx, edx
// 0052cd63  69d28b000000         imul edx, edx, 0x8b
// 0052cd69  2bce                 sub ecx, esi
// 0052cd6b  69f64e010000         imul esi, esi, 0x14e
// 0052cd71  6bc962               imul ecx, ecx, 0x62
// 0052cd74  c1f908               sar ecx, 8
// 0052cd77  c1fe08               sar esi, 8
// 0052cd7a  03f1                 add esi, ecx
// 0052cd7c  c1fa08               sar edx, 8
// 0052cd7f  03d1                 add edx, ecx
// 0052cd81  8d0c2b               lea ecx, [ebx + ebp]
// 0052cd84  69c9b5000000         imul ecx, ecx, 0xb5
// 0052cd8a  c1f908               sar ecx, 8
// 0052cd8d  8d1c39               lea ebx, [ecx + edi]
// 0052cd90  2bf9                 sub edi, ecx
// 0052cd92  8d0c17               lea ecx, [edi + edx]
// 0052cd95  2bfa                 sub edi, edx
// 0052cd97  8d1433               lea edx, [ebx + esi]
// 0052cd9a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0052cd9d  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0052cda0  2bde                 sub ebx, esi
// 0052cda2  8b7050               mov esi, dword ptr [eax + 0x50]
// 0052cda5  897824               mov dword ptr [eax + 0x24], edi
// 0052cda8  8b7838               mov edi, dword ptr [eax + 0x38]
// 0052cdab  89501c               mov dword ptr [eax + 0x1c], edx
// 0052cdae  8d1439               lea edx, [ecx + edi]
// 0052cdb1  2bf9                 sub edi, ecx
// 0052cdb3  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0052cdb6  895834               mov dword ptr [eax + 0x34], ebx
// 0052cdb9  8d1c31               lea ebx, [ecx + esi]
// 0052cdbc  2bce                 sub ecx, esi
// 0052cdbe  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0052cdc1  8be9                 mov ebp, ecx
// 0052cdc3  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0052cdc6  03f1                 add esi, ecx
// 0052cdc8  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0052cdcb  89742410             mov dword ptr [esp + 0x10], esi
// 0052cdcf  8b7048               mov esi, dword ptr [eax + 0x48]
// 0052cdd2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052cdd6  8b4844               mov ecx, dword ptr [eax + 0x44]
// 0052cdd9  03f1                 add esi, ecx
// 0052cddb  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0052cdde  89742414             mov dword ptr [esp + 0x14], esi
// 0052cde2  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052cde6  8d0c16               lea ecx, [esi + edx]
// 0052cde9  2bd6                 sub edx, esi
// 0052cdeb  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cdef  03f3                 add esi, ebx
// 0052cdf1  03f1                 add esi, ecx
// 0052cdf3  897038               mov dword ptr [eax + 0x38], esi
// 0052cdf6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cdfa  03f3                 add esi, ebx
// 0052cdfc  2bce                 sub ecx, esi
// 0052cdfe  894848               mov dword ptr [eax + 0x48], ecx
// 0052ce01  8bca                 mov ecx, edx
// 0052ce03  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052ce07  03cb                 add ecx, ebx
// 0052ce09  69c9b5000000         imul ecx, ecx, 0xb5
// 0052ce0f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052ce13  c1f908               sar ecx, 8
// 0052ce16  8d3411               lea esi, [ecx + edx]
// 0052ce19  2bd1                 sub edx, ecx
// 0052ce1b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052ce1f  897040               mov dword ptr [eax + 0x40], esi
// 0052ce22  895050               mov dword ptr [eax + 0x50], edx
// 0052ce25  8d1419               lea edx, [ecx + ebx]
// 0052ce28  8bca                 mov ecx, edx
// 0052ce2a  69d28b000000         imul edx, edx, 0x8b
// 0052ce30  8d342f               lea esi, [edi + ebp]
// 0052ce33  2bce                 sub ecx, esi
// 0052ce35  69f64e010000         imul esi, esi, 0x14e
// 0052ce3b  6bc962               imul ecx, ecx, 0x62
// 0052ce3e  c1f908               sar ecx, 8
// 0052ce41  c1fe08               sar esi, 8
// 0052ce44  03f1                 add esi, ecx
// 0052ce46  c1fa08               sar edx, 8
// 0052ce49  03d1                 add edx, ecx
// 0052ce4b  8d0c2b               lea ecx, [ebx + ebp]
// 0052ce4e  69c9b5000000         imul ecx, ecx, 0xb5
// 0052ce54  c1f908               sar ecx, 8
// 0052ce57  8d1c39               lea ebx, [ecx + edi]
// 0052ce5a  2bf9                 sub edi, ecx
// 0052ce5c  8d0c17               lea ecx, [edi + edx]
// 0052ce5f  89484c               mov dword ptr [eax + 0x4c], ecx
// 0052ce62  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0052ce65  2bfa                 sub edi, edx
// 0052ce67  8d1433               lea edx, [ebx + esi]
// 0052ce6a  2bde                 sub ebx, esi
// 0052ce6c  8b7070               mov esi, dword ptr [eax + 0x70]
// 0052ce6f  897844               mov dword ptr [eax + 0x44], edi
// 0052ce72  8b7858               mov edi, dword ptr [eax + 0x58]
// 0052ce75  89503c               mov dword ptr [eax + 0x3c], edx
// 0052ce78  8d140f               lea edx, [edi + ecx]
// 0052ce7b  2bf9                 sub edi, ecx
// 0052ce7d  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0052ce80  895854               mov dword ptr [eax + 0x54], ebx
// 0052ce83  8d1c0e               lea ebx, [esi + ecx]
// 0052ce86  2bce                 sub ecx, esi
// 0052ce88  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0052ce8b  8be9                 mov ebp, ecx
// 0052ce8d  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0052ce90  03f1                 add esi, ecx
// 0052ce92  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0052ce95  89742410             mov dword ptr [esp + 0x10], esi
// 0052ce99  8b7068               mov esi, dword ptr [eax + 0x68]
// 0052ce9c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052cea0  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0052cea3  03f1                 add esi, ecx
// 0052cea5  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0052cea8  89742414             mov dword ptr [esp + 0x14], esi
// 0052ceac  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052ceb0  8d0c16               lea ecx, [esi + edx]
// 0052ceb3  2bd6                 sub edx, esi
// 0052ceb5  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052ceb9  03f3                 add esi, ebx
// 0052cebb  03f1                 add esi, ecx
// 0052cebd  897058               mov dword ptr [eax + 0x58], esi
// 0052cec0  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cec4  03f3                 add esi, ebx
// 0052cec6  2bce                 sub ecx, esi
// 0052cec8  894868               mov dword ptr [eax + 0x68], ecx
// 0052cecb  8bca                 mov ecx, edx
// 0052cecd  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052ced1  03cb                 add ecx, ebx
// 0052ced3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052ced7  69c9b5000000         imul ecx, ecx, 0xb5
// 0052cedd  c1f908               sar ecx, 8
// 0052cee0  8d3411               lea esi, [ecx + edx]
// 0052cee3  2bd1                 sub edx, ecx
// 0052cee5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052cee9  897060               mov dword ptr [eax + 0x60], esi
// 0052ceec  895070               mov dword ptr [eax + 0x70], edx
// 0052ceef  8d1419               lea edx, [ecx + ebx]
// 0052cef2  8bca                 mov ecx, edx
// 0052cef4  69d28b000000         imul edx, edx, 0x8b
// 0052cefa  8d342f               lea esi, [edi + ebp]
// 0052cefd  2bce                 sub ecx, esi
// 0052ceff  69f64e010000         imul esi, esi, 0x14e
// 0052cf05  6bc962               imul ecx, ecx, 0x62
// 0052cf08  c1f908               sar ecx, 8
// 0052cf0b  c1fa08               sar edx, 8
// 0052cf0e  03d1                 add edx, ecx
// 0052cf10  c1fe08               sar esi, 8
// 0052cf13  03f1                 add esi, ecx
// 0052cf15  8d0c2b               lea ecx, [ebx + ebp]
// 0052cf18  69c9b5000000         imul ecx, ecx, 0xb5
// 0052cf1e  c1f908               sar ecx, 8
// 0052cf21  8d1c39               lea ebx, [ecx + edi]
// 0052cf24  2bf9                 sub edi, ecx
// 0052cf26  8d0c17               lea ecx, [edi + edx]
// 0052cf29  2bfa                 sub edi, edx
// 0052cf2b  8d1433               lea edx, [ebx + esi]
// 0052cf2e  2bde                 sub ebx, esi
// 0052cf30  89486c               mov dword ptr [eax + 0x6c], ecx
// 0052cf33  897864               mov dword ptr [eax + 0x64], edi
// 0052cf36  89505c               mov dword ptr [eax + 0x5c], edx
// 0052cf39  895874               mov dword ptr [eax + 0x74], ebx
// 0052cf3c  0580000000           add eax, 0x80
// 0052cf41  836c242001           sub dword ptr [esp + 0x20], 1
// 0052cf46  0f85cafcffff         jne 0x52cc16
// 0052cf4c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052cf50  83c040               add eax, 0x40
// 0052cf53  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0052cf5b  eb03                 jmp 0x52cf60
// 0052cf5d  8d4900               lea ecx, [ecx]
// 0052cf60  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0052cf66  8b78c0               mov edi, dword ptr [eax - 0x40]
// 0052cf69  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 0052cf6f  8d1439               lea edx, [ecx + edi]
// 0052cf72  2bf9                 sub edi, ecx
// 0052cf74  8b48e0               mov ecx, dword ptr [eax - 0x20]
// 0052cf77  8d1c31               lea ebx, [ecx + esi]
// 0052cf7a  2bce                 sub ecx, esi
// 0052cf7c  8b7060               mov esi, dword ptr [eax + 0x60]
// 0052cf7f  8be9                 mov ebp, ecx
// 0052cf81  8b08                 mov ecx, dword ptr [eax]
// 0052cf83  03f1                 add esi, ecx
// 0052cf85  2b4860               sub ecx, dword ptr [eax + 0x60]
// 0052cf88  89742410             mov dword ptr [esp + 0x10], esi
// 0052cf8c  8b7040               mov esi, dword ptr [eax + 0x40]
// 0052cf8f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052cf93  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0052cf96  03f1                 add esi, ecx
// 0052cf98  2b4840               sub ecx, dword ptr [eax + 0x40]
// 0052cf9b  89742414             mov dword ptr [esp + 0x14], esi
// 0052cf9f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052cfa3  8d0c16               lea ecx, [esi + edx]
// 0052cfa6  2bd6                 sub edx, esi
// 0052cfa8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cfac  03f3                 add esi, ebx
// 0052cfae  03f1                 add esi, ecx
// 0052cfb0  8970c0               mov dword ptr [eax - 0x40], esi
// 0052cfb3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052cfb7  03f3                 add esi, ebx
// 0052cfb9  2bce                 sub ecx, esi
// 0052cfbb  894840               mov dword ptr [eax + 0x40], ecx
// 0052cfbe  8bca                 mov ecx, edx
// 0052cfc0  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052cfc4  03cb                 add ecx, ebx
// 0052cfc6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052cfca  69c9b5000000         imul ecx, ecx, 0xb5
// 0052cfd0  c1f908               sar ecx, 8
// 0052cfd3  8d3411               lea esi, [ecx + edx]
// 0052cfd6  2bd1                 sub edx, ecx
// 0052cfd8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052cfdc  899080000000         mov dword ptr [eax + 0x80], edx
// 0052cfe2  8d1419               lea edx, [ecx + ebx]
// 0052cfe5  8930                 mov dword ptr [eax], esi
// 0052cfe7  8d342f               lea esi, [edi + ebp]
// 0052cfea  8bca                 mov ecx, edx
// 0052cfec  69d28b000000         imul edx, edx, 0x8b
// 0052cff2  2bce                 sub ecx, esi
// 0052cff4  69f64e010000         imul esi, esi, 0x14e
// 0052cffa  6bc962               imul ecx, ecx, 0x62
// 0052cffd  c1f908               sar ecx, 8
// 0052d000  c1fe08               sar esi, 8
// 0052d003  03f1                 add esi, ecx
// 0052d005  c1fa08               sar edx, 8
// 0052d008  03d1                 add edx, ecx
// 0052d00a  8d0c2b               lea ecx, [ebx + ebp]
// 0052d00d  69c9b5000000         imul ecx, ecx, 0xb5
// 0052d013  c1f908               sar ecx, 8
// 0052d016  8d1c39               lea ebx, [ecx + edi]
// 0052d019  2bf9                 sub edi, ecx
// 0052d01b  8d0c17               lea ecx, [edi + edx]
// 0052d01e  2bfa                 sub edi, edx
// 0052d020  8d1433               lea edx, [ebx + esi]
// 0052d023  894860               mov dword ptr [eax + 0x60], ecx
// 0052d026  8b88a4000000         mov ecx, dword ptr [eax + 0xa4]
// 0052d02c  897820               mov dword ptr [eax + 0x20], edi
// 0052d02f  8b78c4               mov edi, dword ptr [eax - 0x3c]
// 0052d032  2bde                 sub ebx, esi
// 0052d034  8bb084000000         mov esi, dword ptr [eax + 0x84]
// 0052d03a  8950e0               mov dword ptr [eax - 0x20], edx
// 0052d03d  8d1439               lea edx, [ecx + edi]
// 0052d040  2bf9                 sub edi, ecx
// 0052d042  8b48e4               mov ecx, dword ptr [eax - 0x1c]
// 0052d045  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0052d04b  8d1c31               lea ebx, [ecx + esi]
// 0052d04e  2bce                 sub ecx, esi
// 0052d050  8b7064               mov esi, dword ptr [eax + 0x64]
// 0052d053  8be9                 mov ebp, ecx
// 0052d055  8b4804               mov ecx, dword ptr [eax + 4]
// 0052d058  03f1                 add esi, ecx
// 0052d05a  2b4864               sub ecx, dword ptr [eax + 0x64]
// 0052d05d  89742410             mov dword ptr [esp + 0x10], esi
// 0052d061  8b7044               mov esi, dword ptr [eax + 0x44]
// 0052d064  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052d068  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0052d06b  03f1                 add esi, ecx
// 0052d06d  2b4844               sub ecx, dword ptr [eax + 0x44]
// 0052d070  89742414             mov dword ptr [esp + 0x14], esi
// 0052d074  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052d078  8d0c16               lea ecx, [esi + edx]
// 0052d07b  2bd6                 sub edx, esi
// 0052d07d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052d081  03f3                 add esi, ebx
// 0052d083  03f1                 add esi, ecx
// 0052d085  8970c4               mov dword ptr [eax - 0x3c], esi
// 0052d088  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052d08c  03f3                 add esi, ebx
// 0052d08e  2bce                 sub ecx, esi
// 0052d090  894844               mov dword ptr [eax + 0x44], ecx
// 0052d093  8bca                 mov ecx, edx
// 0052d095  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052d099  03cb                 add ecx, ebx
// 0052d09b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052d09f  69c9b5000000         imul ecx, ecx, 0xb5
// 0052d0a5  c1f908               sar ecx, 8
// 0052d0a8  8d3411               lea esi, [ecx + edx]
// 0052d0ab  2bd1                 sub edx, ecx
// 0052d0ad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052d0b1  897004               mov dword ptr [eax + 4], esi
// 0052d0b4  899084000000         mov dword ptr [eax + 0x84], edx
// 0052d0ba  8d1419               lea edx, [ecx + ebx]
// 0052d0bd  8d342f               lea esi, [edi + ebp]
// 0052d0c0  8bca                 mov ecx, edx
// 0052d0c2  69d28b000000         imul edx, edx, 0x8b
// 0052d0c8  2bce                 sub ecx, esi
// 0052d0ca  69f64e010000         imul esi, esi, 0x14e
// 0052d0d0  6bc962               imul ecx, ecx, 0x62
// 0052d0d3  c1f908               sar ecx, 8
// 0052d0d6  c1fe08               sar esi, 8
// 0052d0d9  03f1                 add esi, ecx
// 0052d0db  c1fa08               sar edx, 8
// 0052d0de  03d1                 add edx, ecx
// 0052d0e0  8d0c2b               lea ecx, [ebx + ebp]
// 0052d0e3  69c9b5000000         imul ecx, ecx, 0xb5
// 0052d0e9  c1f908               sar ecx, 8
// 0052d0ec  8d1c39               lea ebx, [ecx + edi]
// 0052d0ef  2bf9                 sub edi, ecx
// 0052d0f1  8d0c17               lea ecx, [edi + edx]
// 0052d0f4  2bfa                 sub edi, edx
// 0052d0f6  8d1433               lea edx, [ebx + esi]
// 0052d0f9  894864               mov dword ptr [eax + 0x64], ecx
// 0052d0fc  8b88a8000000         mov ecx, dword ptr [eax + 0xa8]
// 0052d102  2bde                 sub ebx, esi
// 0052d104  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 0052d10a  897824               mov dword ptr [eax + 0x24], edi
// 0052d10d  8b78c8               mov edi, dword ptr [eax - 0x38]
// 0052d110  8950e4               mov dword ptr [eax - 0x1c], edx
// 0052d113  8d1439               lea edx, [ecx + edi]
// 0052d116  2bf9                 sub edi, ecx
// 0052d118  8b48e8               mov ecx, dword ptr [eax - 0x18]
// 0052d11b  8998a4000000         mov dword ptr [eax + 0xa4], ebx
// 0052d121  8d1c31               lea ebx, [ecx + esi]
// 0052d124  2bce                 sub ecx, esi
// 0052d126  8b7068               mov esi, dword ptr [eax + 0x68]
// 0052d129  8be9                 mov ebp, ecx
// 0052d12b  8b4808               mov ecx, dword ptr [eax + 8]
// 0052d12e  03f1                 add esi, ecx
// 0052d130  2b4868               sub ecx, dword ptr [eax + 0x68]
// 0052d133  89742410             mov dword ptr [esp + 0x10], esi
// 0052d137  8b7048               mov esi, dword ptr [eax + 0x48]
// 0052d13a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052d13e  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0052d141  03f1                 add esi, ecx
// 0052d143  2b4848               sub ecx, dword ptr [eax + 0x48]
// 0052d146  89742414             mov dword ptr [esp + 0x14], esi
// 0052d14a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052d14e  8d0c16               lea ecx, [esi + edx]
// 0052d151  2bd6                 sub edx, esi
// 0052d153  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052d157  03f3                 add esi, ebx
// 0052d159  03f1                 add esi, ecx
// 0052d15b  8970c8               mov dword ptr [eax - 0x38], esi
// 0052d15e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052d162  03f3                 add esi, ebx
// 0052d164  2bce                 sub ecx, esi
// 0052d166  894848               mov dword ptr [eax + 0x48], ecx
// 0052d169  8bca                 mov ecx, edx
// 0052d16b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052d16f  03cb                 add ecx, ebx
// 0052d171  69c9b5000000         imul ecx, ecx, 0xb5
// 0052d177  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052d17b  c1f908               sar ecx, 8
// 0052d17e  8d3411               lea esi, [ecx + edx]
// 0052d181  2bd1                 sub edx, ecx
// 0052d183  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052d187  897008               mov dword ptr [eax + 8], esi
// 0052d18a  899088000000         mov dword ptr [eax + 0x88], edx
// 0052d190  8d1419               lea edx, [ecx + ebx]
// 0052d193  8bca                 mov ecx, edx
// 0052d195  69d28b000000         imul edx, edx, 0x8b
// 0052d19b  8d342f               lea esi, [edi + ebp]
// 0052d19e  2bce                 sub ecx, esi
// 0052d1a0  69f64e010000         imul esi, esi, 0x14e
// 0052d1a6  6bc962               imul ecx, ecx, 0x62
// 0052d1a9  c1f908               sar ecx, 8
// 0052d1ac  c1fe08               sar esi, 8
// 0052d1af  03f1                 add esi, ecx
// 0052d1b1  c1fa08               sar edx, 8
// 0052d1b4  03d1                 add edx, ecx
// 0052d1b6  8d0c2b               lea ecx, [ebx + ebp]
// 0052d1b9  69c9b5000000         imul ecx, ecx, 0xb5
// 0052d1bf  c1f908               sar ecx, 8
// 0052d1c2  8d1c39               lea ebx, [ecx + edi]
// 0052d1c5  2bf9                 sub edi, ecx
// 0052d1c7  8d0c17               lea ecx, [edi + edx]
// 0052d1ca  894868               mov dword ptr [eax + 0x68], ecx
// 0052d1cd  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 0052d1d3  2bfa                 sub edi, edx
// 0052d1d5  8d1433               lea edx, [ebx + esi]
// 0052d1d8  2bde                 sub ebx, esi
// 0052d1da  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 0052d1e0  897828               mov dword ptr [eax + 0x28], edi
// 0052d1e3  8b78cc               mov edi, dword ptr [eax - 0x34]
// 0052d1e6  8950e8               mov dword ptr [eax - 0x18], edx
// 0052d1e9  8d140f               lea edx, [edi + ecx]
// 0052d1ec  2bf9                 sub edi, ecx
// 0052d1ee  8b48ec               mov ecx, dword ptr [eax - 0x14]
// 0052d1f1  8998a8000000         mov dword ptr [eax + 0xa8], ebx
// 0052d1f7  8d1c0e               lea ebx, [esi + ecx]
// 0052d1fa  2bce                 sub ecx, esi
// 0052d1fc  8b706c               mov esi, dword ptr [eax + 0x6c]
// 0052d1ff  8be9                 mov ebp, ecx
// 0052d201  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0052d204  03f1                 add esi, ecx
// 0052d206  2b486c               sub ecx, dword ptr [eax + 0x6c]
// 0052d209  89742410             mov dword ptr [esp + 0x10], esi
// 0052d20d  8b704c               mov esi, dword ptr [eax + 0x4c]
// 0052d210  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052d214  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0052d217  03f1                 add esi, ecx
// 0052d219  2b484c               sub ecx, dword ptr [eax + 0x4c]
// 0052d21c  89742414             mov dword ptr [esp + 0x14], esi
// 0052d220  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052d224  8d0c16               lea ecx, [esi + edx]
// 0052d227  2bd6                 sub edx, esi
// 0052d229  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052d22d  03f3                 add esi, ebx
// 0052d22f  03f1                 add esi, ecx
// 0052d231  8970cc               mov dword ptr [eax - 0x34], esi
// 0052d234  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052d238  03f3                 add esi, ebx
// 0052d23a  2bce                 sub ecx, esi
// 0052d23c  89484c               mov dword ptr [eax + 0x4c], ecx
// 0052d23f  8bca                 mov ecx, edx
// 0052d241  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052d245  03cb                 add ecx, ebx
// 0052d247  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052d24b  69c9b5000000         imul ecx, ecx, 0xb5
// 0052d251  c1f908               sar ecx, 8
// 0052d254  8d3411               lea esi, [ecx + edx]
// 0052d257  2bd1                 sub edx, ecx
// 0052d259  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052d25d  89700c               mov dword ptr [eax + 0xc], esi
// 0052d260  89908c000000         mov dword ptr [eax + 0x8c], edx
// 0052d266  8d1419               lea edx, [ecx + ebx]
// 0052d269  8bca                 mov ecx, edx
// 0052d26b  69d28b000000         imul edx, edx, 0x8b
// 0052d271  8d342f               lea esi, [edi + ebp]
// 0052d274  2bce                 sub ecx, esi
// 0052d276  69f64e010000         imul esi, esi, 0x14e
// 0052d27c  6bc962               imul ecx, ecx, 0x62
// 0052d27f  c1f908               sar ecx, 8
// 0052d282  c1fa08               sar edx, 8
// 0052d285  03d1                 add edx, ecx
// 0052d287  c1fe08               sar esi, 8
// 0052d28a  03f1                 add esi, ecx
// 0052d28c  8d0c2b               lea ecx, [ebx + ebp]
// 0052d28f  69c9b5000000         imul ecx, ecx, 0xb5
// 0052d295  c1f908               sar ecx, 8
// 0052d298  8d1c39               lea ebx, [ecx + edi]
// 0052d29b  2bf9                 sub edi, ecx
// 0052d29d  8d0c17               lea ecx, [edi + edx]
// 0052d2a0  2bfa                 sub edi, edx
// 0052d2a2  8d1433               lea edx, [ebx + esi]
// 0052d2a5  2bde                 sub ebx, esi
// 0052d2a7  89486c               mov dword ptr [eax + 0x6c], ecx
// 0052d2aa  89782c               mov dword ptr [eax + 0x2c], edi
// 0052d2ad  8950ec               mov dword ptr [eax - 0x14], edx
// 0052d2b0  8998ac000000         mov dword ptr [eax + 0xac], ebx
// 0052d2b6  83c010               add eax, 0x10
// 0052d2b9  836c242801           sub dword ptr [esp + 0x28], 1
// 0052d2be  0f859cfcffff         jne 0x52cf60
// 0052d2c4  5f                   pop edi
// 0052d2c5  5e                   pop esi
// 0052d2c6  5d                   pop ebp
// 0052d2c7  5b                   pop ebx
// 0052d2c8  83c414               add esp, 0x14
// 0052d2cb  c3                   ret 
// library jpeg-6b/jfdctfst.c (function _jpeg_fdct_ifast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctfst.c
