// roc 2009-06 00587000  unit: seg_00580000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00587000
//
// 00587000  51                   push ecx
// 00587001  8b542408             mov edx, dword ptr [esp + 8]
// 00587005  8a4208               mov al, byte ptr [edx + 8]
// 00587008  53                   push ebx
// 00587009  8b1a                 mov ebx, dword ptr [edx]
// 0058700b  55                   push ebp
// 0058700c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00587010  56                   push esi
// 00587011  57                   push edi
// 00587012  895c2410             mov dword ptr [esp + 0x10], ebx
// 00587016  3c02                 cmp al, 2
// 00587018  757b                 jne 0x587095
// 0058701a  85ed                 test ebp, ebp
// 0058701c  7477                 je 0x587095
// 0058701e  807a0908             cmp byte ptr [edx + 9], 8
// 00587022  7571                 jne 0x587095
// 00587024  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00587028  8bf9                 mov edi, ecx
// 0058702a  85db                 test ebx, ebx
// 0058702c  763f                 jbe 0x58706d
// 0058702e  8bff                 mov edi, edi
// 00587030  0fb601               movzx eax, byte ptr [ecx]
// 00587033  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00587037  41                   inc ecx
// 00587038  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0058703c  25f8000000           and eax, 0xf8
// 00587041  c1e005               shl eax, 5
// 00587044  41                   inc ecx
// 00587045  81e6f8000000         and esi, 0xf8
// 0058704b  0bc6                 or eax, esi
// 0058704d  03c0                 add eax, eax
// 0058704f  c1fa03               sar edx, 3
// 00587052  03c0                 add eax, eax
// 00587054  83e21f               and edx, 0x1f
// 00587057  0bc2                 or eax, edx
// 00587059  8a0428               mov al, byte ptr [eax + ebp]
// 0058705c  8807                 mov byte ptr [edi], al
// 0058705e  41                   inc ecx
// 0058705f  47                   inc edi
// 00587060  83eb01               sub ebx, 1
// 00587063  75cb                 jne 0x587030
// 00587065  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00587069  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058706d  8a4209               mov al, byte ptr [edx + 9]
// 00587070  88420b               mov byte ptr [edx + 0xb], al
// 00587073  3c08                 cmp al, 8
// 00587075  c6420803             mov byte ptr [edx + 8], 3
// 00587079  c6420a01             mov byte ptr [edx + 0xa], 1
// 0058707d  0fb6c0               movzx eax, al
// 00587080  0f829d000000         jb 0x587123
// 00587086  c1e803               shr eax, 3
// 00587089  0fafc3               imul eax, ebx
// 0058708c  5f                   pop edi
// 0058708d  5e                   pop esi
// 0058708e  5d                   pop ebp
// 0058708f  894204               mov dword ptr [edx + 4], eax
// 00587092  5b                   pop ebx
// 00587093  59                   pop ecx
// 00587094  c3                   ret 
// 00587095  3c06                 cmp al, 6
// 00587097  0f8598000000         jne 0x587135
// 0058709d  85ed                 test ebp, ebp
// 0058709f  0f8490000000         je 0x587135
// 005870a5  807a0908             cmp byte ptr [edx + 9], 8
// 005870a9  0f8586000000         jne 0x587135
// 005870af  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005870b3  8bf9                 mov edi, ecx
// 005870b5  85db                 test ebx, ebx
// 005870b7  7646                 jbe 0x5870ff
// 005870b9  8da42400000000       lea esp, [esp]
// 005870c0  0fb601               movzx eax, byte ptr [ecx]
// 005870c3  0fb67101             movzx esi, byte ptr [ecx + 1]
// 005870c7  41                   inc ecx
// 005870c8  0fb65101             movzx edx, byte ptr [ecx + 1]
// 005870cc  25f8000000           and eax, 0xf8
// 005870d1  41                   inc ecx
// 005870d2  c1e005               shl eax, 5
// 005870d5  81e6f8000000         and esi, 0xf8
// 005870db  0bc6                 or eax, esi
// 005870dd  03c0                 add eax, eax
// 005870df  c1fa03               sar edx, 3
// 005870e2  83e21f               and edx, 0x1f
// 005870e5  03c0                 add eax, eax
// 005870e7  0bc2                 or eax, edx
// 005870e9  8a1428               mov dl, byte ptr [eax + ebp]
// 005870ec  8817                 mov byte ptr [edi], dl
// 005870ee  83c102               add ecx, 2
// 005870f1  47                   inc edi
// 005870f2  83eb01               sub ebx, 1
// 005870f5  75c9                 jne 0x5870c0
// 005870f7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005870fb  8b542418             mov edx, dword ptr [esp + 0x18]
// 005870ff  8a4209               mov al, byte ptr [edx + 9]
// 00587102  88420b               mov byte ptr [edx + 0xb], al
// 00587105  3c08                 cmp al, 8
// 00587107  c6420803             mov byte ptr [edx + 8], 3
// 0058710b  c6420a01             mov byte ptr [edx + 0xa], 1
// 0058710f  0fb6c0               movzx eax, al
// 00587112  720f                 jb 0x587123
// 00587114  c1e803               shr eax, 3
// 00587117  0fafc3               imul eax, ebx
// 0058711a  5f                   pop edi
// 0058711b  5e                   pop esi
// 0058711c  5d                   pop ebp
// 0058711d  894204               mov dword ptr [edx + 4], eax
// 00587120  5b                   pop ebx
// 00587121  59                   pop ecx
// 00587122  c3                   ret 
// 00587123  0fafc3               imul eax, ebx
// 00587126  5f                   pop edi
// 00587127  5e                   pop esi
// 00587128  83c007               add eax, 7
// 0058712b  c1e803               shr eax, 3
// 0058712e  5d                   pop ebp
// 0058712f  894204               mov dword ptr [edx + 4], eax
// 00587132  5b                   pop ebx
// 00587133  59                   pop ecx
// 00587134  c3                   ret 
// 00587135  3c03                 cmp al, 3
// 00587137  7525                 jne 0x58715e
// 00587139  8b742424             mov esi, dword ptr [esp + 0x24]
// 0058713d  85f6                 test esi, esi
// 0058713f  741d                 je 0x58715e
// 00587141  807a0908             cmp byte ptr [edx + 9], 8
// 00587145  7517                 jne 0x58715e
// 00587147  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058714b  85db                 test ebx, ebx
// 0058714d  760f                 jbe 0x58715e
// 0058714f  90                   nop 
// 00587150  0fb608               movzx ecx, byte ptr [eax]
// 00587153  8a1431               mov dl, byte ptr [ecx + esi]
// 00587156  8810                 mov byte ptr [eax], dl
// 00587158  40                   inc eax
// 00587159  83eb01               sub ebx, 1
// 0058715c  75f2                 jne 0x587150
// 0058715e  5f                   pop edi
// 0058715f  5e                   pop esi
// 00587160  5d                   pop ebp
// 00587161  5b                   pop ebx
// 00587162  59                   pop ecx
// 00587163  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
