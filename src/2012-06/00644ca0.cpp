// from server: 100% by auto
// roc 2012-06 00644ca0  unit: seg_00640000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644ca0
//
// 00644ca0  56                   push esi
// 00644ca1  57                   push edi
// 00644ca2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00644ca6  833f00               cmp dword ptr [edi], 0
// 00644ca9  8bf0                 mov esi, eax
// 00644cab  750f                 jne 0x644cbc
// 00644cad  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00644cb1  50                   push eax
// 00644cb2  e8d9e70000           call 0x653490
// 00644cb7  83c404               add esp, 4
// 00644cba  8907                 mov dword ptr [edi], eax
// 00644cbc  8b07                 mov eax, dword ptr [edi]
// 00644cbe  8b0e                 mov ecx, dword ptr [esi]
// 00644cc0  8908                 mov dword ptr [eax], ecx
// 00644cc2  8b5604               mov edx, dword ptr [esi + 4]
// 00644cc5  895004               mov dword ptr [eax + 4], edx
// 00644cc8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00644ccb  894808               mov dword ptr [eax + 8], ecx
// 00644cce  8b560c               mov edx, dword ptr [esi + 0xc]
// 00644cd1  89500c               mov dword ptr [eax + 0xc], edx
// 00644cd4  8a4e10               mov cl, byte ptr [esi + 0x10]
// 00644cd7  53                   push ebx
// 00644cd8  884810               mov byte ptr [eax + 0x10], cl
// 00644cdb  33ff                 xor edi, edi
// 00644cdd  33db                 xor ebx, ebx
// 00644cdf  33d2                 xor edx, edx
// 00644ce1  8d4602               lea eax, [esi + 2]
// 00644ce4  55                   push ebp
// 00644ce5  33c9                 xor ecx, ecx
// 00644ce7  8d7704               lea esi, [edi + 4]
// 00644cea  8d9b00000000         lea ebx, [ebx]
// 00644cf0  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 00644cf4  03fd                 add edi, ebp
// 00644cf6  0fb628               movzx ebp, byte ptr [eax]
// 00644cf9  03cd                 add ecx, ebp
// 00644cfb  0fb66801             movzx ebp, byte ptr [eax + 1]
// 00644cff  03d5                 add edx, ebp
// 00644d01  0fb66802             movzx ebp, byte ptr [eax + 2]
// 00644d05  03dd                 add ebx, ebp
// 00644d07  83c004               add eax, 4
// 00644d0a  83ee01               sub esi, 1
// 00644d0d  75e1                 jne 0x644cf0
// 00644d0f  03da                 add ebx, edx
// 00644d11  03d9                 add ebx, ecx
// 00644d13  03fb                 add edi, ebx
// 00644d15  83ff01               cmp edi, 1
// 00644d18  5d                   pop ebp
// 00644d19  5b                   pop ebx
// 00644d1a  7c08                 jl 0x644d24
// 00644d1c  81ff00010000         cmp edi, 0x100
// 00644d22  7e17                 jle 0x644d3b
// 00644d24  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00644d28  8b10                 mov edx, dword ptr [eax]
// 00644d2a  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00644d31  8b08                 mov ecx, dword ptr [eax]
// 00644d33  8b11                 mov edx, dword ptr [ecx]
// 00644d35  50                   push eax
// 00644d36  ffd2                 call edx
// 00644d38  83c404               add esp, 4
// 00644d3b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00644d3f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00644d43  8b0e                 mov ecx, dword ptr [esi]
// 00644d45  57                   push edi
// 00644d46  50                   push eax
// 00644d47  83c111               add ecx, 0x11
// 00644d4a  51                   push ecx
// 00644d4b  e80ce93300           call 0x98365c
// 00644d50  8b16                 mov edx, dword ptr [esi]
// 00644d52  83c40c               add esp, 0xc
// 00644d55  5f                   pop edi
// 00644d56  c6821101000000       mov byte ptr [edx + 0x111], 0
// 00644d5d  5e                   pop esi
// 00644d5e  c3                   ret 
// library jpeg-6b/jcparam.c (function _add_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
