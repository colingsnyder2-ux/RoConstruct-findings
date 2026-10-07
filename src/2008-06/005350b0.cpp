// roc 2008-06 005350b0  unit: seg_00530000  size: 978 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005350b0
//
// 005350b0  83ec1c               sub esp, 0x1c
// 005350b3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005350b7  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 005350bd  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 005350c0  8b10                 mov edx, dword ptr [eax]
// 005350c2  53                   push ebx
// 005350c3  8b5810               mov ebx, dword ptr [eax + 0x10]
// 005350c6  55                   push ebp
// 005350c7  8b6814               mov ebp, dword ptr [eax + 0x14]
// 005350ca  56                   push esi
// 005350cb  8b7008               mov esi, dword ptr [eax + 8]
// 005350ce  894c2420             mov dword ptr [esp + 0x20], ecx
// 005350d2  8b4804               mov ecx, dword ptr [eax + 4]
// 005350d5  3bd1                 cmp edx, ecx
// 005350d7  57                   push edi
// 005350d8  8b780c               mov edi, dword ptr [eax + 0xc]
// 005350db  89542418             mov dword ptr [esp + 0x18], edx
// 005350df  894c2414             mov dword ptr [esp + 0x14], ecx
// 005350e3  89742410             mov dword ptr [esp + 0x10], esi
// 005350e7  897c241c             mov dword ptr [esp + 0x1c], edi
// 005350eb  895c2420             mov dword ptr [esp + 0x20], ebx
// 005350ef  896c2428             mov dword ptr [esp + 0x28], ebp
// 005350f3  0f8def000000         jge 0x5351e8
// 005350f9  8bfa                 mov edi, edx
// 005350fb  eb03                 jmp 0x535100
// 005350fd  8d4900               lea ecx, [ecx]
// 00535100  8b742410             mov esi, dword ptr [esp + 0x10]
// 00535104  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00535108  7f44                 jg 0x53514e
// 0053510a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053510e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00535111  8bd6                 mov edx, esi
// 00535113  c1e205               shl edx, 5
// 00535116  03d3                 add edx, ebx
// 00535118  8d1451               lea edx, [ecx + edx*2]
// 0053511b  eb03                 jmp 0x535120
// 0053511d  8d4900               lea ecx, [ecx]
// 00535120  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00535124  8bca                 mov ecx, edx
// 00535126  8bc3                 mov eax, ebx
// 00535128  7f16                 jg 0x535140
// 0053512a  8d9b00000000         lea ebx, [ebx]
// 00535130  668b19               mov bx, word ptr [ecx]
// 00535133  83c102               add ecx, 2
// 00535136  6685db               test bx, bx
// 00535139  751c                 jne 0x535157
// 0053513b  40                   inc eax
// 0053513c  3bc5                 cmp eax, ebp
// 0053513e  7ef0                 jle 0x535130
// 00535140  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00535144  46                   inc esi
// 00535145  83c240               add edx, 0x40
// 00535148  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0053514c  7ed2                 jle 0x535120
// 0053514e  47                   inc edi
// 0053514f  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00535153  7eab                 jle 0x535100
// 00535155  eb0e                 jmp 0x535165
// 00535157  8b542430             mov edx, dword ptr [esp + 0x30]
// 0053515b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0053515f  897c2418             mov dword ptr [esp + 0x18], edi
// 00535163  893a                 mov dword ptr [edx], edi
// 00535165  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535169  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053516d  3bc2                 cmp eax, edx
// 0053516f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00535173  7e73                 jle 0x5351e8
// 00535175  89442420             mov dword ptr [esp + 0x20], eax
// 00535179  8da42400000000       lea esp, [esp]
// 00535180  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00535184  7f38                 jg 0x5351be
// 00535186  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053518a  8b0482               mov eax, dword ptr [edx + eax*4]
// 0053518d  8bce                 mov ecx, esi
// 0053518f  c1e105               shl ecx, 5
// 00535192  03cb                 add ecx, ebx
// 00535194  8d1448               lea edx, [eax + ecx*2]
// 00535197  3bdd                 cmp ebx, ebp
// 00535199  8bca                 mov ecx, edx
// 0053519b  8bc3                 mov eax, ebx
// 0053519d  7f11                 jg 0x5351b0
// 0053519f  90                   nop 
// 005351a0  668b39               mov di, word ptr [ecx]
// 005351a3  83c102               add ecx, 2
// 005351a6  6685ff               test di, di
// 005351a9  7526                 jne 0x5351d1
// 005351ab  40                   inc eax
// 005351ac  3bc5                 cmp eax, ebp
// 005351ae  7ef0                 jle 0x5351a0
// 005351b0  46                   inc esi
// 005351b1  83c240               add edx, 0x40
// 005351b4  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 005351b8  7edd                 jle 0x535197
// 005351ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 005351be  8b542418             mov edx, dword ptr [esp + 0x18]
// 005351c2  8b742410             mov esi, dword ptr [esp + 0x10]
// 005351c6  48                   dec eax
// 005351c7  3bc2                 cmp eax, edx
// 005351c9  89442420             mov dword ptr [esp + 0x20], eax
// 005351cd  7db1                 jge 0x535180
// 005351cf  eb17                 jmp 0x5351e8
// 005351d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005351d5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005351d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005351dd  8b742410             mov esi, dword ptr [esp + 0x10]
// 005351e1  89442414             mov dword ptr [esp + 0x14], eax
// 005351e5  894104               mov dword ptr [ecx + 4], eax
// 005351e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005351ec  3bf0                 cmp esi, eax
// 005351ee  0f8dd6000000         jge 0x5352ca
// 005351f4  89742420             mov dword ptr [esp + 0x20], esi
// 005351f8  c1e605               shl esi, 5
// 005351fb  03f3                 add esi, ebx
// 005351fd  03f6                 add esi, esi
// 005351ff  90                   nop 
// 00535200  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00535204  7f26                 jg 0x53522c
// 00535206  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053520a  8b0490               mov eax, dword ptr [eax + edx*4]
// 0053520d  03c6                 add eax, esi
// 0053520f  3bdd                 cmp ebx, ebp
// 00535211  8bcb                 mov ecx, ebx
// 00535213  7f10                 jg 0x535225
// 00535215  668b38               mov di, word ptr [eax]
// 00535218  83c002               add eax, 2
// 0053521b  6685ff               test di, di
// 0053521e  7524                 jne 0x535244
// 00535220  41                   inc ecx
// 00535221  3bcd                 cmp ecx, ebp
// 00535223  7ef0                 jle 0x535215
// 00535225  42                   inc edx
// 00535226  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0053522a  7eda                 jle 0x535206
// 0053522c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00535230  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535234  40                   inc eax
// 00535235  83c640               add esi, 0x40
// 00535238  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0053523c  89442420             mov dword ptr [esp + 0x20], eax
// 00535240  7ebe                 jle 0x535200
// 00535242  eb13                 jmp 0x535257
// 00535244  8b442420             mov eax, dword ptr [esp + 0x20]
// 00535248  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053524c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535250  89442410             mov dword ptr [esp + 0x10], eax
// 00535254  894108               mov dword ptr [ecx + 8], eax
// 00535257  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053525b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053525f  3bc6                 cmp eax, esi
// 00535261  7e67                 jle 0x5352ca
// 00535263  8bf0                 mov esi, eax
// 00535265  c1e605               shl esi, 5
// 00535268  03f3                 add esi, ebx
// 0053526a  89442420             mov dword ptr [esp + 0x20], eax
// 0053526e  03f6                 add esi, esi
// 00535270  eb04                 jmp 0x535276
// 00535272  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535276  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0053527a  7f2b                 jg 0x5352a7
// 0053527c  8d642400             lea esp, [esp]
// 00535280  8b442424             mov eax, dword ptr [esp + 0x24]
// 00535284  8b0490               mov eax, dword ptr [eax + edx*4]
// 00535287  03c6                 add eax, esi
// 00535289  3bdd                 cmp ebx, ebp
// 0053528b  8bcb                 mov ecx, ebx
// 0053528d  7f11                 jg 0x5352a0
// 0053528f  90                   nop 
// 00535290  668b38               mov di, word ptr [eax]
// 00535293  83c002               add eax, 2
// 00535296  6685ff               test di, di
// 00535299  7520                 jne 0x5352bb
// 0053529b  41                   inc ecx
// 0053529c  3bcd                 cmp ecx, ebp
// 0053529e  7ef0                 jle 0x535290
// 005352a0  42                   inc edx
// 005352a1  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005352a5  7ed9                 jle 0x535280
// 005352a7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005352ab  48                   dec eax
// 005352ac  83ee40               sub esi, 0x40
// 005352af  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005352b3  89442420             mov dword ptr [esp + 0x20], eax
// 005352b7  7db9                 jge 0x535272
// 005352b9  eb0f                 jmp 0x5352ca
// 005352bb  8b442420             mov eax, dword ptr [esp + 0x20]
// 005352bf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005352c3  8944241c             mov dword ptr [esp + 0x1c], eax
// 005352c7  89410c               mov dword ptr [ecx + 0xc], eax
// 005352ca  3bdd                 cmp ebx, ebp
// 005352cc  0f8de5000000         jge 0x5353b7
// 005352d2  8bc3                 mov eax, ebx
// 005352d4  895c2420             mov dword ptr [esp + 0x20], ebx
// 005352d8  eb06                 jmp 0x5352e0
// 005352da  8d9b00000000         lea ebx, [ebx]
// 005352e0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005352e4  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005352e8  7f43                 jg 0x53532d
// 005352ea  8b742410             mov esi, dword ptr [esp + 0x10]
// 005352ee  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005352f2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005352f6  c1e605               shl esi, 5
// 005352f9  03f0                 add esi, eax
// 005352fb  03f6                 add esi, esi
// 005352fd  8d4900               lea ecx, [ecx]
// 00535300  8b442424             mov eax, dword ptr [esp + 0x24]
// 00535304  8b0490               mov eax, dword ptr [eax + edx*4]
// 00535307  03c6                 add eax, esi
// 00535309  3bef                 cmp ebp, edi
// 0053530b  8bcd                 mov ecx, ebp
// 0053530d  7f0f                 jg 0x53531e
// 0053530f  90                   nop 
// 00535310  66833800             cmp word ptr [eax], 0
// 00535314  7522                 jne 0x535338
// 00535316  41                   inc ecx
// 00535317  83c040               add eax, 0x40
// 0053531a  3bcf                 cmp ecx, edi
// 0053531c  7ef2                 jle 0x535310
// 0053531e  42                   inc edx
// 0053531f  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00535323  7edb                 jle 0x535300
// 00535325  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00535329  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053532d  40                   inc eax
// 0053532e  3bc5                 cmp eax, ebp
// 00535330  89442420             mov dword ptr [esp + 0x20], eax
// 00535334  7eaa                 jle 0x5352e0
// 00535336  eb0f                 jmp 0x535347
// 00535338  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0053533c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00535340  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00535344  895910               mov dword ptr [ecx + 0x10], ebx
// 00535347  3beb                 cmp ebp, ebx
// 00535349  7e6c                 jle 0x5353b7
// 0053534b  8bc5                 mov eax, ebp
// 0053534d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00535351  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535355  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00535359  7f42                 jg 0x53539d
// 0053535b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053535f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00535363  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00535367  c1e605               shl esi, 5
// 0053536a  03f0                 add esi, eax
// 0053536c  03f6                 add esi, esi
// 0053536e  8bff                 mov edi, edi
// 00535370  8b442424             mov eax, dword ptr [esp + 0x24]
// 00535374  8b0490               mov eax, dword ptr [eax + edx*4]
// 00535377  03c6                 add eax, esi
// 00535379  3bef                 cmp ebp, edi
// 0053537b  8bcd                 mov ecx, ebp
// 0053537d  7f0f                 jg 0x53538e
// 0053537f  90                   nop 
// 00535380  66833800             cmp word ptr [eax], 0
// 00535384  7522                 jne 0x5353a8
// 00535386  41                   inc ecx
// 00535387  83c040               add eax, 0x40
// 0053538a  3bcf                 cmp ecx, edi
// 0053538c  7ef2                 jle 0x535380
// 0053538e  42                   inc edx
// 0053538f  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00535393  7edb                 jle 0x535370
// 00535395  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00535399  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053539d  48                   dec eax
// 0053539e  3bc3                 cmp eax, ebx
// 005353a0  89442420             mov dword ptr [esp + 0x20], eax
// 005353a4  7dab                 jge 0x535351
// 005353a6  eb0f                 jmp 0x5353b7
// 005353a8  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005353ac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005353b0  896c2428             mov dword ptr [esp + 0x28], ebp
// 005353b4  896914               mov dword ptr [ecx + 0x14], ebp
// 005353b7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005353bb  2b742410             sub esi, dword ptr [esp + 0x10]
// 005353bf  8b442414             mov eax, dword ptr [esp + 0x14]
// 005353c3  2b442418             sub eax, dword ptr [esp + 0x18]
// 005353c7  8bfd                 mov edi, ebp
// 005353c9  2bfb                 sub edi, ebx
// 005353cb  8d14fd00000000       lea edx, [edi*8]
// 005353d2  8d0c76               lea ecx, [esi + esi*2]
// 005353d5  03c9                 add ecx, ecx
// 005353d7  03c9                 add ecx, ecx
// 005353d9  8bea                 mov ebp, edx
// 005353db  0fafea               imul ebp, edx
// 005353de  c1e004               shl eax, 4
// 005353e1  8bd1                 mov edx, ecx
// 005353e3  0fafd1               imul edx, ecx
// 005353e6  8bc8                 mov ecx, eax
// 005353e8  0fafc8               imul ecx, eax
// 005353eb  8b442418             mov eax, dword ptr [esp + 0x18]
// 005353ef  03ea                 add ebp, edx
// 005353f1  8b542430             mov edx, dword ptr [esp + 0x30]
// 005353f5  03e9                 add ebp, ecx
// 005353f7  896a18               mov dword ptr [edx + 0x18], ebp
// 005353fa  33ed                 xor ebp, ebp
// 005353fc  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00535400  89442420             mov dword ptr [esp + 0x20], eax
// 00535404  7f71                 jg 0x535477
// 00535406  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053540a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0053540e  7f49                 jg 0x535459
// 00535410  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535414  8bc8                 mov ecx, eax
// 00535416  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053541a  8b1482               mov edx, dword ptr [edx + eax*4]
// 0053541d  c1e105               shl ecx, 5
// 00535420  03cb                 add ecx, ebx
// 00535422  8d4601               lea eax, [esi + 1]
// 00535425  8d144a               lea edx, [edx + ecx*2]
// 00535428  89442418             mov dword ptr [esp + 0x18], eax
// 0053542c  8d642400             lea esp, [esp]
// 00535430  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 00535434  8bc2                 mov eax, edx
// 00535436  7f17                 jg 0x53544f
// 00535438  8d4f01               lea ecx, [edi + 1]
// 0053543b  eb03                 jmp 0x535440
// 0053543d  8d4900               lea ecx, [ecx]
// 00535440  66833800             cmp word ptr [eax], 0
// 00535444  7401                 je 0x535447
// 00535446  45                   inc ebp
// 00535447  83c002               add eax, 2
// 0053544a  83e901               sub ecx, 1
// 0053544d  75f1                 jne 0x535440
// 0053544f  83c240               add edx, 0x40
// 00535452  836c241801           sub dword ptr [esp + 0x18], 1
// 00535457  75d7                 jne 0x535430
// 00535459  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053545d  40                   inc eax
// 0053545e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00535462  89442420             mov dword ptr [esp + 0x20], eax
// 00535466  7e9e                 jle 0x535406
// 00535468  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053546c  5f                   pop edi
// 0053546d  5e                   pop esi
// 0053546e  89691c               mov dword ptr [ecx + 0x1c], ebp
// 00535471  5d                   pop ebp
// 00535472  5b                   pop ebx
// 00535473  83c41c               add esp, 0x1c
// 00535476  c3                   ret 
// 00535477  5f                   pop edi
// 00535478  5e                   pop esi
// 00535479  896a1c               mov dword ptr [edx + 0x1c], ebp
// 0053547c  5d                   pop ebp
// 0053547d  5b                   pop ebx
// 0053547e  83c41c               add esp, 0x1c
// 00535481  c3                   ret 
// library jpeg-6b/jquant2.c (function _update_box)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
