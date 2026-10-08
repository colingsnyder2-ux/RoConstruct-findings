// from server: 100% by auto
// roc 2011-06 0055ca50  unit: seg_00550000  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055ca50
//
// 0055ca50  8b442404             mov eax, dword ptr [esp + 4]
// 0055ca54  8a4808               mov cl, byte ptr [eax + 8]
// 0055ca57  8b10                 mov edx, dword ptr [eax]
// 0055ca59  53                   push ebx
// 0055ca5a  56                   push esi
// 0055ca5b  80f906               cmp cl, 6
// 0055ca5e  0f85a7000000         jne 0x55cb0b
// 0055ca64  80780908             cmp byte ptr [eax + 9], 8
// 0055ca68  8b4004               mov eax, dword ptr [eax + 4]
// 0055ca6b  753b                 jne 0x55caa8
// 0055ca6d  03442410             add eax, dword ptr [esp + 0x10]
// 0055ca71  8bc8                 mov ecx, eax
// 0055ca73  85d2                 test edx, edx
// 0055ca75  0f86f8000000         jbe 0x55cb73
// 0055ca7b  8bf2                 mov esi, edx
// 0055ca7d  8d4900               lea ecx, [ecx]
// 0055ca80  8a50ff               mov dl, byte ptr [eax - 1]
// 0055ca83  48                   dec eax
// 0055ca84  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055ca88  48                   dec eax
// 0055ca89  8859ff               mov byte ptr [ecx - 1], bl
// 0055ca8c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055ca90  49                   dec ecx
// 0055ca91  48                   dec eax
// 0055ca92  49                   dec ecx
// 0055ca93  8819                 mov byte ptr [ecx], bl
// 0055ca95  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055ca99  48                   dec eax
// 0055ca9a  49                   dec ecx
// 0055ca9b  8819                 mov byte ptr [ecx], bl
// 0055ca9d  49                   dec ecx
// 0055ca9e  83ee01               sub esi, 1
// 0055caa1  8811                 mov byte ptr [ecx], dl
// 0055caa3  75db                 jne 0x55ca80
// 0055caa5  5e                   pop esi
// 0055caa6  5b                   pop ebx
// 0055caa7  c3                   ret 
// 0055caa8  03442410             add eax, dword ptr [esp + 0x10]
// 0055caac  8bc8                 mov ecx, eax
// 0055caae  85d2                 test edx, edx
// 0055cab0  0f86bd000000         jbe 0x55cb73
// 0055cab6  8bf2                 mov esi, edx
// 0055cab8  8a50ff               mov dl, byte ptr [eax - 1]
// 0055cabb  48                   dec eax
// 0055cabc  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055cac0  48                   dec eax
// 0055cac1  48                   dec eax
// 0055cac2  885c240d             mov byte ptr [esp + 0xd], bl
// 0055cac6  0fb618               movzx ebx, byte ptr [eax]
// 0055cac9  8859ff               mov byte ptr [ecx - 1], bl
// 0055cacc  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055cad0  49                   dec ecx
// 0055cad1  8859ff               mov byte ptr [ecx - 1], bl
// 0055cad4  48                   dec eax
// 0055cad5  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055cad9  49                   dec ecx
// 0055cada  8859ff               mov byte ptr [ecx - 1], bl
// 0055cadd  48                   dec eax
// 0055cade  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055cae2  49                   dec ecx
// 0055cae3  48                   dec eax
// 0055cae4  8859ff               mov byte ptr [ecx - 1], bl
// 0055cae7  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055caeb  49                   dec ecx
// 0055caec  48                   dec eax
// 0055caed  49                   dec ecx
// 0055caee  8819                 mov byte ptr [ecx], bl
// 0055caf0  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055caf4  48                   dec eax
// 0055caf5  49                   dec ecx
// 0055caf6  8819                 mov byte ptr [ecx], bl
// 0055caf8  49                   dec ecx
// 0055caf9  8811                 mov byte ptr [ecx], dl
// 0055cafb  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0055cb00  49                   dec ecx
// 0055cb01  83ee01               sub esi, 1
// 0055cb04  8811                 mov byte ptr [ecx], dl
// 0055cb06  75b0                 jne 0x55cab8
// 0055cb08  5e                   pop esi
// 0055cb09  5b                   pop ebx
// 0055cb0a  c3                   ret 
// 0055cb0b  80f904               cmp cl, 4
// 0055cb0e  7563                 jne 0x55cb73
// 0055cb10  80780908             cmp byte ptr [eax + 9], 8
// 0055cb14  8b4004               mov eax, dword ptr [eax + 4]
// 0055cb17  7522                 jne 0x55cb3b
// 0055cb19  03442410             add eax, dword ptr [esp + 0x10]
// 0055cb1d  8bc8                 mov ecx, eax
// 0055cb1f  85d2                 test edx, edx
// 0055cb21  7650                 jbe 0x55cb73
// 0055cb23  8bf2                 mov esi, edx
// 0055cb25  8a50ff               mov dl, byte ptr [eax - 1]
// 0055cb28  48                   dec eax
// 0055cb29  8a58ff               mov bl, byte ptr [eax - 1]
// 0055cb2c  48                   dec eax
// 0055cb2d  49                   dec ecx
// 0055cb2e  8819                 mov byte ptr [ecx], bl
// 0055cb30  49                   dec ecx
// 0055cb31  83ee01               sub esi, 1
// 0055cb34  8811                 mov byte ptr [ecx], dl
// 0055cb36  75ed                 jne 0x55cb25
// 0055cb38  5e                   pop esi
// 0055cb39  5b                   pop ebx
// 0055cb3a  c3                   ret 
// 0055cb3b  03442410             add eax, dword ptr [esp + 0x10]
// 0055cb3f  8bc8                 mov ecx, eax
// 0055cb41  85d2                 test edx, edx
// 0055cb43  762e                 jbe 0x55cb73
// 0055cb45  8bf2                 mov esi, edx
// 0055cb47  8a50ff               mov dl, byte ptr [eax - 1]
// 0055cb4a  48                   dec eax
// 0055cb4b  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055cb4f  48                   dec eax
// 0055cb50  48                   dec eax
// 0055cb51  885c240d             mov byte ptr [esp + 0xd], bl
// 0055cb55  0fb618               movzx ebx, byte ptr [eax]
// 0055cb58  49                   dec ecx
// 0055cb59  8819                 mov byte ptr [ecx], bl
// 0055cb5b  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0055cb5f  48                   dec eax
// 0055cb60  49                   dec ecx
// 0055cb61  8819                 mov byte ptr [ecx], bl
// 0055cb63  49                   dec ecx
// 0055cb64  8811                 mov byte ptr [ecx], dl
// 0055cb66  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0055cb6b  49                   dec ecx
// 0055cb6c  83ee01               sub esi, 1
// 0055cb6f  8811                 mov byte ptr [ecx], dl
// 0055cb71  75d4                 jne 0x55cb47
// 0055cb73  5e                   pop esi
// 0055cb74  5b                   pop ebx
// 0055cb75  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
