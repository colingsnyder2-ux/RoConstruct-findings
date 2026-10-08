// from server: 100% by auto
// roc 2009-06 005847d0  unit: seg_00580000  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005847d0
//
// 005847d0  8b442404             mov eax, dword ptr [esp + 4]
// 005847d4  8a4808               mov cl, byte ptr [eax + 8]
// 005847d7  8b10                 mov edx, dword ptr [eax]
// 005847d9  53                   push ebx
// 005847da  56                   push esi
// 005847db  80f906               cmp cl, 6
// 005847de  0f85a7000000         jne 0x58488b
// 005847e4  80780908             cmp byte ptr [eax + 9], 8
// 005847e8  8b4004               mov eax, dword ptr [eax + 4]
// 005847eb  753b                 jne 0x584828
// 005847ed  03442410             add eax, dword ptr [esp + 0x10]
// 005847f1  8bc8                 mov ecx, eax
// 005847f3  85d2                 test edx, edx
// 005847f5  0f86f8000000         jbe 0x5848f3
// 005847fb  8bf2                 mov esi, edx
// 005847fd  8d4900               lea ecx, [ecx]
// 00584800  8a50ff               mov dl, byte ptr [eax - 1]
// 00584803  48                   dec eax
// 00584804  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00584808  48                   dec eax
// 00584809  8859ff               mov byte ptr [ecx - 1], bl
// 0058480c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00584810  49                   dec ecx
// 00584811  48                   dec eax
// 00584812  49                   dec ecx
// 00584813  8819                 mov byte ptr [ecx], bl
// 00584815  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00584819  48                   dec eax
// 0058481a  49                   dec ecx
// 0058481b  8819                 mov byte ptr [ecx], bl
// 0058481d  49                   dec ecx
// 0058481e  83ee01               sub esi, 1
// 00584821  8811                 mov byte ptr [ecx], dl
// 00584823  75db                 jne 0x584800
// 00584825  5e                   pop esi
// 00584826  5b                   pop ebx
// 00584827  c3                   ret 
// 00584828  03442410             add eax, dword ptr [esp + 0x10]
// 0058482c  8bc8                 mov ecx, eax
// 0058482e  85d2                 test edx, edx
// 00584830  0f86bd000000         jbe 0x5848f3
// 00584836  8bf2                 mov esi, edx
// 00584838  8a50ff               mov dl, byte ptr [eax - 1]
// 0058483b  48                   dec eax
// 0058483c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00584840  48                   dec eax
// 00584841  48                   dec eax
// 00584842  885c240d             mov byte ptr [esp + 0xd], bl
// 00584846  0fb618               movzx ebx, byte ptr [eax]
// 00584849  8859ff               mov byte ptr [ecx - 1], bl
// 0058484c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00584850  49                   dec ecx
// 00584851  8859ff               mov byte ptr [ecx - 1], bl
// 00584854  48                   dec eax
// 00584855  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00584859  49                   dec ecx
// 0058485a  8859ff               mov byte ptr [ecx - 1], bl
// 0058485d  48                   dec eax
// 0058485e  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00584862  49                   dec ecx
// 00584863  48                   dec eax
// 00584864  8859ff               mov byte ptr [ecx - 1], bl
// 00584867  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0058486b  49                   dec ecx
// 0058486c  48                   dec eax
// 0058486d  49                   dec ecx
// 0058486e  8819                 mov byte ptr [ecx], bl
// 00584870  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00584874  48                   dec eax
// 00584875  49                   dec ecx
// 00584876  8819                 mov byte ptr [ecx], bl
// 00584878  49                   dec ecx
// 00584879  8811                 mov byte ptr [ecx], dl
// 0058487b  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00584880  49                   dec ecx
// 00584881  83ee01               sub esi, 1
// 00584884  8811                 mov byte ptr [ecx], dl
// 00584886  75b0                 jne 0x584838
// 00584888  5e                   pop esi
// 00584889  5b                   pop ebx
// 0058488a  c3                   ret 
// 0058488b  80f904               cmp cl, 4
// 0058488e  7563                 jne 0x5848f3
// 00584890  80780908             cmp byte ptr [eax + 9], 8
// 00584894  8b4004               mov eax, dword ptr [eax + 4]
// 00584897  7522                 jne 0x5848bb
// 00584899  03442410             add eax, dword ptr [esp + 0x10]
// 0058489d  8bc8                 mov ecx, eax
// 0058489f  85d2                 test edx, edx
// 005848a1  7650                 jbe 0x5848f3
// 005848a3  8bf2                 mov esi, edx
// 005848a5  8a50ff               mov dl, byte ptr [eax - 1]
// 005848a8  48                   dec eax
// 005848a9  8a58ff               mov bl, byte ptr [eax - 1]
// 005848ac  48                   dec eax
// 005848ad  49                   dec ecx
// 005848ae  8819                 mov byte ptr [ecx], bl
// 005848b0  49                   dec ecx
// 005848b1  83ee01               sub esi, 1
// 005848b4  8811                 mov byte ptr [ecx], dl
// 005848b6  75ed                 jne 0x5848a5
// 005848b8  5e                   pop esi
// 005848b9  5b                   pop ebx
// 005848ba  c3                   ret 
// 005848bb  03442410             add eax, dword ptr [esp + 0x10]
// 005848bf  8bc8                 mov ecx, eax
// 005848c1  85d2                 test edx, edx
// 005848c3  762e                 jbe 0x5848f3
// 005848c5  8bf2                 mov esi, edx
// 005848c7  8a50ff               mov dl, byte ptr [eax - 1]
// 005848ca  48                   dec eax
// 005848cb  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005848cf  48                   dec eax
// 005848d0  48                   dec eax
// 005848d1  885c240d             mov byte ptr [esp + 0xd], bl
// 005848d5  0fb618               movzx ebx, byte ptr [eax]
// 005848d8  49                   dec ecx
// 005848d9  8819                 mov byte ptr [ecx], bl
// 005848db  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005848df  48                   dec eax
// 005848e0  49                   dec ecx
// 005848e1  8819                 mov byte ptr [ecx], bl
// 005848e3  49                   dec ecx
// 005848e4  8811                 mov byte ptr [ecx], dl
// 005848e6  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 005848eb  49                   dec ecx
// 005848ec  83ee01               sub esi, 1
// 005848ef  8811                 mov byte ptr [ecx], dl
// 005848f1  75d4                 jne 0x5848c7
// 005848f3  5e                   pop esi
// 005848f4  5b                   pop ebx
// 005848f5  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
