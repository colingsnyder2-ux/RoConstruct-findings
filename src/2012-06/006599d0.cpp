// from server: 100% by auto
// roc 2012-06 006599d0  unit: seg_00650000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006599d0
//
// 006599d0  8b442404             mov eax, dword ptr [esp + 4]
// 006599d4  8a4808               mov cl, byte ptr [eax + 8]
// 006599d7  53                   push ebx
// 006599d8  56                   push esi
// 006599d9  80f906               cmp cl, 6
// 006599dc  0f85a5000000         jne 0x659a87
// 006599e2  80780908             cmp byte ptr [eax + 9], 8
// 006599e6  753e                 jne 0x659a26
// 006599e8  8b10                 mov edx, dword ptr [eax]
// 006599ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 006599ee  8bc8                 mov ecx, eax
// 006599f0  85d2                 test edx, edx
// 006599f2  0f86f4000000         jbe 0x659aec
// 006599f8  8bf2                 mov esi, edx
// 006599fa  8d9b00000000         lea ebx, [ebx]
// 00659a00  8a10                 mov dl, byte ptr [eax]
// 00659a02  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a06  40                   inc eax
// 00659a07  8819                 mov byte ptr [ecx], bl
// 00659a09  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a0d  40                   inc eax
// 00659a0e  41                   inc ecx
// 00659a0f  8819                 mov byte ptr [ecx], bl
// 00659a11  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a15  40                   inc eax
// 00659a16  41                   inc ecx
// 00659a17  8819                 mov byte ptr [ecx], bl
// 00659a19  41                   inc ecx
// 00659a1a  8811                 mov byte ptr [ecx], dl
// 00659a1c  40                   inc eax
// 00659a1d  41                   inc ecx
// 00659a1e  83ee01               sub esi, 1
// 00659a21  75dd                 jne 0x659a00
// 00659a23  5e                   pop esi
// 00659a24  5b                   pop ebx
// 00659a25  c3                   ret 
// 00659a26  8b30                 mov esi, dword ptr [eax]
// 00659a28  8b442410             mov eax, dword ptr [esp + 0x10]
// 00659a2c  8bc8                 mov ecx, eax
// 00659a2e  85f6                 test esi, esi
// 00659a30  0f86b6000000         jbe 0x659aec
// 00659a36  8a10                 mov dl, byte ptr [eax]
// 00659a38  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a3c  40                   inc eax
// 00659a3d  40                   inc eax
// 00659a3e  885c240d             mov byte ptr [esp + 0xd], bl
// 00659a42  0fb618               movzx ebx, byte ptr [eax]
// 00659a45  8819                 mov byte ptr [ecx], bl
// 00659a47  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a4b  885901               mov byte ptr [ecx + 1], bl
// 00659a4e  40                   inc eax
// 00659a4f  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a53  41                   inc ecx
// 00659a54  885901               mov byte ptr [ecx + 1], bl
// 00659a57  40                   inc eax
// 00659a58  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a5c  41                   inc ecx
// 00659a5d  40                   inc eax
// 00659a5e  885901               mov byte ptr [ecx + 1], bl
// 00659a61  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a65  41                   inc ecx
// 00659a66  40                   inc eax
// 00659a67  41                   inc ecx
// 00659a68  8819                 mov byte ptr [ecx], bl
// 00659a6a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659a6e  40                   inc eax
// 00659a6f  41                   inc ecx
// 00659a70  8819                 mov byte ptr [ecx], bl
// 00659a72  41                   inc ecx
// 00659a73  8811                 mov byte ptr [ecx], dl
// 00659a75  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00659a7a  41                   inc ecx
// 00659a7b  8811                 mov byte ptr [ecx], dl
// 00659a7d  40                   inc eax
// 00659a7e  41                   inc ecx
// 00659a7f  83ee01               sub esi, 1
// 00659a82  75b2                 jne 0x659a36
// 00659a84  5e                   pop esi
// 00659a85  5b                   pop ebx
// 00659a86  c3                   ret 
// 00659a87  80f904               cmp cl, 4
// 00659a8a  7560                 jne 0x659aec
// 00659a8c  80780908             cmp byte ptr [eax + 9], 8
// 00659a90  7523                 jne 0x659ab5
// 00659a92  8b10                 mov edx, dword ptr [eax]
// 00659a94  8b442410             mov eax, dword ptr [esp + 0x10]
// 00659a98  8bc8                 mov ecx, eax
// 00659a9a  85d2                 test edx, edx
// 00659a9c  764e                 jbe 0x659aec
// 00659a9e  8bf2                 mov esi, edx
// 00659aa0  8a10                 mov dl, byte ptr [eax]
// 00659aa2  8a5801               mov bl, byte ptr [eax + 1]
// 00659aa5  40                   inc eax
// 00659aa6  8819                 mov byte ptr [ecx], bl
// 00659aa8  41                   inc ecx
// 00659aa9  8811                 mov byte ptr [ecx], dl
// 00659aab  40                   inc eax
// 00659aac  41                   inc ecx
// 00659aad  83ee01               sub esi, 1
// 00659ab0  75ee                 jne 0x659aa0
// 00659ab2  5e                   pop esi
// 00659ab3  5b                   pop ebx
// 00659ab4  c3                   ret 
// 00659ab5  8b30                 mov esi, dword ptr [eax]
// 00659ab7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00659abb  8bc8                 mov ecx, eax
// 00659abd  85f6                 test esi, esi
// 00659abf  762b                 jbe 0x659aec
// 00659ac1  8a10                 mov dl, byte ptr [eax]
// 00659ac3  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659ac7  40                   inc eax
// 00659ac8  40                   inc eax
// 00659ac9  885c240d             mov byte ptr [esp + 0xd], bl
// 00659acd  0fb618               movzx ebx, byte ptr [eax]
// 00659ad0  8819                 mov byte ptr [ecx], bl
// 00659ad2  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00659ad6  40                   inc eax
// 00659ad7  41                   inc ecx
// 00659ad8  8819                 mov byte ptr [ecx], bl
// 00659ada  41                   inc ecx
// 00659adb  8811                 mov byte ptr [ecx], dl
// 00659add  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00659ae2  41                   inc ecx
// 00659ae3  8811                 mov byte ptr [ecx], dl
// 00659ae5  40                   inc eax
// 00659ae6  41                   inc ecx
// 00659ae7  83ee01               sub esi, 1
// 00659aea  75d5                 jne 0x659ac1
// 00659aec  5e                   pop esi
// 00659aed  5b                   pop ebx
// 00659aee  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
