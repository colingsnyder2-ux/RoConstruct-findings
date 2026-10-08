// from server: 100% by auto
// roc 2012-06 00649a00  unit: seg_00640000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00649a00
//
// 00649a00  8b442404             mov eax, dword ptr [esp + 4]
// 00649a04  8a4808               mov cl, byte ptr [eax + 8]
// 00649a07  8b10                 mov edx, dword ptr [eax]
// 00649a09  56                   push esi
// 00649a0a  80f906               cmp cl, 6
// 00649a0d  754f                 jne 0x649a5e
// 00649a0f  80780908             cmp byte ptr [eax + 9], 8
// 00649a13  8b4004               mov eax, dword ptr [eax + 4]
// 00649a16  751f                 jne 0x649a37
// 00649a18  0344240c             add eax, dword ptr [esp + 0xc]
// 00649a1c  85d2                 test edx, edx
// 00649a1e  0f8697000000         jbe 0x649abb
// 00649a24  48                   dec eax
// 00649a25  80c9ff               or cl, 0xff
// 00649a28  2a08                 sub cl, byte ptr [eax]
// 00649a2a  83e803               sub eax, 3
// 00649a2d  83ea01               sub edx, 1
// 00649a30  884803               mov byte ptr [eax + 3], cl
// 00649a33  75ef                 jne 0x649a24
// 00649a35  5e                   pop esi
// 00649a36  c3                   ret 
// 00649a37  0344240c             add eax, dword ptr [esp + 0xc]
// 00649a3b  85d2                 test edx, edx
// 00649a3d  767c                 jbe 0x649abb
// 00649a3f  8bf2                 mov esi, edx
// 00649a41  48                   dec eax
// 00649a42  80caff               or dl, 0xff
// 00649a45  2a10                 sub dl, byte ptr [eax]
// 00649a47  8bc8                 mov ecx, eax
// 00649a49  8811                 mov byte ptr [ecx], dl
// 00649a4b  48                   dec eax
// 00649a4c  80caff               or dl, 0xff
// 00649a4f  2a10                 sub dl, byte ptr [eax]
// 00649a51  83e806               sub eax, 6
// 00649a54  83ee01               sub esi, 1
// 00649a57  8851ff               mov byte ptr [ecx - 1], dl
// 00649a5a  75e5                 jne 0x649a41
// 00649a5c  5e                   pop esi
// 00649a5d  c3                   ret 
// 00649a5e  80f904               cmp cl, 4
// 00649a61  7558                 jne 0x649abb
// 00649a63  80780908             cmp byte ptr [eax + 9], 8
// 00649a67  8b4004               mov eax, dword ptr [eax + 4]
// 00649a6a  7523                 jne 0x649a8f
// 00649a6c  0344240c             add eax, dword ptr [esp + 0xc]
// 00649a70  8bc8                 mov ecx, eax
// 00649a72  85d2                 test edx, edx
// 00649a74  7645                 jbe 0x649abb
// 00649a76  8bf2                 mov esi, edx
// 00649a78  48                   dec eax
// 00649a79  80caff               or dl, 0xff
// 00649a7c  2a10                 sub dl, byte ptr [eax]
// 00649a7e  49                   dec ecx
// 00649a7f  8811                 mov byte ptr [ecx], dl
// 00649a81  8a50ff               mov dl, byte ptr [eax - 1]
// 00649a84  48                   dec eax
// 00649a85  49                   dec ecx
// 00649a86  83ee01               sub esi, 1
// 00649a89  8811                 mov byte ptr [ecx], dl
// 00649a8b  75eb                 jne 0x649a78
// 00649a8d  5e                   pop esi
// 00649a8e  c3                   ret 
// 00649a8f  0344240c             add eax, dword ptr [esp + 0xc]
// 00649a93  85d2                 test edx, edx
// 00649a95  7624                 jbe 0x649abb
// 00649a97  8bf2                 mov esi, edx
// 00649a99  8da42400000000       lea esp, [esp]
// 00649aa0  48                   dec eax
// 00649aa1  80caff               or dl, 0xff
// 00649aa4  2a10                 sub dl, byte ptr [eax]
// 00649aa6  8bc8                 mov ecx, eax
// 00649aa8  8811                 mov byte ptr [ecx], dl
// 00649aaa  48                   dec eax
// 00649aab  80caff               or dl, 0xff
// 00649aae  2a10                 sub dl, byte ptr [eax]
// 00649ab0  83e802               sub eax, 2
// 00649ab3  83ee01               sub esi, 1
// 00649ab6  8851ff               mov byte ptr [ecx - 1], dl
// 00649ab9  75e5                 jne 0x649aa0
// 00649abb  5e                   pop esi
// 00649abc  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_invert_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
