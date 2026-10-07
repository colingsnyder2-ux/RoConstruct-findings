// roc 2012-06 00664cc0  unit: seg_00660000  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00664cc0
//
// 00664cc0  51                   push ecx
// 00664cc1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00664cc5  8b442410             mov eax, dword ptr [esp + 0x10]
// 00664cc9  3bc1                 cmp eax, ecx
// 00664ccb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00664ccf  0f8d5d010000         jge 0x664e32
// 00664cd5  53                   push ebx
// 00664cd6  55                   push ebp
// 00664cd7  56                   push esi
// 00664cd8  8d3400               lea esi, [eax + eax]
// 00664cdb  8974240c             mov dword ptr [esp + 0xc], esi
// 00664cdf  8bf0                 mov esi, eax
// 00664ce1  c1e605               shl esi, 5
// 00664ce4  57                   push edi
// 00664ce5  8d74160c             lea esi, [esi + edx + 0xc]
// 00664ce9  eb09                 jmp 0x664cf4
// 00664ceb  eb03                 jmp 0x664cf0
// 00664ced  8d4900               lea ecx, [ecx]
// 00664cf0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00664cf4  33db                 xor ebx, ebx
// 00664cf6  394c2410             cmp dword ptr [esp + 0x10], ecx
// 00664cfa  7f26                 jg 0x664d22
// 00664cfc  33c9                 xor ecx, ecx
// 00664cfe  85c0                 test eax, eax
// 00664d00  7e41                 jle 0x664d43
// 00664d02  83c21c               add edx, 0x1c
// 00664d05  8be8                 mov ebp, eax
// 00664d07  8b3a                 mov edi, dword ptr [edx]
// 00664d09  3bfb                 cmp edi, ebx
// 00664d0b  7e0b                 jle 0x664d18
// 00664d0d  837afc00             cmp dword ptr [edx - 4], 0
// 00664d11  7e05                 jle 0x664d18
// 00664d13  8d4ae4               lea ecx, [edx - 0x1c]
// 00664d16  8bdf                 mov ebx, edi
// 00664d18  83c220               add edx, 0x20
// 00664d1b  83ed01               sub ebp, 1
// 00664d1e  75e7                 jne 0x664d07
// 00664d20  eb21                 jmp 0x664d43
// 00664d22  33c9                 xor ecx, ecx
// 00664d24  85c0                 test eax, eax
// 00664d26  7e1b                 jle 0x664d43
// 00664d28  83c218               add edx, 0x18
// 00664d2b  8be8                 mov ebp, eax
// 00664d2d  8d4900               lea ecx, [ecx]
// 00664d30  8b3a                 mov edi, dword ptr [edx]
// 00664d32  3bfb                 cmp edi, ebx
// 00664d34  7e05                 jle 0x664d3b
// 00664d36  8d4ae8               lea ecx, [edx - 0x18]
// 00664d39  8bdf                 mov ebx, edi
// 00664d3b  83c220               add edx, 0x20
// 00664d3e  83ed01               sub ebp, 1
// 00664d41  75ed                 jne 0x664d30
// 00664d43  85c9                 test ecx, ecx
// 00664d45  0f84e3000000         je 0x664e2e
// 00664d4b  8b4104               mov eax, dword ptr [ecx + 4]
// 00664d4e  8946f8               mov dword ptr [esi - 8], eax
// 00664d51  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00664d54  8916                 mov dword ptr [esi], edx
// 00664d56  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00664d59  894608               mov dword ptr [esi + 8], eax
// 00664d5c  8b11                 mov edx, dword ptr [ecx]
// 00664d5e  8956f4               mov dword ptr [esi - 0xc], edx
// 00664d61  8b4108               mov eax, dword ptr [ecx + 8]
// 00664d64  8946fc               mov dword ptr [esi - 4], eax
// 00664d67  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00664d6a  895604               mov dword ptr [esi + 4], edx
// 00664d6d  8b11                 mov edx, dword ptr [ecx]
// 00664d6f  8b4104               mov eax, dword ptr [ecx + 4]
// 00664d72  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00664d75  8b6908               mov ebp, dword ptr [ecx + 8]
// 00664d78  8d5ef4               lea ebx, [esi - 0xc]
// 00664d7b  2bc2                 sub eax, edx
// 00664d7d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00664d80  2bfa                 sub edi, edx
// 00664d82  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00664d85  2bd5                 sub edx, ebp
// 00664d87  03ff                 add edi, edi
// 00664d89  8d1452               lea edx, [edx + edx*2]
// 00664d8c  03d2                 add edx, edx
// 00664d8e  03ff                 add edi, edi
// 00664d90  c1e004               shl eax, 4
// 00664d93  03d2                 add edx, edx
// 00664d95  03ff                 add edi, edi
// 00664d97  3bc2                 cmp eax, edx
// 00664d99  bd01000000           mov ebp, 1
// 00664d9e  7e04                 jle 0x664da4
// 00664da0  8bd0                 mov edx, eax
// 00664da2  33ed                 xor ebp, ebp
// 00664da4  3bfa                 cmp edi, edx
// 00664da6  7e05                 jle 0x664dad
// 00664da8  bd02000000           mov ebp, 2
// 00664dad  83ed00               sub ebp, 0
// 00664db0  7436                 je 0x664de8
// 00664db2  83ed01               sub ebp, 1
// 00664db5  741b                 je 0x664dd2
// 00664db7  83ed01               sub ebp, 1
// 00664dba  753e                 jne 0x664dfa
// 00664dbc  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00664dbf  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00664dc2  03c2                 add eax, edx
// 00664dc4  99                   cdq 
// 00664dc5  2bc2                 sub eax, edx
// 00664dc7  d1f8                 sar eax, 1
// 00664dc9  894114               mov dword ptr [ecx + 0x14], eax
// 00664dcc  40                   inc eax
// 00664dcd  894604               mov dword ptr [esi + 4], eax
// 00664dd0  eb28                 jmp 0x664dfa
// 00664dd2  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00664dd5  8b5108               mov edx, dword ptr [ecx + 8]
// 00664dd8  03c2                 add eax, edx
// 00664dda  99                   cdq 
// 00664ddb  2bc2                 sub eax, edx
// 00664ddd  d1f8                 sar eax, 1
// 00664ddf  89410c               mov dword ptr [ecx + 0xc], eax
// 00664de2  40                   inc eax
// 00664de3  8946fc               mov dword ptr [esi - 4], eax
// 00664de6  eb12                 jmp 0x664dfa
// 00664de8  8b4104               mov eax, dword ptr [ecx + 4]
// 00664deb  8b11                 mov edx, dword ptr [ecx]
// 00664ded  03c2                 add eax, edx
// 00664def  99                   cdq 
// 00664df0  2bc2                 sub eax, edx
// 00664df2  d1f8                 sar eax, 1
// 00664df4  894104               mov dword ptr [ecx + 4], eax
// 00664df7  40                   inc eax
// 00664df8  8903                 mov dword ptr [ebx], eax
// 00664dfa  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00664dfe  51                   push ecx
// 00664dff  8bcf                 mov ecx, edi
// 00664e01  e8dafaffff           call 0x6648e0
// 00664e06  53                   push ebx
// 00664e07  8bcf                 mov ecx, edi
// 00664e09  e8d2faffff           call 0x6648e0
// 00664e0e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00664e12  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00664e16  8344241802           add dword ptr [esp + 0x18], 2
// 00664e1b  40                   inc eax
// 00664e1c  83c408               add esp, 8
// 00664e1f  83c620               add esi, 0x20
// 00664e22  3bc1                 cmp eax, ecx
// 00664e24  89442420             mov dword ptr [esp + 0x20], eax
// 00664e28  0f8cc2feffff         jl 0x664cf0
// 00664e2e  5f                   pop edi
// 00664e2f  5e                   pop esi
// 00664e30  5d                   pop ebp
// 00664e31  5b                   pop ebx
// 00664e32  59                   pop ecx
// 00664e33  c3                   ret 
// library jpeg-6b/jquant2.c (function _median_cut)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
