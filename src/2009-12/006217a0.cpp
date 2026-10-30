// roc 2009-12 006217a0  unit: seg_00620000  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006217a0
//
// 006217a0  51                   push ecx
// 006217a1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006217a5  8b442410             mov eax, dword ptr [esp + 0x10]
// 006217a9  3bc1                 cmp eax, ecx
// 006217ab  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006217af  0f8d5d010000         jge 0x621912
// 006217b5  53                   push ebx
// 006217b6  55                   push ebp
// 006217b7  56                   push esi
// 006217b8  8d3400               lea esi, [eax + eax]
// 006217bb  8974240c             mov dword ptr [esp + 0xc], esi
// 006217bf  8bf0                 mov esi, eax
// 006217c1  c1e605               shl esi, 5
// 006217c4  57                   push edi
// 006217c5  8d74160c             lea esi, [esi + edx + 0xc]
// 006217c9  eb09                 jmp 0x6217d4
// 006217cb  eb03                 jmp 0x6217d0
// 006217cd  8d4900               lea ecx, [ecx]
// 006217d0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006217d4  33db                 xor ebx, ebx
// 006217d6  394c2410             cmp dword ptr [esp + 0x10], ecx
// 006217da  7f26                 jg 0x621802
// 006217dc  33c9                 xor ecx, ecx
// 006217de  85c0                 test eax, eax
// 006217e0  7e41                 jle 0x621823
// 006217e2  83c21c               add edx, 0x1c
// 006217e5  8be8                 mov ebp, eax
// 006217e7  8b3a                 mov edi, dword ptr [edx]
// 006217e9  3bfb                 cmp edi, ebx
// 006217eb  7e0b                 jle 0x6217f8
// 006217ed  837afc00             cmp dword ptr [edx - 4], 0
// 006217f1  7e05                 jle 0x6217f8
// 006217f3  8d4ae4               lea ecx, [edx - 0x1c]
// 006217f6  8bdf                 mov ebx, edi
// 006217f8  83c220               add edx, 0x20
// 006217fb  83ed01               sub ebp, 1
// 006217fe  75e7                 jne 0x6217e7
// 00621800  eb21                 jmp 0x621823
// 00621802  33c9                 xor ecx, ecx
// 00621804  85c0                 test eax, eax
// 00621806  7e1b                 jle 0x621823
// 00621808  83c218               add edx, 0x18
// 0062180b  8be8                 mov ebp, eax
// 0062180d  8d4900               lea ecx, [ecx]
// 00621810  8b3a                 mov edi, dword ptr [edx]
// 00621812  3bfb                 cmp edi, ebx
// 00621814  7e05                 jle 0x62181b
// 00621816  8d4ae8               lea ecx, [edx - 0x18]
// 00621819  8bdf                 mov ebx, edi
// 0062181b  83c220               add edx, 0x20
// 0062181e  83ed01               sub ebp, 1
// 00621821  75ed                 jne 0x621810
// 00621823  85c9                 test ecx, ecx
// 00621825  0f84e3000000         je 0x62190e
// 0062182b  8b4104               mov eax, dword ptr [ecx + 4]
// 0062182e  8946f8               mov dword ptr [esi - 8], eax
// 00621831  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00621834  8916                 mov dword ptr [esi], edx
// 00621836  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00621839  894608               mov dword ptr [esi + 8], eax
// 0062183c  8b11                 mov edx, dword ptr [ecx]
// 0062183e  8956f4               mov dword ptr [esi - 0xc], edx
// 00621841  8b4108               mov eax, dword ptr [ecx + 8]
// 00621844  8946fc               mov dword ptr [esi - 4], eax
// 00621847  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0062184a  895604               mov dword ptr [esi + 4], edx
// 0062184d  8b11                 mov edx, dword ptr [ecx]
// 0062184f  8b4104               mov eax, dword ptr [ecx + 4]
// 00621852  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00621855  8b6908               mov ebp, dword ptr [ecx + 8]
// 00621858  8d5ef4               lea ebx, [esi - 0xc]
// 0062185b  2bc2                 sub eax, edx
// 0062185d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00621860  2bfa                 sub edi, edx
// 00621862  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00621865  2bd5                 sub edx, ebp
// 00621867  03ff                 add edi, edi
// 00621869  8d1452               lea edx, [edx + edx*2]
// 0062186c  03d2                 add edx, edx
// 0062186e  03ff                 add edi, edi
// 00621870  c1e004               shl eax, 4
// 00621873  03d2                 add edx, edx
// 00621875  03ff                 add edi, edi
// 00621877  3bc2                 cmp eax, edx
// 00621879  bd01000000           mov ebp, 1
// 0062187e  7e04                 jle 0x621884
// 00621880  8bd0                 mov edx, eax
// 00621882  33ed                 xor ebp, ebp
// 00621884  3bfa                 cmp edi, edx
// 00621886  7e05                 jle 0x62188d
// 00621888  bd02000000           mov ebp, 2
// 0062188d  83ed00               sub ebp, 0
// 00621890  7436                 je 0x6218c8
// 00621892  83ed01               sub ebp, 1
// 00621895  741b                 je 0x6218b2
// 00621897  83ed01               sub ebp, 1
// 0062189a  753e                 jne 0x6218da
// 0062189c  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0062189f  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006218a2  03c2                 add eax, edx
// 006218a4  99                   cdq 
// 006218a5  2bc2                 sub eax, edx
// 006218a7  d1f8                 sar eax, 1
// 006218a9  894114               mov dword ptr [ecx + 0x14], eax
// 006218ac  40                   inc eax
// 006218ad  894604               mov dword ptr [esi + 4], eax
// 006218b0  eb28                 jmp 0x6218da
// 006218b2  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006218b5  8b5108               mov edx, dword ptr [ecx + 8]
// 006218b8  03c2                 add eax, edx
// 006218ba  99                   cdq 
// 006218bb  2bc2                 sub eax, edx
// 006218bd  d1f8                 sar eax, 1
// 006218bf  89410c               mov dword ptr [ecx + 0xc], eax
// 006218c2  40                   inc eax
// 006218c3  8946fc               mov dword ptr [esi - 4], eax
// 006218c6  eb12                 jmp 0x6218da
// 006218c8  8b4104               mov eax, dword ptr [ecx + 4]
// 006218cb  8b11                 mov edx, dword ptr [ecx]
// 006218cd  03c2                 add eax, edx
// 006218cf  99                   cdq 
// 006218d0  2bc2                 sub eax, edx
// 006218d2  d1f8                 sar eax, 1
// 006218d4  894104               mov dword ptr [ecx + 4], eax
// 006218d7  40                   inc eax
// 006218d8  8903                 mov dword ptr [ebx], eax
// 006218da  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006218de  51                   push ecx
// 006218df  8bcf                 mov ecx, edi
// 006218e1  e8dafaffff           call 0x6213c0
// 006218e6  53                   push ebx
// 006218e7  8bcf                 mov ecx, edi
// 006218e9  e8d2faffff           call 0x6213c0
// 006218ee  8b442428             mov eax, dword ptr [esp + 0x28]
// 006218f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006218f6  8344241802           add dword ptr [esp + 0x18], 2
// 006218fb  40                   inc eax
// 006218fc  83c408               add esp, 8
// 006218ff  83c620               add esi, 0x20
// 00621902  3bc1                 cmp eax, ecx
// 00621904  89442420             mov dword ptr [esp + 0x20], eax
// 00621908  0f8cc2feffff         jl 0x6217d0
// 0062190e  5f                   pop edi
// 0062190f  5e                   pop esi
// 00621910  5d                   pop ebp
// 00621911  5b                   pop ebx
// 00621912  59                   pop ecx
// 00621913  c3                   ret 
// library jpeg-6b/jquant2.c (function _median_cut)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
