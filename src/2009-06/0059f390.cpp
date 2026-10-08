// from server: 100% by auto
// roc 2009-06 0059f390  unit: seg_00590000  size: 978 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059f390
//
// 0059f390  83ec1c               sub esp, 0x1c
// 0059f393  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f397  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 0059f39d  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 0059f3a0  8b10                 mov edx, dword ptr [eax]
// 0059f3a2  53                   push ebx
// 0059f3a3  8b5810               mov ebx, dword ptr [eax + 0x10]
// 0059f3a6  55                   push ebp
// 0059f3a7  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0059f3aa  56                   push esi
// 0059f3ab  8b7008               mov esi, dword ptr [eax + 8]
// 0059f3ae  894c2420             mov dword ptr [esp + 0x20], ecx
// 0059f3b2  8b4804               mov ecx, dword ptr [eax + 4]
// 0059f3b5  3bd1                 cmp edx, ecx
// 0059f3b7  57                   push edi
// 0059f3b8  8b780c               mov edi, dword ptr [eax + 0xc]
// 0059f3bb  89542418             mov dword ptr [esp + 0x18], edx
// 0059f3bf  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059f3c3  89742410             mov dword ptr [esp + 0x10], esi
// 0059f3c7  897c241c             mov dword ptr [esp + 0x1c], edi
// 0059f3cb  895c2420             mov dword ptr [esp + 0x20], ebx
// 0059f3cf  896c2428             mov dword ptr [esp + 0x28], ebp
// 0059f3d3  0f8def000000         jge 0x59f4c8
// 0059f3d9  8bfa                 mov edi, edx
// 0059f3db  eb03                 jmp 0x59f3e0
// 0059f3dd  8d4900               lea ecx, [ecx]
// 0059f3e0  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059f3e4  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0059f3e8  7f44                 jg 0x59f42e
// 0059f3ea  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f3ee  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0059f3f1  8bd6                 mov edx, esi
// 0059f3f3  c1e205               shl edx, 5
// 0059f3f6  03d3                 add edx, ebx
// 0059f3f8  8d1451               lea edx, [ecx + edx*2]
// 0059f3fb  eb03                 jmp 0x59f400
// 0059f3fd  8d4900               lea ecx, [ecx]
// 0059f400  396c2420             cmp dword ptr [esp + 0x20], ebp
// 0059f404  8bca                 mov ecx, edx
// 0059f406  8bc3                 mov eax, ebx
// 0059f408  7f16                 jg 0x59f420
// 0059f40a  8d9b00000000         lea ebx, [ebx]
// 0059f410  668b19               mov bx, word ptr [ecx]
// 0059f413  83c102               add ecx, 2
// 0059f416  6685db               test bx, bx
// 0059f419  751c                 jne 0x59f437
// 0059f41b  40                   inc eax
// 0059f41c  3bc5                 cmp eax, ebp
// 0059f41e  7ef0                 jle 0x59f410
// 0059f420  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059f424  46                   inc esi
// 0059f425  83c240               add edx, 0x40
// 0059f428  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0059f42c  7ed2                 jle 0x59f400
// 0059f42e  47                   inc edi
// 0059f42f  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 0059f433  7eab                 jle 0x59f3e0
// 0059f435  eb0e                 jmp 0x59f445
// 0059f437  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059f43b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059f43f  897c2418             mov dword ptr [esp + 0x18], edi
// 0059f443  893a                 mov dword ptr [edx], edi
// 0059f445  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f449  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059f44d  3bc2                 cmp eax, edx
// 0059f44f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059f453  7e73                 jle 0x59f4c8
// 0059f455  89442420             mov dword ptr [esp + 0x20], eax
// 0059f459  8da42400000000       lea esp, [esp]
// 0059f460  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0059f464  7f38                 jg 0x59f49e
// 0059f466  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059f46a  8b0482               mov eax, dword ptr [edx + eax*4]
// 0059f46d  8bce                 mov ecx, esi
// 0059f46f  c1e105               shl ecx, 5
// 0059f472  03cb                 add ecx, ebx
// 0059f474  8d1448               lea edx, [eax + ecx*2]
// 0059f477  3bdd                 cmp ebx, ebp
// 0059f479  8bca                 mov ecx, edx
// 0059f47b  8bc3                 mov eax, ebx
// 0059f47d  7f11                 jg 0x59f490
// 0059f47f  90                   nop 
// 0059f480  668b39               mov di, word ptr [ecx]
// 0059f483  83c102               add ecx, 2
// 0059f486  6685ff               test di, di
// 0059f489  7526                 jne 0x59f4b1
// 0059f48b  40                   inc eax
// 0059f48c  3bc5                 cmp eax, ebp
// 0059f48e  7ef0                 jle 0x59f480
// 0059f490  46                   inc esi
// 0059f491  83c240               add edx, 0x40
// 0059f494  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0059f498  7edd                 jle 0x59f477
// 0059f49a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f49e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f4a2  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059f4a6  48                   dec eax
// 0059f4a7  3bc2                 cmp eax, edx
// 0059f4a9  89442420             mov dword ptr [esp + 0x20], eax
// 0059f4ad  7db1                 jge 0x59f460
// 0059f4af  eb17                 jmp 0x59f4c8
// 0059f4b1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f4b5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f4b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f4bd  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059f4c1  89442414             mov dword ptr [esp + 0x14], eax
// 0059f4c5  894104               mov dword ptr [ecx + 4], eax
// 0059f4c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059f4cc  3bf0                 cmp esi, eax
// 0059f4ce  0f8dd6000000         jge 0x59f5aa
// 0059f4d4  89742420             mov dword ptr [esp + 0x20], esi
// 0059f4d8  c1e605               shl esi, 5
// 0059f4db  03f3                 add esi, ebx
// 0059f4dd  03f6                 add esi, esi
// 0059f4df  90                   nop 
// 0059f4e0  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059f4e4  7f26                 jg 0x59f50c
// 0059f4e6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f4ea  8b0490               mov eax, dword ptr [eax + edx*4]
// 0059f4ed  03c6                 add eax, esi
// 0059f4ef  3bdd                 cmp ebx, ebp
// 0059f4f1  8bcb                 mov ecx, ebx
// 0059f4f3  7f10                 jg 0x59f505
// 0059f4f5  668b38               mov di, word ptr [eax]
// 0059f4f8  83c002               add eax, 2
// 0059f4fb  6685ff               test di, di
// 0059f4fe  7524                 jne 0x59f524
// 0059f500  41                   inc ecx
// 0059f501  3bcd                 cmp ecx, ebp
// 0059f503  7ef0                 jle 0x59f4f5
// 0059f505  42                   inc edx
// 0059f506  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059f50a  7eda                 jle 0x59f4e6
// 0059f50c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f510  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f514  40                   inc eax
// 0059f515  83c640               add esi, 0x40
// 0059f518  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0059f51c  89442420             mov dword ptr [esp + 0x20], eax
// 0059f520  7ebe                 jle 0x59f4e0
// 0059f522  eb13                 jmp 0x59f537
// 0059f524  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f528  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f52c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f530  89442410             mov dword ptr [esp + 0x10], eax
// 0059f534  894108               mov dword ptr [ecx + 8], eax
// 0059f537  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059f53b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059f53f  3bc6                 cmp eax, esi
// 0059f541  7e67                 jle 0x59f5aa
// 0059f543  8bf0                 mov esi, eax
// 0059f545  c1e605               shl esi, 5
// 0059f548  03f3                 add esi, ebx
// 0059f54a  89442420             mov dword ptr [esp + 0x20], eax
// 0059f54e  03f6                 add esi, esi
// 0059f550  eb04                 jmp 0x59f556
// 0059f552  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f556  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059f55a  7f2b                 jg 0x59f587
// 0059f55c  8d642400             lea esp, [esp]
// 0059f560  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f564  8b0490               mov eax, dword ptr [eax + edx*4]
// 0059f567  03c6                 add eax, esi
// 0059f569  3bdd                 cmp ebx, ebp
// 0059f56b  8bcb                 mov ecx, ebx
// 0059f56d  7f11                 jg 0x59f580
// 0059f56f  90                   nop 
// 0059f570  668b38               mov di, word ptr [eax]
// 0059f573  83c002               add eax, 2
// 0059f576  6685ff               test di, di
// 0059f579  7520                 jne 0x59f59b
// 0059f57b  41                   inc ecx
// 0059f57c  3bcd                 cmp ecx, ebp
// 0059f57e  7ef0                 jle 0x59f570
// 0059f580  42                   inc edx
// 0059f581  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059f585  7ed9                 jle 0x59f560
// 0059f587  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f58b  48                   dec eax
// 0059f58c  83ee40               sub esi, 0x40
// 0059f58f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0059f593  89442420             mov dword ptr [esp + 0x20], eax
// 0059f597  7db9                 jge 0x59f552
// 0059f599  eb0f                 jmp 0x59f5aa
// 0059f59b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f59f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f5a3  8944241c             mov dword ptr [esp + 0x1c], eax
// 0059f5a7  89410c               mov dword ptr [ecx + 0xc], eax
// 0059f5aa  3bdd                 cmp ebx, ebp
// 0059f5ac  0f8de5000000         jge 0x59f697
// 0059f5b2  8bc3                 mov eax, ebx
// 0059f5b4  895c2420             mov dword ptr [esp + 0x20], ebx
// 0059f5b8  eb06                 jmp 0x59f5c0
// 0059f5ba  8d9b00000000         lea ebx, [ebx]
// 0059f5c0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f5c4  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059f5c8  7f43                 jg 0x59f60d
// 0059f5ca  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059f5ce  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0059f5d2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0059f5d6  c1e605               shl esi, 5
// 0059f5d9  03f0                 add esi, eax
// 0059f5db  03f6                 add esi, esi
// 0059f5dd  8d4900               lea ecx, [ecx]
// 0059f5e0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f5e4  8b0490               mov eax, dword ptr [eax + edx*4]
// 0059f5e7  03c6                 add eax, esi
// 0059f5e9  3bef                 cmp ebp, edi
// 0059f5eb  8bcd                 mov ecx, ebp
// 0059f5ed  7f0f                 jg 0x59f5fe
// 0059f5ef  90                   nop 
// 0059f5f0  66833800             cmp word ptr [eax], 0
// 0059f5f4  7522                 jne 0x59f618
// 0059f5f6  41                   inc ecx
// 0059f5f7  83c040               add eax, 0x40
// 0059f5fa  3bcf                 cmp ecx, edi
// 0059f5fc  7ef2                 jle 0x59f5f0
// 0059f5fe  42                   inc edx
// 0059f5ff  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059f603  7edb                 jle 0x59f5e0
// 0059f605  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0059f609  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f60d  40                   inc eax
// 0059f60e  3bc5                 cmp eax, ebp
// 0059f610  89442420             mov dword ptr [esp + 0x20], eax
// 0059f614  7eaa                 jle 0x59f5c0
// 0059f616  eb0f                 jmp 0x59f627
// 0059f618  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059f61c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f620  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0059f624  895910               mov dword ptr [ecx + 0x10], ebx
// 0059f627  3beb                 cmp ebp, ebx
// 0059f629  7e6c                 jle 0x59f697
// 0059f62b  8bc5                 mov eax, ebp
// 0059f62d  896c2420             mov dword ptr [esp + 0x20], ebp
// 0059f631  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f635  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059f639  7f42                 jg 0x59f67d
// 0059f63b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059f63f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0059f643  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0059f647  c1e605               shl esi, 5
// 0059f64a  03f0                 add esi, eax
// 0059f64c  03f6                 add esi, esi
// 0059f64e  8bff                 mov edi, edi
// 0059f650  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f654  8b0490               mov eax, dword ptr [eax + edx*4]
// 0059f657  03c6                 add eax, esi
// 0059f659  3bef                 cmp ebp, edi
// 0059f65b  8bcd                 mov ecx, ebp
// 0059f65d  7f0f                 jg 0x59f66e
// 0059f65f  90                   nop 
// 0059f660  66833800             cmp word ptr [eax], 0
// 0059f664  7522                 jne 0x59f688
// 0059f666  41                   inc ecx
// 0059f667  83c040               add eax, 0x40
// 0059f66a  3bcf                 cmp ecx, edi
// 0059f66c  7ef2                 jle 0x59f660
// 0059f66e  42                   inc edx
// 0059f66f  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059f673  7edb                 jle 0x59f650
// 0059f675  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0059f679  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f67d  48                   dec eax
// 0059f67e  3bc3                 cmp eax, ebx
// 0059f680  89442420             mov dword ptr [esp + 0x20], eax
// 0059f684  7dab                 jge 0x59f631
// 0059f686  eb0f                 jmp 0x59f697
// 0059f688  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0059f68c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f690  896c2428             mov dword ptr [esp + 0x28], ebp
// 0059f694  896914               mov dword ptr [ecx + 0x14], ebp
// 0059f697  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059f69b  2b742410             sub esi, dword ptr [esp + 0x10]
// 0059f69f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059f6a3  2b442418             sub eax, dword ptr [esp + 0x18]
// 0059f6a7  8bfd                 mov edi, ebp
// 0059f6a9  2bfb                 sub edi, ebx
// 0059f6ab  8d14fd00000000       lea edx, [edi*8]
// 0059f6b2  8d0c76               lea ecx, [esi + esi*2]
// 0059f6b5  03c9                 add ecx, ecx
// 0059f6b7  03c9                 add ecx, ecx
// 0059f6b9  8bea                 mov ebp, edx
// 0059f6bb  0fafea               imul ebp, edx
// 0059f6be  c1e004               shl eax, 4
// 0059f6c1  8bd1                 mov edx, ecx
// 0059f6c3  0fafd1               imul edx, ecx
// 0059f6c6  8bc8                 mov ecx, eax
// 0059f6c8  0fafc8               imul ecx, eax
// 0059f6cb  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059f6cf  03ea                 add ebp, edx
// 0059f6d1  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059f6d5  03e9                 add ebp, ecx
// 0059f6d7  896a18               mov dword ptr [edx + 0x18], ebp
// 0059f6da  33ed                 xor ebp, ebp
// 0059f6dc  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0059f6e0  89442420             mov dword ptr [esp + 0x20], eax
// 0059f6e4  7f71                 jg 0x59f757
// 0059f6e6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059f6ea  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0059f6ee  7f49                 jg 0x59f739
// 0059f6f0  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059f6f4  8bc8                 mov ecx, eax
// 0059f6f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f6fa  8b1482               mov edx, dword ptr [edx + eax*4]
// 0059f6fd  c1e105               shl ecx, 5
// 0059f700  03cb                 add ecx, ebx
// 0059f702  8d4601               lea eax, [esi + 1]
// 0059f705  8d144a               lea edx, [edx + ecx*2]
// 0059f708  89442418             mov dword ptr [esp + 0x18], eax
// 0059f70c  8d642400             lea esp, [esp]
// 0059f710  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 0059f714  8bc2                 mov eax, edx
// 0059f716  7f17                 jg 0x59f72f
// 0059f718  8d4f01               lea ecx, [edi + 1]
// 0059f71b  eb03                 jmp 0x59f720
// 0059f71d  8d4900               lea ecx, [ecx]
// 0059f720  66833800             cmp word ptr [eax], 0
// 0059f724  7401                 je 0x59f727
// 0059f726  45                   inc ebp
// 0059f727  83c002               add eax, 2
// 0059f72a  83e901               sub ecx, 1
// 0059f72d  75f1                 jne 0x59f720
// 0059f72f  83c240               add edx, 0x40
// 0059f732  836c241801           sub dword ptr [esp + 0x18], 1
// 0059f737  75d7                 jne 0x59f710
// 0059f739  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f73d  40                   inc eax
// 0059f73e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0059f742  89442420             mov dword ptr [esp + 0x20], eax
// 0059f746  7e9e                 jle 0x59f6e6
// 0059f748  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f74c  5f                   pop edi
// 0059f74d  5e                   pop esi
// 0059f74e  89691c               mov dword ptr [ecx + 0x1c], ebp
// 0059f751  5d                   pop ebp
// 0059f752  5b                   pop ebx
// 0059f753  83c41c               add esp, 0x1c
// 0059f756  c3                   ret 
// 0059f757  5f                   pop edi
// 0059f758  5e                   pop esi
// 0059f759  896a1c               mov dword ptr [edx + 0x1c], ebp
// 0059f75c  5d                   pop ebp
// 0059f75d  5b                   pop ebx
// 0059f75e  83c41c               add esp, 0x1c
// 0059f761  c3                   ret 
// library jpeg-6b/jquant2.c (function _update_box)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
