// from server: 100% by auto
// roc 2012-06 006648e0  unit: seg_00660000  size: 978 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006648e0
//
// 006648e0  83ec1c               sub esp, 0x1c
// 006648e3  8b442420             mov eax, dword ptr [esp + 0x20]
// 006648e7  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 006648ed  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 006648f0  8b10                 mov edx, dword ptr [eax]
// 006648f2  53                   push ebx
// 006648f3  8b5810               mov ebx, dword ptr [eax + 0x10]
// 006648f6  55                   push ebp
// 006648f7  8b6814               mov ebp, dword ptr [eax + 0x14]
// 006648fa  56                   push esi
// 006648fb  8b7008               mov esi, dword ptr [eax + 8]
// 006648fe  894c2420             mov dword ptr [esp + 0x20], ecx
// 00664902  8b4804               mov ecx, dword ptr [eax + 4]
// 00664905  3bd1                 cmp edx, ecx
// 00664907  57                   push edi
// 00664908  8b780c               mov edi, dword ptr [eax + 0xc]
// 0066490b  89542418             mov dword ptr [esp + 0x18], edx
// 0066490f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00664913  89742410             mov dword ptr [esp + 0x10], esi
// 00664917  897c241c             mov dword ptr [esp + 0x1c], edi
// 0066491b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0066491f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00664923  0f8def000000         jge 0x664a18
// 00664929  8bfa                 mov edi, edx
// 0066492b  eb03                 jmp 0x664930
// 0066492d  8d4900               lea ecx, [ecx]
// 00664930  8b742410             mov esi, dword ptr [esp + 0x10]
// 00664934  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00664938  7f44                 jg 0x66497e
// 0066493a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0066493e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00664941  8bd6                 mov edx, esi
// 00664943  c1e205               shl edx, 5
// 00664946  03d3                 add edx, ebx
// 00664948  8d1451               lea edx, [ecx + edx*2]
// 0066494b  eb03                 jmp 0x664950
// 0066494d  8d4900               lea ecx, [ecx]
// 00664950  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00664954  8bca                 mov ecx, edx
// 00664956  8bc3                 mov eax, ebx
// 00664958  7f16                 jg 0x664970
// 0066495a  8d9b00000000         lea ebx, [ebx]
// 00664960  668b19               mov bx, word ptr [ecx]
// 00664963  83c102               add ecx, 2
// 00664966  6685db               test bx, bx
// 00664969  751c                 jne 0x664987
// 0066496b  40                   inc eax
// 0066496c  3bc5                 cmp eax, ebp
// 0066496e  7ef0                 jle 0x664960
// 00664970  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00664974  46                   inc esi
// 00664975  83c240               add edx, 0x40
// 00664978  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0066497c  7ed2                 jle 0x664950
// 0066497e  47                   inc edi
// 0066497f  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00664983  7eab                 jle 0x664930
// 00664985  eb0e                 jmp 0x664995
// 00664987  8b542430             mov edx, dword ptr [esp + 0x30]
// 0066498b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0066498f  897c2418             mov dword ptr [esp + 0x18], edi
// 00664993  893a                 mov dword ptr [edx], edi
// 00664995  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664999  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066499d  3bc2                 cmp eax, edx
// 0066499f  8b742410             mov esi, dword ptr [esp + 0x10]
// 006649a3  7e73                 jle 0x664a18
// 006649a5  89442420             mov dword ptr [esp + 0x20], eax
// 006649a9  8da42400000000       lea esp, [esp]
// 006649b0  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 006649b4  7f38                 jg 0x6649ee
// 006649b6  8b542424             mov edx, dword ptr [esp + 0x24]
// 006649ba  8b0482               mov eax, dword ptr [edx + eax*4]
// 006649bd  8bce                 mov ecx, esi
// 006649bf  c1e105               shl ecx, 5
// 006649c2  03cb                 add ecx, ebx
// 006649c4  8d1448               lea edx, [eax + ecx*2]
// 006649c7  3bdd                 cmp ebx, ebp
// 006649c9  8bca                 mov ecx, edx
// 006649cb  8bc3                 mov eax, ebx
// 006649cd  7f11                 jg 0x6649e0
// 006649cf  90                   nop 
// 006649d0  668b39               mov di, word ptr [ecx]
// 006649d3  83c102               add ecx, 2
// 006649d6  6685ff               test di, di
// 006649d9  7526                 jne 0x664a01
// 006649db  40                   inc eax
// 006649dc  3bc5                 cmp eax, ebp
// 006649de  7ef0                 jle 0x6649d0
// 006649e0  46                   inc esi
// 006649e1  83c240               add edx, 0x40
// 006649e4  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 006649e8  7edd                 jle 0x6649c7
// 006649ea  8b442420             mov eax, dword ptr [esp + 0x20]
// 006649ee  8b542418             mov edx, dword ptr [esp + 0x18]
// 006649f2  8b742410             mov esi, dword ptr [esp + 0x10]
// 006649f6  48                   dec eax
// 006649f7  3bc2                 cmp eax, edx
// 006649f9  89442420             mov dword ptr [esp + 0x20], eax
// 006649fd  7db1                 jge 0x6649b0
// 006649ff  eb17                 jmp 0x664a18
// 00664a01  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664a05  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00664a09  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664a0d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00664a11  89442414             mov dword ptr [esp + 0x14], eax
// 00664a15  894104               mov dword ptr [ecx + 4], eax
// 00664a18  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00664a1c  3bf0                 cmp esi, eax
// 00664a1e  0f8dd6000000         jge 0x664afa
// 00664a24  89742420             mov dword ptr [esp + 0x20], esi
// 00664a28  c1e605               shl esi, 5
// 00664a2b  03f3                 add esi, ebx
// 00664a2d  03f6                 add esi, esi
// 00664a2f  90                   nop 
// 00664a30  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00664a34  7f26                 jg 0x664a5c
// 00664a36  8b442424             mov eax, dword ptr [esp + 0x24]
// 00664a3a  8b0490               mov eax, dword ptr [eax + edx*4]
// 00664a3d  03c6                 add eax, esi
// 00664a3f  3bdd                 cmp ebx, ebp
// 00664a41  8bcb                 mov ecx, ebx
// 00664a43  7f10                 jg 0x664a55
// 00664a45  668b38               mov di, word ptr [eax]
// 00664a48  83c002               add eax, 2
// 00664a4b  6685ff               test di, di
// 00664a4e  7524                 jne 0x664a74
// 00664a50  41                   inc ecx
// 00664a51  3bcd                 cmp ecx, ebp
// 00664a53  7ef0                 jle 0x664a45
// 00664a55  42                   inc edx
// 00664a56  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00664a5a  7eda                 jle 0x664a36
// 00664a5c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664a60  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664a64  40                   inc eax
// 00664a65  83c640               add esi, 0x40
// 00664a68  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00664a6c  89442420             mov dword ptr [esp + 0x20], eax
// 00664a70  7ebe                 jle 0x664a30
// 00664a72  eb13                 jmp 0x664a87
// 00664a74  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664a78  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00664a7c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664a80  89442410             mov dword ptr [esp + 0x10], eax
// 00664a84  894108               mov dword ptr [ecx + 8], eax
// 00664a87  8b742410             mov esi, dword ptr [esp + 0x10]
// 00664a8b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00664a8f  3bc6                 cmp eax, esi
// 00664a91  7e67                 jle 0x664afa
// 00664a93  8bf0                 mov esi, eax
// 00664a95  c1e605               shl esi, 5
// 00664a98  03f3                 add esi, ebx
// 00664a9a  89442420             mov dword ptr [esp + 0x20], eax
// 00664a9e  03f6                 add esi, esi
// 00664aa0  eb04                 jmp 0x664aa6
// 00664aa2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664aa6  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00664aaa  7f2b                 jg 0x664ad7
// 00664aac  8d642400             lea esp, [esp]
// 00664ab0  8b442424             mov eax, dword ptr [esp + 0x24]
// 00664ab4  8b0490               mov eax, dword ptr [eax + edx*4]
// 00664ab7  03c6                 add eax, esi
// 00664ab9  3bdd                 cmp ebx, ebp
// 00664abb  8bcb                 mov ecx, ebx
// 00664abd  7f11                 jg 0x664ad0
// 00664abf  90                   nop 
// 00664ac0  668b38               mov di, word ptr [eax]
// 00664ac3  83c002               add eax, 2
// 00664ac6  6685ff               test di, di
// 00664ac9  7520                 jne 0x664aeb
// 00664acb  41                   inc ecx
// 00664acc  3bcd                 cmp ecx, ebp
// 00664ace  7ef0                 jle 0x664ac0
// 00664ad0  42                   inc edx
// 00664ad1  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00664ad5  7ed9                 jle 0x664ab0
// 00664ad7  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664adb  48                   dec eax
// 00664adc  83ee40               sub esi, 0x40
// 00664adf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00664ae3  89442420             mov dword ptr [esp + 0x20], eax
// 00664ae7  7db9                 jge 0x664aa2
// 00664ae9  eb0f                 jmp 0x664afa
// 00664aeb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664aef  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00664af3  8944241c             mov dword ptr [esp + 0x1c], eax
// 00664af7  89410c               mov dword ptr [ecx + 0xc], eax
// 00664afa  3bdd                 cmp ebx, ebp
// 00664afc  0f8de5000000         jge 0x664be7
// 00664b02  8bc3                 mov eax, ebx
// 00664b04  895c2420             mov dword ptr [esp + 0x20], ebx
// 00664b08  eb06                 jmp 0x664b10
// 00664b0a  8d9b00000000         lea ebx, [ebx]
// 00664b10  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664b14  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00664b18  7f43                 jg 0x664b5d
// 00664b1a  8b742410             mov esi, dword ptr [esp + 0x10]
// 00664b1e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00664b22  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00664b26  c1e605               shl esi, 5
// 00664b29  03f0                 add esi, eax
// 00664b2b  03f6                 add esi, esi
// 00664b2d  8d4900               lea ecx, [ecx]
// 00664b30  8b442424             mov eax, dword ptr [esp + 0x24]
// 00664b34  8b0490               mov eax, dword ptr [eax + edx*4]
// 00664b37  03c6                 add eax, esi
// 00664b39  3bef                 cmp ebp, edi
// 00664b3b  8bcd                 mov ecx, ebp
// 00664b3d  7f0f                 jg 0x664b4e
// 00664b3f  90                   nop 
// 00664b40  66833800             cmp word ptr [eax], 0
// 00664b44  7522                 jne 0x664b68
// 00664b46  41                   inc ecx
// 00664b47  83c040               add eax, 0x40
// 00664b4a  3bcf                 cmp ecx, edi
// 00664b4c  7ef2                 jle 0x664b40
// 00664b4e  42                   inc edx
// 00664b4f  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00664b53  7edb                 jle 0x664b30
// 00664b55  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00664b59  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664b5d  40                   inc eax
// 00664b5e  3bc5                 cmp eax, ebp
// 00664b60  89442420             mov dword ptr [esp + 0x20], eax
// 00664b64  7eaa                 jle 0x664b10
// 00664b66  eb0f                 jmp 0x664b77
// 00664b68  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00664b6c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00664b70  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00664b74  895910               mov dword ptr [ecx + 0x10], ebx
// 00664b77  3beb                 cmp ebp, ebx
// 00664b79  7e6c                 jle 0x664be7
// 00664b7b  8bc5                 mov eax, ebp
// 00664b7d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00664b81  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664b85  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00664b89  7f42                 jg 0x664bcd
// 00664b8b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00664b8f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00664b93  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00664b97  c1e605               shl esi, 5
// 00664b9a  03f0                 add esi, eax
// 00664b9c  03f6                 add esi, esi
// 00664b9e  8bff                 mov edi, edi
// 00664ba0  8b442424             mov eax, dword ptr [esp + 0x24]
// 00664ba4  8b0490               mov eax, dword ptr [eax + edx*4]
// 00664ba7  03c6                 add eax, esi
// 00664ba9  3bef                 cmp ebp, edi
// 00664bab  8bcd                 mov ecx, ebp
// 00664bad  7f0f                 jg 0x664bbe
// 00664baf  90                   nop 
// 00664bb0  66833800             cmp word ptr [eax], 0
// 00664bb4  7522                 jne 0x664bd8
// 00664bb6  41                   inc ecx
// 00664bb7  83c040               add eax, 0x40
// 00664bba  3bcf                 cmp ecx, edi
// 00664bbc  7ef2                 jle 0x664bb0
// 00664bbe  42                   inc edx
// 00664bbf  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00664bc3  7edb                 jle 0x664ba0
// 00664bc5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00664bc9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664bcd  48                   dec eax
// 00664bce  3bc3                 cmp eax, ebx
// 00664bd0  89442420             mov dword ptr [esp + 0x20], eax
// 00664bd4  7dab                 jge 0x664b81
// 00664bd6  eb0f                 jmp 0x664be7
// 00664bd8  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00664bdc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00664be0  896c2428             mov dword ptr [esp + 0x28], ebp
// 00664be4  896914               mov dword ptr [ecx + 0x14], ebp
// 00664be7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00664beb  2b742410             sub esi, dword ptr [esp + 0x10]
// 00664bef  8b442414             mov eax, dword ptr [esp + 0x14]
// 00664bf3  2b442418             sub eax, dword ptr [esp + 0x18]
// 00664bf7  8bfd                 mov edi, ebp
// 00664bf9  2bfb                 sub edi, ebx
// 00664bfb  8d14fd00000000       lea edx, [edi*8]
// 00664c02  8d0c76               lea ecx, [esi + esi*2]
// 00664c05  03c9                 add ecx, ecx
// 00664c07  03c9                 add ecx, ecx
// 00664c09  8bea                 mov ebp, edx
// 00664c0b  0fafea               imul ebp, edx
// 00664c0e  c1e004               shl eax, 4
// 00664c11  8bd1                 mov edx, ecx
// 00664c13  0fafd1               imul edx, ecx
// 00664c16  8bc8                 mov ecx, eax
// 00664c18  0fafc8               imul ecx, eax
// 00664c1b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00664c1f  03ea                 add ebp, edx
// 00664c21  8b542430             mov edx, dword ptr [esp + 0x30]
// 00664c25  03e9                 add ebp, ecx
// 00664c27  896a18               mov dword ptr [edx + 0x18], ebp
// 00664c2a  33ed                 xor ebp, ebp
// 00664c2c  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00664c30  89442420             mov dword ptr [esp + 0x20], eax
// 00664c34  7f71                 jg 0x664ca7
// 00664c36  8b442410             mov eax, dword ptr [esp + 0x10]
// 00664c3a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00664c3e  7f49                 jg 0x664c89
// 00664c40  8b542424             mov edx, dword ptr [esp + 0x24]
// 00664c44  8bc8                 mov ecx, eax
// 00664c46  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664c4a  8b1482               mov edx, dword ptr [edx + eax*4]
// 00664c4d  c1e105               shl ecx, 5
// 00664c50  03cb                 add ecx, ebx
// 00664c52  8d4601               lea eax, [esi + 1]
// 00664c55  8d144a               lea edx, [edx + ecx*2]
// 00664c58  89442418             mov dword ptr [esp + 0x18], eax
// 00664c5c  8d642400             lea esp, [esp]
// 00664c60  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 00664c64  8bc2                 mov eax, edx
// 00664c66  7f17                 jg 0x664c7f
// 00664c68  8d4f01               lea ecx, [edi + 1]
// 00664c6b  eb03                 jmp 0x664c70
// 00664c6d  8d4900               lea ecx, [ecx]
// 00664c70  66833800             cmp word ptr [eax], 0
// 00664c74  7401                 je 0x664c77
// 00664c76  45                   inc ebp
// 00664c77  83c002               add eax, 2
// 00664c7a  83e901               sub ecx, 1
// 00664c7d  75f1                 jne 0x664c70
// 00664c7f  83c240               add edx, 0x40
// 00664c82  836c241801           sub dword ptr [esp + 0x18], 1
// 00664c87  75d7                 jne 0x664c60
// 00664c89  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664c8d  40                   inc eax
// 00664c8e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00664c92  89442420             mov dword ptr [esp + 0x20], eax
// 00664c96  7e9e                 jle 0x664c36
// 00664c98  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00664c9c  5f                   pop edi
// 00664c9d  5e                   pop esi
// 00664c9e  89691c               mov dword ptr [ecx + 0x1c], ebp
// 00664ca1  5d                   pop ebp
// 00664ca2  5b                   pop ebx
// 00664ca3  83c41c               add esp, 0x1c
// 00664ca6  c3                   ret 
// 00664ca7  5f                   pop edi
// 00664ca8  5e                   pop esi
// 00664ca9  896a1c               mov dword ptr [edx + 0x1c], ebp
// 00664cac  5d                   pop ebp
// 00664cad  5b                   pop ebx
// 00664cae  83c41c               add esp, 0x1c
// 00664cb1  c3                   ret 
// library jpeg-6b/jquant2.c (function _update_box)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
