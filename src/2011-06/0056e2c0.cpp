// roc 2011-06 0056e2c0  unit: seg_00560000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056e2c0
//
// 0056e2c0  8b442404             mov eax, dword ptr [esp + 4]
// 0056e2c4  8a4808               mov cl, byte ptr [eax + 8]
// 0056e2c7  53                   push ebx
// 0056e2c8  56                   push esi
// 0056e2c9  80f906               cmp cl, 6
// 0056e2cc  0f85a5000000         jne 0x56e377
// 0056e2d2  80780908             cmp byte ptr [eax + 9], 8
// 0056e2d6  753e                 jne 0x56e316
// 0056e2d8  8b10                 mov edx, dword ptr [eax]
// 0056e2da  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056e2de  8bc8                 mov ecx, eax
// 0056e2e0  85d2                 test edx, edx
// 0056e2e2  0f86f4000000         jbe 0x56e3dc
// 0056e2e8  8bf2                 mov esi, edx
// 0056e2ea  8d9b00000000         lea ebx, [ebx]
// 0056e2f0  8a10                 mov dl, byte ptr [eax]
// 0056e2f2  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e2f6  40                   inc eax
// 0056e2f7  8819                 mov byte ptr [ecx], bl
// 0056e2f9  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e2fd  40                   inc eax
// 0056e2fe  41                   inc ecx
// 0056e2ff  8819                 mov byte ptr [ecx], bl
// 0056e301  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e305  40                   inc eax
// 0056e306  41                   inc ecx
// 0056e307  8819                 mov byte ptr [ecx], bl
// 0056e309  41                   inc ecx
// 0056e30a  8811                 mov byte ptr [ecx], dl
// 0056e30c  40                   inc eax
// 0056e30d  41                   inc ecx
// 0056e30e  83ee01               sub esi, 1
// 0056e311  75dd                 jne 0x56e2f0
// 0056e313  5e                   pop esi
// 0056e314  5b                   pop ebx
// 0056e315  c3                   ret 
// 0056e316  8b30                 mov esi, dword ptr [eax]
// 0056e318  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056e31c  8bc8                 mov ecx, eax
// 0056e31e  85f6                 test esi, esi
// 0056e320  0f86b6000000         jbe 0x56e3dc
// 0056e326  8a10                 mov dl, byte ptr [eax]
// 0056e328  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e32c  40                   inc eax
// 0056e32d  40                   inc eax
// 0056e32e  885c240d             mov byte ptr [esp + 0xd], bl
// 0056e332  0fb618               movzx ebx, byte ptr [eax]
// 0056e335  8819                 mov byte ptr [ecx], bl
// 0056e337  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e33b  885901               mov byte ptr [ecx + 1], bl
// 0056e33e  40                   inc eax
// 0056e33f  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e343  41                   inc ecx
// 0056e344  885901               mov byte ptr [ecx + 1], bl
// 0056e347  40                   inc eax
// 0056e348  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e34c  41                   inc ecx
// 0056e34d  40                   inc eax
// 0056e34e  885901               mov byte ptr [ecx + 1], bl
// 0056e351  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e355  41                   inc ecx
// 0056e356  40                   inc eax
// 0056e357  41                   inc ecx
// 0056e358  8819                 mov byte ptr [ecx], bl
// 0056e35a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e35e  40                   inc eax
// 0056e35f  41                   inc ecx
// 0056e360  8819                 mov byte ptr [ecx], bl
// 0056e362  41                   inc ecx
// 0056e363  8811                 mov byte ptr [ecx], dl
// 0056e365  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0056e36a  41                   inc ecx
// 0056e36b  8811                 mov byte ptr [ecx], dl
// 0056e36d  40                   inc eax
// 0056e36e  41                   inc ecx
// 0056e36f  83ee01               sub esi, 1
// 0056e372  75b2                 jne 0x56e326
// 0056e374  5e                   pop esi
// 0056e375  5b                   pop ebx
// 0056e376  c3                   ret 
// 0056e377  80f904               cmp cl, 4
// 0056e37a  7560                 jne 0x56e3dc
// 0056e37c  80780908             cmp byte ptr [eax + 9], 8
// 0056e380  7523                 jne 0x56e3a5
// 0056e382  8b10                 mov edx, dword ptr [eax]
// 0056e384  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056e388  8bc8                 mov ecx, eax
// 0056e38a  85d2                 test edx, edx
// 0056e38c  764e                 jbe 0x56e3dc
// 0056e38e  8bf2                 mov esi, edx
// 0056e390  8a10                 mov dl, byte ptr [eax]
// 0056e392  8a5801               mov bl, byte ptr [eax + 1]
// 0056e395  40                   inc eax
// 0056e396  8819                 mov byte ptr [ecx], bl
// 0056e398  41                   inc ecx
// 0056e399  8811                 mov byte ptr [ecx], dl
// 0056e39b  40                   inc eax
// 0056e39c  41                   inc ecx
// 0056e39d  83ee01               sub esi, 1
// 0056e3a0  75ee                 jne 0x56e390
// 0056e3a2  5e                   pop esi
// 0056e3a3  5b                   pop ebx
// 0056e3a4  c3                   ret 
// 0056e3a5  8b30                 mov esi, dword ptr [eax]
// 0056e3a7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056e3ab  8bc8                 mov ecx, eax
// 0056e3ad  85f6                 test esi, esi
// 0056e3af  762b                 jbe 0x56e3dc
// 0056e3b1  8a10                 mov dl, byte ptr [eax]
// 0056e3b3  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e3b7  40                   inc eax
// 0056e3b8  40                   inc eax
// 0056e3b9  885c240d             mov byte ptr [esp + 0xd], bl
// 0056e3bd  0fb618               movzx ebx, byte ptr [eax]
// 0056e3c0  8819                 mov byte ptr [ecx], bl
// 0056e3c2  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0056e3c6  40                   inc eax
// 0056e3c7  41                   inc ecx
// 0056e3c8  8819                 mov byte ptr [ecx], bl
// 0056e3ca  41                   inc ecx
// 0056e3cb  8811                 mov byte ptr [ecx], dl
// 0056e3cd  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0056e3d2  41                   inc ecx
// 0056e3d3  8811                 mov byte ptr [ecx], dl
// 0056e3d5  40                   inc eax
// 0056e3d6  41                   inc ecx
// 0056e3d7  83ee01               sub esi, 1
// 0056e3da  75d5                 jne 0x56e3b1
// 0056e3dc  5e                   pop esi
// 0056e3dd  5b                   pop ebx
// 0056e3de  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
