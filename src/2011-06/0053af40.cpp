// roc 2011-06 0053af40  unit: seg_00530000  size: 818 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053af40
//
// 0053af40  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053af44  83ec24               sub esp, 0x24
// 0053af47  03c0                 add eax, eax
// 0053af49  55                   push ebp
// 0053af4a  03c0                 add eax, eax
// 0053af4c  57                   push edi
// 0053af4d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0053af51  03c0                 add eax, eax
// 0053af53  85ff                 test edi, edi
// 0053af55  0f840c030000         je 0x53b267
// 0053af5b  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0053af5f  85ed                 test ebp, ebp
// 0053af61  0f8400030000         je 0x53b267
// 0053af67  8a0f                 mov cl, byte ptr [edi]
// 0053af69  80f903               cmp cl, 3
// 0053af6c  740a                 je 0x53af78
// 0053af6e  807d0000             cmp byte ptr [ebp], 0
// 0053af72  0f84ef020000         je 0x53b267
// 0053af78  99                   cdq 
// 0053af79  83e27f               and edx, 0x7f
// 0053af7c  03c2                 add eax, edx
// 0053af7e  53                   push ebx
// 0053af7f  8bd8                 mov ebx, eax
// 0053af81  0fb6c1               movzx eax, cl
// 0053af84  c1fb07               sar ebx, 7
// 0053af87  83e801               sub eax, 1
// 0053af8a  56                   push esi
// 0053af8b  895c2438             mov dword ptr [esp + 0x38], ebx
// 0053af8f  0f8492020000         je 0x53b227
// 0053af95  83e801               sub eax, 1
// 0053af98  0f84ee010000         je 0x53b18c
// 0053af9e  83e801               sub eax, 1
// 0053afa1  740d                 je 0x53afb0
// 0053afa3  5e                   pop esi
// 0053afa4  5b                   pop ebx
// 0053afa5  5f                   pop edi
// 0053afa6  b8fbffffff           mov eax, 0xfffffffb
// 0053afab  5d                   pop ebp
// 0053afac  83c424               add esp, 0x24
// 0053afaf  c3                   ret 
// 0053afb0  8b4701               mov eax, dword ptr [edi + 1]
// 0053afb3  8b4f05               mov ecx, dword ptr [edi + 5]
// 0053afb6  8b5709               mov edx, dword ptr [edi + 9]
// 0053afb9  89442414             mov dword ptr [esp + 0x14], eax
// 0053afbd  8b470d               mov eax, dword ptr [edi + 0xd]
// 0053afc0  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053afc4  8954241c             mov dword ptr [esp + 0x1c], edx
// 0053afc8  89442420             mov dword ptr [esp + 0x20], eax
// 0053afcc  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053afd0  85db                 test ebx, ebx
// 0053afd2  0f8ea7010000         jle 0x53b17f
// 0053afd8  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0053afdc  83c530               add ebp, 0x30
// 0053afdf  896c2444             mov dword ptr [esp + 0x44], ebp
// 0053afe3  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0053afe7  eb07                 jmp 0x53aff0
// 0053afe9  8da42400000000       lea esp, [esp]
// 0053aff0  33f6                 xor esi, esi
// 0053aff2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053aff6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053affa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053affe  8a5c2415             mov bl, byte ptr [esp + 0x15]
// 0053b002  894c2424             mov dword ptr [esp + 0x24], ecx
// 0053b006  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053b00a  89542428             mov dword ptr [esp + 0x28], edx
// 0053b00e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0053b012  8944242c             mov dword ptr [esp + 0x2c], eax
// 0053b016  52                   push edx
// 0053b017  8d442428             lea eax, [esp + 0x28]
// 0053b01b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0053b01f  50                   push eax
// 0053b020  8bc8                 mov ecx, eax
// 0053b022  51                   push ecx
// 0053b023  e8e8f2ffff           call 0x53a310
// 0053b028  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 0053b02d  02c0                 add al, al
// 0053b02f  8ad3                 mov dl, bl
// 0053b031  c0ea07               shr dl, 7
// 0053b034  0ad0                 or dl, al
// 0053b036  8a442422             mov al, byte ptr [esp + 0x22]
// 0053b03a  88542420             mov byte ptr [esp + 0x20], dl
// 0053b03e  8ac8                 mov cl, al
// 0053b040  c0e907               shr cl, 7
// 0053b043  02db                 add bl, bl
// 0053b045  0acb                 or cl, bl
// 0053b047  884c2421             mov byte ptr [esp + 0x21], cl
// 0053b04b  8a4c2423             mov cl, byte ptr [esp + 0x23]
// 0053b04f  8ad1                 mov dl, cl
// 0053b051  c0ea07               shr dl, 7
// 0053b054  02c0                 add al, al
// 0053b056  0ad0                 or dl, al
// 0053b058  8a442424             mov al, byte ptr [esp + 0x24]
// 0053b05c  88542422             mov byte ptr [esp + 0x22], dl
// 0053b060  8ad0                 mov dl, al
// 0053b062  c0ea07               shr dl, 7
// 0053b065  02c9                 add cl, cl
// 0053b067  0ad1                 or dl, cl
// 0053b069  8a4c2425             mov cl, byte ptr [esp + 0x25]
// 0053b06d  88542423             mov byte ptr [esp + 0x23], dl
// 0053b071  8ad1                 mov dl, cl
// 0053b073  c0ea07               shr dl, 7
// 0053b076  02c0                 add al, al
// 0053b078  0ad0                 or dl, al
// 0053b07a  8a442426             mov al, byte ptr [esp + 0x26]
// 0053b07e  88542424             mov byte ptr [esp + 0x24], dl
// 0053b082  8ad0                 mov dl, al
// 0053b084  c0ea07               shr dl, 7
// 0053b087  02c9                 add cl, cl
// 0053b089  0ad1                 or dl, cl
// 0053b08b  8a4c2427             mov cl, byte ptr [esp + 0x27]
// 0053b08f  88542425             mov byte ptr [esp + 0x25], dl
// 0053b093  8ad1                 mov dl, cl
// 0053b095  c0ea07               shr dl, 7
// 0053b098  02c0                 add al, al
// 0053b09a  0ad0                 or dl, al
// 0053b09c  8a442428             mov al, byte ptr [esp + 0x28]
// 0053b0a0  88542426             mov byte ptr [esp + 0x26], dl
// 0053b0a4  8ad0                 mov dl, al
// 0053b0a6  c0ea07               shr dl, 7
// 0053b0a9  02c9                 add cl, cl
// 0053b0ab  0ad1                 or dl, cl
// 0053b0ad  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 0053b0b1  88542427             mov byte ptr [esp + 0x27], dl
// 0053b0b5  8ad1                 mov dl, cl
// 0053b0b7  c0ea07               shr dl, 7
// 0053b0ba  02c0                 add al, al
// 0053b0bc  0ad0                 or dl, al
// 0053b0be  8a44242a             mov al, byte ptr [esp + 0x2a]
// 0053b0c2  88542428             mov byte ptr [esp + 0x28], dl
// 0053b0c6  8ad0                 mov dl, al
// 0053b0c8  c0ea07               shr dl, 7
// 0053b0cb  02c9                 add cl, cl
// 0053b0cd  0ad1                 or dl, cl
// 0053b0cf  8a4c242b             mov cl, byte ptr [esp + 0x2b]
// 0053b0d3  88542429             mov byte ptr [esp + 0x29], dl
// 0053b0d7  8ad1                 mov dl, cl
// 0053b0d9  83c40c               add esp, 0xc
// 0053b0dc  c0ea07               shr dl, 7
// 0053b0df  02c0                 add al, al
// 0053b0e1  0ad0                 or dl, al
// 0053b0e3  8a442420             mov al, byte ptr [esp + 0x20]
// 0053b0e7  8854241e             mov byte ptr [esp + 0x1e], dl
// 0053b0eb  02c9                 add cl, cl
// 0053b0ed  8ad0                 mov dl, al
// 0053b0ef  c0ea07               shr dl, 7
// 0053b0f2  0ad1                 or dl, cl
// 0053b0f4  8a4c2421             mov cl, byte ptr [esp + 0x21]
// 0053b0f8  8854241f             mov byte ptr [esp + 0x1f], dl
// 0053b0fc  8ad1                 mov dl, cl
// 0053b0fe  c0ea07               shr dl, 7
// 0053b101  02c0                 add al, al
// 0053b103  0ad0                 or dl, al
// 0053b105  8a442422             mov al, byte ptr [esp + 0x22]
// 0053b109  02c9                 add cl, cl
// 0053b10b  88542420             mov byte ptr [esp + 0x20], dl
// 0053b10f  8ad0                 mov dl, al
// 0053b111  c0ea07               shr dl, 7
// 0053b114  0ad1                 or dl, cl
// 0053b116  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0053b11b  c0e907               shr cl, 7
// 0053b11e  02c0                 add al, al
// 0053b120  0ac8                 or cl, al
// 0053b122  884c2422             mov byte ptr [esp + 0x22], cl
// 0053b126  8bc6                 mov eax, esi
// 0053b128  88542421             mov byte ptr [esp + 0x21], dl
// 0053b12c  c1e803               shr eax, 3
// 0053b12f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 0053b133  8bd6                 mov edx, esi
// 0053b135  83e207               and edx, 7
// 0053b138  b107                 mov cl, 7
// 0053b13a  2aca                 sub cl, dl
// 0053b13c  d2eb                 shr bl, cl
// 0053b13e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0053b143  80e301               and bl, 1
// 0053b146  02c9                 add cl, cl
// 0053b148  0ad9                 or bl, cl
// 0053b14a  885c2423             mov byte ptr [esp + 0x23], bl
// 0053b14e  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 0053b153  80e380               and bl, 0x80
// 0053b156  8aca                 mov cl, dl
// 0053b158  d2eb                 shr bl, cl
// 0053b15a  46                   inc esi
// 0053b15b  301c38               xor byte ptr [eax + edi], bl
// 0053b15e  81fe80000000         cmp esi, 0x80
// 0053b164  0f8c88feffff         jl 0x53aff2
// 0053b16a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053b16e  48                   dec eax
// 0053b16f  89442410             mov dword ptr [esp + 0x10], eax
// 0053b173  85c0                 test eax, eax
// 0053b175  0f8f75feffff         jg 0x53aff0
// 0053b17b  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0053b17f  5e                   pop esi
// 0053b180  8bc3                 mov eax, ebx
// 0053b182  5b                   pop ebx
// 0053b183  5f                   pop edi
// 0053b184  c1e007               shl eax, 7
// 0053b187  5d                   pop ebp
// 0053b188  83c424               add esp, 0x24
// 0053b18b  c3                   ret 
// 0053b18c  8b742440             mov esi, dword ptr [esp + 0x40]
// 0053b190  83c530               add ebp, 0x30
// 0053b193  55                   push ebp
// 0053b194  8d542428             lea edx, [esp + 0x28]
// 0053b198  52                   push edx
// 0053b199  56                   push esi
// 0053b19a  e831f5ffff           call 0x53a6d0
// 0053b19f  8b4f01               mov ecx, dword ptr [edi + 1]
// 0053b1a2  334c2430             xor ecx, dword ptr [esp + 0x30]
// 0053b1a6  8b442454             mov eax, dword ptr [esp + 0x54]
// 0053b1aa  8908                 mov dword ptr [eax], ecx
// 0053b1ac  8b5705               mov edx, dword ptr [edi + 5]
// 0053b1af  33542434             xor edx, dword ptr [esp + 0x34]
// 0053b1b3  4b                   dec ebx
// 0053b1b4  895004               mov dword ptr [eax + 4], edx
// 0053b1b7  8b4f09               mov ecx, dword ptr [edi + 9]
// 0053b1ba  334c2438             xor ecx, dword ptr [esp + 0x38]
// 0053b1be  83c40c               add esp, 0xc
// 0053b1c1  894808               mov dword ptr [eax + 8], ecx
// 0053b1c4  8b570d               mov edx, dword ptr [edi + 0xd]
// 0053b1c7  33542430             xor edx, dword ptr [esp + 0x30]
// 0053b1cb  89500c               mov dword ptr [eax + 0xc], edx
// 0053b1ce  85db                 test ebx, ebx
// 0053b1d0  7ea9                 jle 0x53b17b
// 0053b1d2  8d7814               lea edi, [eax + 0x14]
// 0053b1d5  55                   push ebp
// 0053b1d6  8d442428             lea eax, [esp + 0x28]
// 0053b1da  50                   push eax
// 0053b1db  56                   push esi
// 0053b1dc  e8eff4ffff           call 0x53a6d0
// 0053b1e1  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 0053b1e4  334c2430             xor ecx, dword ptr [esp + 0x30]
// 0053b1e8  4b                   dec ebx
// 0053b1e9  894ffc               mov dword ptr [edi - 4], ecx
// 0053b1ec  8b56f4               mov edx, dword ptr [esi - 0xc]
// 0053b1ef  33542434             xor edx, dword ptr [esp + 0x34]
// 0053b1f3  83c40c               add esp, 0xc
// 0053b1f6  8917                 mov dword ptr [edi], edx
// 0053b1f8  8b46f8               mov eax, dword ptr [esi - 8]
// 0053b1fb  3344242c             xor eax, dword ptr [esp + 0x2c]
// 0053b1ff  83c610               add esi, 0x10
// 0053b202  894704               mov dword ptr [edi + 4], eax
// 0053b205  8b4eec               mov ecx, dword ptr [esi - 0x14]
// 0053b208  334c2430             xor ecx, dword ptr [esp + 0x30]
// 0053b20c  83c710               add edi, 0x10
// 0053b20f  894ff8               mov dword ptr [edi - 8], ecx
// 0053b212  85db                 test ebx, ebx
// 0053b214  7fbf                 jg 0x53b1d5
// 0053b216  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0053b21a  5e                   pop esi
// 0053b21b  8bc3                 mov eax, ebx
// 0053b21d  5b                   pop ebx
// 0053b21e  5f                   pop edi
// 0053b21f  c1e007               shl eax, 7
// 0053b222  5d                   pop ebp
// 0053b223  83c424               add esp, 0x24
// 0053b226  c3                   ret 
// 0053b227  8bf3                 mov esi, ebx
// 0053b229  85db                 test ebx, ebx
// 0053b22b  0f8e4effffff         jle 0x53b17f
// 0053b231  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0053b235  83c530               add ebp, 0x30
// 0053b238  896c2444             mov dword ptr [esp + 0x44], ebp
// 0053b23c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0053b240  8b542444             mov edx, dword ptr [esp + 0x44]
// 0053b244  52                   push edx
// 0053b245  55                   push ebp
// 0053b246  57                   push edi
// 0053b247  e884f4ffff           call 0x53a6d0
// 0053b24c  4e                   dec esi
// 0053b24d  83c40c               add esp, 0xc
// 0053b250  83c710               add edi, 0x10
// 0053b253  83c510               add ebp, 0x10
// 0053b256  85f6                 test esi, esi
// 0053b258  7fe6                 jg 0x53b240
// 0053b25a  5e                   pop esi
// 0053b25b  8bc3                 mov eax, ebx
// 0053b25d  5b                   pop ebx
// 0053b25e  5f                   pop edi
// 0053b25f  c1e007               shl eax, 7
// 0053b262  5d                   pop ebp
// 0053b263  83c424               add esp, 0x24
// 0053b266  c3                   ret 
// 0053b267  5f                   pop edi
// 0053b268  b8fbffffff           mov eax, 0xfffffffb
// 0053b26d  5d                   pop ebp
// 0053b26e  83c424               add esp, 0x24
// 0053b271  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockDecrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
