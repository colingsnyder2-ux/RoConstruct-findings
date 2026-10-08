// roc 2010-06 00520770  unit: CSHA1  size: 818 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00520770
//
// 00520770  8b442410             mov eax, dword ptr [esp + 0x10]
// 00520774  83ec24               sub esp, 0x24
// 00520777  03c0                 add eax, eax
// 00520779  55                   push ebp
// 0052077a  03c0                 add eax, eax
// 0052077c  57                   push edi
// 0052077d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00520781  03c0                 add eax, eax
// 00520783  85ff                 test edi, edi
// 00520785  0f840c030000         je 0x520a97
// 0052078b  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0052078f  85ed                 test ebp, ebp
// 00520791  0f8400030000         je 0x520a97
// 00520797  8a0f                 mov cl, byte ptr [edi]
// 00520799  80f903               cmp cl, 3
// 0052079c  740a                 je 0x5207a8
// 0052079e  807d0000             cmp byte ptr [ebp], 0
// 005207a2  0f84ef020000         je 0x520a97
// 005207a8  99                   cdq 
// 005207a9  83e27f               and edx, 0x7f
// 005207ac  03c2                 add eax, edx
// 005207ae  53                   push ebx
// 005207af  8bd8                 mov ebx, eax
// 005207b1  0fb6c1               movzx eax, cl
// 005207b4  c1fb07               sar ebx, 7
// 005207b7  83e801               sub eax, 1
// 005207ba  56                   push esi
// 005207bb  895c2438             mov dword ptr [esp + 0x38], ebx
// 005207bf  0f8492020000         je 0x520a57
// 005207c5  83e801               sub eax, 1
// 005207c8  0f84ee010000         je 0x5209bc
// 005207ce  83e801               sub eax, 1
// 005207d1  740d                 je 0x5207e0
// 005207d3  5e                   pop esi
// 005207d4  5b                   pop ebx
// 005207d5  5f                   pop edi
// 005207d6  b8fbffffff           mov eax, 0xfffffffb
// 005207db  5d                   pop ebp
// 005207dc  83c424               add esp, 0x24
// 005207df  c3                   ret 
// 005207e0  8b4701               mov eax, dword ptr [edi + 1]
// 005207e3  8b4f05               mov ecx, dword ptr [edi + 5]
// 005207e6  8b5709               mov edx, dword ptr [edi + 9]
// 005207e9  89442414             mov dword ptr [esp + 0x14], eax
// 005207ed  8b470d               mov eax, dword ptr [edi + 0xd]
// 005207f0  894c2418             mov dword ptr [esp + 0x18], ecx
// 005207f4  8954241c             mov dword ptr [esp + 0x1c], edx
// 005207f8  89442420             mov dword ptr [esp + 0x20], eax
// 005207fc  895c2410             mov dword ptr [esp + 0x10], ebx
// 00520800  85db                 test ebx, ebx
// 00520802  0f8ea7010000         jle 0x5209af
// 00520808  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0052080c  83c530               add ebp, 0x30
// 0052080f  896c2444             mov dword ptr [esp + 0x44], ebp
// 00520813  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00520817  eb07                 jmp 0x520820
// 00520819  8da42400000000       lea esp, [esp]
// 00520820  33f6                 xor esi, esi
// 00520822  8b542418             mov edx, dword ptr [esp + 0x18]
// 00520826  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052082a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052082e  8a5c2415             mov bl, byte ptr [esp + 0x15]
// 00520832  894c2424             mov dword ptr [esp + 0x24], ecx
// 00520836  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052083a  89542428             mov dword ptr [esp + 0x28], edx
// 0052083e  8b542444             mov edx, dword ptr [esp + 0x44]
// 00520842  8944242c             mov dword ptr [esp + 0x2c], eax
// 00520846  52                   push edx
// 00520847  8d442428             lea eax, [esp + 0x28]
// 0052084b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0052084f  50                   push eax
// 00520850  8bc8                 mov ecx, eax
// 00520852  51                   push ecx
// 00520853  e8e8f2ffff           call 0x51fb40
// 00520858  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 0052085d  02c0                 add al, al
// 0052085f  8ad3                 mov dl, bl
// 00520861  c0ea07               shr dl, 7
// 00520864  0ad0                 or dl, al
// 00520866  8a442422             mov al, byte ptr [esp + 0x22]
// 0052086a  88542420             mov byte ptr [esp + 0x20], dl
// 0052086e  8ac8                 mov cl, al
// 00520870  c0e907               shr cl, 7
// 00520873  02db                 add bl, bl
// 00520875  0acb                 or cl, bl
// 00520877  884c2421             mov byte ptr [esp + 0x21], cl
// 0052087b  8a4c2423             mov cl, byte ptr [esp + 0x23]
// 0052087f  8ad1                 mov dl, cl
// 00520881  c0ea07               shr dl, 7
// 00520884  02c0                 add al, al
// 00520886  0ad0                 or dl, al
// 00520888  8a442424             mov al, byte ptr [esp + 0x24]
// 0052088c  88542422             mov byte ptr [esp + 0x22], dl
// 00520890  8ad0                 mov dl, al
// 00520892  c0ea07               shr dl, 7
// 00520895  02c9                 add cl, cl
// 00520897  0ad1                 or dl, cl
// 00520899  8a4c2425             mov cl, byte ptr [esp + 0x25]
// 0052089d  88542423             mov byte ptr [esp + 0x23], dl
// 005208a1  8ad1                 mov dl, cl
// 005208a3  c0ea07               shr dl, 7
// 005208a6  02c0                 add al, al
// 005208a8  0ad0                 or dl, al
// 005208aa  8a442426             mov al, byte ptr [esp + 0x26]
// 005208ae  88542424             mov byte ptr [esp + 0x24], dl
// 005208b2  8ad0                 mov dl, al
// 005208b4  c0ea07               shr dl, 7
// 005208b7  02c9                 add cl, cl
// 005208b9  0ad1                 or dl, cl
// 005208bb  8a4c2427             mov cl, byte ptr [esp + 0x27]
// 005208bf  88542425             mov byte ptr [esp + 0x25], dl
// 005208c3  8ad1                 mov dl, cl
// 005208c5  c0ea07               shr dl, 7
// 005208c8  02c0                 add al, al
// 005208ca  0ad0                 or dl, al
// 005208cc  8a442428             mov al, byte ptr [esp + 0x28]
// 005208d0  88542426             mov byte ptr [esp + 0x26], dl
// 005208d4  8ad0                 mov dl, al
// 005208d6  c0ea07               shr dl, 7
// 005208d9  02c9                 add cl, cl
// 005208db  0ad1                 or dl, cl
// 005208dd  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 005208e1  88542427             mov byte ptr [esp + 0x27], dl
// 005208e5  8ad1                 mov dl, cl
// 005208e7  c0ea07               shr dl, 7
// 005208ea  02c0                 add al, al
// 005208ec  0ad0                 or dl, al
// 005208ee  8a44242a             mov al, byte ptr [esp + 0x2a]
// 005208f2  88542428             mov byte ptr [esp + 0x28], dl
// 005208f6  8ad0                 mov dl, al
// 005208f8  c0ea07               shr dl, 7
// 005208fb  02c9                 add cl, cl
// 005208fd  0ad1                 or dl, cl
// 005208ff  8a4c242b             mov cl, byte ptr [esp + 0x2b]
// 00520903  88542429             mov byte ptr [esp + 0x29], dl
// 00520907  8ad1                 mov dl, cl
// 00520909  83c40c               add esp, 0xc
// 0052090c  c0ea07               shr dl, 7
// 0052090f  02c0                 add al, al
// 00520911  0ad0                 or dl, al
// 00520913  8a442420             mov al, byte ptr [esp + 0x20]
// 00520917  8854241e             mov byte ptr [esp + 0x1e], dl
// 0052091b  02c9                 add cl, cl
// 0052091d  8ad0                 mov dl, al
// 0052091f  c0ea07               shr dl, 7
// 00520922  0ad1                 or dl, cl
// 00520924  8a4c2421             mov cl, byte ptr [esp + 0x21]
// 00520928  8854241f             mov byte ptr [esp + 0x1f], dl
// 0052092c  8ad1                 mov dl, cl
// 0052092e  c0ea07               shr dl, 7
// 00520931  02c0                 add al, al
// 00520933  0ad0                 or dl, al
// 00520935  8a442422             mov al, byte ptr [esp + 0x22]
// 00520939  02c9                 add cl, cl
// 0052093b  88542420             mov byte ptr [esp + 0x20], dl
// 0052093f  8ad0                 mov dl, al
// 00520941  c0ea07               shr dl, 7
// 00520944  0ad1                 or dl, cl
// 00520946  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0052094b  c0e907               shr cl, 7
// 0052094e  02c0                 add al, al
// 00520950  0ac8                 or cl, al
// 00520952  884c2422             mov byte ptr [esp + 0x22], cl
// 00520956  8bc6                 mov eax, esi
// 00520958  88542421             mov byte ptr [esp + 0x21], dl
// 0052095c  c1e803               shr eax, 3
// 0052095f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 00520963  8bd6                 mov edx, esi
// 00520965  83e207               and edx, 7
// 00520968  b107                 mov cl, 7
// 0052096a  2aca                 sub cl, dl
// 0052096c  d2eb                 shr bl, cl
// 0052096e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00520973  80e301               and bl, 1
// 00520976  02c9                 add cl, cl
// 00520978  0ad9                 or bl, cl
// 0052097a  885c2423             mov byte ptr [esp + 0x23], bl
// 0052097e  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 00520983  80e380               and bl, 0x80
// 00520986  8aca                 mov cl, dl
// 00520988  d2eb                 shr bl, cl
// 0052098a  46                   inc esi
// 0052098b  301c38               xor byte ptr [eax + edi], bl
// 0052098e  81fe80000000         cmp esi, 0x80
// 00520994  0f8c88feffff         jl 0x520822
// 0052099a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052099e  48                   dec eax
// 0052099f  89442410             mov dword ptr [esp + 0x10], eax
// 005209a3  85c0                 test eax, eax
// 005209a5  0f8f75feffff         jg 0x520820
// 005209ab  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005209af  5e                   pop esi
// 005209b0  8bc3                 mov eax, ebx
// 005209b2  5b                   pop ebx
// 005209b3  5f                   pop edi
// 005209b4  c1e007               shl eax, 7
// 005209b7  5d                   pop ebp
// 005209b8  83c424               add esp, 0x24
// 005209bb  c3                   ret 
// 005209bc  8b742440             mov esi, dword ptr [esp + 0x40]
// 005209c0  83c530               add ebp, 0x30
// 005209c3  55                   push ebp
// 005209c4  8d542428             lea edx, [esp + 0x28]
// 005209c8  52                   push edx
// 005209c9  56                   push esi
// 005209ca  e831f5ffff           call 0x51ff00
// 005209cf  8b4f01               mov ecx, dword ptr [edi + 1]
// 005209d2  334c2430             xor ecx, dword ptr [esp + 0x30]
// 005209d6  8b442454             mov eax, dword ptr [esp + 0x54]
// 005209da  8908                 mov dword ptr [eax], ecx
// 005209dc  8b5705               mov edx, dword ptr [edi + 5]
// 005209df  33542434             xor edx, dword ptr [esp + 0x34]
// 005209e3  4b                   dec ebx
// 005209e4  895004               mov dword ptr [eax + 4], edx
// 005209e7  8b4f09               mov ecx, dword ptr [edi + 9]
// 005209ea  334c2438             xor ecx, dword ptr [esp + 0x38]
// 005209ee  83c40c               add esp, 0xc
// 005209f1  894808               mov dword ptr [eax + 8], ecx
// 005209f4  8b570d               mov edx, dword ptr [edi + 0xd]
// 005209f7  33542430             xor edx, dword ptr [esp + 0x30]
// 005209fb  89500c               mov dword ptr [eax + 0xc], edx
// 005209fe  85db                 test ebx, ebx
// 00520a00  7ea9                 jle 0x5209ab
// 00520a02  8d7814               lea edi, [eax + 0x14]
// 00520a05  55                   push ebp
// 00520a06  8d442428             lea eax, [esp + 0x28]
// 00520a0a  50                   push eax
// 00520a0b  56                   push esi
// 00520a0c  e8eff4ffff           call 0x51ff00
// 00520a11  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 00520a14  334c2430             xor ecx, dword ptr [esp + 0x30]
// 00520a18  4b                   dec ebx
// 00520a19  894ffc               mov dword ptr [edi - 4], ecx
// 00520a1c  8b56f4               mov edx, dword ptr [esi - 0xc]
// 00520a1f  33542434             xor edx, dword ptr [esp + 0x34]
// 00520a23  83c40c               add esp, 0xc
// 00520a26  8917                 mov dword ptr [edi], edx
// 00520a28  8b46f8               mov eax, dword ptr [esi - 8]
// 00520a2b  3344242c             xor eax, dword ptr [esp + 0x2c]
// 00520a2f  83c610               add esi, 0x10
// 00520a32  894704               mov dword ptr [edi + 4], eax
// 00520a35  8b4eec               mov ecx, dword ptr [esi - 0x14]
// 00520a38  334c2430             xor ecx, dword ptr [esp + 0x30]
// 00520a3c  83c710               add edi, 0x10
// 00520a3f  894ff8               mov dword ptr [edi - 8], ecx
// 00520a42  85db                 test ebx, ebx
// 00520a44  7fbf                 jg 0x520a05
// 00520a46  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00520a4a  5e                   pop esi
// 00520a4b  8bc3                 mov eax, ebx
// 00520a4d  5b                   pop ebx
// 00520a4e  5f                   pop edi
// 00520a4f  c1e007               shl eax, 7
// 00520a52  5d                   pop ebp
// 00520a53  83c424               add esp, 0x24
// 00520a56  c3                   ret 
// 00520a57  8bf3                 mov esi, ebx
// 00520a59  85db                 test ebx, ebx
// 00520a5b  0f8e4effffff         jle 0x5209af
// 00520a61  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00520a65  83c530               add ebp, 0x30
// 00520a68  896c2444             mov dword ptr [esp + 0x44], ebp
// 00520a6c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00520a70  8b542444             mov edx, dword ptr [esp + 0x44]
// 00520a74  52                   push edx
// 00520a75  55                   push ebp
// 00520a76  57                   push edi
// 00520a77  e884f4ffff           call 0x51ff00
// 00520a7c  4e                   dec esi
// 00520a7d  83c40c               add esp, 0xc
// 00520a80  83c710               add edi, 0x10
// 00520a83  83c510               add ebp, 0x10
// 00520a86  85f6                 test esi, esi
// 00520a88  7fe6                 jg 0x520a70
// 00520a8a  5e                   pop esi
// 00520a8b  8bc3                 mov eax, ebx
// 00520a8d  5b                   pop ebx
// 00520a8e  5f                   pop edi
// 00520a8f  c1e007               shl eax, 7
// 00520a92  5d                   pop ebp
// 00520a93  83c424               add esp, 0x24
// 00520a96  c3                   ret 
// 00520a97  5f                   pop edi
// 00520a98  b8fbffffff           mov eax, 0xfffffffb
// 00520a9d  5d                   pop ebp
// 00520a9e  83c424               add esp, 0x24
// 00520aa1  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockDecrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
