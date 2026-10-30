// roc 2009-12 006213c0  unit: seg_00620000  size: 978 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006213c0
//
// 006213c0  83ec1c               sub esp, 0x1c
// 006213c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 006213c7  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 006213cd  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 006213d0  8b10                 mov edx, dword ptr [eax]
// 006213d2  53                   push ebx
// 006213d3  8b5810               mov ebx, dword ptr [eax + 0x10]
// 006213d6  55                   push ebp
// 006213d7  8b6814               mov ebp, dword ptr [eax + 0x14]
// 006213da  56                   push esi
// 006213db  8b7008               mov esi, dword ptr [eax + 8]
// 006213de  894c2420             mov dword ptr [esp + 0x20], ecx
// 006213e2  8b4804               mov ecx, dword ptr [eax + 4]
// 006213e5  3bd1                 cmp edx, ecx
// 006213e7  57                   push edi
// 006213e8  8b780c               mov edi, dword ptr [eax + 0xc]
// 006213eb  89542418             mov dword ptr [esp + 0x18], edx
// 006213ef  894c2414             mov dword ptr [esp + 0x14], ecx
// 006213f3  89742410             mov dword ptr [esp + 0x10], esi
// 006213f7  897c241c             mov dword ptr [esp + 0x1c], edi
// 006213fb  895c2420             mov dword ptr [esp + 0x20], ebx
// 006213ff  896c2428             mov dword ptr [esp + 0x28], ebp
// 00621403  0f8def000000         jge 0x6214f8
// 00621409  8bfa                 mov edi, edx
// 0062140b  eb03                 jmp 0x621410
// 0062140d  8d4900               lea ecx, [ecx]
// 00621410  8b742410             mov esi, dword ptr [esp + 0x10]
// 00621414  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00621418  7f44                 jg 0x62145e
// 0062141a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062141e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00621421  8bd6                 mov edx, esi
// 00621423  c1e205               shl edx, 5
// 00621426  03d3                 add edx, ebx
// 00621428  8d1451               lea edx, [ecx + edx*2]
// 0062142b  eb03                 jmp 0x621430
// 0062142d  8d4900               lea ecx, [ecx]
// 00621430  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00621434  8bca                 mov ecx, edx
// 00621436  8bc3                 mov eax, ebx
// 00621438  7f16                 jg 0x621450
// 0062143a  8d9b00000000         lea ebx, [ebx]
// 00621440  668b19               mov bx, word ptr [ecx]
// 00621443  83c102               add ecx, 2
// 00621446  6685db               test bx, bx
// 00621449  751c                 jne 0x621467
// 0062144b  40                   inc eax
// 0062144c  3bc5                 cmp eax, ebp
// 0062144e  7ef0                 jle 0x621440
// 00621450  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00621454  46                   inc esi
// 00621455  83c240               add edx, 0x40
// 00621458  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0062145c  7ed2                 jle 0x621430
// 0062145e  47                   inc edi
// 0062145f  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00621463  7eab                 jle 0x621410
// 00621465  eb0e                 jmp 0x621475
// 00621467  8b542430             mov edx, dword ptr [esp + 0x30]
// 0062146b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0062146f  897c2418             mov dword ptr [esp + 0x18], edi
// 00621473  893a                 mov dword ptr [edx], edi
// 00621475  8b542418             mov edx, dword ptr [esp + 0x18]
// 00621479  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062147d  3bc2                 cmp eax, edx
// 0062147f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00621483  7e73                 jle 0x6214f8
// 00621485  89442420             mov dword ptr [esp + 0x20], eax
// 00621489  8da42400000000       lea esp, [esp]
// 00621490  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00621494  7f38                 jg 0x6214ce
// 00621496  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062149a  8b0482               mov eax, dword ptr [edx + eax*4]
// 0062149d  8bce                 mov ecx, esi
// 0062149f  c1e105               shl ecx, 5
// 006214a2  03cb                 add ecx, ebx
// 006214a4  8d1448               lea edx, [eax + ecx*2]
// 006214a7  3bdd                 cmp ebx, ebp
// 006214a9  8bca                 mov ecx, edx
// 006214ab  8bc3                 mov eax, ebx
// 006214ad  7f11                 jg 0x6214c0
// 006214af  90                   nop 
// 006214b0  668b39               mov di, word ptr [ecx]
// 006214b3  83c102               add ecx, 2
// 006214b6  6685ff               test di, di
// 006214b9  7526                 jne 0x6214e1
// 006214bb  40                   inc eax
// 006214bc  3bc5                 cmp eax, ebp
// 006214be  7ef0                 jle 0x6214b0
// 006214c0  46                   inc esi
// 006214c1  83c240               add edx, 0x40
// 006214c4  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 006214c8  7edd                 jle 0x6214a7
// 006214ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 006214ce  8b542418             mov edx, dword ptr [esp + 0x18]
// 006214d2  8b742410             mov esi, dword ptr [esp + 0x10]
// 006214d6  48                   dec eax
// 006214d7  3bc2                 cmp eax, edx
// 006214d9  89442420             mov dword ptr [esp + 0x20], eax
// 006214dd  7db1                 jge 0x621490
// 006214df  eb17                 jmp 0x6214f8
// 006214e1  8b442420             mov eax, dword ptr [esp + 0x20]
// 006214e5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006214e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 006214ed  8b742410             mov esi, dword ptr [esp + 0x10]
// 006214f1  89442414             mov dword ptr [esp + 0x14], eax
// 006214f5  894104               mov dword ptr [ecx + 4], eax
// 006214f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006214fc  3bf0                 cmp esi, eax
// 006214fe  0f8dd6000000         jge 0x6215da
// 00621504  89742420             mov dword ptr [esp + 0x20], esi
// 00621508  c1e605               shl esi, 5
// 0062150b  03f3                 add esi, ebx
// 0062150d  03f6                 add esi, esi
// 0062150f  90                   nop 
// 00621510  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00621514  7f26                 jg 0x62153c
// 00621516  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062151a  8b0490               mov eax, dword ptr [eax + edx*4]
// 0062151d  03c6                 add eax, esi
// 0062151f  3bdd                 cmp ebx, ebp
// 00621521  8bcb                 mov ecx, ebx
// 00621523  7f10                 jg 0x621535
// 00621525  668b38               mov di, word ptr [eax]
// 00621528  83c002               add eax, 2
// 0062152b  6685ff               test di, di
// 0062152e  7524                 jne 0x621554
// 00621530  41                   inc ecx
// 00621531  3bcd                 cmp ecx, ebp
// 00621533  7ef0                 jle 0x621525
// 00621535  42                   inc edx
// 00621536  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0062153a  7eda                 jle 0x621516
// 0062153c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00621540  8b542418             mov edx, dword ptr [esp + 0x18]
// 00621544  40                   inc eax
// 00621545  83c640               add esi, 0x40
// 00621548  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0062154c  89442420             mov dword ptr [esp + 0x20], eax
// 00621550  7ebe                 jle 0x621510
// 00621552  eb13                 jmp 0x621567
// 00621554  8b442420             mov eax, dword ptr [esp + 0x20]
// 00621558  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062155c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00621560  89442410             mov dword ptr [esp + 0x10], eax
// 00621564  894108               mov dword ptr [ecx + 8], eax
// 00621567  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062156b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062156f  3bc6                 cmp eax, esi
// 00621571  7e67                 jle 0x6215da
// 00621573  8bf0                 mov esi, eax
// 00621575  c1e605               shl esi, 5
// 00621578  03f3                 add esi, ebx
// 0062157a  89442420             mov dword ptr [esp + 0x20], eax
// 0062157e  03f6                 add esi, esi
// 00621580  eb04                 jmp 0x621586
// 00621582  8b542418             mov edx, dword ptr [esp + 0x18]
// 00621586  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0062158a  7f2b                 jg 0x6215b7
// 0062158c  8d642400             lea esp, [esp]
// 00621590  8b442424             mov eax, dword ptr [esp + 0x24]
// 00621594  8b0490               mov eax, dword ptr [eax + edx*4]
// 00621597  03c6                 add eax, esi
// 00621599  3bdd                 cmp ebx, ebp
// 0062159b  8bcb                 mov ecx, ebx
// 0062159d  7f11                 jg 0x6215b0
// 0062159f  90                   nop 
// 006215a0  668b38               mov di, word ptr [eax]
// 006215a3  83c002               add eax, 2
// 006215a6  6685ff               test di, di
// 006215a9  7520                 jne 0x6215cb
// 006215ab  41                   inc ecx
// 006215ac  3bcd                 cmp ecx, ebp
// 006215ae  7ef0                 jle 0x6215a0
// 006215b0  42                   inc edx
// 006215b1  3b542414             cmp edx, dword ptr [esp + 0x14]
// 006215b5  7ed9                 jle 0x621590
// 006215b7  8b442420             mov eax, dword ptr [esp + 0x20]
// 006215bb  48                   dec eax
// 006215bc  83ee40               sub esi, 0x40
// 006215bf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006215c3  89442420             mov dword ptr [esp + 0x20], eax
// 006215c7  7db9                 jge 0x621582
// 006215c9  eb0f                 jmp 0x6215da
// 006215cb  8b442420             mov eax, dword ptr [esp + 0x20]
// 006215cf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006215d3  8944241c             mov dword ptr [esp + 0x1c], eax
// 006215d7  89410c               mov dword ptr [ecx + 0xc], eax
// 006215da  3bdd                 cmp ebx, ebp
// 006215dc  0f8de5000000         jge 0x6216c7
// 006215e2  8bc3                 mov eax, ebx
// 006215e4  895c2420             mov dword ptr [esp + 0x20], ebx
// 006215e8  eb06                 jmp 0x6215f0
// 006215ea  8d9b00000000         lea ebx, [ebx]
// 006215f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 006215f4  3b542414             cmp edx, dword ptr [esp + 0x14]
// 006215f8  7f43                 jg 0x62163d
// 006215fa  8b742410             mov esi, dword ptr [esp + 0x10]
// 006215fe  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00621602  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00621606  c1e605               shl esi, 5
// 00621609  03f0                 add esi, eax
// 0062160b  03f6                 add esi, esi
// 0062160d  8d4900               lea ecx, [ecx]
// 00621610  8b442424             mov eax, dword ptr [esp + 0x24]
// 00621614  8b0490               mov eax, dword ptr [eax + edx*4]
// 00621617  03c6                 add eax, esi
// 00621619  3bef                 cmp ebp, edi
// 0062161b  8bcd                 mov ecx, ebp
// 0062161d  7f0f                 jg 0x62162e
// 0062161f  90                   nop 
// 00621620  66833800             cmp word ptr [eax], 0
// 00621624  7522                 jne 0x621648
// 00621626  41                   inc ecx
// 00621627  83c040               add eax, 0x40
// 0062162a  3bcf                 cmp ecx, edi
// 0062162c  7ef2                 jle 0x621620
// 0062162e  42                   inc edx
// 0062162f  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00621633  7edb                 jle 0x621610
// 00621635  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00621639  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062163d  40                   inc eax
// 0062163e  3bc5                 cmp eax, ebp
// 00621640  89442420             mov dword ptr [esp + 0x20], eax
// 00621644  7eaa                 jle 0x6215f0
// 00621646  eb0f                 jmp 0x621657
// 00621648  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0062164c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00621650  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00621654  895910               mov dword ptr [ecx + 0x10], ebx
// 00621657  3beb                 cmp ebp, ebx
// 00621659  7e6c                 jle 0x6216c7
// 0062165b  8bc5                 mov eax, ebp
// 0062165d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00621661  8b542418             mov edx, dword ptr [esp + 0x18]
// 00621665  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00621669  7f42                 jg 0x6216ad
// 0062166b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062166f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00621673  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00621677  c1e605               shl esi, 5
// 0062167a  03f0                 add esi, eax
// 0062167c  03f6                 add esi, esi
// 0062167e  8bff                 mov edi, edi
// 00621680  8b442424             mov eax, dword ptr [esp + 0x24]
// 00621684  8b0490               mov eax, dword ptr [eax + edx*4]
// 00621687  03c6                 add eax, esi
// 00621689  3bef                 cmp ebp, edi
// 0062168b  8bcd                 mov ecx, ebp
// 0062168d  7f0f                 jg 0x62169e
// 0062168f  90                   nop 
// 00621690  66833800             cmp word ptr [eax], 0
// 00621694  7522                 jne 0x6216b8
// 00621696  41                   inc ecx
// 00621697  83c040               add eax, 0x40
// 0062169a  3bcf                 cmp ecx, edi
// 0062169c  7ef2                 jle 0x621690
// 0062169e  42                   inc edx
// 0062169f  3b542414             cmp edx, dword ptr [esp + 0x14]
// 006216a3  7edb                 jle 0x621680
// 006216a5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006216a9  8b442420             mov eax, dword ptr [esp + 0x20]
// 006216ad  48                   dec eax
// 006216ae  3bc3                 cmp eax, ebx
// 006216b0  89442420             mov dword ptr [esp + 0x20], eax
// 006216b4  7dab                 jge 0x621661
// 006216b6  eb0f                 jmp 0x6216c7
// 006216b8  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006216bc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006216c0  896c2428             mov dword ptr [esp + 0x28], ebp
// 006216c4  896914               mov dword ptr [ecx + 0x14], ebp
// 006216c7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006216cb  2b742410             sub esi, dword ptr [esp + 0x10]
// 006216cf  8b442414             mov eax, dword ptr [esp + 0x14]
// 006216d3  2b442418             sub eax, dword ptr [esp + 0x18]
// 006216d7  8bfd                 mov edi, ebp
// 006216d9  2bfb                 sub edi, ebx
// 006216db  8d14fd00000000       lea edx, [edi*8]
// 006216e2  8d0c76               lea ecx, [esi + esi*2]
// 006216e5  03c9                 add ecx, ecx
// 006216e7  03c9                 add ecx, ecx
// 006216e9  8bea                 mov ebp, edx
// 006216eb  0fafea               imul ebp, edx
// 006216ee  c1e004               shl eax, 4
// 006216f1  8bd1                 mov edx, ecx
// 006216f3  0fafd1               imul edx, ecx
// 006216f6  8bc8                 mov ecx, eax
// 006216f8  0fafc8               imul ecx, eax
// 006216fb  8b442418             mov eax, dword ptr [esp + 0x18]
// 006216ff  03ea                 add ebp, edx
// 00621701  8b542430             mov edx, dword ptr [esp + 0x30]
// 00621705  03e9                 add ebp, ecx
// 00621707  896a18               mov dword ptr [edx + 0x18], ebp
// 0062170a  33ed                 xor ebp, ebp
// 0062170c  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00621710  89442420             mov dword ptr [esp + 0x20], eax
// 00621714  7f71                 jg 0x621787
// 00621716  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062171a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0062171e  7f49                 jg 0x621769
// 00621720  8b542424             mov edx, dword ptr [esp + 0x24]
// 00621724  8bc8                 mov ecx, eax
// 00621726  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062172a  8b1482               mov edx, dword ptr [edx + eax*4]
// 0062172d  c1e105               shl ecx, 5
// 00621730  03cb                 add ecx, ebx
// 00621732  8d4601               lea eax, [esi + 1]
// 00621735  8d144a               lea edx, [edx + ecx*2]
// 00621738  89442418             mov dword ptr [esp + 0x18], eax
// 0062173c  8d642400             lea esp, [esp]
// 00621740  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 00621744  8bc2                 mov eax, edx
// 00621746  7f17                 jg 0x62175f
// 00621748  8d4f01               lea ecx, [edi + 1]
// 0062174b  eb03                 jmp 0x621750
// 0062174d  8d4900               lea ecx, [ecx]
// 00621750  66833800             cmp word ptr [eax], 0
// 00621754  7401                 je 0x621757
// 00621756  45                   inc ebp
// 00621757  83c002               add eax, 2
// 0062175a  83e901               sub ecx, 1
// 0062175d  75f1                 jne 0x621750
// 0062175f  83c240               add edx, 0x40
// 00621762  836c241801           sub dword ptr [esp + 0x18], 1
// 00621767  75d7                 jne 0x621740
// 00621769  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062176d  40                   inc eax
// 0062176e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00621772  89442420             mov dword ptr [esp + 0x20], eax
// 00621776  7e9e                 jle 0x621716
// 00621778  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062177c  5f                   pop edi
// 0062177d  5e                   pop esi
// 0062177e  89691c               mov dword ptr [ecx + 0x1c], ebp
// 00621781  5d                   pop ebp
// 00621782  5b                   pop ebx
// 00621783  83c41c               add esp, 0x1c
// 00621786  c3                   ret 
// 00621787  5f                   pop edi
// 00621788  5e                   pop esi
// 00621789  896a1c               mov dword ptr [edx + 0x1c], ebp
// 0062178c  5d                   pop ebp
// 0062178d  5b                   pop ebx
// 0062178e  83c41c               add esp, 0x1c
// 00621791  c3                   ret 
// library jpeg-6b/jquant2.c (function _update_box)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
