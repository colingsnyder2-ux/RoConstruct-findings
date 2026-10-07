// roc 2008-06 00535490  unit: seg_00530000  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00535490
//
// 00535490  51                   push ecx
// 00535491  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00535495  8b442410             mov eax, dword ptr [esp + 0x10]
// 00535499  3bc1                 cmp eax, ecx
// 0053549b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053549f  0f8d5d010000         jge 0x535602
// 005354a5  53                   push ebx
// 005354a6  55                   push ebp
// 005354a7  56                   push esi
// 005354a8  8d3400               lea esi, [eax + eax]
// 005354ab  8974240c             mov dword ptr [esp + 0xc], esi
// 005354af  8bf0                 mov esi, eax
// 005354b1  c1e605               shl esi, 5
// 005354b4  57                   push edi
// 005354b5  8d74160c             lea esi, [esi + edx + 0xc]
// 005354b9  eb09                 jmp 0x5354c4
// 005354bb  eb03                 jmp 0x5354c0
// 005354bd  8d4900               lea ecx, [ecx]
// 005354c0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005354c4  33db                 xor ebx, ebx
// 005354c6  394c2410             cmp dword ptr [esp + 0x10], ecx
// 005354ca  7f26                 jg 0x5354f2
// 005354cc  33c9                 xor ecx, ecx
// 005354ce  85c0                 test eax, eax
// 005354d0  7e41                 jle 0x535513
// 005354d2  83c21c               add edx, 0x1c
// 005354d5  8be8                 mov ebp, eax
// 005354d7  8b3a                 mov edi, dword ptr [edx]
// 005354d9  3bfb                 cmp edi, ebx
// 005354db  7e0b                 jle 0x5354e8
// 005354dd  837afc00             cmp dword ptr [edx - 4], 0
// 005354e1  7e05                 jle 0x5354e8
// 005354e3  8d4ae4               lea ecx, [edx - 0x1c]
// 005354e6  8bdf                 mov ebx, edi
// 005354e8  83c220               add edx, 0x20
// 005354eb  83ed01               sub ebp, 1
// 005354ee  75e7                 jne 0x5354d7
// 005354f0  eb21                 jmp 0x535513
// 005354f2  33c9                 xor ecx, ecx
// 005354f4  85c0                 test eax, eax
// 005354f6  7e1b                 jle 0x535513
// 005354f8  83c218               add edx, 0x18
// 005354fb  8be8                 mov ebp, eax
// 005354fd  8d4900               lea ecx, [ecx]
// 00535500  8b3a                 mov edi, dword ptr [edx]
// 00535502  3bfb                 cmp edi, ebx
// 00535504  7e05                 jle 0x53550b
// 00535506  8d4ae8               lea ecx, [edx - 0x18]
// 00535509  8bdf                 mov ebx, edi
// 0053550b  83c220               add edx, 0x20
// 0053550e  83ed01               sub ebp, 1
// 00535511  75ed                 jne 0x535500
// 00535513  85c9                 test ecx, ecx
// 00535515  0f84e3000000         je 0x5355fe
// 0053551b  8b4104               mov eax, dword ptr [ecx + 4]
// 0053551e  8946f8               mov dword ptr [esi - 8], eax
// 00535521  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00535524  8916                 mov dword ptr [esi], edx
// 00535526  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00535529  894608               mov dword ptr [esi + 8], eax
// 0053552c  8b11                 mov edx, dword ptr [ecx]
// 0053552e  8956f4               mov dword ptr [esi - 0xc], edx
// 00535531  8b4108               mov eax, dword ptr [ecx + 8]
// 00535534  8946fc               mov dword ptr [esi - 4], eax
// 00535537  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0053553a  895604               mov dword ptr [esi + 4], edx
// 0053553d  8b11                 mov edx, dword ptr [ecx]
// 0053553f  8b4104               mov eax, dword ptr [ecx + 4]
// 00535542  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00535545  8b6908               mov ebp, dword ptr [ecx + 8]
// 00535548  8d5ef4               lea ebx, [esi - 0xc]
// 0053554b  2bc2                 sub eax, edx
// 0053554d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00535550  2bfa                 sub edi, edx
// 00535552  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00535555  2bd5                 sub edx, ebp
// 00535557  03ff                 add edi, edi
// 00535559  8d1452               lea edx, [edx + edx*2]
// 0053555c  03d2                 add edx, edx
// 0053555e  03ff                 add edi, edi
// 00535560  c1e004               shl eax, 4
// 00535563  03d2                 add edx, edx
// 00535565  03ff                 add edi, edi
// 00535567  3bc2                 cmp eax, edx
// 00535569  bd01000000           mov ebp, 1
// 0053556e  7e04                 jle 0x535574
// 00535570  8bd0                 mov edx, eax
// 00535572  33ed                 xor ebp, ebp
// 00535574  3bfa                 cmp edi, edx
// 00535576  7e05                 jle 0x53557d
// 00535578  bd02000000           mov ebp, 2
// 0053557d  83ed00               sub ebp, 0
// 00535580  7436                 je 0x5355b8
// 00535582  83ed01               sub ebp, 1
// 00535585  741b                 je 0x5355a2
// 00535587  83ed01               sub ebp, 1
// 0053558a  753e                 jne 0x5355ca
// 0053558c  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0053558f  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00535592  03c2                 add eax, edx
// 00535594  99                   cdq 
// 00535595  2bc2                 sub eax, edx
// 00535597  d1f8                 sar eax, 1
// 00535599  894114               mov dword ptr [ecx + 0x14], eax
// 0053559c  40                   inc eax
// 0053559d  894604               mov dword ptr [esi + 4], eax
// 005355a0  eb28                 jmp 0x5355ca
// 005355a2  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005355a5  8b5108               mov edx, dword ptr [ecx + 8]
// 005355a8  03c2                 add eax, edx
// 005355aa  99                   cdq 
// 005355ab  2bc2                 sub eax, edx
// 005355ad  d1f8                 sar eax, 1
// 005355af  89410c               mov dword ptr [ecx + 0xc], eax
// 005355b2  40                   inc eax
// 005355b3  8946fc               mov dword ptr [esi - 4], eax
// 005355b6  eb12                 jmp 0x5355ca
// 005355b8  8b4104               mov eax, dword ptr [ecx + 4]
// 005355bb  8b11                 mov edx, dword ptr [ecx]
// 005355bd  03c2                 add eax, edx
// 005355bf  99                   cdq 
// 005355c0  2bc2                 sub eax, edx
// 005355c2  d1f8                 sar eax, 1
// 005355c4  894104               mov dword ptr [ecx + 4], eax
// 005355c7  40                   inc eax
// 005355c8  8903                 mov dword ptr [ebx], eax
// 005355ca  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005355ce  51                   push ecx
// 005355cf  8bcf                 mov ecx, edi
// 005355d1  e8dafaffff           call 0x5350b0
// 005355d6  53                   push ebx
// 005355d7  8bcf                 mov ecx, edi
// 005355d9  e8d2faffff           call 0x5350b0
// 005355de  8b442428             mov eax, dword ptr [esp + 0x28]
// 005355e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005355e6  8344241802           add dword ptr [esp + 0x18], 2
// 005355eb  40                   inc eax
// 005355ec  83c408               add esp, 8
// 005355ef  83c620               add esi, 0x20
// 005355f2  3bc1                 cmp eax, ecx
// 005355f4  89442420             mov dword ptr [esp + 0x20], eax
// 005355f8  0f8cc2feffff         jl 0x5354c0
// 005355fe  5f                   pop edi
// 005355ff  5e                   pop esi
// 00535600  5d                   pop ebp
// 00535601  5b                   pop ebx
// 00535602  59                   pop ecx
// 00535603  c3                   ret 
// library jpeg-6b/jquant2.c (function _median_cut)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
