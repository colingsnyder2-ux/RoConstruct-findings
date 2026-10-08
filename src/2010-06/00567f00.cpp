// from server: 100% by auto
// roc 2010-06 00567f00  unit: seg_00560000  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00567f00
//
// 00567f00  8b442404             mov eax, dword ptr [esp + 4]
// 00567f04  8a4808               mov cl, byte ptr [eax + 8]
// 00567f07  8b10                 mov edx, dword ptr [eax]
// 00567f09  53                   push ebx
// 00567f0a  56                   push esi
// 00567f0b  80f906               cmp cl, 6
// 00567f0e  0f85a7000000         jne 0x567fbb
// 00567f14  80780908             cmp byte ptr [eax + 9], 8
// 00567f18  8b4004               mov eax, dword ptr [eax + 4]
// 00567f1b  753b                 jne 0x567f58
// 00567f1d  03442410             add eax, dword ptr [esp + 0x10]
// 00567f21  8bc8                 mov ecx, eax
// 00567f23  85d2                 test edx, edx
// 00567f25  0f86f8000000         jbe 0x568023
// 00567f2b  8bf2                 mov esi, edx
// 00567f2d  8d4900               lea ecx, [ecx]
// 00567f30  8a50ff               mov dl, byte ptr [eax - 1]
// 00567f33  48                   dec eax
// 00567f34  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567f38  48                   dec eax
// 00567f39  8859ff               mov byte ptr [ecx - 1], bl
// 00567f3c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567f40  49                   dec ecx
// 00567f41  48                   dec eax
// 00567f42  49                   dec ecx
// 00567f43  8819                 mov byte ptr [ecx], bl
// 00567f45  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567f49  48                   dec eax
// 00567f4a  49                   dec ecx
// 00567f4b  8819                 mov byte ptr [ecx], bl
// 00567f4d  49                   dec ecx
// 00567f4e  83ee01               sub esi, 1
// 00567f51  8811                 mov byte ptr [ecx], dl
// 00567f53  75db                 jne 0x567f30
// 00567f55  5e                   pop esi
// 00567f56  5b                   pop ebx
// 00567f57  c3                   ret 
// 00567f58  03442410             add eax, dword ptr [esp + 0x10]
// 00567f5c  8bc8                 mov ecx, eax
// 00567f5e  85d2                 test edx, edx
// 00567f60  0f86bd000000         jbe 0x568023
// 00567f66  8bf2                 mov esi, edx
// 00567f68  8a50ff               mov dl, byte ptr [eax - 1]
// 00567f6b  48                   dec eax
// 00567f6c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567f70  48                   dec eax
// 00567f71  48                   dec eax
// 00567f72  885c240d             mov byte ptr [esp + 0xd], bl
// 00567f76  0fb618               movzx ebx, byte ptr [eax]
// 00567f79  8859ff               mov byte ptr [ecx - 1], bl
// 00567f7c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567f80  49                   dec ecx
// 00567f81  8859ff               mov byte ptr [ecx - 1], bl
// 00567f84  48                   dec eax
// 00567f85  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567f89  49                   dec ecx
// 00567f8a  8859ff               mov byte ptr [ecx - 1], bl
// 00567f8d  48                   dec eax
// 00567f8e  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567f92  49                   dec ecx
// 00567f93  48                   dec eax
// 00567f94  8859ff               mov byte ptr [ecx - 1], bl
// 00567f97  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567f9b  49                   dec ecx
// 00567f9c  48                   dec eax
// 00567f9d  49                   dec ecx
// 00567f9e  8819                 mov byte ptr [ecx], bl
// 00567fa0  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567fa4  48                   dec eax
// 00567fa5  49                   dec ecx
// 00567fa6  8819                 mov byte ptr [ecx], bl
// 00567fa8  49                   dec ecx
// 00567fa9  8811                 mov byte ptr [ecx], dl
// 00567fab  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00567fb0  49                   dec ecx
// 00567fb1  83ee01               sub esi, 1
// 00567fb4  8811                 mov byte ptr [ecx], dl
// 00567fb6  75b0                 jne 0x567f68
// 00567fb8  5e                   pop esi
// 00567fb9  5b                   pop ebx
// 00567fba  c3                   ret 
// 00567fbb  80f904               cmp cl, 4
// 00567fbe  7563                 jne 0x568023
// 00567fc0  80780908             cmp byte ptr [eax + 9], 8
// 00567fc4  8b4004               mov eax, dword ptr [eax + 4]
// 00567fc7  7522                 jne 0x567feb
// 00567fc9  03442410             add eax, dword ptr [esp + 0x10]
// 00567fcd  8bc8                 mov ecx, eax
// 00567fcf  85d2                 test edx, edx
// 00567fd1  7650                 jbe 0x568023
// 00567fd3  8bf2                 mov esi, edx
// 00567fd5  8a50ff               mov dl, byte ptr [eax - 1]
// 00567fd8  48                   dec eax
// 00567fd9  8a58ff               mov bl, byte ptr [eax - 1]
// 00567fdc  48                   dec eax
// 00567fdd  49                   dec ecx
// 00567fde  8819                 mov byte ptr [ecx], bl
// 00567fe0  49                   dec ecx
// 00567fe1  83ee01               sub esi, 1
// 00567fe4  8811                 mov byte ptr [ecx], dl
// 00567fe6  75ed                 jne 0x567fd5
// 00567fe8  5e                   pop esi
// 00567fe9  5b                   pop ebx
// 00567fea  c3                   ret 
// 00567feb  03442410             add eax, dword ptr [esp + 0x10]
// 00567fef  8bc8                 mov ecx, eax
// 00567ff1  85d2                 test edx, edx
// 00567ff3  762e                 jbe 0x568023
// 00567ff5  8bf2                 mov esi, edx
// 00567ff7  8a50ff               mov dl, byte ptr [eax - 1]
// 00567ffa  48                   dec eax
// 00567ffb  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00567fff  48                   dec eax
// 00568000  48                   dec eax
// 00568001  885c240d             mov byte ptr [esp + 0xd], bl
// 00568005  0fb618               movzx ebx, byte ptr [eax]
// 00568008  49                   dec ecx
// 00568009  8819                 mov byte ptr [ecx], bl
// 0056800b  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0056800f  48                   dec eax
// 00568010  49                   dec ecx
// 00568011  8819                 mov byte ptr [ecx], bl
// 00568013  49                   dec ecx
// 00568014  8811                 mov byte ptr [ecx], dl
// 00568016  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0056801b  49                   dec ecx
// 0056801c  83ee01               sub esi, 1
// 0056801f  8811                 mov byte ptr [ecx], dl
// 00568021  75d4                 jne 0x567ff7
// 00568023  5e                   pop esi
// 00568024  5b                   pop ebx
// 00568025  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
