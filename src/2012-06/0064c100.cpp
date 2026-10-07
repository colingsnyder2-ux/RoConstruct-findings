// roc 2012-06 0064c100  unit: seg_00640000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064c100
//
// 0064c100  51                   push ecx
// 0064c101  8b542408             mov edx, dword ptr [esp + 8]
// 0064c105  8a4208               mov al, byte ptr [edx + 8]
// 0064c108  53                   push ebx
// 0064c109  8b1a                 mov ebx, dword ptr [edx]
// 0064c10b  55                   push ebp
// 0064c10c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0064c110  56                   push esi
// 0064c111  57                   push edi
// 0064c112  895c2410             mov dword ptr [esp + 0x10], ebx
// 0064c116  3c02                 cmp al, 2
// 0064c118  757b                 jne 0x64c195
// 0064c11a  85ed                 test ebp, ebp
// 0064c11c  7477                 je 0x64c195
// 0064c11e  807a0908             cmp byte ptr [edx + 9], 8
// 0064c122  7571                 jne 0x64c195
// 0064c124  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064c128  8bf9                 mov edi, ecx
// 0064c12a  85db                 test ebx, ebx
// 0064c12c  763f                 jbe 0x64c16d
// 0064c12e  8bff                 mov edi, edi
// 0064c130  0fb601               movzx eax, byte ptr [ecx]
// 0064c133  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0064c137  41                   inc ecx
// 0064c138  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0064c13c  25f8000000           and eax, 0xf8
// 0064c141  c1e005               shl eax, 5
// 0064c144  41                   inc ecx
// 0064c145  81e6f8000000         and esi, 0xf8
// 0064c14b  0bc6                 or eax, esi
// 0064c14d  03c0                 add eax, eax
// 0064c14f  c1fa03               sar edx, 3
// 0064c152  03c0                 add eax, eax
// 0064c154  83e21f               and edx, 0x1f
// 0064c157  0bc2                 or eax, edx
// 0064c159  8a0428               mov al, byte ptr [eax + ebp]
// 0064c15c  8807                 mov byte ptr [edi], al
// 0064c15e  41                   inc ecx
// 0064c15f  47                   inc edi
// 0064c160  83eb01               sub ebx, 1
// 0064c163  75cb                 jne 0x64c130
// 0064c165  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0064c169  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064c16d  8a4209               mov al, byte ptr [edx + 9]
// 0064c170  88420b               mov byte ptr [edx + 0xb], al
// 0064c173  3c08                 cmp al, 8
// 0064c175  c6420803             mov byte ptr [edx + 8], 3
// 0064c179  c6420a01             mov byte ptr [edx + 0xa], 1
// 0064c17d  0fb6c0               movzx eax, al
// 0064c180  0f829d000000         jb 0x64c223
// 0064c186  c1e803               shr eax, 3
// 0064c189  0fafc3               imul eax, ebx
// 0064c18c  5f                   pop edi
// 0064c18d  5e                   pop esi
// 0064c18e  5d                   pop ebp
// 0064c18f  894204               mov dword ptr [edx + 4], eax
// 0064c192  5b                   pop ebx
// 0064c193  59                   pop ecx
// 0064c194  c3                   ret 
// 0064c195  3c06                 cmp al, 6
// 0064c197  0f8598000000         jne 0x64c235
// 0064c19d  85ed                 test ebp, ebp
// 0064c19f  0f8490000000         je 0x64c235
// 0064c1a5  807a0908             cmp byte ptr [edx + 9], 8
// 0064c1a9  0f8586000000         jne 0x64c235
// 0064c1af  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064c1b3  8bf9                 mov edi, ecx
// 0064c1b5  85db                 test ebx, ebx
// 0064c1b7  7646                 jbe 0x64c1ff
// 0064c1b9  8da42400000000       lea esp, [esp]
// 0064c1c0  0fb601               movzx eax, byte ptr [ecx]
// 0064c1c3  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0064c1c7  41                   inc ecx
// 0064c1c8  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0064c1cc  25f8000000           and eax, 0xf8
// 0064c1d1  41                   inc ecx
// 0064c1d2  c1e005               shl eax, 5
// 0064c1d5  81e6f8000000         and esi, 0xf8
// 0064c1db  0bc6                 or eax, esi
// 0064c1dd  03c0                 add eax, eax
// 0064c1df  c1fa03               sar edx, 3
// 0064c1e2  83e21f               and edx, 0x1f
// 0064c1e5  03c0                 add eax, eax
// 0064c1e7  0bc2                 or eax, edx
// 0064c1e9  8a1428               mov dl, byte ptr [eax + ebp]
// 0064c1ec  8817                 mov byte ptr [edi], dl
// 0064c1ee  83c102               add ecx, 2
// 0064c1f1  47                   inc edi
// 0064c1f2  83eb01               sub ebx, 1
// 0064c1f5  75c9                 jne 0x64c1c0
// 0064c1f7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0064c1fb  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064c1ff  8a4209               mov al, byte ptr [edx + 9]
// 0064c202  88420b               mov byte ptr [edx + 0xb], al
// 0064c205  3c08                 cmp al, 8
// 0064c207  c6420803             mov byte ptr [edx + 8], 3
// 0064c20b  c6420a01             mov byte ptr [edx + 0xa], 1
// 0064c20f  0fb6c0               movzx eax, al
// 0064c212  720f                 jb 0x64c223
// 0064c214  c1e803               shr eax, 3
// 0064c217  0fafc3               imul eax, ebx
// 0064c21a  5f                   pop edi
// 0064c21b  5e                   pop esi
// 0064c21c  5d                   pop ebp
// 0064c21d  894204               mov dword ptr [edx + 4], eax
// 0064c220  5b                   pop ebx
// 0064c221  59                   pop ecx
// 0064c222  c3                   ret 
// 0064c223  0fafc3               imul eax, ebx
// 0064c226  5f                   pop edi
// 0064c227  5e                   pop esi
// 0064c228  83c007               add eax, 7
// 0064c22b  c1e803               shr eax, 3
// 0064c22e  5d                   pop ebp
// 0064c22f  894204               mov dword ptr [edx + 4], eax
// 0064c232  5b                   pop ebx
// 0064c233  59                   pop ecx
// 0064c234  c3                   ret 
// 0064c235  3c03                 cmp al, 3
// 0064c237  7525                 jne 0x64c25e
// 0064c239  8b742424             mov esi, dword ptr [esp + 0x24]
// 0064c23d  85f6                 test esi, esi
// 0064c23f  741d                 je 0x64c25e
// 0064c241  807a0908             cmp byte ptr [edx + 9], 8
// 0064c245  7517                 jne 0x64c25e
// 0064c247  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064c24b  85db                 test ebx, ebx
// 0064c24d  760f                 jbe 0x64c25e
// 0064c24f  90                   nop 
// 0064c250  0fb608               movzx ecx, byte ptr [eax]
// 0064c253  8a1431               mov dl, byte ptr [ecx + esi]
// 0064c256  8810                 mov byte ptr [eax], dl
// 0064c258  40                   inc eax
// 0064c259  83eb01               sub ebx, 1
// 0064c25c  75f2                 jne 0x64c250
// 0064c25e  5f                   pop edi
// 0064c25f  5e                   pop esi
// 0064c260  5d                   pop ebp
// 0064c261  5b                   pop ebx
// 0064c262  59                   pop ecx
// 0064c263  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
