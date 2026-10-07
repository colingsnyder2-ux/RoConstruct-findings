// roc 2010-06 00583300  unit: seg_00580000  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583300
//
// 00583300  51                   push ecx
// 00583301  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00583305  8b442410             mov eax, dword ptr [esp + 0x10]
// 00583309  3bc1                 cmp eax, ecx
// 0058330b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0058330f  0f8d5d010000         jge 0x583472
// 00583315  53                   push ebx
// 00583316  55                   push ebp
// 00583317  56                   push esi
// 00583318  8d3400               lea esi, [eax + eax]
// 0058331b  8974240c             mov dword ptr [esp + 0xc], esi
// 0058331f  8bf0                 mov esi, eax
// 00583321  c1e605               shl esi, 5
// 00583324  57                   push edi
// 00583325  8d74160c             lea esi, [esi + edx + 0xc]
// 00583329  eb09                 jmp 0x583334
// 0058332b  eb03                 jmp 0x583330
// 0058332d  8d4900               lea ecx, [ecx]
// 00583330  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00583334  33db                 xor ebx, ebx
// 00583336  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0058333a  7f26                 jg 0x583362
// 0058333c  33c9                 xor ecx, ecx
// 0058333e  85c0                 test eax, eax
// 00583340  7e41                 jle 0x583383
// 00583342  83c21c               add edx, 0x1c
// 00583345  8be8                 mov ebp, eax
// 00583347  8b3a                 mov edi, dword ptr [edx]
// 00583349  3bfb                 cmp edi, ebx
// 0058334b  7e0b                 jle 0x583358
// 0058334d  837afc00             cmp dword ptr [edx - 4], 0
// 00583351  7e05                 jle 0x583358
// 00583353  8d4ae4               lea ecx, [edx - 0x1c]
// 00583356  8bdf                 mov ebx, edi
// 00583358  83c220               add edx, 0x20
// 0058335b  83ed01               sub ebp, 1
// 0058335e  75e7                 jne 0x583347
// 00583360  eb21                 jmp 0x583383
// 00583362  33c9                 xor ecx, ecx
// 00583364  85c0                 test eax, eax
// 00583366  7e1b                 jle 0x583383
// 00583368  83c218               add edx, 0x18
// 0058336b  8be8                 mov ebp, eax
// 0058336d  8d4900               lea ecx, [ecx]
// 00583370  8b3a                 mov edi, dword ptr [edx]
// 00583372  3bfb                 cmp edi, ebx
// 00583374  7e05                 jle 0x58337b
// 00583376  8d4ae8               lea ecx, [edx - 0x18]
// 00583379  8bdf                 mov ebx, edi
// 0058337b  83c220               add edx, 0x20
// 0058337e  83ed01               sub ebp, 1
// 00583381  75ed                 jne 0x583370
// 00583383  85c9                 test ecx, ecx
// 00583385  0f84e3000000         je 0x58346e
// 0058338b  8b4104               mov eax, dword ptr [ecx + 4]
// 0058338e  8946f8               mov dword ptr [esi - 8], eax
// 00583391  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00583394  8916                 mov dword ptr [esi], edx
// 00583396  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00583399  894608               mov dword ptr [esi + 8], eax
// 0058339c  8b11                 mov edx, dword ptr [ecx]
// 0058339e  8956f4               mov dword ptr [esi - 0xc], edx
// 005833a1  8b4108               mov eax, dword ptr [ecx + 8]
// 005833a4  8946fc               mov dword ptr [esi - 4], eax
// 005833a7  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005833aa  895604               mov dword ptr [esi + 4], edx
// 005833ad  8b11                 mov edx, dword ptr [ecx]
// 005833af  8b4104               mov eax, dword ptr [ecx + 4]
// 005833b2  8b7914               mov edi, dword ptr [ecx + 0x14]
// 005833b5  8b6908               mov ebp, dword ptr [ecx + 8]
// 005833b8  8d5ef4               lea ebx, [esi - 0xc]
// 005833bb  2bc2                 sub eax, edx
// 005833bd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005833c0  2bfa                 sub edi, edx
// 005833c2  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005833c5  2bd5                 sub edx, ebp
// 005833c7  03ff                 add edi, edi
// 005833c9  8d1452               lea edx, [edx + edx*2]
// 005833cc  03d2                 add edx, edx
// 005833ce  03ff                 add edi, edi
// 005833d0  c1e004               shl eax, 4
// 005833d3  03d2                 add edx, edx
// 005833d5  03ff                 add edi, edi
// 005833d7  3bc2                 cmp eax, edx
// 005833d9  bd01000000           mov ebp, 1
// 005833de  7e04                 jle 0x5833e4
// 005833e0  8bd0                 mov edx, eax
// 005833e2  33ed                 xor ebp, ebp
// 005833e4  3bfa                 cmp edi, edx
// 005833e6  7e05                 jle 0x5833ed
// 005833e8  bd02000000           mov ebp, 2
// 005833ed  83ed00               sub ebp, 0
// 005833f0  7436                 je 0x583428
// 005833f2  83ed01               sub ebp, 1
// 005833f5  741b                 je 0x583412
// 005833f7  83ed01               sub ebp, 1
// 005833fa  753e                 jne 0x58343a
// 005833fc  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005833ff  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00583402  03c2                 add eax, edx
// 00583404  99                   cdq 
// 00583405  2bc2                 sub eax, edx
// 00583407  d1f8                 sar eax, 1
// 00583409  894114               mov dword ptr [ecx + 0x14], eax
// 0058340c  40                   inc eax
// 0058340d  894604               mov dword ptr [esi + 4], eax
// 00583410  eb28                 jmp 0x58343a
// 00583412  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00583415  8b5108               mov edx, dword ptr [ecx + 8]
// 00583418  03c2                 add eax, edx
// 0058341a  99                   cdq 
// 0058341b  2bc2                 sub eax, edx
// 0058341d  d1f8                 sar eax, 1
// 0058341f  89410c               mov dword ptr [ecx + 0xc], eax
// 00583422  40                   inc eax
// 00583423  8946fc               mov dword ptr [esi - 4], eax
// 00583426  eb12                 jmp 0x58343a
// 00583428  8b4104               mov eax, dword ptr [ecx + 4]
// 0058342b  8b11                 mov edx, dword ptr [ecx]
// 0058342d  03c2                 add eax, edx
// 0058342f  99                   cdq 
// 00583430  2bc2                 sub eax, edx
// 00583432  d1f8                 sar eax, 1
// 00583434  894104               mov dword ptr [ecx + 4], eax
// 00583437  40                   inc eax
// 00583438  8903                 mov dword ptr [ebx], eax
// 0058343a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0058343e  51                   push ecx
// 0058343f  8bcf                 mov ecx, edi
// 00583441  e8dafaffff           call 0x582f20
// 00583446  53                   push ebx
// 00583447  8bcf                 mov ecx, edi
// 00583449  e8d2faffff           call 0x582f20
// 0058344e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00583452  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00583456  8344241802           add dword ptr [esp + 0x18], 2
// 0058345b  40                   inc eax
// 0058345c  83c408               add esp, 8
// 0058345f  83c620               add esi, 0x20
// 00583462  3bc1                 cmp eax, ecx
// 00583464  89442420             mov dword ptr [esp + 0x20], eax
// 00583468  0f8cc2feffff         jl 0x583330
// 0058346e  5f                   pop edi
// 0058346f  5e                   pop esi
// 00583470  5d                   pop ebp
// 00583471  5b                   pop ebx
// 00583472  59                   pop ecx
// 00583473  c3                   ret 
// library jpeg-6b/jquant2.c (function _median_cut)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
