// from server: 100% by auto
// roc 2007-08 00529380  unit: seg_00520000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00529380
//
// 00529380  51                   push ecx
// 00529381  8b442414             mov eax, dword ptr [esp + 0x14]
// 00529385  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00529389  57                   push edi
// 0052938a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052938e  3bf8                 cmp edi, eax
// 00529390  0f8d2f010000         jge 0x5294c5
// 00529396  8d143f               lea edx, [edi + edi]
// 00529399  53                   push ebx
// 0052939a  89542408             mov dword ptr [esp + 8], edx
// 0052939e  8bd7                 mov edx, edi
// 005293a0  55                   push ebp
// 005293a1  c1e205               shl edx, 5
// 005293a4  56                   push esi
// 005293a5  8d740a0c             lea esi, [edx + ecx + 0xc]
// 005293a9  eb09                 jmp 0x5293b4
// 005293ab  eb03                 jmp 0x5293b0
// 005293ad  8d4900               lea ecx, [ecx]
// 005293b0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005293b4  39442410             cmp dword ptr [esp + 0x10], eax
// 005293b8  8bd7                 mov edx, edi
// 005293ba  7f07                 jg 0x5293c3
// 005293bc  e85ffbffff           call 0x528f20
// 005293c1  eb05                 jmp 0x5293c8
// 005293c3  e888fbffff           call 0x528f50
// 005293c8  8bc8                 mov ecx, eax
// 005293ca  85c9                 test ecx, ecx
// 005293cc  0f84eb000000         je 0x5294bd
// 005293d2  8b4104               mov eax, dword ptr [ecx + 4]
// 005293d5  8946f8               mov dword ptr [esi - 8], eax
// 005293d8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005293db  8916                 mov dword ptr [esi], edx
// 005293dd  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005293e0  894608               mov dword ptr [esi + 8], eax
// 005293e3  8b11                 mov edx, dword ptr [ecx]
// 005293e5  8956f4               mov dword ptr [esi - 0xc], edx
// 005293e8  8b4108               mov eax, dword ptr [ecx + 8]
// 005293eb  8946fc               mov dword ptr [esi - 4], eax
// 005293ee  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005293f1  895604               mov dword ptr [esi + 4], edx
// 005293f4  8b11                 mov edx, dword ptr [ecx]
// 005293f6  8b4104               mov eax, dword ptr [ecx + 4]
// 005293f9  8b7914               mov edi, dword ptr [ecx + 0x14]
// 005293fc  8b6908               mov ebp, dword ptr [ecx + 8]
// 005293ff  8d5ef4               lea ebx, [esi - 0xc]
// 00529402  2bc2                 sub eax, edx
// 00529404  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00529407  2bfa                 sub edi, edx
// 00529409  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052940c  2bd5                 sub edx, ebp
// 0052940e  03ff                 add edi, edi
// 00529410  8d1452               lea edx, [edx + edx*2]
// 00529413  03d2                 add edx, edx
// 00529415  03ff                 add edi, edi
// 00529417  c1e004               shl eax, 4
// 0052941a  03d2                 add edx, edx
// 0052941c  03ff                 add edi, edi
// 0052941e  3bc2                 cmp eax, edx
// 00529420  bd01000000           mov ebp, 1
// 00529425  7e04                 jle 0x52942b
// 00529427  8bd0                 mov edx, eax
// 00529429  33ed                 xor ebp, ebp
// 0052942b  3bfa                 cmp edi, edx
// 0052942d  7e05                 jle 0x529434
// 0052942f  bd02000000           mov ebp, 2
// 00529434  83ed00               sub ebp, 0
// 00529437  743a                 je 0x529473
// 00529439  83ed01               sub ebp, 1
// 0052943c  741d                 je 0x52945b
// 0052943e  83ed01               sub ebp, 1
// 00529441  7544                 jne 0x529487
// 00529443  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00529446  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00529449  03c2                 add eax, edx
// 0052944b  99                   cdq 
// 0052944c  2bc2                 sub eax, edx
// 0052944e  d1f8                 sar eax, 1
// 00529450  894114               mov dword ptr [ecx + 0x14], eax
// 00529453  83c001               add eax, 1
// 00529456  894604               mov dword ptr [esi + 4], eax
// 00529459  eb2c                 jmp 0x529487
// 0052945b  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0052945e  8b5108               mov edx, dword ptr [ecx + 8]
// 00529461  03c2                 add eax, edx
// 00529463  99                   cdq 
// 00529464  2bc2                 sub eax, edx
// 00529466  d1f8                 sar eax, 1
// 00529468  89410c               mov dword ptr [ecx + 0xc], eax
// 0052946b  83c001               add eax, 1
// 0052946e  8946fc               mov dword ptr [esi - 4], eax
// 00529471  eb14                 jmp 0x529487
// 00529473  8b4104               mov eax, dword ptr [ecx + 4]
// 00529476  8b11                 mov edx, dword ptr [ecx]
// 00529478  03c2                 add eax, edx
// 0052947a  99                   cdq 
// 0052947b  2bc2                 sub eax, edx
// 0052947d  d1f8                 sar eax, 1
// 0052947f  894104               mov dword ptr [ecx + 4], eax
// 00529482  83c001               add eax, 1
// 00529485  8903                 mov dword ptr [ebx], eax
// 00529487  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052948b  51                   push ecx
// 0052948c  8bcf                 mov ecx, edi
// 0052948e  e8edfaffff           call 0x528f80
// 00529493  53                   push ebx
// 00529494  8bcf                 mov ecx, edi
// 00529496  e8e5faffff           call 0x528f80
// 0052949b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052949f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005294a3  8344241802           add dword ptr [esp + 0x18], 2
// 005294a8  83c701               add edi, 1
// 005294ab  83c408               add esp, 8
// 005294ae  83c620               add esi, 0x20
// 005294b1  3bf8                 cmp edi, eax
// 005294b3  897c2420             mov dword ptr [esp + 0x20], edi
// 005294b7  0f8cf3feffff         jl 0x5293b0
// 005294bd  5e                   pop esi
// 005294be  5d                   pop ebp
// 005294bf  5b                   pop ebx
// 005294c0  8bc7                 mov eax, edi
// 005294c2  5f                   pop edi
// 005294c3  59                   pop ecx
// 005294c4  c3                   ret 
// 005294c5  8bc7                 mov eax, edi
// 005294c7  5f                   pop edi
// 005294c8  59                   pop ecx
// 005294c9  c3                   ret 
// library jpeg-6b/jquant2.c (function _median_cut)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
