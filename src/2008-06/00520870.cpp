// from server: 100% by auto
// roc 2008-06 00520870  unit: seg_00520000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520870
//
// 00520870  8b442404             mov eax, dword ptr [esp + 4]
// 00520874  8a4808               mov cl, byte ptr [eax + 8]
// 00520877  8b10                 mov edx, dword ptr [eax]
// 00520879  56                   push esi
// 0052087a  80f906               cmp cl, 6
// 0052087d  754f                 jne 0x5208ce
// 0052087f  80780908             cmp byte ptr [eax + 9], 8
// 00520883  8b4004               mov eax, dword ptr [eax + 4]
// 00520886  751f                 jne 0x5208a7
// 00520888  0344240c             add eax, dword ptr [esp + 0xc]
// 0052088c  85d2                 test edx, edx
// 0052088e  0f8697000000         jbe 0x52092b
// 00520894  48                   dec eax
// 00520895  80c9ff               or cl, 0xff
// 00520898  2a08                 sub cl, byte ptr [eax]
// 0052089a  83e803               sub eax, 3
// 0052089d  83ea01               sub edx, 1
// 005208a0  884803               mov byte ptr [eax + 3], cl
// 005208a3  75ef                 jne 0x520894
// 005208a5  5e                   pop esi
// 005208a6  c3                   ret 
// 005208a7  0344240c             add eax, dword ptr [esp + 0xc]
// 005208ab  85d2                 test edx, edx
// 005208ad  767c                 jbe 0x52092b
// 005208af  8bf2                 mov esi, edx
// 005208b1  48                   dec eax
// 005208b2  80caff               or dl, 0xff
// 005208b5  2a10                 sub dl, byte ptr [eax]
// 005208b7  8bc8                 mov ecx, eax
// 005208b9  8811                 mov byte ptr [ecx], dl
// 005208bb  48                   dec eax
// 005208bc  80caff               or dl, 0xff
// 005208bf  2a10                 sub dl, byte ptr [eax]
// 005208c1  83e806               sub eax, 6
// 005208c4  83ee01               sub esi, 1
// 005208c7  8851ff               mov byte ptr [ecx - 1], dl
// 005208ca  75e5                 jne 0x5208b1
// 005208cc  5e                   pop esi
// 005208cd  c3                   ret 
// 005208ce  80f904               cmp cl, 4
// 005208d1  7558                 jne 0x52092b
// 005208d3  80780908             cmp byte ptr [eax + 9], 8
// 005208d7  8b4004               mov eax, dword ptr [eax + 4]
// 005208da  7523                 jne 0x5208ff
// 005208dc  0344240c             add eax, dword ptr [esp + 0xc]
// 005208e0  8bc8                 mov ecx, eax
// 005208e2  85d2                 test edx, edx
// 005208e4  7645                 jbe 0x52092b
// 005208e6  8bf2                 mov esi, edx
// 005208e8  48                   dec eax
// 005208e9  80caff               or dl, 0xff
// 005208ec  2a10                 sub dl, byte ptr [eax]
// 005208ee  49                   dec ecx
// 005208ef  8811                 mov byte ptr [ecx], dl
// 005208f1  8a50ff               mov dl, byte ptr [eax - 1]
// 005208f4  48                   dec eax
// 005208f5  49                   dec ecx
// 005208f6  83ee01               sub esi, 1
// 005208f9  8811                 mov byte ptr [ecx], dl
// 005208fb  75eb                 jne 0x5208e8
// 005208fd  5e                   pop esi
// 005208fe  c3                   ret 
// 005208ff  0344240c             add eax, dword ptr [esp + 0xc]
// 00520903  85d2                 test edx, edx
// 00520905  7624                 jbe 0x52092b
// 00520907  8bf2                 mov esi, edx
// 00520909  8da42400000000       lea esp, [esp]
// 00520910  48                   dec eax
// 00520911  80caff               or dl, 0xff
// 00520914  2a10                 sub dl, byte ptr [eax]
// 00520916  8bc8                 mov ecx, eax
// 00520918  8811                 mov byte ptr [ecx], dl
// 0052091a  48                   dec eax
// 0052091b  80caff               or dl, 0xff
// 0052091e  2a10                 sub dl, byte ptr [eax]
// 00520920  83e802               sub eax, 2
// 00520923  83ee01               sub esi, 1
// 00520926  8851ff               mov byte ptr [ecx - 1], dl
// 00520929  75e5                 jne 0x520910
// 0052092b  5e                   pop esi
// 0052092c  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_invert_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
