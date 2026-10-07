// roc 2010-06 00568030  unit: seg_00560000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00568030
//
// 00568030  8b442404             mov eax, dword ptr [esp + 4]
// 00568034  8a4808               mov cl, byte ptr [eax + 8]
// 00568037  8b10                 mov edx, dword ptr [eax]
// 00568039  56                   push esi
// 0056803a  80f906               cmp cl, 6
// 0056803d  754f                 jne 0x56808e
// 0056803f  80780908             cmp byte ptr [eax + 9], 8
// 00568043  8b4004               mov eax, dword ptr [eax + 4]
// 00568046  751f                 jne 0x568067
// 00568048  0344240c             add eax, dword ptr [esp + 0xc]
// 0056804c  85d2                 test edx, edx
// 0056804e  0f8697000000         jbe 0x5680eb
// 00568054  48                   dec eax
// 00568055  80c9ff               or cl, 0xff
// 00568058  2a08                 sub cl, byte ptr [eax]
// 0056805a  83e803               sub eax, 3
// 0056805d  83ea01               sub edx, 1
// 00568060  884803               mov byte ptr [eax + 3], cl
// 00568063  75ef                 jne 0x568054
// 00568065  5e                   pop esi
// 00568066  c3                   ret 
// 00568067  0344240c             add eax, dword ptr [esp + 0xc]
// 0056806b  85d2                 test edx, edx
// 0056806d  767c                 jbe 0x5680eb
// 0056806f  8bf2                 mov esi, edx
// 00568071  48                   dec eax
// 00568072  80caff               or dl, 0xff
// 00568075  2a10                 sub dl, byte ptr [eax]
// 00568077  8bc8                 mov ecx, eax
// 00568079  8811                 mov byte ptr [ecx], dl
// 0056807b  48                   dec eax
// 0056807c  80caff               or dl, 0xff
// 0056807f  2a10                 sub dl, byte ptr [eax]
// 00568081  83e806               sub eax, 6
// 00568084  83ee01               sub esi, 1
// 00568087  8851ff               mov byte ptr [ecx - 1], dl
// 0056808a  75e5                 jne 0x568071
// 0056808c  5e                   pop esi
// 0056808d  c3                   ret 
// 0056808e  80f904               cmp cl, 4
// 00568091  7558                 jne 0x5680eb
// 00568093  80780908             cmp byte ptr [eax + 9], 8
// 00568097  8b4004               mov eax, dword ptr [eax + 4]
// 0056809a  7523                 jne 0x5680bf
// 0056809c  0344240c             add eax, dword ptr [esp + 0xc]
// 005680a0  8bc8                 mov ecx, eax
// 005680a2  85d2                 test edx, edx
// 005680a4  7645                 jbe 0x5680eb
// 005680a6  8bf2                 mov esi, edx
// 005680a8  48                   dec eax
// 005680a9  80caff               or dl, 0xff
// 005680ac  2a10                 sub dl, byte ptr [eax]
// 005680ae  49                   dec ecx
// 005680af  8811                 mov byte ptr [ecx], dl
// 005680b1  8a50ff               mov dl, byte ptr [eax - 1]
// 005680b4  48                   dec eax
// 005680b5  49                   dec ecx
// 005680b6  83ee01               sub esi, 1
// 005680b9  8811                 mov byte ptr [ecx], dl
// 005680bb  75eb                 jne 0x5680a8
// 005680bd  5e                   pop esi
// 005680be  c3                   ret 
// 005680bf  0344240c             add eax, dword ptr [esp + 0xc]
// 005680c3  85d2                 test edx, edx
// 005680c5  7624                 jbe 0x5680eb
// 005680c7  8bf2                 mov esi, edx
// 005680c9  8da42400000000       lea esp, [esp]
// 005680d0  48                   dec eax
// 005680d1  80caff               or dl, 0xff
// 005680d4  2a10                 sub dl, byte ptr [eax]
// 005680d6  8bc8                 mov ecx, eax
// 005680d8  8811                 mov byte ptr [ecx], dl
// 005680da  48                   dec eax
// 005680db  80caff               or dl, 0xff
// 005680de  2a10                 sub dl, byte ptr [eax]
// 005680e0  83e802               sub eax, 2
// 005680e3  83ee01               sub esi, 1
// 005680e6  8851ff               mov byte ptr [ecx - 1], dl
// 005680e9  75e5                 jne 0x5680d0
// 005680eb  5e                   pop esi
// 005680ec  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_invert_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
