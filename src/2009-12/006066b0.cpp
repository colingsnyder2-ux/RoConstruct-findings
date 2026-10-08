// roc 2009-12 006066b0  unit: seg_00600000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006066b0
//
// 006066b0  8b442404             mov eax, dword ptr [esp + 4]
// 006066b4  8a4808               mov cl, byte ptr [eax + 8]
// 006066b7  8b10                 mov edx, dword ptr [eax]
// 006066b9  56                   push esi
// 006066ba  80f906               cmp cl, 6
// 006066bd  754f                 jne 0x60670e
// 006066bf  80780908             cmp byte ptr [eax + 9], 8
// 006066c3  8b4004               mov eax, dword ptr [eax + 4]
// 006066c6  751f                 jne 0x6066e7
// 006066c8  0344240c             add eax, dword ptr [esp + 0xc]
// 006066cc  85d2                 test edx, edx
// 006066ce  0f8697000000         jbe 0x60676b
// 006066d4  48                   dec eax
// 006066d5  80c9ff               or cl, 0xff
// 006066d8  2a08                 sub cl, byte ptr [eax]
// 006066da  83e803               sub eax, 3
// 006066dd  83ea01               sub edx, 1
// 006066e0  884803               mov byte ptr [eax + 3], cl
// 006066e3  75ef                 jne 0x6066d4
// 006066e5  5e                   pop esi
// 006066e6  c3                   ret 
// 006066e7  0344240c             add eax, dword ptr [esp + 0xc]
// 006066eb  85d2                 test edx, edx
// 006066ed  767c                 jbe 0x60676b
// 006066ef  8bf2                 mov esi, edx
// 006066f1  48                   dec eax
// 006066f2  80caff               or dl, 0xff
// 006066f5  2a10                 sub dl, byte ptr [eax]
// 006066f7  8bc8                 mov ecx, eax
// 006066f9  8811                 mov byte ptr [ecx], dl
// 006066fb  48                   dec eax
// 006066fc  80caff               or dl, 0xff
// 006066ff  2a10                 sub dl, byte ptr [eax]
// 00606701  83e806               sub eax, 6
// 00606704  83ee01               sub esi, 1
// 00606707  8851ff               mov byte ptr [ecx - 1], dl
// 0060670a  75e5                 jne 0x6066f1
// 0060670c  5e                   pop esi
// 0060670d  c3                   ret 
// 0060670e  80f904               cmp cl, 4
// 00606711  7558                 jne 0x60676b
// 00606713  80780908             cmp byte ptr [eax + 9], 8
// 00606717  8b4004               mov eax, dword ptr [eax + 4]
// 0060671a  7523                 jne 0x60673f
// 0060671c  0344240c             add eax, dword ptr [esp + 0xc]
// 00606720  8bc8                 mov ecx, eax
// 00606722  85d2                 test edx, edx
// 00606724  7645                 jbe 0x60676b
// 00606726  8bf2                 mov esi, edx
// 00606728  48                   dec eax
// 00606729  80caff               or dl, 0xff
// 0060672c  2a10                 sub dl, byte ptr [eax]
// 0060672e  49                   dec ecx
// 0060672f  8811                 mov byte ptr [ecx], dl
// 00606731  8a50ff               mov dl, byte ptr [eax - 1]
// 00606734  48                   dec eax
// 00606735  49                   dec ecx
// 00606736  83ee01               sub esi, 1
// 00606739  8811                 mov byte ptr [ecx], dl
// 0060673b  75eb                 jne 0x606728
// 0060673d  5e                   pop esi
// 0060673e  c3                   ret 
// 0060673f  0344240c             add eax, dword ptr [esp + 0xc]
// 00606743  85d2                 test edx, edx
// 00606745  7624                 jbe 0x60676b
// 00606747  8bf2                 mov esi, edx
// 00606749  8da42400000000       lea esp, [esp]
// 00606750  48                   dec eax
// 00606751  80caff               or dl, 0xff
// 00606754  2a10                 sub dl, byte ptr [eax]
// 00606756  8bc8                 mov ecx, eax
// 00606758  8811                 mov byte ptr [ecx], dl
// 0060675a  48                   dec eax
// 0060675b  80caff               or dl, 0xff
// 0060675e  2a10                 sub dl, byte ptr [eax]
// 00606760  83e802               sub eax, 2
// 00606763  83ee01               sub esi, 1
// 00606766  8851ff               mov byte ptr [ecx - 1], dl
// 00606769  75e5                 jne 0x606750
// 0060676b  5e                   pop esi
// 0060676c  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_invert_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
