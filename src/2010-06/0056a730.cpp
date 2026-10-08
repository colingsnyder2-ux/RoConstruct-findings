// from server: 100% by auto
// roc 2010-06 0056a730  unit: seg_00560000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056a730
//
// 0056a730  51                   push ecx
// 0056a731  8b542408             mov edx, dword ptr [esp + 8]
// 0056a735  8a4208               mov al, byte ptr [edx + 8]
// 0056a738  53                   push ebx
// 0056a739  8b1a                 mov ebx, dword ptr [edx]
// 0056a73b  55                   push ebp
// 0056a73c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0056a740  56                   push esi
// 0056a741  57                   push edi
// 0056a742  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056a746  3c02                 cmp al, 2
// 0056a748  757b                 jne 0x56a7c5
// 0056a74a  85ed                 test ebp, ebp
// 0056a74c  7477                 je 0x56a7c5
// 0056a74e  807a0908             cmp byte ptr [edx + 9], 8
// 0056a752  7571                 jne 0x56a7c5
// 0056a754  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056a758  8bf9                 mov edi, ecx
// 0056a75a  85db                 test ebx, ebx
// 0056a75c  763f                 jbe 0x56a79d
// 0056a75e  8bff                 mov edi, edi
// 0056a760  0fb601               movzx eax, byte ptr [ecx]
// 0056a763  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0056a767  41                   inc ecx
// 0056a768  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0056a76c  25f8000000           and eax, 0xf8
// 0056a771  c1e005               shl eax, 5
// 0056a774  41                   inc ecx
// 0056a775  81e6f8000000         and esi, 0xf8
// 0056a77b  0bc6                 or eax, esi
// 0056a77d  03c0                 add eax, eax
// 0056a77f  c1fa03               sar edx, 3
// 0056a782  03c0                 add eax, eax
// 0056a784  83e21f               and edx, 0x1f
// 0056a787  0bc2                 or eax, edx
// 0056a789  8a0428               mov al, byte ptr [eax + ebp]
// 0056a78c  8807                 mov byte ptr [edi], al
// 0056a78e  41                   inc ecx
// 0056a78f  47                   inc edi
// 0056a790  83eb01               sub ebx, 1
// 0056a793  75cb                 jne 0x56a760
// 0056a795  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0056a799  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056a79d  8a4209               mov al, byte ptr [edx + 9]
// 0056a7a0  88420b               mov byte ptr [edx + 0xb], al
// 0056a7a3  3c08                 cmp al, 8
// 0056a7a5  c6420803             mov byte ptr [edx + 8], 3
// 0056a7a9  c6420a01             mov byte ptr [edx + 0xa], 1
// 0056a7ad  0fb6c0               movzx eax, al
// 0056a7b0  0f829d000000         jb 0x56a853
// 0056a7b6  c1e803               shr eax, 3
// 0056a7b9  0fafc3               imul eax, ebx
// 0056a7bc  5f                   pop edi
// 0056a7bd  5e                   pop esi
// 0056a7be  5d                   pop ebp
// 0056a7bf  894204               mov dword ptr [edx + 4], eax
// 0056a7c2  5b                   pop ebx
// 0056a7c3  59                   pop ecx
// 0056a7c4  c3                   ret 
// 0056a7c5  3c06                 cmp al, 6
// 0056a7c7  0f8598000000         jne 0x56a865
// 0056a7cd  85ed                 test ebp, ebp
// 0056a7cf  0f8490000000         je 0x56a865
// 0056a7d5  807a0908             cmp byte ptr [edx + 9], 8
// 0056a7d9  0f8586000000         jne 0x56a865
// 0056a7df  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056a7e3  8bf9                 mov edi, ecx
// 0056a7e5  85db                 test ebx, ebx
// 0056a7e7  7646                 jbe 0x56a82f
// 0056a7e9  8da42400000000       lea esp, [esp]
// 0056a7f0  0fb601               movzx eax, byte ptr [ecx]
// 0056a7f3  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0056a7f7  41                   inc ecx
// 0056a7f8  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0056a7fc  25f8000000           and eax, 0xf8
// 0056a801  41                   inc ecx
// 0056a802  c1e005               shl eax, 5
// 0056a805  81e6f8000000         and esi, 0xf8
// 0056a80b  0bc6                 or eax, esi
// 0056a80d  03c0                 add eax, eax
// 0056a80f  c1fa03               sar edx, 3
// 0056a812  83e21f               and edx, 0x1f
// 0056a815  03c0                 add eax, eax
// 0056a817  0bc2                 or eax, edx
// 0056a819  8a1428               mov dl, byte ptr [eax + ebp]
// 0056a81c  8817                 mov byte ptr [edi], dl
// 0056a81e  83c102               add ecx, 2
// 0056a821  47                   inc edi
// 0056a822  83eb01               sub ebx, 1
// 0056a825  75c9                 jne 0x56a7f0
// 0056a827  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0056a82b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056a82f  8a4209               mov al, byte ptr [edx + 9]
// 0056a832  88420b               mov byte ptr [edx + 0xb], al
// 0056a835  3c08                 cmp al, 8
// 0056a837  c6420803             mov byte ptr [edx + 8], 3
// 0056a83b  c6420a01             mov byte ptr [edx + 0xa], 1
// 0056a83f  0fb6c0               movzx eax, al
// 0056a842  720f                 jb 0x56a853
// 0056a844  c1e803               shr eax, 3
// 0056a847  0fafc3               imul eax, ebx
// 0056a84a  5f                   pop edi
// 0056a84b  5e                   pop esi
// 0056a84c  5d                   pop ebp
// 0056a84d  894204               mov dword ptr [edx + 4], eax
// 0056a850  5b                   pop ebx
// 0056a851  59                   pop ecx
// 0056a852  c3                   ret 
// 0056a853  0fafc3               imul eax, ebx
// 0056a856  5f                   pop edi
// 0056a857  5e                   pop esi
// 0056a858  83c007               add eax, 7
// 0056a85b  c1e803               shr eax, 3
// 0056a85e  5d                   pop ebp
// 0056a85f  894204               mov dword ptr [edx + 4], eax
// 0056a862  5b                   pop ebx
// 0056a863  59                   pop ecx
// 0056a864  c3                   ret 
// 0056a865  3c03                 cmp al, 3
// 0056a867  7525                 jne 0x56a88e
// 0056a869  8b742424             mov esi, dword ptr [esp + 0x24]
// 0056a86d  85f6                 test esi, esi
// 0056a86f  741d                 je 0x56a88e
// 0056a871  807a0908             cmp byte ptr [edx + 9], 8
// 0056a875  7517                 jne 0x56a88e
// 0056a877  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056a87b  85db                 test ebx, ebx
// 0056a87d  760f                 jbe 0x56a88e
// 0056a87f  90                   nop 
// 0056a880  0fb608               movzx ecx, byte ptr [eax]
// 0056a883  8a1431               mov dl, byte ptr [ecx + esi]
// 0056a886  8810                 mov byte ptr [eax], dl
// 0056a888  40                   inc eax
// 0056a889  83eb01               sub ebx, 1
// 0056a88c  75f2                 jne 0x56a880
// 0056a88e  5f                   pop edi
// 0056a88f  5e                   pop esi
// 0056a890  5d                   pop ebp
// 0056a891  5b                   pop ebx
// 0056a892  59                   pop ecx
// 0056a893  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
