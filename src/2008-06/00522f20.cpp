// roc 2008-06 00522f20  unit: seg_00520000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00522f20
//
// 00522f20  51                   push ecx
// 00522f21  8b542408             mov edx, dword ptr [esp + 8]
// 00522f25  8a4208               mov al, byte ptr [edx + 8]
// 00522f28  53                   push ebx
// 00522f29  8b1a                 mov ebx, dword ptr [edx]
// 00522f2b  55                   push ebp
// 00522f2c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00522f30  56                   push esi
// 00522f31  57                   push edi
// 00522f32  895c2410             mov dword ptr [esp + 0x10], ebx
// 00522f36  3c02                 cmp al, 2
// 00522f38  757b                 jne 0x522fb5
// 00522f3a  85ed                 test ebp, ebp
// 00522f3c  7477                 je 0x522fb5
// 00522f3e  807a0908             cmp byte ptr [edx + 9], 8
// 00522f42  7571                 jne 0x522fb5
// 00522f44  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00522f48  8bf9                 mov edi, ecx
// 00522f4a  85db                 test ebx, ebx
// 00522f4c  763f                 jbe 0x522f8d
// 00522f4e  8bff                 mov edi, edi
// 00522f50  0fb601               movzx eax, byte ptr [ecx]
// 00522f53  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00522f57  41                   inc ecx
// 00522f58  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00522f5c  25f8000000           and eax, 0xf8
// 00522f61  c1e005               shl eax, 5
// 00522f64  41                   inc ecx
// 00522f65  81e6f8000000         and esi, 0xf8
// 00522f6b  0bc6                 or eax, esi
// 00522f6d  03c0                 add eax, eax
// 00522f6f  c1fa03               sar edx, 3
// 00522f72  03c0                 add eax, eax
// 00522f74  83e21f               and edx, 0x1f
// 00522f77  0bc2                 or eax, edx
// 00522f79  8a0428               mov al, byte ptr [eax + ebp]
// 00522f7c  8807                 mov byte ptr [edi], al
// 00522f7e  41                   inc ecx
// 00522f7f  47                   inc edi
// 00522f80  83eb01               sub ebx, 1
// 00522f83  75cb                 jne 0x522f50
// 00522f85  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00522f89  8b542418             mov edx, dword ptr [esp + 0x18]
// 00522f8d  8a4209               mov al, byte ptr [edx + 9]
// 00522f90  88420b               mov byte ptr [edx + 0xb], al
// 00522f93  3c08                 cmp al, 8
// 00522f95  c6420803             mov byte ptr [edx + 8], 3
// 00522f99  c6420a01             mov byte ptr [edx + 0xa], 1
// 00522f9d  0fb6c0               movzx eax, al
// 00522fa0  0f829d000000         jb 0x523043
// 00522fa6  c1e803               shr eax, 3
// 00522fa9  0fafc3               imul eax, ebx
// 00522fac  5f                   pop edi
// 00522fad  5e                   pop esi
// 00522fae  5d                   pop ebp
// 00522faf  894204               mov dword ptr [edx + 4], eax
// 00522fb2  5b                   pop ebx
// 00522fb3  59                   pop ecx
// 00522fb4  c3                   ret 
// 00522fb5  3c06                 cmp al, 6
// 00522fb7  0f8598000000         jne 0x523055
// 00522fbd  85ed                 test ebp, ebp
// 00522fbf  0f8490000000         je 0x523055
// 00522fc5  807a0908             cmp byte ptr [edx + 9], 8
// 00522fc9  0f8586000000         jne 0x523055
// 00522fcf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00522fd3  8bf9                 mov edi, ecx
// 00522fd5  85db                 test ebx, ebx
// 00522fd7  7646                 jbe 0x52301f
// 00522fd9  8da42400000000       lea esp, [esp]
// 00522fe0  0fb601               movzx eax, byte ptr [ecx]
// 00522fe3  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00522fe7  41                   inc ecx
// 00522fe8  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00522fec  25f8000000           and eax, 0xf8
// 00522ff1  41                   inc ecx
// 00522ff2  c1e005               shl eax, 5
// 00522ff5  81e6f8000000         and esi, 0xf8
// 00522ffb  0bc6                 or eax, esi
// 00522ffd  03c0                 add eax, eax
// 00522fff  c1fa03               sar edx, 3
// 00523002  83e21f               and edx, 0x1f
// 00523005  03c0                 add eax, eax
// 00523007  0bc2                 or eax, edx
// 00523009  8a1428               mov dl, byte ptr [eax + ebp]
// 0052300c  8817                 mov byte ptr [edi], dl
// 0052300e  83c102               add ecx, 2
// 00523011  47                   inc edi
// 00523012  83eb01               sub ebx, 1
// 00523015  75c9                 jne 0x522fe0
// 00523017  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052301b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052301f  8a4209               mov al, byte ptr [edx + 9]
// 00523022  88420b               mov byte ptr [edx + 0xb], al
// 00523025  3c08                 cmp al, 8
// 00523027  c6420803             mov byte ptr [edx + 8], 3
// 0052302b  c6420a01             mov byte ptr [edx + 0xa], 1
// 0052302f  0fb6c0               movzx eax, al
// 00523032  720f                 jb 0x523043
// 00523034  c1e803               shr eax, 3
// 00523037  0fafc3               imul eax, ebx
// 0052303a  5f                   pop edi
// 0052303b  5e                   pop esi
// 0052303c  5d                   pop ebp
// 0052303d  894204               mov dword ptr [edx + 4], eax
// 00523040  5b                   pop ebx
// 00523041  59                   pop ecx
// 00523042  c3                   ret 
// 00523043  0fafc3               imul eax, ebx
// 00523046  5f                   pop edi
// 00523047  5e                   pop esi
// 00523048  83c007               add eax, 7
// 0052304b  c1e803               shr eax, 3
// 0052304e  5d                   pop ebp
// 0052304f  894204               mov dword ptr [edx + 4], eax
// 00523052  5b                   pop ebx
// 00523053  59                   pop ecx
// 00523054  c3                   ret 
// 00523055  3c03                 cmp al, 3
// 00523057  7525                 jne 0x52307e
// 00523059  8b742424             mov esi, dword ptr [esp + 0x24]
// 0052305d  85f6                 test esi, esi
// 0052305f  741d                 je 0x52307e
// 00523061  807a0908             cmp byte ptr [edx + 9], 8
// 00523065  7517                 jne 0x52307e
// 00523067  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052306b  85db                 test ebx, ebx
// 0052306d  760f                 jbe 0x52307e
// 0052306f  90                   nop 
// 00523070  0fb608               movzx ecx, byte ptr [eax]
// 00523073  8a1431               mov dl, byte ptr [ecx + esi]
// 00523076  8810                 mov byte ptr [eax], dl
// 00523078  40                   inc eax
// 00523079  83eb01               sub ebx, 1
// 0052307c  75f2                 jne 0x523070
// 0052307e  5f                   pop edi
// 0052307f  5e                   pop esi
// 00523080  5d                   pop ebp
// 00523081  5b                   pop ebx
// 00523082  59                   pop ecx
// 00523083  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
