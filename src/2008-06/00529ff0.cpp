// roc 2008-06 00529ff0  unit: seg_00520000  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529ff0
//
// 00529ff0  8b442404             mov eax, dword ptr [esp + 4]
// 00529ff4  8a4808               mov cl, byte ptr [eax + 8]
// 00529ff7  56                   push esi
// 00529ff8  80f906               cmp cl, 6
// 00529ffb  0f859e000000         jne 0x52a09f
// 0052a001  8b10                 mov edx, dword ptr [eax]
// 0052a003  80780908             cmp byte ptr [eax + 9], 8
// 0052a007  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052a00b  8bc8                 mov ecx, eax
// 0052a00d  7539                 jne 0x52a048
// 0052a00f  85d2                 test edx, edx
// 0052a011  0f86e4000000         jbe 0x52a0fb
// 0052a017  8bf2                 mov esi, edx
// 0052a019  8da42400000000       lea esp, [esp]
// 0052a020  0fb611               movzx edx, byte ptr [ecx]
// 0052a023  8810                 mov byte ptr [eax], dl
// 0052a025  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052a029  41                   inc ecx
// 0052a02a  885001               mov byte ptr [eax + 1], dl
// 0052a02d  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052a031  40                   inc eax
// 0052a032  41                   inc ecx
// 0052a033  40                   inc eax
// 0052a034  8810                 mov byte ptr [eax], dl
// 0052a036  41                   inc ecx
// 0052a037  80caff               or dl, 0xff
// 0052a03a  2a11                 sub dl, byte ptr [ecx]
// 0052a03c  40                   inc eax
// 0052a03d  8810                 mov byte ptr [eax], dl
// 0052a03f  40                   inc eax
// 0052a040  41                   inc ecx
// 0052a041  83ee01               sub esi, 1
// 0052a044  75da                 jne 0x52a020
// 0052a046  5e                   pop esi
// 0052a047  c3                   ret 
// 0052a048  85d2                 test edx, edx
// 0052a04a  0f86ab000000         jbe 0x52a0fb
// 0052a050  8bf2                 mov esi, edx
// 0052a052  0fb611               movzx edx, byte ptr [ecx]
// 0052a055  8810                 mov byte ptr [eax], dl
// 0052a057  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052a05b  885001               mov byte ptr [eax + 1], dl
// 0052a05e  41                   inc ecx
// 0052a05f  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052a063  40                   inc eax
// 0052a064  885001               mov byte ptr [eax + 1], dl
// 0052a067  41                   inc ecx
// 0052a068  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052a06c  40                   inc eax
// 0052a06d  885001               mov byte ptr [eax + 1], dl
// 0052a070  41                   inc ecx
// 0052a071  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052a075  40                   inc eax
// 0052a076  41                   inc ecx
// 0052a077  885001               mov byte ptr [eax + 1], dl
// 0052a07a  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052a07e  40                   inc eax
// 0052a07f  41                   inc ecx
// 0052a080  885001               mov byte ptr [eax + 1], dl
// 0052a083  40                   inc eax
// 0052a084  41                   inc ecx
// 0052a085  80caff               or dl, 0xff
// 0052a088  2a11                 sub dl, byte ptr [ecx]
// 0052a08a  40                   inc eax
// 0052a08b  8810                 mov byte ptr [eax], dl
// 0052a08d  41                   inc ecx
// 0052a08e  80caff               or dl, 0xff
// 0052a091  2a11                 sub dl, byte ptr [ecx]
// 0052a093  40                   inc eax
// 0052a094  8810                 mov byte ptr [eax], dl
// 0052a096  40                   inc eax
// 0052a097  41                   inc ecx
// 0052a098  83ee01               sub esi, 1
// 0052a09b  75b5                 jne 0x52a052
// 0052a09d  5e                   pop esi
// 0052a09e  c3                   ret 
// 0052a09f  80f904               cmp cl, 4
// 0052a0a2  7557                 jne 0x52a0fb
// 0052a0a4  8b10                 mov edx, dword ptr [eax]
// 0052a0a6  80780908             cmp byte ptr [eax + 9], 8
// 0052a0aa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052a0ae  8bc8                 mov ecx, eax
// 0052a0b0  751c                 jne 0x52a0ce
// 0052a0b2  85d2                 test edx, edx
// 0052a0b4  7645                 jbe 0x52a0fb
// 0052a0b6  8bf2                 mov esi, edx
// 0052a0b8  8a11                 mov dl, byte ptr [ecx]
// 0052a0ba  8810                 mov byte ptr [eax], dl
// 0052a0bc  41                   inc ecx
// 0052a0bd  80caff               or dl, 0xff
// 0052a0c0  2a11                 sub dl, byte ptr [ecx]
// 0052a0c2  40                   inc eax
// 0052a0c3  8810                 mov byte ptr [eax], dl
// 0052a0c5  40                   inc eax
// 0052a0c6  41                   inc ecx
// 0052a0c7  83ee01               sub esi, 1
// 0052a0ca  75ec                 jne 0x52a0b8
// 0052a0cc  5e                   pop esi
// 0052a0cd  c3                   ret 
// 0052a0ce  85d2                 test edx, edx
// 0052a0d0  7629                 jbe 0x52a0fb
// 0052a0d2  8bf2                 mov esi, edx
// 0052a0d4  0fb611               movzx edx, byte ptr [ecx]
// 0052a0d7  8810                 mov byte ptr [eax], dl
// 0052a0d9  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052a0dd  41                   inc ecx
// 0052a0de  885001               mov byte ptr [eax + 1], dl
// 0052a0e1  40                   inc eax
// 0052a0e2  41                   inc ecx
// 0052a0e3  80caff               or dl, 0xff
// 0052a0e6  2a11                 sub dl, byte ptr [ecx]
// 0052a0e8  40                   inc eax
// 0052a0e9  8810                 mov byte ptr [eax], dl
// 0052a0eb  41                   inc ecx
// 0052a0ec  80caff               or dl, 0xff
// 0052a0ef  2a11                 sub dl, byte ptr [ecx]
// 0052a0f1  40                   inc eax
// 0052a0f2  8810                 mov byte ptr [eax], dl
// 0052a0f4  40                   inc eax
// 0052a0f5  41                   inc ecx
// 0052a0f6  83ee01               sub esi, 1
// 0052a0f9  75d9                 jne 0x52a0d4
// 0052a0fb  5e                   pop esi
// 0052a0fc  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_invert_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
