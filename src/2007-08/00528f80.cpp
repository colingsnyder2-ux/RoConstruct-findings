// roc 2007-08 00528f80  unit: seg_00520000  size: 1015 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528f80
//
// 00528f80  83ec1c               sub esp, 0x1c
// 00528f83  8b442420             mov eax, dword ptr [esp + 0x20]
// 00528f87  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 00528f8d  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 00528f90  8b10                 mov edx, dword ptr [eax]
// 00528f92  53                   push ebx
// 00528f93  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00528f96  55                   push ebp
// 00528f97  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00528f9a  56                   push esi
// 00528f9b  8b7008               mov esi, dword ptr [eax + 8]
// 00528f9e  894c2420             mov dword ptr [esp + 0x20], ecx
// 00528fa2  8b4804               mov ecx, dword ptr [eax + 4]
// 00528fa5  3bd1                 cmp edx, ecx
// 00528fa7  57                   push edi
// 00528fa8  8b780c               mov edi, dword ptr [eax + 0xc]
// 00528fab  89542418             mov dword ptr [esp + 0x18], edx
// 00528faf  894c2414             mov dword ptr [esp + 0x14], ecx
// 00528fb3  89742410             mov dword ptr [esp + 0x10], esi
// 00528fb7  897c241c             mov dword ptr [esp + 0x1c], edi
// 00528fbb  895c2420             mov dword ptr [esp + 0x20], ebx
// 00528fbf  896c2428             mov dword ptr [esp + 0x28], ebp
// 00528fc3  0f8df5000000         jge 0x5290be
// 00528fc9  8bfa                 mov edi, edx
// 00528fcb  eb03                 jmp 0x528fd0
// 00528fcd  8d4900               lea ecx, [ecx]
// 00528fd0  8b742410             mov esi, dword ptr [esp + 0x10]
// 00528fd4  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00528fd8  7f48                 jg 0x529022
// 00528fda  8b442424             mov eax, dword ptr [esp + 0x24]
// 00528fde  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00528fe1  8bd6                 mov edx, esi
// 00528fe3  c1e205               shl edx, 5
// 00528fe6  03d3                 add edx, ebx
// 00528fe8  8d1451               lea edx, [ecx + edx*2]
// 00528feb  eb03                 jmp 0x528ff0
// 00528fed  8d4900               lea ecx, [ecx]
// 00528ff0  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00528ff4  8bca                 mov ecx, edx
// 00528ff6  8bc3                 mov eax, ebx
// 00528ff8  7f18                 jg 0x529012
// 00528ffa  8d9b00000000         lea ebx, [ebx]
// 00529000  668b19               mov bx, word ptr [ecx]
// 00529003  83c102               add ecx, 2
// 00529006  6685db               test bx, bx
// 00529009  7522                 jne 0x52902d
// 0052900b  83c001               add eax, 1
// 0052900e  3bc5                 cmp eax, ebp
// 00529010  7eee                 jle 0x529000
// 00529012  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00529016  83c601               add esi, 1
// 00529019  83c240               add edx, 0x40
// 0052901c  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00529020  7ece                 jle 0x528ff0
// 00529022  83c701               add edi, 1
// 00529025  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00529029  7ea5                 jle 0x528fd0
// 0052902b  eb0e                 jmp 0x52903b
// 0052902d  8b542430             mov edx, dword ptr [esp + 0x30]
// 00529031  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00529035  897c2418             mov dword ptr [esp + 0x18], edi
// 00529039  893a                 mov dword ptr [edx], edi
// 0052903b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052903f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00529043  3bc2                 cmp eax, edx
// 00529045  8b742410             mov esi, dword ptr [esp + 0x10]
// 00529049  7e73                 jle 0x5290be
// 0052904b  89442420             mov dword ptr [esp + 0x20], eax
// 0052904f  90                   nop 
// 00529050  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00529054  7f3c                 jg 0x529092
// 00529056  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052905a  8b0482               mov eax, dword ptr [edx + eax*4]
// 0052905d  8bce                 mov ecx, esi
// 0052905f  c1e105               shl ecx, 5
// 00529062  03cb                 add ecx, ebx
// 00529064  8d1448               lea edx, [eax + ecx*2]
// 00529067  3bdd                 cmp ebx, ebp
// 00529069  8bca                 mov ecx, edx
// 0052906b  8bc3                 mov eax, ebx
// 0052906d  7f13                 jg 0x529082
// 0052906f  90                   nop 
// 00529070  668b39               mov di, word ptr [ecx]
// 00529073  83c102               add ecx, 2
// 00529076  6685ff               test di, di
// 00529079  752c                 jne 0x5290a7
// 0052907b  83c001               add eax, 1
// 0052907e  3bc5                 cmp eax, ebp
// 00529080  7eee                 jle 0x529070
// 00529082  83c601               add esi, 1
// 00529085  83c240               add edx, 0x40
// 00529088  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0052908c  7ed9                 jle 0x529067
// 0052908e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00529092  8b542418             mov edx, dword ptr [esp + 0x18]
// 00529096  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052909a  83e801               sub eax, 1
// 0052909d  3bc2                 cmp eax, edx
// 0052909f  89442420             mov dword ptr [esp + 0x20], eax
// 005290a3  7dab                 jge 0x529050
// 005290a5  eb17                 jmp 0x5290be
// 005290a7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005290ab  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005290af  8b542418             mov edx, dword ptr [esp + 0x18]
// 005290b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005290b7  89442414             mov dword ptr [esp + 0x14], eax
// 005290bb  894104               mov dword ptr [ecx + 4], eax
// 005290be  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005290c2  3bf0                 cmp esi, eax
// 005290c4  0f8de6000000         jge 0x5291b0
// 005290ca  89742420             mov dword ptr [esp + 0x20], esi
// 005290ce  c1e605               shl esi, 5
// 005290d1  03f3                 add esi, ebx
// 005290d3  03f6                 add esi, esi
// 005290d5  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005290d9  7f30                 jg 0x52910b
// 005290db  eb03                 jmp 0x5290e0
// 005290dd  8d4900               lea ecx, [ecx]
// 005290e0  8b442424             mov eax, dword ptr [esp + 0x24]
// 005290e4  8b0490               mov eax, dword ptr [eax + edx*4]
// 005290e7  03c6                 add eax, esi
// 005290e9  3bdd                 cmp ebx, ebp
// 005290eb  8bcb                 mov ecx, ebx
// 005290ed  7f13                 jg 0x529102
// 005290ef  90                   nop 
// 005290f0  668b38               mov di, word ptr [eax]
// 005290f3  83c002               add eax, 2
// 005290f6  6685ff               test di, di
// 005290f9  752a                 jne 0x529125
// 005290fb  83c101               add ecx, 1
// 005290fe  3bcd                 cmp ecx, ebp
// 00529100  7eee                 jle 0x5290f0
// 00529102  83c201               add edx, 1
// 00529105  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00529109  7ed5                 jle 0x5290e0
// 0052910b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052910f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00529113  83c001               add eax, 1
// 00529116  83c640               add esi, 0x40
// 00529119  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0052911d  89442420             mov dword ptr [esp + 0x20], eax
// 00529121  7eb2                 jle 0x5290d5
// 00529123  eb13                 jmp 0x529138
// 00529125  8b442420             mov eax, dword ptr [esp + 0x20]
// 00529129  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052912d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00529131  89442410             mov dword ptr [esp + 0x10], eax
// 00529135  894108               mov dword ptr [ecx + 8], eax
// 00529138  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052913c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00529140  3bc6                 cmp eax, esi
// 00529142  7e6c                 jle 0x5291b0
// 00529144  8bf0                 mov esi, eax
// 00529146  c1e605               shl esi, 5
// 00529149  03f3                 add esi, ebx
// 0052914b  89442420             mov dword ptr [esp + 0x20], eax
// 0052914f  03f6                 add esi, esi
// 00529151  eb04                 jmp 0x529157
// 00529153  8b542418             mov edx, dword ptr [esp + 0x18]
// 00529157  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0052915b  7f2e                 jg 0x52918b
// 0052915d  8d4900               lea ecx, [ecx]
// 00529160  8b442424             mov eax, dword ptr [esp + 0x24]
// 00529164  8b0490               mov eax, dword ptr [eax + edx*4]
// 00529167  03c6                 add eax, esi
// 00529169  3bdd                 cmp ebx, ebp
// 0052916b  8bcb                 mov ecx, ebx
// 0052916d  7f13                 jg 0x529182
// 0052916f  90                   nop 
// 00529170  668b38               mov di, word ptr [eax]
// 00529173  83c002               add eax, 2
// 00529176  6685ff               test di, di
// 00529179  7526                 jne 0x5291a1
// 0052917b  83c101               add ecx, 1
// 0052917e  3bcd                 cmp ecx, ebp
// 00529180  7eee                 jle 0x529170
// 00529182  83c201               add edx, 1
// 00529185  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00529189  7ed5                 jle 0x529160
// 0052918b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052918f  83e801               sub eax, 1
// 00529192  83ee40               sub esi, 0x40
// 00529195  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00529199  89442420             mov dword ptr [esp + 0x20], eax
// 0052919d  7db4                 jge 0x529153
// 0052919f  eb0f                 jmp 0x5291b0
// 005291a1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005291a5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005291a9  8944241c             mov dword ptr [esp + 0x1c], eax
// 005291ad  89410c               mov dword ptr [ecx + 0xc], eax
// 005291b0  3bdd                 cmp ebx, ebp
// 005291b2  0f8df5000000         jge 0x5292ad
// 005291b8  8bc3                 mov eax, ebx
// 005291ba  895c2420             mov dword ptr [esp + 0x20], ebx
// 005291be  8bff                 mov edi, edi
// 005291c0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005291c4  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005291c8  7f47                 jg 0x529211
// 005291ca  8b742410             mov esi, dword ptr [esp + 0x10]
// 005291ce  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005291d2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005291d6  c1e605               shl esi, 5
// 005291d9  03f0                 add esi, eax
// 005291db  03f6                 add esi, esi
// 005291dd  8d4900               lea ecx, [ecx]
// 005291e0  8b442424             mov eax, dword ptr [esp + 0x24]
// 005291e4  8b0490               mov eax, dword ptr [eax + edx*4]
// 005291e7  03c6                 add eax, esi
// 005291e9  3bef                 cmp ebp, edi
// 005291eb  8bcd                 mov ecx, ebp
// 005291ed  7f11                 jg 0x529200
// 005291ef  90                   nop 
// 005291f0  66833800             cmp word ptr [eax], 0
// 005291f4  7528                 jne 0x52921e
// 005291f6  83c101               add ecx, 1
// 005291f9  83c040               add eax, 0x40
// 005291fc  3bcf                 cmp ecx, edi
// 005291fe  7ef0                 jle 0x5291f0
// 00529200  83c201               add edx, 1
// 00529203  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00529207  7ed7                 jle 0x5291e0
// 00529209  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052920d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00529211  83c001               add eax, 1
// 00529214  3bc5                 cmp eax, ebp
// 00529216  89442420             mov dword ptr [esp + 0x20], eax
// 0052921a  7ea4                 jle 0x5291c0
// 0052921c  eb0f                 jmp 0x52922d
// 0052921e  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00529222  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00529226  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052922a  895910               mov dword ptr [ecx + 0x10], ebx
// 0052922d  3beb                 cmp ebp, ebx
// 0052922f  0f8e78000000         jle 0x5292ad
// 00529235  8bc5                 mov eax, ebp
// 00529237  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052923b  eb03                 jmp 0x529240
// 0052923d  8d4900               lea ecx, [ecx]
// 00529240  8b542418             mov edx, dword ptr [esp + 0x18]
// 00529244  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00529248  7f47                 jg 0x529291
// 0052924a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052924e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00529252  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00529256  c1e605               shl esi, 5
// 00529259  03f0                 add esi, eax
// 0052925b  03f6                 add esi, esi
// 0052925d  8d4900               lea ecx, [ecx]
// 00529260  8b442424             mov eax, dword ptr [esp + 0x24]
// 00529264  8b0490               mov eax, dword ptr [eax + edx*4]
// 00529267  03c6                 add eax, esi
// 00529269  3bef                 cmp ebp, edi
// 0052926b  8bcd                 mov ecx, ebp
// 0052926d  7f11                 jg 0x529280
// 0052926f  90                   nop 
// 00529270  66833800             cmp word ptr [eax], 0
// 00529274  7528                 jne 0x52929e
// 00529276  83c101               add ecx, 1
// 00529279  83c040               add eax, 0x40
// 0052927c  3bcf                 cmp ecx, edi
// 0052927e  7ef0                 jle 0x529270
// 00529280  83c201               add edx, 1
// 00529283  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00529287  7ed7                 jle 0x529260
// 00529289  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052928d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00529291  83e801               sub eax, 1
// 00529294  3bc3                 cmp eax, ebx
// 00529296  89442420             mov dword ptr [esp + 0x20], eax
// 0052929a  7da4                 jge 0x529240
// 0052929c  eb0f                 jmp 0x5292ad
// 0052929e  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005292a2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005292a6  896c2428             mov dword ptr [esp + 0x28], ebp
// 005292aa  896914               mov dword ptr [ecx + 0x14], ebp
// 005292ad  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005292b1  2b742410             sub esi, dword ptr [esp + 0x10]
// 005292b5  8b442414             mov eax, dword ptr [esp + 0x14]
// 005292b9  2b442418             sub eax, dword ptr [esp + 0x18]
// 005292bd  8bfd                 mov edi, ebp
// 005292bf  2bfb                 sub edi, ebx
// 005292c1  8d14fd00000000       lea edx, [edi*8]
// 005292c8  8d0c76               lea ecx, [esi + esi*2]
// 005292cb  03c9                 add ecx, ecx
// 005292cd  03c9                 add ecx, ecx
// 005292cf  8bea                 mov ebp, edx
// 005292d1  0fafea               imul ebp, edx
// 005292d4  c1e004               shl eax, 4
// 005292d7  8bd1                 mov edx, ecx
// 005292d9  0fafd1               imul edx, ecx
// 005292dc  8bc8                 mov ecx, eax
// 005292de  0fafc8               imul ecx, eax
// 005292e1  8b442418             mov eax, dword ptr [esp + 0x18]
// 005292e5  03ea                 add ebp, edx
// 005292e7  8b542430             mov edx, dword ptr [esp + 0x30]
// 005292eb  03e9                 add ebp, ecx
// 005292ed  896a18               mov dword ptr [edx + 0x18], ebp
// 005292f0  33ed                 xor ebp, ebp
// 005292f2  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005292f6  89442420             mov dword ptr [esp + 0x20], eax
// 005292fa  0f8f6c000000         jg 0x52936c
// 00529300  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529304  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00529308  7f42                 jg 0x52934c
// 0052930a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052930e  8bc8                 mov ecx, eax
// 00529310  8b442420             mov eax, dword ptr [esp + 0x20]
// 00529314  8b1482               mov edx, dword ptr [edx + eax*4]
// 00529317  c1e105               shl ecx, 5
// 0052931a  03cb                 add ecx, ebx
// 0052931c  8d4601               lea eax, [esi + 1]
// 0052931f  8d144a               lea edx, [edx + ecx*2]
// 00529322  89442418             mov dword ptr [esp + 0x18], eax
// 00529326  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 0052932a  8bc2                 mov eax, edx
// 0052932c  7f14                 jg 0x529342
// 0052932e  8d4f01               lea ecx, [edi + 1]
// 00529331  66833800             cmp word ptr [eax], 0
// 00529335  7403                 je 0x52933a
// 00529337  83c501               add ebp, 1
// 0052933a  83c002               add eax, 2
// 0052933d  83e901               sub ecx, 1
// 00529340  75ef                 jne 0x529331
// 00529342  83c240               add edx, 0x40
// 00529345  836c241801           sub dword ptr [esp + 0x18], 1
// 0052934a  75da                 jne 0x529326
// 0052934c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00529350  83c001               add eax, 1
// 00529353  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00529357  89442420             mov dword ptr [esp + 0x20], eax
// 0052935b  7ea3                 jle 0x529300
// 0052935d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00529361  5f                   pop edi
// 00529362  5e                   pop esi
// 00529363  89691c               mov dword ptr [ecx + 0x1c], ebp
// 00529366  5d                   pop ebp
// 00529367  5b                   pop ebx
// 00529368  83c41c               add esp, 0x1c
// 0052936b  c3                   ret 
// 0052936c  5f                   pop edi
// 0052936d  5e                   pop esi
// 0052936e  896a1c               mov dword ptr [edx + 0x1c], ebp
// 00529371  5d                   pop ebp
// 00529372  5b                   pop ebx
// 00529373  83c41c               add esp, 0x1c
// 00529376  c3                   ret 
// library jpeg-6b/jquant2.c (function _update_box)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
