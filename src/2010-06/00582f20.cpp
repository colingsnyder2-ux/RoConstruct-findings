// from server: 100% by auto
// roc 2010-06 00582f20  unit: seg_00580000  size: 978 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582f20
//
// 00582f20  83ec1c               sub esp, 0x1c
// 00582f23  8b442420             mov eax, dword ptr [esp + 0x20]
// 00582f27  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 00582f2d  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 00582f30  8b10                 mov edx, dword ptr [eax]
// 00582f32  53                   push ebx
// 00582f33  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00582f36  55                   push ebp
// 00582f37  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00582f3a  56                   push esi
// 00582f3b  8b7008               mov esi, dword ptr [eax + 8]
// 00582f3e  894c2420             mov dword ptr [esp + 0x20], ecx
// 00582f42  8b4804               mov ecx, dword ptr [eax + 4]
// 00582f45  3bd1                 cmp edx, ecx
// 00582f47  57                   push edi
// 00582f48  8b780c               mov edi, dword ptr [eax + 0xc]
// 00582f4b  89542418             mov dword ptr [esp + 0x18], edx
// 00582f4f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00582f53  89742410             mov dword ptr [esp + 0x10], esi
// 00582f57  897c241c             mov dword ptr [esp + 0x1c], edi
// 00582f5b  895c2420             mov dword ptr [esp + 0x20], ebx
// 00582f5f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00582f63  0f8def000000         jge 0x583058
// 00582f69  8bfa                 mov edi, edx
// 00582f6b  eb03                 jmp 0x582f70
// 00582f6d  8d4900               lea ecx, [ecx]
// 00582f70  8b742410             mov esi, dword ptr [esp + 0x10]
// 00582f74  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00582f78  7f44                 jg 0x582fbe
// 00582f7a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00582f7e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00582f81  8bd6                 mov edx, esi
// 00582f83  c1e205               shl edx, 5
// 00582f86  03d3                 add edx, ebx
// 00582f88  8d1451               lea edx, [ecx + edx*2]
// 00582f8b  eb03                 jmp 0x582f90
// 00582f8d  8d4900               lea ecx, [ecx]
// 00582f90  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00582f94  8bca                 mov ecx, edx
// 00582f96  8bc3                 mov eax, ebx
// 00582f98  7f16                 jg 0x582fb0
// 00582f9a  8d9b00000000         lea ebx, [ebx]
// 00582fa0  668b19               mov bx, word ptr [ecx]
// 00582fa3  83c102               add ecx, 2
// 00582fa6  6685db               test bx, bx
// 00582fa9  751c                 jne 0x582fc7
// 00582fab  40                   inc eax
// 00582fac  3bc5                 cmp eax, ebp
// 00582fae  7ef0                 jle 0x582fa0
// 00582fb0  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00582fb4  46                   inc esi
// 00582fb5  83c240               add edx, 0x40
// 00582fb8  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00582fbc  7ed2                 jle 0x582f90
// 00582fbe  47                   inc edi
// 00582fbf  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00582fc3  7eab                 jle 0x582f70
// 00582fc5  eb0e                 jmp 0x582fd5
// 00582fc7  8b542430             mov edx, dword ptr [esp + 0x30]
// 00582fcb  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00582fcf  897c2418             mov dword ptr [esp + 0x18], edi
// 00582fd3  893a                 mov dword ptr [edx], edi
// 00582fd5  8b542418             mov edx, dword ptr [esp + 0x18]
// 00582fd9  8b442414             mov eax, dword ptr [esp + 0x14]
// 00582fdd  3bc2                 cmp eax, edx
// 00582fdf  8b742410             mov esi, dword ptr [esp + 0x10]
// 00582fe3  7e73                 jle 0x583058
// 00582fe5  89442420             mov dword ptr [esp + 0x20], eax
// 00582fe9  8da42400000000       lea esp, [esp]
// 00582ff0  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00582ff4  7f38                 jg 0x58302e
// 00582ff6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00582ffa  8b0482               mov eax, dword ptr [edx + eax*4]
// 00582ffd  8bce                 mov ecx, esi
// 00582fff  c1e105               shl ecx, 5
// 00583002  03cb                 add ecx, ebx
// 00583004  8d1448               lea edx, [eax + ecx*2]
// 00583007  3bdd                 cmp ebx, ebp
// 00583009  8bca                 mov ecx, edx
// 0058300b  8bc3                 mov eax, ebx
// 0058300d  7f11                 jg 0x583020
// 0058300f  90                   nop 
// 00583010  668b39               mov di, word ptr [ecx]
// 00583013  83c102               add ecx, 2
// 00583016  6685ff               test di, di
// 00583019  7526                 jne 0x583041
// 0058301b  40                   inc eax
// 0058301c  3bc5                 cmp eax, ebp
// 0058301e  7ef0                 jle 0x583010
// 00583020  46                   inc esi
// 00583021  83c240               add edx, 0x40
// 00583024  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00583028  7edd                 jle 0x583007
// 0058302a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058302e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00583032  8b742410             mov esi, dword ptr [esp + 0x10]
// 00583036  48                   dec eax
// 00583037  3bc2                 cmp eax, edx
// 00583039  89442420             mov dword ptr [esp + 0x20], eax
// 0058303d  7db1                 jge 0x582ff0
// 0058303f  eb17                 jmp 0x583058
// 00583041  8b442420             mov eax, dword ptr [esp + 0x20]
// 00583045  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00583049  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058304d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00583051  89442414             mov dword ptr [esp + 0x14], eax
// 00583055  894104               mov dword ptr [ecx + 4], eax
// 00583058  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058305c  3bf0                 cmp esi, eax
// 0058305e  0f8dd6000000         jge 0x58313a
// 00583064  89742420             mov dword ptr [esp + 0x20], esi
// 00583068  c1e605               shl esi, 5
// 0058306b  03f3                 add esi, ebx
// 0058306d  03f6                 add esi, esi
// 0058306f  90                   nop 
// 00583070  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00583074  7f26                 jg 0x58309c
// 00583076  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058307a  8b0490               mov eax, dword ptr [eax + edx*4]
// 0058307d  03c6                 add eax, esi
// 0058307f  3bdd                 cmp ebx, ebp
// 00583081  8bcb                 mov ecx, ebx
// 00583083  7f10                 jg 0x583095
// 00583085  668b38               mov di, word ptr [eax]
// 00583088  83c002               add eax, 2
// 0058308b  6685ff               test di, di
// 0058308e  7524                 jne 0x5830b4
// 00583090  41                   inc ecx
// 00583091  3bcd                 cmp ecx, ebp
// 00583093  7ef0                 jle 0x583085
// 00583095  42                   inc edx
// 00583096  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0058309a  7eda                 jle 0x583076
// 0058309c  8b442420             mov eax, dword ptr [esp + 0x20]
// 005830a0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005830a4  40                   inc eax
// 005830a5  83c640               add esi, 0x40
// 005830a8  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 005830ac  89442420             mov dword ptr [esp + 0x20], eax
// 005830b0  7ebe                 jle 0x583070
// 005830b2  eb13                 jmp 0x5830c7
// 005830b4  8b442420             mov eax, dword ptr [esp + 0x20]
// 005830b8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005830bc  8b542418             mov edx, dword ptr [esp + 0x18]
// 005830c0  89442410             mov dword ptr [esp + 0x10], eax
// 005830c4  894108               mov dword ptr [ecx + 8], eax
// 005830c7  8b742410             mov esi, dword ptr [esp + 0x10]
// 005830cb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005830cf  3bc6                 cmp eax, esi
// 005830d1  7e67                 jle 0x58313a
// 005830d3  8bf0                 mov esi, eax
// 005830d5  c1e605               shl esi, 5
// 005830d8  03f3                 add esi, ebx
// 005830da  89442420             mov dword ptr [esp + 0x20], eax
// 005830de  03f6                 add esi, esi
// 005830e0  eb04                 jmp 0x5830e6
// 005830e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005830e6  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005830ea  7f2b                 jg 0x583117
// 005830ec  8d642400             lea esp, [esp]
// 005830f0  8b442424             mov eax, dword ptr [esp + 0x24]
// 005830f4  8b0490               mov eax, dword ptr [eax + edx*4]
// 005830f7  03c6                 add eax, esi
// 005830f9  3bdd                 cmp ebx, ebp
// 005830fb  8bcb                 mov ecx, ebx
// 005830fd  7f11                 jg 0x583110
// 005830ff  90                   nop 
// 00583100  668b38               mov di, word ptr [eax]
// 00583103  83c002               add eax, 2
// 00583106  6685ff               test di, di
// 00583109  7520                 jne 0x58312b
// 0058310b  41                   inc ecx
// 0058310c  3bcd                 cmp ecx, ebp
// 0058310e  7ef0                 jle 0x583100
// 00583110  42                   inc edx
// 00583111  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00583115  7ed9                 jle 0x5830f0
// 00583117  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058311b  48                   dec eax
// 0058311c  83ee40               sub esi, 0x40
// 0058311f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00583123  89442420             mov dword ptr [esp + 0x20], eax
// 00583127  7db9                 jge 0x5830e2
// 00583129  eb0f                 jmp 0x58313a
// 0058312b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058312f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00583133  8944241c             mov dword ptr [esp + 0x1c], eax
// 00583137  89410c               mov dword ptr [ecx + 0xc], eax
// 0058313a  3bdd                 cmp ebx, ebp
// 0058313c  0f8de5000000         jge 0x583227
// 00583142  8bc3                 mov eax, ebx
// 00583144  895c2420             mov dword ptr [esp + 0x20], ebx
// 00583148  eb06                 jmp 0x583150
// 0058314a  8d9b00000000         lea ebx, [ebx]
// 00583150  8b542418             mov edx, dword ptr [esp + 0x18]
// 00583154  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00583158  7f43                 jg 0x58319d
// 0058315a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058315e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00583162  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00583166  c1e605               shl esi, 5
// 00583169  03f0                 add esi, eax
// 0058316b  03f6                 add esi, esi
// 0058316d  8d4900               lea ecx, [ecx]
// 00583170  8b442424             mov eax, dword ptr [esp + 0x24]
// 00583174  8b0490               mov eax, dword ptr [eax + edx*4]
// 00583177  03c6                 add eax, esi
// 00583179  3bef                 cmp ebp, edi
// 0058317b  8bcd                 mov ecx, ebp
// 0058317d  7f0f                 jg 0x58318e
// 0058317f  90                   nop 
// 00583180  66833800             cmp word ptr [eax], 0
// 00583184  7522                 jne 0x5831a8
// 00583186  41                   inc ecx
// 00583187  83c040               add eax, 0x40
// 0058318a  3bcf                 cmp ecx, edi
// 0058318c  7ef2                 jle 0x583180
// 0058318e  42                   inc edx
// 0058318f  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00583193  7edb                 jle 0x583170
// 00583195  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00583199  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058319d  40                   inc eax
// 0058319e  3bc5                 cmp eax, ebp
// 005831a0  89442420             mov dword ptr [esp + 0x20], eax
// 005831a4  7eaa                 jle 0x583150
// 005831a6  eb0f                 jmp 0x5831b7
// 005831a8  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005831ac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005831b0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005831b4  895910               mov dword ptr [ecx + 0x10], ebx
// 005831b7  3beb                 cmp ebp, ebx
// 005831b9  7e6c                 jle 0x583227
// 005831bb  8bc5                 mov eax, ebp
// 005831bd  896c2420             mov dword ptr [esp + 0x20], ebp
// 005831c1  8b542418             mov edx, dword ptr [esp + 0x18]
// 005831c5  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005831c9  7f42                 jg 0x58320d
// 005831cb  8b742410             mov esi, dword ptr [esp + 0x10]
// 005831cf  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005831d3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005831d7  c1e605               shl esi, 5
// 005831da  03f0                 add esi, eax
// 005831dc  03f6                 add esi, esi
// 005831de  8bff                 mov edi, edi
// 005831e0  8b442424             mov eax, dword ptr [esp + 0x24]
// 005831e4  8b0490               mov eax, dword ptr [eax + edx*4]
// 005831e7  03c6                 add eax, esi
// 005831e9  3bef                 cmp ebp, edi
// 005831eb  8bcd                 mov ecx, ebp
// 005831ed  7f0f                 jg 0x5831fe
// 005831ef  90                   nop 
// 005831f0  66833800             cmp word ptr [eax], 0
// 005831f4  7522                 jne 0x583218
// 005831f6  41                   inc ecx
// 005831f7  83c040               add eax, 0x40
// 005831fa  3bcf                 cmp ecx, edi
// 005831fc  7ef2                 jle 0x5831f0
// 005831fe  42                   inc edx
// 005831ff  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00583203  7edb                 jle 0x5831e0
// 00583205  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00583209  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058320d  48                   dec eax
// 0058320e  3bc3                 cmp eax, ebx
// 00583210  89442420             mov dword ptr [esp + 0x20], eax
// 00583214  7dab                 jge 0x5831c1
// 00583216  eb0f                 jmp 0x583227
// 00583218  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0058321c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00583220  896c2428             mov dword ptr [esp + 0x28], ebp
// 00583224  896914               mov dword ptr [ecx + 0x14], ebp
// 00583227  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058322b  2b742410             sub esi, dword ptr [esp + 0x10]
// 0058322f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00583233  2b442418             sub eax, dword ptr [esp + 0x18]
// 00583237  8bfd                 mov edi, ebp
// 00583239  2bfb                 sub edi, ebx
// 0058323b  8d14fd00000000       lea edx, [edi*8]
// 00583242  8d0c76               lea ecx, [esi + esi*2]
// 00583245  03c9                 add ecx, ecx
// 00583247  03c9                 add ecx, ecx
// 00583249  8bea                 mov ebp, edx
// 0058324b  0fafea               imul ebp, edx
// 0058324e  c1e004               shl eax, 4
// 00583251  8bd1                 mov edx, ecx
// 00583253  0fafd1               imul edx, ecx
// 00583256  8bc8                 mov ecx, eax
// 00583258  0fafc8               imul ecx, eax
// 0058325b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058325f  03ea                 add ebp, edx
// 00583261  8b542430             mov edx, dword ptr [esp + 0x30]
// 00583265  03e9                 add ebp, ecx
// 00583267  896a18               mov dword ptr [edx + 0x18], ebp
// 0058326a  33ed                 xor ebp, ebp
// 0058326c  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00583270  89442420             mov dword ptr [esp + 0x20], eax
// 00583274  7f71                 jg 0x5832e7
// 00583276  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058327a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0058327e  7f49                 jg 0x5832c9
// 00583280  8b542424             mov edx, dword ptr [esp + 0x24]
// 00583284  8bc8                 mov ecx, eax
// 00583286  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058328a  8b1482               mov edx, dword ptr [edx + eax*4]
// 0058328d  c1e105               shl ecx, 5
// 00583290  03cb                 add ecx, ebx
// 00583292  8d4601               lea eax, [esi + 1]
// 00583295  8d144a               lea edx, [edx + ecx*2]
// 00583298  89442418             mov dword ptr [esp + 0x18], eax
// 0058329c  8d642400             lea esp, [esp]
// 005832a0  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 005832a4  8bc2                 mov eax, edx
// 005832a6  7f17                 jg 0x5832bf
// 005832a8  8d4f01               lea ecx, [edi + 1]
// 005832ab  eb03                 jmp 0x5832b0
// 005832ad  8d4900               lea ecx, [ecx]
// 005832b0  66833800             cmp word ptr [eax], 0
// 005832b4  7401                 je 0x5832b7
// 005832b6  45                   inc ebp
// 005832b7  83c002               add eax, 2
// 005832ba  83e901               sub ecx, 1
// 005832bd  75f1                 jne 0x5832b0
// 005832bf  83c240               add edx, 0x40
// 005832c2  836c241801           sub dword ptr [esp + 0x18], 1
// 005832c7  75d7                 jne 0x5832a0
// 005832c9  8b442420             mov eax, dword ptr [esp + 0x20]
// 005832cd  40                   inc eax
// 005832ce  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005832d2  89442420             mov dword ptr [esp + 0x20], eax
// 005832d6  7e9e                 jle 0x583276
// 005832d8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005832dc  5f                   pop edi
// 005832dd  5e                   pop esi
// 005832de  89691c               mov dword ptr [ecx + 0x1c], ebp
// 005832e1  5d                   pop ebp
// 005832e2  5b                   pop ebx
// 005832e3  83c41c               add esp, 0x1c
// 005832e6  c3                   ret 
// 005832e7  5f                   pop edi
// 005832e8  5e                   pop esi
// 005832e9  896a1c               mov dword ptr [edx + 0x1c], ebp
// 005832ec  5d                   pop ebp
// 005832ed  5b                   pop ebx
// 005832ee  83c41c               add esp, 0x1c
// 005832f1  c3                   ret 
// library jpeg-6b/jquant2.c (function _update_box)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
