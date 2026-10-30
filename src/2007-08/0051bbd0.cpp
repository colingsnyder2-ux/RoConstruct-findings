// from server: 100% by auto
// roc 2007-08 0051bbd0  unit: seg_00510000  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051bbd0
//
// 0051bbd0  51                   push ecx
// 0051bbd1  8b542408             mov edx, dword ptr [esp + 8]
// 0051bbd5  8a4208               mov al, byte ptr [edx + 8]
// 0051bbd8  3c02                 cmp al, 2
// 0051bbda  53                   push ebx
// 0051bbdb  8b1a                 mov ebx, dword ptr [edx]
// 0051bbdd  55                   push ebp
// 0051bbde  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051bbe2  56                   push esi
// 0051bbe3  57                   push edi
// 0051bbe4  895c2410             mov dword ptr [esp + 0x10], ebx
// 0051bbe8  0f8581000000         jne 0x51bc6f
// 0051bbee  85ed                 test ebp, ebp
// 0051bbf0  747d                 je 0x51bc6f
// 0051bbf2  807a0908             cmp byte ptr [edx + 9], 8
// 0051bbf6  7577                 jne 0x51bc6f
// 0051bbf8  85db                 test ebx, ebx
// 0051bbfa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051bbfe  8bf9                 mov edi, ecx
// 0051bc00  7645                 jbe 0x51bc47
// 0051bc02  0fb601               movzx eax, byte ptr [ecx]
// 0051bc05  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0051bc09  83c101               add ecx, 1
// 0051bc0c  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0051bc10  25f8000000           and eax, 0xf8
// 0051bc15  c1e005               shl eax, 5
// 0051bc18  83c101               add ecx, 1
// 0051bc1b  81e6f8000000         and esi, 0xf8
// 0051bc21  0bc6                 or eax, esi
// 0051bc23  03c0                 add eax, eax
// 0051bc25  c1fa03               sar edx, 3
// 0051bc28  03c0                 add eax, eax
// 0051bc2a  83e21f               and edx, 0x1f
// 0051bc2d  0bc2                 or eax, edx
// 0051bc2f  8a0428               mov al, byte ptr [eax + ebp]
// 0051bc32  8807                 mov byte ptr [edi], al
// 0051bc34  83c101               add ecx, 1
// 0051bc37  83c701               add edi, 1
// 0051bc3a  83eb01               sub ebx, 1
// 0051bc3d  75c3                 jne 0x51bc02
// 0051bc3f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051bc43  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051bc47  8a4209               mov al, byte ptr [edx + 9]
// 0051bc4a  88420b               mov byte ptr [edx + 0xb], al
// 0051bc4d  3c08                 cmp al, 8
// 0051bc4f  c6420803             mov byte ptr [edx + 8], 3
// 0051bc53  c6420a01             mov byte ptr [edx + 0xa], 1
// 0051bc57  0fb6c0               movzx eax, al
// 0051bc5a  0f829c000000         jb 0x51bcfc
// 0051bc60  c1e803               shr eax, 3
// 0051bc63  0fafc3               imul eax, ebx
// 0051bc66  5f                   pop edi
// 0051bc67  5e                   pop esi
// 0051bc68  5d                   pop ebp
// 0051bc69  894204               mov dword ptr [edx + 4], eax
// 0051bc6c  5b                   pop ebx
// 0051bc6d  59                   pop ecx
// 0051bc6e  c3                   ret 
// 0051bc6f  3c06                 cmp al, 6
// 0051bc71  0f8597000000         jne 0x51bd0e
// 0051bc77  85ed                 test ebp, ebp
// 0051bc79  0f848f000000         je 0x51bd0e
// 0051bc7f  807a0908             cmp byte ptr [edx + 9], 8
// 0051bc83  0f8585000000         jne 0x51bd0e
// 0051bc89  85db                 test ebx, ebx
// 0051bc8b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051bc8f  8bf9                 mov edi, ecx
// 0051bc91  7645                 jbe 0x51bcd8
// 0051bc93  0fb601               movzx eax, byte ptr [ecx]
// 0051bc96  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0051bc9a  83c101               add ecx, 1
// 0051bc9d  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0051bca1  25f8000000           and eax, 0xf8
// 0051bca6  83c101               add ecx, 1
// 0051bca9  c1e005               shl eax, 5
// 0051bcac  81e6f8000000         and esi, 0xf8
// 0051bcb2  0bc6                 or eax, esi
// 0051bcb4  03c0                 add eax, eax
// 0051bcb6  c1fa03               sar edx, 3
// 0051bcb9  83e21f               and edx, 0x1f
// 0051bcbc  03c0                 add eax, eax
// 0051bcbe  0bc2                 or eax, edx
// 0051bcc0  8a1428               mov dl, byte ptr [eax + ebp]
// 0051bcc3  8817                 mov byte ptr [edi], dl
// 0051bcc5  83c102               add ecx, 2
// 0051bcc8  83c701               add edi, 1
// 0051bccb  83eb01               sub ebx, 1
// 0051bcce  75c3                 jne 0x51bc93
// 0051bcd0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051bcd4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051bcd8  8a4209               mov al, byte ptr [edx + 9]
// 0051bcdb  88420b               mov byte ptr [edx + 0xb], al
// 0051bcde  3c08                 cmp al, 8
// 0051bce0  c6420803             mov byte ptr [edx + 8], 3
// 0051bce4  c6420a01             mov byte ptr [edx + 0xa], 1
// 0051bce8  0fb6c0               movzx eax, al
// 0051bceb  720f                 jb 0x51bcfc
// 0051bced  c1e803               shr eax, 3
// 0051bcf0  0fafc3               imul eax, ebx
// 0051bcf3  5f                   pop edi
// 0051bcf4  5e                   pop esi
// 0051bcf5  5d                   pop ebp
// 0051bcf6  894204               mov dword ptr [edx + 4], eax
// 0051bcf9  5b                   pop ebx
// 0051bcfa  59                   pop ecx
// 0051bcfb  c3                   ret 
// 0051bcfc  0fafc3               imul eax, ebx
// 0051bcff  5f                   pop edi
// 0051bd00  5e                   pop esi
// 0051bd01  83c007               add eax, 7
// 0051bd04  c1e803               shr eax, 3
// 0051bd07  5d                   pop ebp
// 0051bd08  894204               mov dword ptr [edx + 4], eax
// 0051bd0b  5b                   pop ebx
// 0051bd0c  59                   pop ecx
// 0051bd0d  c3                   ret 
// 0051bd0e  3c03                 cmp al, 3
// 0051bd10  7526                 jne 0x51bd38
// 0051bd12  8b742424             mov esi, dword ptr [esp + 0x24]
// 0051bd16  85f6                 test esi, esi
// 0051bd18  741e                 je 0x51bd38
// 0051bd1a  807a0908             cmp byte ptr [edx + 9], 8
// 0051bd1e  7518                 jne 0x51bd38
// 0051bd20  85db                 test ebx, ebx
// 0051bd22  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051bd26  7610                 jbe 0x51bd38
// 0051bd28  0fb608               movzx ecx, byte ptr [eax]
// 0051bd2b  8a1431               mov dl, byte ptr [ecx + esi]
// 0051bd2e  8810                 mov byte ptr [eax], dl
// 0051bd30  83c001               add eax, 1
// 0051bd33  83eb01               sub ebx, 1
// 0051bd36  75f0                 jne 0x51bd28
// 0051bd38  5f                   pop edi
// 0051bd39  5e                   pop esi
// 0051bd3a  5d                   pop ebp
// 0051bd3b  5b                   pop ebx
// 0051bd3c  59                   pop ecx
// 0051bd3d  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
