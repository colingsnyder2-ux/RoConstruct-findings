// roc 2009-06 0058e6e0  unit: seg_00580000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058e6e0
//
// 0058e6e0  8b442404             mov eax, dword ptr [esp + 4]
// 0058e6e4  8a4808               mov cl, byte ptr [eax + 8]
// 0058e6e7  53                   push ebx
// 0058e6e8  56                   push esi
// 0058e6e9  80f906               cmp cl, 6
// 0058e6ec  0f85a5000000         jne 0x58e797
// 0058e6f2  80780908             cmp byte ptr [eax + 9], 8
// 0058e6f6  753e                 jne 0x58e736
// 0058e6f8  8b10                 mov edx, dword ptr [eax]
// 0058e6fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058e6fe  8bc8                 mov ecx, eax
// 0058e700  85d2                 test edx, edx
// 0058e702  0f86f4000000         jbe 0x58e7fc
// 0058e708  8bf2                 mov esi, edx
// 0058e70a  8d9b00000000         lea ebx, [ebx]
// 0058e710  8a10                 mov dl, byte ptr [eax]
// 0058e712  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e716  40                   inc eax
// 0058e717  8819                 mov byte ptr [ecx], bl
// 0058e719  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e71d  40                   inc eax
// 0058e71e  41                   inc ecx
// 0058e71f  8819                 mov byte ptr [ecx], bl
// 0058e721  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e725  40                   inc eax
// 0058e726  41                   inc ecx
// 0058e727  8819                 mov byte ptr [ecx], bl
// 0058e729  41                   inc ecx
// 0058e72a  8811                 mov byte ptr [ecx], dl
// 0058e72c  40                   inc eax
// 0058e72d  41                   inc ecx
// 0058e72e  83ee01               sub esi, 1
// 0058e731  75dd                 jne 0x58e710
// 0058e733  5e                   pop esi
// 0058e734  5b                   pop ebx
// 0058e735  c3                   ret 
// 0058e736  8b30                 mov esi, dword ptr [eax]
// 0058e738  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058e73c  8bc8                 mov ecx, eax
// 0058e73e  85f6                 test esi, esi
// 0058e740  0f86b6000000         jbe 0x58e7fc
// 0058e746  8a10                 mov dl, byte ptr [eax]
// 0058e748  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e74c  40                   inc eax
// 0058e74d  40                   inc eax
// 0058e74e  885c240d             mov byte ptr [esp + 0xd], bl
// 0058e752  0fb618               movzx ebx, byte ptr [eax]
// 0058e755  8819                 mov byte ptr [ecx], bl
// 0058e757  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e75b  885901               mov byte ptr [ecx + 1], bl
// 0058e75e  40                   inc eax
// 0058e75f  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e763  41                   inc ecx
// 0058e764  885901               mov byte ptr [ecx + 1], bl
// 0058e767  40                   inc eax
// 0058e768  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e76c  41                   inc ecx
// 0058e76d  40                   inc eax
// 0058e76e  885901               mov byte ptr [ecx + 1], bl
// 0058e771  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e775  41                   inc ecx
// 0058e776  40                   inc eax
// 0058e777  41                   inc ecx
// 0058e778  8819                 mov byte ptr [ecx], bl
// 0058e77a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e77e  40                   inc eax
// 0058e77f  41                   inc ecx
// 0058e780  8819                 mov byte ptr [ecx], bl
// 0058e782  41                   inc ecx
// 0058e783  8811                 mov byte ptr [ecx], dl
// 0058e785  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0058e78a  41                   inc ecx
// 0058e78b  8811                 mov byte ptr [ecx], dl
// 0058e78d  40                   inc eax
// 0058e78e  41                   inc ecx
// 0058e78f  83ee01               sub esi, 1
// 0058e792  75b2                 jne 0x58e746
// 0058e794  5e                   pop esi
// 0058e795  5b                   pop ebx
// 0058e796  c3                   ret 
// 0058e797  80f904               cmp cl, 4
// 0058e79a  7560                 jne 0x58e7fc
// 0058e79c  80780908             cmp byte ptr [eax + 9], 8
// 0058e7a0  7523                 jne 0x58e7c5
// 0058e7a2  8b10                 mov edx, dword ptr [eax]
// 0058e7a4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058e7a8  8bc8                 mov ecx, eax
// 0058e7aa  85d2                 test edx, edx
// 0058e7ac  764e                 jbe 0x58e7fc
// 0058e7ae  8bf2                 mov esi, edx
// 0058e7b0  8a10                 mov dl, byte ptr [eax]
// 0058e7b2  8a5801               mov bl, byte ptr [eax + 1]
// 0058e7b5  40                   inc eax
// 0058e7b6  8819                 mov byte ptr [ecx], bl
// 0058e7b8  41                   inc ecx
// 0058e7b9  8811                 mov byte ptr [ecx], dl
// 0058e7bb  40                   inc eax
// 0058e7bc  41                   inc ecx
// 0058e7bd  83ee01               sub esi, 1
// 0058e7c0  75ee                 jne 0x58e7b0
// 0058e7c2  5e                   pop esi
// 0058e7c3  5b                   pop ebx
// 0058e7c4  c3                   ret 
// 0058e7c5  8b30                 mov esi, dword ptr [eax]
// 0058e7c7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058e7cb  8bc8                 mov ecx, eax
// 0058e7cd  85f6                 test esi, esi
// 0058e7cf  762b                 jbe 0x58e7fc
// 0058e7d1  8a10                 mov dl, byte ptr [eax]
// 0058e7d3  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e7d7  40                   inc eax
// 0058e7d8  40                   inc eax
// 0058e7d9  885c240d             mov byte ptr [esp + 0xd], bl
// 0058e7dd  0fb618               movzx ebx, byte ptr [eax]
// 0058e7e0  8819                 mov byte ptr [ecx], bl
// 0058e7e2  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058e7e6  40                   inc eax
// 0058e7e7  41                   inc ecx
// 0058e7e8  8819                 mov byte ptr [ecx], bl
// 0058e7ea  41                   inc ecx
// 0058e7eb  8811                 mov byte ptr [ecx], dl
// 0058e7ed  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0058e7f2  41                   inc ecx
// 0058e7f3  8811                 mov byte ptr [ecx], dl
// 0058e7f5  40                   inc eax
// 0058e7f6  41                   inc ecx
// 0058e7f7  83ee01               sub esi, 1
// 0058e7fa  75d5                 jne 0x58e7d1
// 0058e7fc  5e                   pop esi
// 0058e7fd  5b                   pop ebx
// 0058e7fe  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
