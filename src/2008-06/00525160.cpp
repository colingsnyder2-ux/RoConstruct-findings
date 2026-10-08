// from server: 100% by auto
// roc 2008-06 00525160  unit: seg_00520000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525160
//
// 00525160  56                   push esi
// 00525161  57                   push edi
// 00525162  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00525166  833f00               cmp dword ptr [edi], 0
// 00525169  8bf0                 mov esi, eax
// 0052516b  750f                 jne 0x52517c
// 0052516d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00525171  50                   push eax
// 00525172  e88965ffff           call 0x51b700
// 00525177  83c404               add esp, 4
// 0052517a  8907                 mov dword ptr [edi], eax
// 0052517c  8b07                 mov eax, dword ptr [edi]
// 0052517e  8b0e                 mov ecx, dword ptr [esi]
// 00525180  8908                 mov dword ptr [eax], ecx
// 00525182  8b5604               mov edx, dword ptr [esi + 4]
// 00525185  895004               mov dword ptr [eax + 4], edx
// 00525188  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052518b  894808               mov dword ptr [eax + 8], ecx
// 0052518e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00525191  89500c               mov dword ptr [eax + 0xc], edx
// 00525194  8a4e10               mov cl, byte ptr [esi + 0x10]
// 00525197  53                   push ebx
// 00525198  884810               mov byte ptr [eax + 0x10], cl
// 0052519b  33ff                 xor edi, edi
// 0052519d  33db                 xor ebx, ebx
// 0052519f  33d2                 xor edx, edx
// 005251a1  8d4602               lea eax, [esi + 2]
// 005251a4  55                   push ebp
// 005251a5  33c9                 xor ecx, ecx
// 005251a7  8d7704               lea esi, [edi + 4]
// 005251aa  8d9b00000000         lea ebx, [ebx]
// 005251b0  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 005251b4  03fd                 add edi, ebp
// 005251b6  0fb628               movzx ebp, byte ptr [eax]
// 005251b9  03cd                 add ecx, ebp
// 005251bb  0fb66801             movzx ebp, byte ptr [eax + 1]
// 005251bf  03d5                 add edx, ebp
// 005251c1  0fb66802             movzx ebp, byte ptr [eax + 2]
// 005251c5  03dd                 add ebx, ebp
// 005251c7  83c004               add eax, 4
// 005251ca  83ee01               sub esi, 1
// 005251cd  75e1                 jne 0x5251b0
// 005251cf  03da                 add ebx, edx
// 005251d1  03d9                 add ebx, ecx
// 005251d3  03fb                 add edi, ebx
// 005251d5  83ff01               cmp edi, 1
// 005251d8  5d                   pop ebp
// 005251d9  5b                   pop ebx
// 005251da  7c08                 jl 0x5251e4
// 005251dc  81ff00010000         cmp edi, 0x100
// 005251e2  7e17                 jle 0x5251fb
// 005251e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005251e8  8b10                 mov edx, dword ptr [eax]
// 005251ea  c7421408000000       mov dword ptr [edx + 0x14], 8
// 005251f1  8b08                 mov ecx, dword ptr [eax]
// 005251f3  8b11                 mov edx, dword ptr [ecx]
// 005251f5  50                   push eax
// 005251f6  ffd2                 call edx
// 005251f8  83c404               add esp, 4
// 005251fb  8b742410             mov esi, dword ptr [esp + 0x10]
// 005251ff  8b442414             mov eax, dword ptr [esp + 0x14]
// 00525203  8b0e                 mov ecx, dword ptr [esi]
// 00525205  57                   push edi
// 00525206  50                   push eax
// 00525207  83c111               add ecx, 0x11
// 0052520a  51                   push ecx
// 0052520b  e8d0c51700           call 0x6a17e0
// 00525210  8b16                 mov edx, dword ptr [esi]
// 00525212  83c40c               add esp, 0xc
// 00525215  5f                   pop edi
// 00525216  c6821101000000       mov byte ptr [edx + 0x111], 0
// 0052521d  5e                   pop esi
// 0052521e  c3                   ret 
// library jpeg-6b/jcparam.c (function _add_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
