// roc 2009-06 005893c0  unit: seg_00580000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005893c0
//
// 005893c0  56                   push esi
// 005893c1  57                   push edi
// 005893c2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005893c6  833f00               cmp dword ptr [edi], 0
// 005893c9  8bf0                 mov esi, eax
// 005893cb  750f                 jne 0x5893dc
// 005893cd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005893d1  50                   push eax
// 005893d2  e8c95cffff           call 0x57f0a0
// 005893d7  83c404               add esp, 4
// 005893da  8907                 mov dword ptr [edi], eax
// 005893dc  8b07                 mov eax, dword ptr [edi]
// 005893de  8b0e                 mov ecx, dword ptr [esi]
// 005893e0  8908                 mov dword ptr [eax], ecx
// 005893e2  8b5604               mov edx, dword ptr [esi + 4]
// 005893e5  895004               mov dword ptr [eax + 4], edx
// 005893e8  8b4e08               mov ecx, dword ptr [esi + 8]
// 005893eb  894808               mov dword ptr [eax + 8], ecx
// 005893ee  8b560c               mov edx, dword ptr [esi + 0xc]
// 005893f1  89500c               mov dword ptr [eax + 0xc], edx
// 005893f4  8a4e10               mov cl, byte ptr [esi + 0x10]
// 005893f7  53                   push ebx
// 005893f8  884810               mov byte ptr [eax + 0x10], cl
// 005893fb  33ff                 xor edi, edi
// 005893fd  33db                 xor ebx, ebx
// 005893ff  33d2                 xor edx, edx
// 00589401  8d4602               lea eax, [esi + 2]
// 00589404  55                   push ebp
// 00589405  33c9                 xor ecx, ecx
// 00589407  8d7704               lea esi, [edi + 4]
// 0058940a  8d9b00000000         lea ebx, [ebx]
// 00589410  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 00589414  03fd                 add edi, ebp
// 00589416  0fb628               movzx ebp, byte ptr [eax]
// 00589419  03cd                 add ecx, ebp
// 0058941b  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0058941f  03d5                 add edx, ebp
// 00589421  0fb66802             movzx ebp, byte ptr [eax + 2]
// 00589425  03dd                 add ebx, ebp
// 00589427  83c004               add eax, 4
// 0058942a  83ee01               sub esi, 1
// 0058942d  75e1                 jne 0x589410
// 0058942f  03da                 add ebx, edx
// 00589431  03d9                 add ebx, ecx
// 00589433  03fb                 add edi, ebx
// 00589435  83ff01               cmp edi, 1
// 00589438  5d                   pop ebp
// 00589439  5b                   pop ebx
// 0058943a  7c08                 jl 0x589444
// 0058943c  81ff00010000         cmp edi, 0x100
// 00589442  7e17                 jle 0x58945b
// 00589444  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00589448  8b10                 mov edx, dword ptr [eax]
// 0058944a  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00589451  8b08                 mov ecx, dword ptr [eax]
// 00589453  8b11                 mov edx, dword ptr [ecx]
// 00589455  50                   push eax
// 00589456  ffd2                 call edx
// 00589458  83c404               add esp, 4
// 0058945b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058945f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00589463  8b0e                 mov ecx, dword ptr [esi]
// 00589465  57                   push edi
// 00589466  50                   push eax
// 00589467  83c111               add ecx, 0x11
// 0058946a  51                   push ecx
// 0058946b  e8460a1900           call 0x719eb6
// 00589470  8b16                 mov edx, dword ptr [esi]
// 00589472  83c40c               add esp, 0xc
// 00589475  5f                   pop edi
// 00589476  c6821101000000       mov byte ptr [edx + 0x111], 0
// 0058947d  5e                   pop esi
// 0058947e  c3                   ret 
// library jpeg-6b/jcparam.c (function _add_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
