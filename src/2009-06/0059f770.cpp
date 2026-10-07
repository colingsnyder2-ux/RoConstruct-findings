// roc 2009-06 0059f770  unit: seg_00590000  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059f770
//
// 0059f770  51                   push ecx
// 0059f771  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f775  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059f779  3bc1                 cmp eax, ecx
// 0059f77b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059f77f  0f8d5d010000         jge 0x59f8e2
// 0059f785  53                   push ebx
// 0059f786  55                   push ebp
// 0059f787  56                   push esi
// 0059f788  8d3400               lea esi, [eax + eax]
// 0059f78b  8974240c             mov dword ptr [esp + 0xc], esi
// 0059f78f  8bf0                 mov esi, eax
// 0059f791  c1e605               shl esi, 5
// 0059f794  57                   push edi
// 0059f795  8d74160c             lea esi, [esi + edx + 0xc]
// 0059f799  eb09                 jmp 0x59f7a4
// 0059f79b  eb03                 jmp 0x59f7a0
// 0059f79d  8d4900               lea ecx, [ecx]
// 0059f7a0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059f7a4  33db                 xor ebx, ebx
// 0059f7a6  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0059f7aa  7f26                 jg 0x59f7d2
// 0059f7ac  33c9                 xor ecx, ecx
// 0059f7ae  85c0                 test eax, eax
// 0059f7b0  7e41                 jle 0x59f7f3
// 0059f7b2  83c21c               add edx, 0x1c
// 0059f7b5  8be8                 mov ebp, eax
// 0059f7b7  8b3a                 mov edi, dword ptr [edx]
// 0059f7b9  3bfb                 cmp edi, ebx
// 0059f7bb  7e0b                 jle 0x59f7c8
// 0059f7bd  837afc00             cmp dword ptr [edx - 4], 0
// 0059f7c1  7e05                 jle 0x59f7c8
// 0059f7c3  8d4ae4               lea ecx, [edx - 0x1c]
// 0059f7c6  8bdf                 mov ebx, edi
// 0059f7c8  83c220               add edx, 0x20
// 0059f7cb  83ed01               sub ebp, 1
// 0059f7ce  75e7                 jne 0x59f7b7
// 0059f7d0  eb21                 jmp 0x59f7f3
// 0059f7d2  33c9                 xor ecx, ecx
// 0059f7d4  85c0                 test eax, eax
// 0059f7d6  7e1b                 jle 0x59f7f3
// 0059f7d8  83c218               add edx, 0x18
// 0059f7db  8be8                 mov ebp, eax
// 0059f7dd  8d4900               lea ecx, [ecx]
// 0059f7e0  8b3a                 mov edi, dword ptr [edx]
// 0059f7e2  3bfb                 cmp edi, ebx
// 0059f7e4  7e05                 jle 0x59f7eb
// 0059f7e6  8d4ae8               lea ecx, [edx - 0x18]
// 0059f7e9  8bdf                 mov ebx, edi
// 0059f7eb  83c220               add edx, 0x20
// 0059f7ee  83ed01               sub ebp, 1
// 0059f7f1  75ed                 jne 0x59f7e0
// 0059f7f3  85c9                 test ecx, ecx
// 0059f7f5  0f84e3000000         je 0x59f8de
// 0059f7fb  8b4104               mov eax, dword ptr [ecx + 4]
// 0059f7fe  8946f8               mov dword ptr [esi - 8], eax
// 0059f801  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059f804  8916                 mov dword ptr [esi], edx
// 0059f806  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0059f809  894608               mov dword ptr [esi + 8], eax
// 0059f80c  8b11                 mov edx, dword ptr [ecx]
// 0059f80e  8956f4               mov dword ptr [esi - 0xc], edx
// 0059f811  8b4108               mov eax, dword ptr [ecx + 8]
// 0059f814  8946fc               mov dword ptr [esi - 4], eax
// 0059f817  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0059f81a  895604               mov dword ptr [esi + 4], edx
// 0059f81d  8b11                 mov edx, dword ptr [ecx]
// 0059f81f  8b4104               mov eax, dword ptr [ecx + 4]
// 0059f822  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0059f825  8b6908               mov ebp, dword ptr [ecx + 8]
// 0059f828  8d5ef4               lea ebx, [esi - 0xc]
// 0059f82b  2bc2                 sub eax, edx
// 0059f82d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0059f830  2bfa                 sub edi, edx
// 0059f832  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059f835  2bd5                 sub edx, ebp
// 0059f837  03ff                 add edi, edi
// 0059f839  8d1452               lea edx, [edx + edx*2]
// 0059f83c  03d2                 add edx, edx
// 0059f83e  03ff                 add edi, edi
// 0059f840  c1e004               shl eax, 4
// 0059f843  03d2                 add edx, edx
// 0059f845  03ff                 add edi, edi
// 0059f847  3bc2                 cmp eax, edx
// 0059f849  bd01000000           mov ebp, 1
// 0059f84e  7e04                 jle 0x59f854
// 0059f850  8bd0                 mov edx, eax
// 0059f852  33ed                 xor ebp, ebp
// 0059f854  3bfa                 cmp edi, edx
// 0059f856  7e05                 jle 0x59f85d
// 0059f858  bd02000000           mov ebp, 2
// 0059f85d  83ed00               sub ebp, 0
// 0059f860  7436                 je 0x59f898
// 0059f862  83ed01               sub ebp, 1
// 0059f865  741b                 je 0x59f882
// 0059f867  83ed01               sub ebp, 1
// 0059f86a  753e                 jne 0x59f8aa
// 0059f86c  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0059f86f  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0059f872  03c2                 add eax, edx
// 0059f874  99                   cdq 
// 0059f875  2bc2                 sub eax, edx
// 0059f877  d1f8                 sar eax, 1
// 0059f879  894114               mov dword ptr [ecx + 0x14], eax
// 0059f87c  40                   inc eax
// 0059f87d  894604               mov dword ptr [esi + 4], eax
// 0059f880  eb28                 jmp 0x59f8aa
// 0059f882  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0059f885  8b5108               mov edx, dword ptr [ecx + 8]
// 0059f888  03c2                 add eax, edx
// 0059f88a  99                   cdq 
// 0059f88b  2bc2                 sub eax, edx
// 0059f88d  d1f8                 sar eax, 1
// 0059f88f  89410c               mov dword ptr [ecx + 0xc], eax
// 0059f892  40                   inc eax
// 0059f893  8946fc               mov dword ptr [esi - 4], eax
// 0059f896  eb12                 jmp 0x59f8aa
// 0059f898  8b4104               mov eax, dword ptr [ecx + 4]
// 0059f89b  8b11                 mov edx, dword ptr [ecx]
// 0059f89d  03c2                 add eax, edx
// 0059f89f  99                   cdq 
// 0059f8a0  2bc2                 sub eax, edx
// 0059f8a2  d1f8                 sar eax, 1
// 0059f8a4  894104               mov dword ptr [ecx + 4], eax
// 0059f8a7  40                   inc eax
// 0059f8a8  8903                 mov dword ptr [ebx], eax
// 0059f8aa  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0059f8ae  51                   push ecx
// 0059f8af  8bcf                 mov ecx, edi
// 0059f8b1  e8dafaffff           call 0x59f390
// 0059f8b6  53                   push ebx
// 0059f8b7  8bcf                 mov ecx, edi
// 0059f8b9  e8d2faffff           call 0x59f390
// 0059f8be  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059f8c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059f8c6  8344241802           add dword ptr [esp + 0x18], 2
// 0059f8cb  40                   inc eax
// 0059f8cc  83c408               add esp, 8
// 0059f8cf  83c620               add esi, 0x20
// 0059f8d2  3bc1                 cmp eax, ecx
// 0059f8d4  89442420             mov dword ptr [esp + 0x20], eax
// 0059f8d8  0f8cc2feffff         jl 0x59f7a0
// 0059f8de  5f                   pop edi
// 0059f8df  5e                   pop esi
// 0059f8e0  5d                   pop ebp
// 0059f8e1  5b                   pop ebx
// 0059f8e2  59                   pop ecx
// 0059f8e3  c3                   ret 
// library jpeg-6b/jquant2.c (function _median_cut)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
