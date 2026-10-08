// roc 2009-12 00610710  unit: seg_00610000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00610710
//
// 00610710  8b442404             mov eax, dword ptr [esp + 4]
// 00610714  8a4808               mov cl, byte ptr [eax + 8]
// 00610717  53                   push ebx
// 00610718  56                   push esi
// 00610719  80f906               cmp cl, 6
// 0061071c  0f85a5000000         jne 0x6107c7
// 00610722  80780908             cmp byte ptr [eax + 9], 8
// 00610726  753e                 jne 0x610766
// 00610728  8b10                 mov edx, dword ptr [eax]
// 0061072a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061072e  8bc8                 mov ecx, eax
// 00610730  85d2                 test edx, edx
// 00610732  0f86f4000000         jbe 0x61082c
// 00610738  8bf2                 mov esi, edx
// 0061073a  8d9b00000000         lea ebx, [ebx]
// 00610740  8a10                 mov dl, byte ptr [eax]
// 00610742  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00610746  40                   inc eax
// 00610747  8819                 mov byte ptr [ecx], bl
// 00610749  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0061074d  40                   inc eax
// 0061074e  41                   inc ecx
// 0061074f  8819                 mov byte ptr [ecx], bl
// 00610751  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00610755  40                   inc eax
// 00610756  41                   inc ecx
// 00610757  8819                 mov byte ptr [ecx], bl
// 00610759  41                   inc ecx
// 0061075a  8811                 mov byte ptr [ecx], dl
// 0061075c  40                   inc eax
// 0061075d  41                   inc ecx
// 0061075e  83ee01               sub esi, 1
// 00610761  75dd                 jne 0x610740
// 00610763  5e                   pop esi
// 00610764  5b                   pop ebx
// 00610765  c3                   ret 
// 00610766  8b30                 mov esi, dword ptr [eax]
// 00610768  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061076c  8bc8                 mov ecx, eax
// 0061076e  85f6                 test esi, esi
// 00610770  0f86b6000000         jbe 0x61082c
// 00610776  8a10                 mov dl, byte ptr [eax]
// 00610778  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0061077c  40                   inc eax
// 0061077d  40                   inc eax
// 0061077e  885c240d             mov byte ptr [esp + 0xd], bl
// 00610782  0fb618               movzx ebx, byte ptr [eax]
// 00610785  8819                 mov byte ptr [ecx], bl
// 00610787  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0061078b  885901               mov byte ptr [ecx + 1], bl
// 0061078e  40                   inc eax
// 0061078f  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00610793  41                   inc ecx
// 00610794  885901               mov byte ptr [ecx + 1], bl
// 00610797  40                   inc eax
// 00610798  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0061079c  41                   inc ecx
// 0061079d  40                   inc eax
// 0061079e  885901               mov byte ptr [ecx + 1], bl
// 006107a1  0fb65801             movzx ebx, byte ptr [eax + 1]
// 006107a5  41                   inc ecx
// 006107a6  40                   inc eax
// 006107a7  41                   inc ecx
// 006107a8  8819                 mov byte ptr [ecx], bl
// 006107aa  0fb65801             movzx ebx, byte ptr [eax + 1]
// 006107ae  40                   inc eax
// 006107af  41                   inc ecx
// 006107b0  8819                 mov byte ptr [ecx], bl
// 006107b2  41                   inc ecx
// 006107b3  8811                 mov byte ptr [ecx], dl
// 006107b5  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 006107ba  41                   inc ecx
// 006107bb  8811                 mov byte ptr [ecx], dl
// 006107bd  40                   inc eax
// 006107be  41                   inc ecx
// 006107bf  83ee01               sub esi, 1
// 006107c2  75b2                 jne 0x610776
// 006107c4  5e                   pop esi
// 006107c5  5b                   pop ebx
// 006107c6  c3                   ret 
// 006107c7  80f904               cmp cl, 4
// 006107ca  7560                 jne 0x61082c
// 006107cc  80780908             cmp byte ptr [eax + 9], 8
// 006107d0  7523                 jne 0x6107f5
// 006107d2  8b10                 mov edx, dword ptr [eax]
// 006107d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006107d8  8bc8                 mov ecx, eax
// 006107da  85d2                 test edx, edx
// 006107dc  764e                 jbe 0x61082c
// 006107de  8bf2                 mov esi, edx
// 006107e0  8a10                 mov dl, byte ptr [eax]
// 006107e2  8a5801               mov bl, byte ptr [eax + 1]
// 006107e5  40                   inc eax
// 006107e6  8819                 mov byte ptr [ecx], bl
// 006107e8  41                   inc ecx
// 006107e9  8811                 mov byte ptr [ecx], dl
// 006107eb  40                   inc eax
// 006107ec  41                   inc ecx
// 006107ed  83ee01               sub esi, 1
// 006107f0  75ee                 jne 0x6107e0
// 006107f2  5e                   pop esi
// 006107f3  5b                   pop ebx
// 006107f4  c3                   ret 
// 006107f5  8b30                 mov esi, dword ptr [eax]
// 006107f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 006107fb  8bc8                 mov ecx, eax
// 006107fd  85f6                 test esi, esi
// 006107ff  762b                 jbe 0x61082c
// 00610801  8a10                 mov dl, byte ptr [eax]
// 00610803  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00610807  40                   inc eax
// 00610808  40                   inc eax
// 00610809  885c240d             mov byte ptr [esp + 0xd], bl
// 0061080d  0fb618               movzx ebx, byte ptr [eax]
// 00610810  8819                 mov byte ptr [ecx], bl
// 00610812  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00610816  40                   inc eax
// 00610817  41                   inc ecx
// 00610818  8819                 mov byte ptr [ecx], bl
// 0061081a  41                   inc ecx
// 0061081b  8811                 mov byte ptr [ecx], dl
// 0061081d  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00610822  41                   inc ecx
// 00610823  8811                 mov byte ptr [ecx], dl
// 00610825  40                   inc eax
// 00610826  41                   inc ecx
// 00610827  83ee01               sub esi, 1
// 0061082a  75d5                 jne 0x610801
// 0061082c  5e                   pop esi
// 0061082d  5b                   pop ebx
// 0061082e  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
