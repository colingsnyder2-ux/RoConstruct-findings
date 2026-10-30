// roc 2009-12 0060b140  unit: seg_00600000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060b140
//
// 0060b140  56                   push esi
// 0060b141  57                   push edi
// 0060b142  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060b146  833f00               cmp dword ptr [edi], 0
// 0060b149  8bf0                 mov esi, eax
// 0060b14b  750f                 jne 0x60b15c
// 0060b14d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060b151  50                   push eax
// 0060b152  e8295dffff           call 0x600e80
// 0060b157  83c404               add esp, 4
// 0060b15a  8907                 mov dword ptr [edi], eax
// 0060b15c  8b07                 mov eax, dword ptr [edi]
// 0060b15e  8b0e                 mov ecx, dword ptr [esi]
// 0060b160  8908                 mov dword ptr [eax], ecx
// 0060b162  8b5604               mov edx, dword ptr [esi + 4]
// 0060b165  895004               mov dword ptr [eax + 4], edx
// 0060b168  8b4e08               mov ecx, dword ptr [esi + 8]
// 0060b16b  894808               mov dword ptr [eax + 8], ecx
// 0060b16e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0060b171  89500c               mov dword ptr [eax + 0xc], edx
// 0060b174  8a4e10               mov cl, byte ptr [esi + 0x10]
// 0060b177  53                   push ebx
// 0060b178  884810               mov byte ptr [eax + 0x10], cl
// 0060b17b  33ff                 xor edi, edi
// 0060b17d  33db                 xor ebx, ebx
// 0060b17f  33d2                 xor edx, edx
// 0060b181  8d4602               lea eax, [esi + 2]
// 0060b184  55                   push ebp
// 0060b185  33c9                 xor ecx, ecx
// 0060b187  8d7704               lea esi, [edi + 4]
// 0060b18a  8d9b00000000         lea ebx, [ebx]
// 0060b190  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 0060b194  03fd                 add edi, ebp
// 0060b196  0fb628               movzx ebp, byte ptr [eax]
// 0060b199  03cd                 add ecx, ebp
// 0060b19b  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0060b19f  03d5                 add edx, ebp
// 0060b1a1  0fb66802             movzx ebp, byte ptr [eax + 2]
// 0060b1a5  03dd                 add ebx, ebp
// 0060b1a7  83c004               add eax, 4
// 0060b1aa  83ee01               sub esi, 1
// 0060b1ad  75e1                 jne 0x60b190
// 0060b1af  03da                 add ebx, edx
// 0060b1b1  03d9                 add ebx, ecx
// 0060b1b3  03fb                 add edi, ebx
// 0060b1b5  83ff01               cmp edi, 1
// 0060b1b8  5d                   pop ebp
// 0060b1b9  5b                   pop ebx
// 0060b1ba  7c08                 jl 0x60b1c4
// 0060b1bc  81ff00010000         cmp edi, 0x100
// 0060b1c2  7e17                 jle 0x60b1db
// 0060b1c4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060b1c8  8b10                 mov edx, dword ptr [eax]
// 0060b1ca  c7421408000000       mov dword ptr [edx + 0x14], 8
// 0060b1d1  8b08                 mov ecx, dword ptr [eax]
// 0060b1d3  8b11                 mov edx, dword ptr [ecx]
// 0060b1d5  50                   push eax
// 0060b1d6  ffd2                 call edx
// 0060b1d8  83c404               add esp, 4
// 0060b1db  8b742410             mov esi, dword ptr [esp + 0x10]
// 0060b1df  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060b1e3  8b0e                 mov ecx, dword ptr [esi]
// 0060b1e5  57                   push edi
// 0060b1e6  50                   push eax
// 0060b1e7  83c111               add ecx, 0x11
// 0060b1ea  51                   push ecx
// 0060b1eb  e8f69a1e00           call 0x7f4ce6
// 0060b1f0  8b16                 mov edx, dword ptr [esi]
// 0060b1f2  83c40c               add esp, 0xc
// 0060b1f5  5f                   pop edi
// 0060b1f6  c6821101000000       mov byte ptr [edx + 0x111], 0
// 0060b1fd  5e                   pop esi
// 0060b1fe  c3                   ret 
// library jpeg-6b/jcparam.c (function _add_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
