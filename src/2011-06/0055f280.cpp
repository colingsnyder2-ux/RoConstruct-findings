// from server: 100% by auto
// roc 2011-06 0055f280  unit: seg_00550000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055f280
//
// 0055f280  51                   push ecx
// 0055f281  8b542408             mov edx, dword ptr [esp + 8]
// 0055f285  8a4208               mov al, byte ptr [edx + 8]
// 0055f288  53                   push ebx
// 0055f289  8b1a                 mov ebx, dword ptr [edx]
// 0055f28b  55                   push ebp
// 0055f28c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0055f290  56                   push esi
// 0055f291  57                   push edi
// 0055f292  895c2410             mov dword ptr [esp + 0x10], ebx
// 0055f296  3c02                 cmp al, 2
// 0055f298  757b                 jne 0x55f315
// 0055f29a  85ed                 test ebp, ebp
// 0055f29c  7477                 je 0x55f315
// 0055f29e  807a0908             cmp byte ptr [edx + 9], 8
// 0055f2a2  7571                 jne 0x55f315
// 0055f2a4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0055f2a8  8bf9                 mov edi, ecx
// 0055f2aa  85db                 test ebx, ebx
// 0055f2ac  763f                 jbe 0x55f2ed
// 0055f2ae  8bff                 mov edi, edi
// 0055f2b0  0fb601               movzx eax, byte ptr [ecx]
// 0055f2b3  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0055f2b7  41                   inc ecx
// 0055f2b8  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0055f2bc  25f8000000           and eax, 0xf8
// 0055f2c1  c1e005               shl eax, 5
// 0055f2c4  41                   inc ecx
// 0055f2c5  81e6f8000000         and esi, 0xf8
// 0055f2cb  0bc6                 or eax, esi
// 0055f2cd  03c0                 add eax, eax
// 0055f2cf  c1fa03               sar edx, 3
// 0055f2d2  03c0                 add eax, eax
// 0055f2d4  83e21f               and edx, 0x1f
// 0055f2d7  0bc2                 or eax, edx
// 0055f2d9  8a0428               mov al, byte ptr [eax + ebp]
// 0055f2dc  8807                 mov byte ptr [edi], al
// 0055f2de  41                   inc ecx
// 0055f2df  47                   inc edi
// 0055f2e0  83eb01               sub ebx, 1
// 0055f2e3  75cb                 jne 0x55f2b0
// 0055f2e5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0055f2e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055f2ed  8a4209               mov al, byte ptr [edx + 9]
// 0055f2f0  88420b               mov byte ptr [edx + 0xb], al
// 0055f2f3  3c08                 cmp al, 8
// 0055f2f5  c6420803             mov byte ptr [edx + 8], 3
// 0055f2f9  c6420a01             mov byte ptr [edx + 0xa], 1
// 0055f2fd  0fb6c0               movzx eax, al
// 0055f300  0f829d000000         jb 0x55f3a3
// 0055f306  c1e803               shr eax, 3
// 0055f309  0fafc3               imul eax, ebx
// 0055f30c  5f                   pop edi
// 0055f30d  5e                   pop esi
// 0055f30e  5d                   pop ebp
// 0055f30f  894204               mov dword ptr [edx + 4], eax
// 0055f312  5b                   pop ebx
// 0055f313  59                   pop ecx
// 0055f314  c3                   ret 
// 0055f315  3c06                 cmp al, 6
// 0055f317  0f8598000000         jne 0x55f3b5
// 0055f31d  85ed                 test ebp, ebp
// 0055f31f  0f8490000000         je 0x55f3b5
// 0055f325  807a0908             cmp byte ptr [edx + 9], 8
// 0055f329  0f8586000000         jne 0x55f3b5
// 0055f32f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0055f333  8bf9                 mov edi, ecx
// 0055f335  85db                 test ebx, ebx
// 0055f337  7646                 jbe 0x55f37f
// 0055f339  8da42400000000       lea esp, [esp]
// 0055f340  0fb601               movzx eax, byte ptr [ecx]
// 0055f343  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0055f347  41                   inc ecx
// 0055f348  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0055f34c  25f8000000           and eax, 0xf8
// 0055f351  41                   inc ecx
// 0055f352  c1e005               shl eax, 5
// 0055f355  81e6f8000000         and esi, 0xf8
// 0055f35b  0bc6                 or eax, esi
// 0055f35d  03c0                 add eax, eax
// 0055f35f  c1fa03               sar edx, 3
// 0055f362  83e21f               and edx, 0x1f
// 0055f365  03c0                 add eax, eax
// 0055f367  0bc2                 or eax, edx
// 0055f369  8a1428               mov dl, byte ptr [eax + ebp]
// 0055f36c  8817                 mov byte ptr [edi], dl
// 0055f36e  83c102               add ecx, 2
// 0055f371  47                   inc edi
// 0055f372  83eb01               sub ebx, 1
// 0055f375  75c9                 jne 0x55f340
// 0055f377  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0055f37b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055f37f  8a4209               mov al, byte ptr [edx + 9]
// 0055f382  88420b               mov byte ptr [edx + 0xb], al
// 0055f385  3c08                 cmp al, 8
// 0055f387  c6420803             mov byte ptr [edx + 8], 3
// 0055f38b  c6420a01             mov byte ptr [edx + 0xa], 1
// 0055f38f  0fb6c0               movzx eax, al
// 0055f392  720f                 jb 0x55f3a3
// 0055f394  c1e803               shr eax, 3
// 0055f397  0fafc3               imul eax, ebx
// 0055f39a  5f                   pop edi
// 0055f39b  5e                   pop esi
// 0055f39c  5d                   pop ebp
// 0055f39d  894204               mov dword ptr [edx + 4], eax
// 0055f3a0  5b                   pop ebx
// 0055f3a1  59                   pop ecx
// 0055f3a2  c3                   ret 
// 0055f3a3  0fafc3               imul eax, ebx
// 0055f3a6  5f                   pop edi
// 0055f3a7  5e                   pop esi
// 0055f3a8  83c007               add eax, 7
// 0055f3ab  c1e803               shr eax, 3
// 0055f3ae  5d                   pop ebp
// 0055f3af  894204               mov dword ptr [edx + 4], eax
// 0055f3b2  5b                   pop ebx
// 0055f3b3  59                   pop ecx
// 0055f3b4  c3                   ret 
// 0055f3b5  3c03                 cmp al, 3
// 0055f3b7  7525                 jne 0x55f3de
// 0055f3b9  8b742424             mov esi, dword ptr [esp + 0x24]
// 0055f3bd  85f6                 test esi, esi
// 0055f3bf  741d                 je 0x55f3de
// 0055f3c1  807a0908             cmp byte ptr [edx + 9], 8
// 0055f3c5  7517                 jne 0x55f3de
// 0055f3c7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055f3cb  85db                 test ebx, ebx
// 0055f3cd  760f                 jbe 0x55f3de
// 0055f3cf  90                   nop 
// 0055f3d0  0fb608               movzx ecx, byte ptr [eax]
// 0055f3d3  8a1431               mov dl, byte ptr [ecx + esi]
// 0055f3d6  8810                 mov byte ptr [eax], dl
// 0055f3d8  40                   inc eax
// 0055f3d9  83eb01               sub ebx, 1
// 0055f3dc  75f2                 jne 0x55f3d0
// 0055f3de  5f                   pop edi
// 0055f3df  5e                   pop esi
// 0055f3e0  5d                   pop ebp
// 0055f3e1  5b                   pop ebx
// 0055f3e2  59                   pop ecx
// 0055f3e3  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
