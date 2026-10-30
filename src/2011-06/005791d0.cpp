// from server: 100% by auto
// roc 2011-06 005791d0  unit: seg_00570000  size: 978 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005791d0
//
// 005791d0  83ec1c               sub esp, 0x1c
// 005791d3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005791d7  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 005791dd  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 005791e0  8b10                 mov edx, dword ptr [eax]
// 005791e2  53                   push ebx
// 005791e3  8b5810               mov ebx, dword ptr [eax + 0x10]
// 005791e6  55                   push ebp
// 005791e7  8b6814               mov ebp, dword ptr [eax + 0x14]
// 005791ea  56                   push esi
// 005791eb  8b7008               mov esi, dword ptr [eax + 8]
// 005791ee  894c2420             mov dword ptr [esp + 0x20], ecx
// 005791f2  8b4804               mov ecx, dword ptr [eax + 4]
// 005791f5  3bd1                 cmp edx, ecx
// 005791f7  57                   push edi
// 005791f8  8b780c               mov edi, dword ptr [eax + 0xc]
// 005791fb  89542418             mov dword ptr [esp + 0x18], edx
// 005791ff  894c2414             mov dword ptr [esp + 0x14], ecx
// 00579203  89742410             mov dword ptr [esp + 0x10], esi
// 00579207  897c241c             mov dword ptr [esp + 0x1c], edi
// 0057920b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0057920f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00579213  0f8def000000         jge 0x579308
// 00579219  8bfa                 mov edi, edx
// 0057921b  eb03                 jmp 0x579220
// 0057921d  8d4900               lea ecx, [ecx]
// 00579220  8b742410             mov esi, dword ptr [esp + 0x10]
// 00579224  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00579228  7f44                 jg 0x57926e
// 0057922a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057922e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00579231  8bd6                 mov edx, esi
// 00579233  c1e205               shl edx, 5
// 00579236  03d3                 add edx, ebx
// 00579238  8d1451               lea edx, [ecx + edx*2]
// 0057923b  eb03                 jmp 0x579240
// 0057923d  8d4900               lea ecx, [ecx]
// 00579240  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00579244  8bca                 mov ecx, edx
// 00579246  8bc3                 mov eax, ebx
// 00579248  7f16                 jg 0x579260
// 0057924a  8d9b00000000         lea ebx, [ebx]
// 00579250  668b19               mov bx, word ptr [ecx]
// 00579253  83c102               add ecx, 2
// 00579256  6685db               test bx, bx
// 00579259  751c                 jne 0x579277
// 0057925b  40                   inc eax
// 0057925c  3bc5                 cmp eax, ebp
// 0057925e  7ef0                 jle 0x579250
// 00579260  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00579264  46                   inc esi
// 00579265  83c240               add edx, 0x40
// 00579268  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0057926c  7ed2                 jle 0x579240
// 0057926e  47                   inc edi
// 0057926f  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00579273  7eab                 jle 0x579220
// 00579275  eb0e                 jmp 0x579285
// 00579277  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057927b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0057927f  897c2418             mov dword ptr [esp + 0x18], edi
// 00579283  893a                 mov dword ptr [edx], edi
// 00579285  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579289  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057928d  3bc2                 cmp eax, edx
// 0057928f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00579293  7e73                 jle 0x579308
// 00579295  89442420             mov dword ptr [esp + 0x20], eax
// 00579299  8da42400000000       lea esp, [esp]
// 005792a0  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 005792a4  7f38                 jg 0x5792de
// 005792a6  8b542424             mov edx, dword ptr [esp + 0x24]
// 005792aa  8b0482               mov eax, dword ptr [edx + eax*4]
// 005792ad  8bce                 mov ecx, esi
// 005792af  c1e105               shl ecx, 5
// 005792b2  03cb                 add ecx, ebx
// 005792b4  8d1448               lea edx, [eax + ecx*2]
// 005792b7  3bdd                 cmp ebx, ebp
// 005792b9  8bca                 mov ecx, edx
// 005792bb  8bc3                 mov eax, ebx
// 005792bd  7f11                 jg 0x5792d0
// 005792bf  90                   nop 
// 005792c0  668b39               mov di, word ptr [ecx]
// 005792c3  83c102               add ecx, 2
// 005792c6  6685ff               test di, di
// 005792c9  7526                 jne 0x5792f1
// 005792cb  40                   inc eax
// 005792cc  3bc5                 cmp eax, ebp
// 005792ce  7ef0                 jle 0x5792c0
// 005792d0  46                   inc esi
// 005792d1  83c240               add edx, 0x40
// 005792d4  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 005792d8  7edd                 jle 0x5792b7
// 005792da  8b442420             mov eax, dword ptr [esp + 0x20]
// 005792de  8b542418             mov edx, dword ptr [esp + 0x18]
// 005792e2  8b742410             mov esi, dword ptr [esp + 0x10]
// 005792e6  48                   dec eax
// 005792e7  3bc2                 cmp eax, edx
// 005792e9  89442420             mov dword ptr [esp + 0x20], eax
// 005792ed  7db1                 jge 0x5792a0
// 005792ef  eb17                 jmp 0x579308
// 005792f1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005792f5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005792f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005792fd  8b742410             mov esi, dword ptr [esp + 0x10]
// 00579301  89442414             mov dword ptr [esp + 0x14], eax
// 00579305  894104               mov dword ptr [ecx + 4], eax
// 00579308  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057930c  3bf0                 cmp esi, eax
// 0057930e  0f8dd6000000         jge 0x5793ea
// 00579314  89742420             mov dword ptr [esp + 0x20], esi
// 00579318  c1e605               shl esi, 5
// 0057931b  03f3                 add esi, ebx
// 0057931d  03f6                 add esi, esi
// 0057931f  90                   nop 
// 00579320  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00579324  7f26                 jg 0x57934c
// 00579326  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057932a  8b0490               mov eax, dword ptr [eax + edx*4]
// 0057932d  03c6                 add eax, esi
// 0057932f  3bdd                 cmp ebx, ebp
// 00579331  8bcb                 mov ecx, ebx
// 00579333  7f10                 jg 0x579345
// 00579335  668b38               mov di, word ptr [eax]
// 00579338  83c002               add eax, 2
// 0057933b  6685ff               test di, di
// 0057933e  7524                 jne 0x579364
// 00579340  41                   inc ecx
// 00579341  3bcd                 cmp ecx, ebp
// 00579343  7ef0                 jle 0x579335
// 00579345  42                   inc edx
// 00579346  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0057934a  7eda                 jle 0x579326
// 0057934c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00579350  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579354  40                   inc eax
// 00579355  83c640               add esi, 0x40
// 00579358  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0057935c  89442420             mov dword ptr [esp + 0x20], eax
// 00579360  7ebe                 jle 0x579320
// 00579362  eb13                 jmp 0x579377
// 00579364  8b442420             mov eax, dword ptr [esp + 0x20]
// 00579368  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057936c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579370  89442410             mov dword ptr [esp + 0x10], eax
// 00579374  894108               mov dword ptr [ecx + 8], eax
// 00579377  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057937b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057937f  3bc6                 cmp eax, esi
// 00579381  7e67                 jle 0x5793ea
// 00579383  8bf0                 mov esi, eax
// 00579385  c1e605               shl esi, 5
// 00579388  03f3                 add esi, ebx
// 0057938a  89442420             mov dword ptr [esp + 0x20], eax
// 0057938e  03f6                 add esi, esi
// 00579390  eb04                 jmp 0x579396
// 00579392  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579396  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0057939a  7f2b                 jg 0x5793c7
// 0057939c  8d642400             lea esp, [esp]
// 005793a0  8b442424             mov eax, dword ptr [esp + 0x24]
// 005793a4  8b0490               mov eax, dword ptr [eax + edx*4]
// 005793a7  03c6                 add eax, esi
// 005793a9  3bdd                 cmp ebx, ebp
// 005793ab  8bcb                 mov ecx, ebx
// 005793ad  7f11                 jg 0x5793c0
// 005793af  90                   nop 
// 005793b0  668b38               mov di, word ptr [eax]
// 005793b3  83c002               add eax, 2
// 005793b6  6685ff               test di, di
// 005793b9  7520                 jne 0x5793db
// 005793bb  41                   inc ecx
// 005793bc  3bcd                 cmp ecx, ebp
// 005793be  7ef0                 jle 0x5793b0
// 005793c0  42                   inc edx
// 005793c1  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005793c5  7ed9                 jle 0x5793a0
// 005793c7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005793cb  48                   dec eax
// 005793cc  83ee40               sub esi, 0x40
// 005793cf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005793d3  89442420             mov dword ptr [esp + 0x20], eax
// 005793d7  7db9                 jge 0x579392
// 005793d9  eb0f                 jmp 0x5793ea
// 005793db  8b442420             mov eax, dword ptr [esp + 0x20]
// 005793df  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005793e3  8944241c             mov dword ptr [esp + 0x1c], eax
// 005793e7  89410c               mov dword ptr [ecx + 0xc], eax
// 005793ea  3bdd                 cmp ebx, ebp
// 005793ec  0f8de5000000         jge 0x5794d7
// 005793f2  8bc3                 mov eax, ebx
// 005793f4  895c2420             mov dword ptr [esp + 0x20], ebx
// 005793f8  eb06                 jmp 0x579400
// 005793fa  8d9b00000000         lea ebx, [ebx]
// 00579400  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579404  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00579408  7f43                 jg 0x57944d
// 0057940a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057940e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00579412  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00579416  c1e605               shl esi, 5
// 00579419  03f0                 add esi, eax
// 0057941b  03f6                 add esi, esi
// 0057941d  8d4900               lea ecx, [ecx]
// 00579420  8b442424             mov eax, dword ptr [esp + 0x24]
// 00579424  8b0490               mov eax, dword ptr [eax + edx*4]
// 00579427  03c6                 add eax, esi
// 00579429  3bef                 cmp ebp, edi
// 0057942b  8bcd                 mov ecx, ebp
// 0057942d  7f0f                 jg 0x57943e
// 0057942f  90                   nop 
// 00579430  66833800             cmp word ptr [eax], 0
// 00579434  7522                 jne 0x579458
// 00579436  41                   inc ecx
// 00579437  83c040               add eax, 0x40
// 0057943a  3bcf                 cmp ecx, edi
// 0057943c  7ef2                 jle 0x579430
// 0057943e  42                   inc edx
// 0057943f  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00579443  7edb                 jle 0x579420
// 00579445  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00579449  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057944d  40                   inc eax
// 0057944e  3bc5                 cmp eax, ebp
// 00579450  89442420             mov dword ptr [esp + 0x20], eax
// 00579454  7eaa                 jle 0x579400
// 00579456  eb0f                 jmp 0x579467
// 00579458  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0057945c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00579460  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00579464  895910               mov dword ptr [ecx + 0x10], ebx
// 00579467  3beb                 cmp ebp, ebx
// 00579469  7e6c                 jle 0x5794d7
// 0057946b  8bc5                 mov eax, ebp
// 0057946d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00579471  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579475  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00579479  7f42                 jg 0x5794bd
// 0057947b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057947f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00579483  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00579487  c1e605               shl esi, 5
// 0057948a  03f0                 add esi, eax
// 0057948c  03f6                 add esi, esi
// 0057948e  8bff                 mov edi, edi
// 00579490  8b442424             mov eax, dword ptr [esp + 0x24]
// 00579494  8b0490               mov eax, dword ptr [eax + edx*4]
// 00579497  03c6                 add eax, esi
// 00579499  3bef                 cmp ebp, edi
// 0057949b  8bcd                 mov ecx, ebp
// 0057949d  7f0f                 jg 0x5794ae
// 0057949f  90                   nop 
// 005794a0  66833800             cmp word ptr [eax], 0
// 005794a4  7522                 jne 0x5794c8
// 005794a6  41                   inc ecx
// 005794a7  83c040               add eax, 0x40
// 005794aa  3bcf                 cmp ecx, edi
// 005794ac  7ef2                 jle 0x5794a0
// 005794ae  42                   inc edx
// 005794af  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005794b3  7edb                 jle 0x579490
// 005794b5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005794b9  8b442420             mov eax, dword ptr [esp + 0x20]
// 005794bd  48                   dec eax
// 005794be  3bc3                 cmp eax, ebx
// 005794c0  89442420             mov dword ptr [esp + 0x20], eax
// 005794c4  7dab                 jge 0x579471
// 005794c6  eb0f                 jmp 0x5794d7
// 005794c8  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005794cc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005794d0  896c2428             mov dword ptr [esp + 0x28], ebp
// 005794d4  896914               mov dword ptr [ecx + 0x14], ebp
// 005794d7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005794db  2b742410             sub esi, dword ptr [esp + 0x10]
// 005794df  8b442414             mov eax, dword ptr [esp + 0x14]
// 005794e3  2b442418             sub eax, dword ptr [esp + 0x18]
// 005794e7  8bfd                 mov edi, ebp
// 005794e9  2bfb                 sub edi, ebx
// 005794eb  8d14fd00000000       lea edx, [edi*8]
// 005794f2  8d0c76               lea ecx, [esi + esi*2]
// 005794f5  03c9                 add ecx, ecx
// 005794f7  03c9                 add ecx, ecx
// 005794f9  8bea                 mov ebp, edx
// 005794fb  0fafea               imul ebp, edx
// 005794fe  c1e004               shl eax, 4
// 00579501  8bd1                 mov edx, ecx
// 00579503  0fafd1               imul edx, ecx
// 00579506  8bc8                 mov ecx, eax
// 00579508  0fafc8               imul ecx, eax
// 0057950b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057950f  03ea                 add ebp, edx
// 00579511  8b542430             mov edx, dword ptr [esp + 0x30]
// 00579515  03e9                 add ebp, ecx
// 00579517  896a18               mov dword ptr [edx + 0x18], ebp
// 0057951a  33ed                 xor ebp, ebp
// 0057951c  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00579520  89442420             mov dword ptr [esp + 0x20], eax
// 00579524  7f71                 jg 0x579597
// 00579526  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057952a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0057952e  7f49                 jg 0x579579
// 00579530  8b542424             mov edx, dword ptr [esp + 0x24]
// 00579534  8bc8                 mov ecx, eax
// 00579536  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057953a  8b1482               mov edx, dword ptr [edx + eax*4]
// 0057953d  c1e105               shl ecx, 5
// 00579540  03cb                 add ecx, ebx
// 00579542  8d4601               lea eax, [esi + 1]
// 00579545  8d144a               lea edx, [edx + ecx*2]
// 00579548  89442418             mov dword ptr [esp + 0x18], eax
// 0057954c  8d642400             lea esp, [esp]
// 00579550  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 00579554  8bc2                 mov eax, edx
// 00579556  7f17                 jg 0x57956f
// 00579558  8d4f01               lea ecx, [edi + 1]
// 0057955b  eb03                 jmp 0x579560
// 0057955d  8d4900               lea ecx, [ecx]
// 00579560  66833800             cmp word ptr [eax], 0
// 00579564  7401                 je 0x579567
// 00579566  45                   inc ebp
// 00579567  83c002               add eax, 2
// 0057956a  83e901               sub ecx, 1
// 0057956d  75f1                 jne 0x579560
// 0057956f  83c240               add edx, 0x40
// 00579572  836c241801           sub dword ptr [esp + 0x18], 1
// 00579577  75d7                 jne 0x579550
// 00579579  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057957d  40                   inc eax
// 0057957e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00579582  89442420             mov dword ptr [esp + 0x20], eax
// 00579586  7e9e                 jle 0x579526
// 00579588  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057958c  5f                   pop edi
// 0057958d  5e                   pop esi
// 0057958e  89691c               mov dword ptr [ecx + 0x1c], ebp
// 00579591  5d                   pop ebp
// 00579592  5b                   pop ebx
// 00579593  83c41c               add esp, 0x1c
// 00579596  c3                   ret 
// 00579597  5f                   pop edi
// 00579598  5e                   pop esi
// 00579599  896a1c               mov dword ptr [edx + 0x1c], ebp
// 0057959c  5d                   pop ebp
// 0057959d  5b                   pop ebx
// 0057959e  83c41c               add esp, 0x1c
// 005795a1  c3                   ret 
// library jpeg-6b/jquant2.c (function _update_box)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
