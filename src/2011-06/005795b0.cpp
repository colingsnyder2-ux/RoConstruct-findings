// roc 2011-06 005795b0  unit: seg_00570000  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005795b0
//
// 005795b0  51                   push ecx
// 005795b1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005795b5  8b442410             mov eax, dword ptr [esp + 0x10]
// 005795b9  3bc1                 cmp eax, ecx
// 005795bb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005795bf  0f8d5d010000         jge 0x579722
// 005795c5  53                   push ebx
// 005795c6  55                   push ebp
// 005795c7  56                   push esi
// 005795c8  8d3400               lea esi, [eax + eax]
// 005795cb  8974240c             mov dword ptr [esp + 0xc], esi
// 005795cf  8bf0                 mov esi, eax
// 005795d1  c1e605               shl esi, 5
// 005795d4  57                   push edi
// 005795d5  8d74160c             lea esi, [esi + edx + 0xc]
// 005795d9  eb09                 jmp 0x5795e4
// 005795db  eb03                 jmp 0x5795e0
// 005795dd  8d4900               lea ecx, [ecx]
// 005795e0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005795e4  33db                 xor ebx, ebx
// 005795e6  394c2410             cmp dword ptr [esp + 0x10], ecx
// 005795ea  7f26                 jg 0x579612
// 005795ec  33c9                 xor ecx, ecx
// 005795ee  85c0                 test eax, eax
// 005795f0  7e41                 jle 0x579633
// 005795f2  83c21c               add edx, 0x1c
// 005795f5  8be8                 mov ebp, eax
// 005795f7  8b3a                 mov edi, dword ptr [edx]
// 005795f9  3bfb                 cmp edi, ebx
// 005795fb  7e0b                 jle 0x579608
// 005795fd  837afc00             cmp dword ptr [edx - 4], 0
// 00579601  7e05                 jle 0x579608
// 00579603  8d4ae4               lea ecx, [edx - 0x1c]
// 00579606  8bdf                 mov ebx, edi
// 00579608  83c220               add edx, 0x20
// 0057960b  83ed01               sub ebp, 1
// 0057960e  75e7                 jne 0x5795f7
// 00579610  eb21                 jmp 0x579633
// 00579612  33c9                 xor ecx, ecx
// 00579614  85c0                 test eax, eax
// 00579616  7e1b                 jle 0x579633
// 00579618  83c218               add edx, 0x18
// 0057961b  8be8                 mov ebp, eax
// 0057961d  8d4900               lea ecx, [ecx]
// 00579620  8b3a                 mov edi, dword ptr [edx]
// 00579622  3bfb                 cmp edi, ebx
// 00579624  7e05                 jle 0x57962b
// 00579626  8d4ae8               lea ecx, [edx - 0x18]
// 00579629  8bdf                 mov ebx, edi
// 0057962b  83c220               add edx, 0x20
// 0057962e  83ed01               sub ebp, 1
// 00579631  75ed                 jne 0x579620
// 00579633  85c9                 test ecx, ecx
// 00579635  0f84e3000000         je 0x57971e
// 0057963b  8b4104               mov eax, dword ptr [ecx + 4]
// 0057963e  8946f8               mov dword ptr [esi - 8], eax
// 00579641  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00579644  8916                 mov dword ptr [esi], edx
// 00579646  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00579649  894608               mov dword ptr [esi + 8], eax
// 0057964c  8b11                 mov edx, dword ptr [ecx]
// 0057964e  8956f4               mov dword ptr [esi - 0xc], edx
// 00579651  8b4108               mov eax, dword ptr [ecx + 8]
// 00579654  8946fc               mov dword ptr [esi - 4], eax
// 00579657  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0057965a  895604               mov dword ptr [esi + 4], edx
// 0057965d  8b11                 mov edx, dword ptr [ecx]
// 0057965f  8b4104               mov eax, dword ptr [ecx + 4]
// 00579662  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00579665  8b6908               mov ebp, dword ptr [ecx + 8]
// 00579668  8d5ef4               lea ebx, [esi - 0xc]
// 0057966b  2bc2                 sub eax, edx
// 0057966d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00579670  2bfa                 sub edi, edx
// 00579672  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00579675  2bd5                 sub edx, ebp
// 00579677  03ff                 add edi, edi
// 00579679  8d1452               lea edx, [edx + edx*2]
// 0057967c  03d2                 add edx, edx
// 0057967e  03ff                 add edi, edi
// 00579680  c1e004               shl eax, 4
// 00579683  03d2                 add edx, edx
// 00579685  03ff                 add edi, edi
// 00579687  3bc2                 cmp eax, edx
// 00579689  bd01000000           mov ebp, 1
// 0057968e  7e04                 jle 0x579694
// 00579690  8bd0                 mov edx, eax
// 00579692  33ed                 xor ebp, ebp
// 00579694  3bfa                 cmp edi, edx
// 00579696  7e05                 jle 0x57969d
// 00579698  bd02000000           mov ebp, 2
// 0057969d  83ed00               sub ebp, 0
// 005796a0  7436                 je 0x5796d8
// 005796a2  83ed01               sub ebp, 1
// 005796a5  741b                 je 0x5796c2
// 005796a7  83ed01               sub ebp, 1
// 005796aa  753e                 jne 0x5796ea
// 005796ac  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005796af  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005796b2  03c2                 add eax, edx
// 005796b4  99                   cdq 
// 005796b5  2bc2                 sub eax, edx
// 005796b7  d1f8                 sar eax, 1
// 005796b9  894114               mov dword ptr [ecx + 0x14], eax
// 005796bc  40                   inc eax
// 005796bd  894604               mov dword ptr [esi + 4], eax
// 005796c0  eb28                 jmp 0x5796ea
// 005796c2  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005796c5  8b5108               mov edx, dword ptr [ecx + 8]
// 005796c8  03c2                 add eax, edx
// 005796ca  99                   cdq 
// 005796cb  2bc2                 sub eax, edx
// 005796cd  d1f8                 sar eax, 1
// 005796cf  89410c               mov dword ptr [ecx + 0xc], eax
// 005796d2  40                   inc eax
// 005796d3  8946fc               mov dword ptr [esi - 4], eax
// 005796d6  eb12                 jmp 0x5796ea
// 005796d8  8b4104               mov eax, dword ptr [ecx + 4]
// 005796db  8b11                 mov edx, dword ptr [ecx]
// 005796dd  03c2                 add eax, edx
// 005796df  99                   cdq 
// 005796e0  2bc2                 sub eax, edx
// 005796e2  d1f8                 sar eax, 1
// 005796e4  894104               mov dword ptr [ecx + 4], eax
// 005796e7  40                   inc eax
// 005796e8  8903                 mov dword ptr [ebx], eax
// 005796ea  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005796ee  51                   push ecx
// 005796ef  8bcf                 mov ecx, edi
// 005796f1  e8dafaffff           call 0x5791d0
// 005796f6  53                   push ebx
// 005796f7  8bcf                 mov ecx, edi
// 005796f9  e8d2faffff           call 0x5791d0
// 005796fe  8b442428             mov eax, dword ptr [esp + 0x28]
// 00579702  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00579706  8344241802           add dword ptr [esp + 0x18], 2
// 0057970b  40                   inc eax
// 0057970c  83c408               add esp, 8
// 0057970f  83c620               add esi, 0x20
// 00579712  3bc1                 cmp eax, ecx
// 00579714  89442420             mov dword ptr [esp + 0x20], eax
// 00579718  0f8cc2feffff         jl 0x5795e0
// 0057971e  5f                   pop edi
// 0057971f  5e                   pop esi
// 00579720  5d                   pop ebp
// 00579721  5b                   pop ebx
// 00579722  59                   pop ecx
// 00579723  c3                   ret 
// library jpeg-6b/jquant2.c (function _median_cut)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
