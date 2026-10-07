// roc 2007-08 00519500  unit: seg_00510000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00519500
//
// 00519500  8b442404             mov eax, dword ptr [esp + 4]
// 00519504  8a4808               mov cl, byte ptr [eax + 8]
// 00519507  80f906               cmp cl, 6
// 0051950a  8b10                 mov edx, dword ptr [eax]
// 0051950c  56                   push esi
// 0051950d  7559                 jne 0x519568
// 0051950f  80780908             cmp byte ptr [eax + 9], 8
// 00519513  8b4004               mov eax, dword ptr [eax + 4]
// 00519516  7521                 jne 0x519539
// 00519518  0344240c             add eax, dword ptr [esp + 0xc]
// 0051951c  85d2                 test edx, edx
// 0051951e  0f86ab000000         jbe 0x5195cf
// 00519524  83e801               sub eax, 1
// 00519527  80c9ff               or cl, 0xff
// 0051952a  2a08                 sub cl, byte ptr [eax]
// 0051952c  83e803               sub eax, 3
// 0051952f  83ea01               sub edx, 1
// 00519532  884803               mov byte ptr [eax + 3], cl
// 00519535  75ed                 jne 0x519524
// 00519537  5e                   pop esi
// 00519538  c3                   ret 
// 00519539  0344240c             add eax, dword ptr [esp + 0xc]
// 0051953d  85d2                 test edx, edx
// 0051953f  0f868a000000         jbe 0x5195cf
// 00519545  8bf2                 mov esi, edx
// 00519547  83e801               sub eax, 1
// 0051954a  80caff               or dl, 0xff
// 0051954d  2a10                 sub dl, byte ptr [eax]
// 0051954f  8bc8                 mov ecx, eax
// 00519551  8811                 mov byte ptr [ecx], dl
// 00519553  83e801               sub eax, 1
// 00519556  80caff               or dl, 0xff
// 00519559  2a10                 sub dl, byte ptr [eax]
// 0051955b  83e806               sub eax, 6
// 0051955e  83ee01               sub esi, 1
// 00519561  8851ff               mov byte ptr [ecx - 1], dl
// 00519564  75e1                 jne 0x519547
// 00519566  5e                   pop esi
// 00519567  c3                   ret 
// 00519568  80f904               cmp cl, 4
// 0051956b  7562                 jne 0x5195cf
// 0051956d  80780908             cmp byte ptr [eax + 9], 8
// 00519571  8b4004               mov eax, dword ptr [eax + 4]
// 00519574  752b                 jne 0x5195a1
// 00519576  0344240c             add eax, dword ptr [esp + 0xc]
// 0051957a  85d2                 test edx, edx
// 0051957c  8bc8                 mov ecx, eax
// 0051957e  764f                 jbe 0x5195cf
// 00519580  8bf2                 mov esi, edx
// 00519582  83e801               sub eax, 1
// 00519585  80caff               or dl, 0xff
// 00519588  2a10                 sub dl, byte ptr [eax]
// 0051958a  83e901               sub ecx, 1
// 0051958d  8811                 mov byte ptr [ecx], dl
// 0051958f  8a50ff               mov dl, byte ptr [eax - 1]
// 00519592  83e801               sub eax, 1
// 00519595  83e901               sub ecx, 1
// 00519598  83ee01               sub esi, 1
// 0051959b  8811                 mov byte ptr [ecx], dl
// 0051959d  75e3                 jne 0x519582
// 0051959f  5e                   pop esi
// 005195a0  c3                   ret 
// 005195a1  0344240c             add eax, dword ptr [esp + 0xc]
// 005195a5  85d2                 test edx, edx
// 005195a7  7626                 jbe 0x5195cf
// 005195a9  8bf2                 mov esi, edx
// 005195ab  eb03                 jmp 0x5195b0
// 005195ad  8d4900               lea ecx, [ecx]
// 005195b0  83e801               sub eax, 1
// 005195b3  80caff               or dl, 0xff
// 005195b6  2a10                 sub dl, byte ptr [eax]
// 005195b8  8bc8                 mov ecx, eax
// 005195ba  8811                 mov byte ptr [ecx], dl
// 005195bc  83e801               sub eax, 1
// 005195bf  80caff               or dl, 0xff
// 005195c2  2a10                 sub dl, byte ptr [eax]
// 005195c4  83e802               sub eax, 2
// 005195c7  83ee01               sub esi, 1
// 005195ca  8851ff               mov byte ptr [ecx - 1], dl
// 005195cd  75e1                 jne 0x5195b0
// 005195cf  5e                   pop esi
// 005195d0  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_invert_alpha)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
