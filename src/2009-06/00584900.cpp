// from server: 100% by auto
// roc 2009-06 00584900  unit: seg_00580000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00584900
//
// 00584900  8b442404             mov eax, dword ptr [esp + 4]
// 00584904  8a4808               mov cl, byte ptr [eax + 8]
// 00584907  8b10                 mov edx, dword ptr [eax]
// 00584909  56                   push esi
// 0058490a  80f906               cmp cl, 6
// 0058490d  754f                 jne 0x58495e
// 0058490f  80780908             cmp byte ptr [eax + 9], 8
// 00584913  8b4004               mov eax, dword ptr [eax + 4]
// 00584916  751f                 jne 0x584937
// 00584918  0344240c             add eax, dword ptr [esp + 0xc]
// 0058491c  85d2                 test edx, edx
// 0058491e  0f8697000000         jbe 0x5849bb
// 00584924  48                   dec eax
// 00584925  80c9ff               or cl, 0xff
// 00584928  2a08                 sub cl, byte ptr [eax]
// 0058492a  83e803               sub eax, 3
// 0058492d  83ea01               sub edx, 1
// 00584930  884803               mov byte ptr [eax + 3], cl
// 00584933  75ef                 jne 0x584924
// 00584935  5e                   pop esi
// 00584936  c3                   ret 
// 00584937  0344240c             add eax, dword ptr [esp + 0xc]
// 0058493b  85d2                 test edx, edx
// 0058493d  767c                 jbe 0x5849bb
// 0058493f  8bf2                 mov esi, edx
// 00584941  48                   dec eax
// 00584942  80caff               or dl, 0xff
// 00584945  2a10                 sub dl, byte ptr [eax]
// 00584947  8bc8                 mov ecx, eax
// 00584949  8811                 mov byte ptr [ecx], dl
// 0058494b  48                   dec eax
// 0058494c  80caff               or dl, 0xff
// 0058494f  2a10                 sub dl, byte ptr [eax]
// 00584951  83e806               sub eax, 6
// 00584954  83ee01               sub esi, 1
// 00584957  8851ff               mov byte ptr [ecx - 1], dl
// 0058495a  75e5                 jne 0x584941
// 0058495c  5e                   pop esi
// 0058495d  c3                   ret 
// 0058495e  80f904               cmp cl, 4
// 00584961  7558                 jne 0x5849bb
// 00584963  80780908             cmp byte ptr [eax + 9], 8
// 00584967  8b4004               mov eax, dword ptr [eax + 4]
// 0058496a  7523                 jne 0x58498f
// 0058496c  0344240c             add eax, dword ptr [esp + 0xc]
// 00584970  8bc8                 mov ecx, eax
// 00584972  85d2                 test edx, edx
// 00584974  7645                 jbe 0x5849bb
// 00584976  8bf2                 mov esi, edx
// 00584978  48                   dec eax
// 00584979  80caff               or dl, 0xff
// 0058497c  2a10                 sub dl, byte ptr [eax]
// 0058497e  49                   dec ecx
// 0058497f  8811                 mov byte ptr [ecx], dl
// 00584981  8a50ff               mov dl, byte ptr [eax - 1]
// 00584984  48                   dec eax
// 00584985  49                   dec ecx
// 00584986  83ee01               sub esi, 1
// 00584989  8811                 mov byte ptr [ecx], dl
// 0058498b  75eb                 jne 0x584978
// 0058498d  5e                   pop esi
// 0058498e  c3                   ret 
// 0058498f  0344240c             add eax, dword ptr [esp + 0xc]
// 00584993  85d2                 test edx, edx
// 00584995  7624                 jbe 0x5849bb
// 00584997  8bf2                 mov esi, edx
// 00584999  8da42400000000       lea esp, [esp]
// 005849a0  48                   dec eax
// 005849a1  80caff               or dl, 0xff
// 005849a4  2a10                 sub dl, byte ptr [eax]
// 005849a6  8bc8                 mov ecx, eax
// 005849a8  8811                 mov byte ptr [ecx], dl
// 005849aa  48                   dec eax
// 005849ab  80caff               or dl, 0xff
// 005849ae  2a10                 sub dl, byte ptr [eax]
// 005849b0  83e802               sub eax, 2
// 005849b3  83ee01               sub esi, 1
// 005849b6  8851ff               mov byte ptr [ecx - 1], dl
// 005849b9  75e5                 jne 0x5849a0
// 005849bb  5e                   pop esi
// 005849bc  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_invert_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
