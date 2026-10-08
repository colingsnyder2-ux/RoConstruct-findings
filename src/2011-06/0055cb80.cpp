// from server: 100% by auto
// roc 2011-06 0055cb80  unit: seg_00550000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055cb80
//
// 0055cb80  8b442404             mov eax, dword ptr [esp + 4]
// 0055cb84  8a4808               mov cl, byte ptr [eax + 8]
// 0055cb87  8b10                 mov edx, dword ptr [eax]
// 0055cb89  56                   push esi
// 0055cb8a  80f906               cmp cl, 6
// 0055cb8d  754f                 jne 0x55cbde
// 0055cb8f  80780908             cmp byte ptr [eax + 9], 8
// 0055cb93  8b4004               mov eax, dword ptr [eax + 4]
// 0055cb96  751f                 jne 0x55cbb7
// 0055cb98  0344240c             add eax, dword ptr [esp + 0xc]
// 0055cb9c  85d2                 test edx, edx
// 0055cb9e  0f8697000000         jbe 0x55cc3b
// 0055cba4  48                   dec eax
// 0055cba5  80c9ff               or cl, 0xff
// 0055cba8  2a08                 sub cl, byte ptr [eax]
// 0055cbaa  83e803               sub eax, 3
// 0055cbad  83ea01               sub edx, 1
// 0055cbb0  884803               mov byte ptr [eax + 3], cl
// 0055cbb3  75ef                 jne 0x55cba4
// 0055cbb5  5e                   pop esi
// 0055cbb6  c3                   ret 
// 0055cbb7  0344240c             add eax, dword ptr [esp + 0xc]
// 0055cbbb  85d2                 test edx, edx
// 0055cbbd  767c                 jbe 0x55cc3b
// 0055cbbf  8bf2                 mov esi, edx
// 0055cbc1  48                   dec eax
// 0055cbc2  80caff               or dl, 0xff
// 0055cbc5  2a10                 sub dl, byte ptr [eax]
// 0055cbc7  8bc8                 mov ecx, eax
// 0055cbc9  8811                 mov byte ptr [ecx], dl
// 0055cbcb  48                   dec eax
// 0055cbcc  80caff               or dl, 0xff
// 0055cbcf  2a10                 sub dl, byte ptr [eax]
// 0055cbd1  83e806               sub eax, 6
// 0055cbd4  83ee01               sub esi, 1
// 0055cbd7  8851ff               mov byte ptr [ecx - 1], dl
// 0055cbda  75e5                 jne 0x55cbc1
// 0055cbdc  5e                   pop esi
// 0055cbdd  c3                   ret 
// 0055cbde  80f904               cmp cl, 4
// 0055cbe1  7558                 jne 0x55cc3b
// 0055cbe3  80780908             cmp byte ptr [eax + 9], 8
// 0055cbe7  8b4004               mov eax, dword ptr [eax + 4]
// 0055cbea  7523                 jne 0x55cc0f
// 0055cbec  0344240c             add eax, dword ptr [esp + 0xc]
// 0055cbf0  8bc8                 mov ecx, eax
// 0055cbf2  85d2                 test edx, edx
// 0055cbf4  7645                 jbe 0x55cc3b
// 0055cbf6  8bf2                 mov esi, edx
// 0055cbf8  48                   dec eax
// 0055cbf9  80caff               or dl, 0xff
// 0055cbfc  2a10                 sub dl, byte ptr [eax]
// 0055cbfe  49                   dec ecx
// 0055cbff  8811                 mov byte ptr [ecx], dl
// 0055cc01  8a50ff               mov dl, byte ptr [eax - 1]
// 0055cc04  48                   dec eax
// 0055cc05  49                   dec ecx
// 0055cc06  83ee01               sub esi, 1
// 0055cc09  8811                 mov byte ptr [ecx], dl
// 0055cc0b  75eb                 jne 0x55cbf8
// 0055cc0d  5e                   pop esi
// 0055cc0e  c3                   ret 
// 0055cc0f  0344240c             add eax, dword ptr [esp + 0xc]
// 0055cc13  85d2                 test edx, edx
// 0055cc15  7624                 jbe 0x55cc3b
// 0055cc17  8bf2                 mov esi, edx
// 0055cc19  8da42400000000       lea esp, [esp]
// 0055cc20  48                   dec eax
// 0055cc21  80caff               or dl, 0xff
// 0055cc24  2a10                 sub dl, byte ptr [eax]
// 0055cc26  8bc8                 mov ecx, eax
// 0055cc28  8811                 mov byte ptr [ecx], dl
// 0055cc2a  48                   dec eax
// 0055cc2b  80caff               or dl, 0xff
// 0055cc2e  2a10                 sub dl, byte ptr [eax]
// 0055cc30  83e802               sub eax, 2
// 0055cc33  83ee01               sub esi, 1
// 0055cc36  8851ff               mov byte ptr [ecx - 1], dl
// 0055cc39  75e5                 jne 0x55cc20
// 0055cc3b  5e                   pop esi
// 0055cc3c  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_invert_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
