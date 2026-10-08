// roc 2009-12 00606580  unit: seg_00600000  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00606580
//
// 00606580  8b442404             mov eax, dword ptr [esp + 4]
// 00606584  8a4808               mov cl, byte ptr [eax + 8]
// 00606587  8b10                 mov edx, dword ptr [eax]
// 00606589  53                   push ebx
// 0060658a  56                   push esi
// 0060658b  80f906               cmp cl, 6
// 0060658e  0f85a7000000         jne 0x60663b
// 00606594  80780908             cmp byte ptr [eax + 9], 8
// 00606598  8b4004               mov eax, dword ptr [eax + 4]
// 0060659b  753b                 jne 0x6065d8
// 0060659d  03442410             add eax, dword ptr [esp + 0x10]
// 006065a1  8bc8                 mov ecx, eax
// 006065a3  85d2                 test edx, edx
// 006065a5  0f86f8000000         jbe 0x6066a3
// 006065ab  8bf2                 mov esi, edx
// 006065ad  8d4900               lea ecx, [ecx]
// 006065b0  8a50ff               mov dl, byte ptr [eax - 1]
// 006065b3  48                   dec eax
// 006065b4  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 006065b8  48                   dec eax
// 006065b9  8859ff               mov byte ptr [ecx - 1], bl
// 006065bc  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 006065c0  49                   dec ecx
// 006065c1  48                   dec eax
// 006065c2  49                   dec ecx
// 006065c3  8819                 mov byte ptr [ecx], bl
// 006065c5  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 006065c9  48                   dec eax
// 006065ca  49                   dec ecx
// 006065cb  8819                 mov byte ptr [ecx], bl
// 006065cd  49                   dec ecx
// 006065ce  83ee01               sub esi, 1
// 006065d1  8811                 mov byte ptr [ecx], dl
// 006065d3  75db                 jne 0x6065b0
// 006065d5  5e                   pop esi
// 006065d6  5b                   pop ebx
// 006065d7  c3                   ret 
// 006065d8  03442410             add eax, dword ptr [esp + 0x10]
// 006065dc  8bc8                 mov ecx, eax
// 006065de  85d2                 test edx, edx
// 006065e0  0f86bd000000         jbe 0x6066a3
// 006065e6  8bf2                 mov esi, edx
// 006065e8  8a50ff               mov dl, byte ptr [eax - 1]
// 006065eb  48                   dec eax
// 006065ec  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 006065f0  48                   dec eax
// 006065f1  48                   dec eax
// 006065f2  885c240d             mov byte ptr [esp + 0xd], bl
// 006065f6  0fb618               movzx ebx, byte ptr [eax]
// 006065f9  8859ff               mov byte ptr [ecx - 1], bl
// 006065fc  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00606600  49                   dec ecx
// 00606601  8859ff               mov byte ptr [ecx - 1], bl
// 00606604  48                   dec eax
// 00606605  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00606609  49                   dec ecx
// 0060660a  8859ff               mov byte ptr [ecx - 1], bl
// 0060660d  48                   dec eax
// 0060660e  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00606612  49                   dec ecx
// 00606613  48                   dec eax
// 00606614  8859ff               mov byte ptr [ecx - 1], bl
// 00606617  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0060661b  49                   dec ecx
// 0060661c  48                   dec eax
// 0060661d  49                   dec ecx
// 0060661e  8819                 mov byte ptr [ecx], bl
// 00606620  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00606624  48                   dec eax
// 00606625  49                   dec ecx
// 00606626  8819                 mov byte ptr [ecx], bl
// 00606628  49                   dec ecx
// 00606629  8811                 mov byte ptr [ecx], dl
// 0060662b  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00606630  49                   dec ecx
// 00606631  83ee01               sub esi, 1
// 00606634  8811                 mov byte ptr [ecx], dl
// 00606636  75b0                 jne 0x6065e8
// 00606638  5e                   pop esi
// 00606639  5b                   pop ebx
// 0060663a  c3                   ret 
// 0060663b  80f904               cmp cl, 4
// 0060663e  7563                 jne 0x6066a3
// 00606640  80780908             cmp byte ptr [eax + 9], 8
// 00606644  8b4004               mov eax, dword ptr [eax + 4]
// 00606647  7522                 jne 0x60666b
// 00606649  03442410             add eax, dword ptr [esp + 0x10]
// 0060664d  8bc8                 mov ecx, eax
// 0060664f  85d2                 test edx, edx
// 00606651  7650                 jbe 0x6066a3
// 00606653  8bf2                 mov esi, edx
// 00606655  8a50ff               mov dl, byte ptr [eax - 1]
// 00606658  48                   dec eax
// 00606659  8a58ff               mov bl, byte ptr [eax - 1]
// 0060665c  48                   dec eax
// 0060665d  49                   dec ecx
// 0060665e  8819                 mov byte ptr [ecx], bl
// 00606660  49                   dec ecx
// 00606661  83ee01               sub esi, 1
// 00606664  8811                 mov byte ptr [ecx], dl
// 00606666  75ed                 jne 0x606655
// 00606668  5e                   pop esi
// 00606669  5b                   pop ebx
// 0060666a  c3                   ret 
// 0060666b  03442410             add eax, dword ptr [esp + 0x10]
// 0060666f  8bc8                 mov ecx, eax
// 00606671  85d2                 test edx, edx
// 00606673  762e                 jbe 0x6066a3
// 00606675  8bf2                 mov esi, edx
// 00606677  8a50ff               mov dl, byte ptr [eax - 1]
// 0060667a  48                   dec eax
// 0060667b  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0060667f  48                   dec eax
// 00606680  48                   dec eax
// 00606681  885c240d             mov byte ptr [esp + 0xd], bl
// 00606685  0fb618               movzx ebx, byte ptr [eax]
// 00606688  49                   dec ecx
// 00606689  8819                 mov byte ptr [ecx], bl
// 0060668b  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0060668f  48                   dec eax
// 00606690  49                   dec ecx
// 00606691  8819                 mov byte ptr [ecx], bl
// 00606693  49                   dec ecx
// 00606694  8811                 mov byte ptr [ecx], dl
// 00606696  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0060669b  49                   dec ecx
// 0060669c  83ee01               sub esi, 1
// 0060669f  8811                 mov byte ptr [ecx], dl
// 006066a1  75d4                 jne 0x606677
// 006066a3  5e                   pop esi
// 006066a4  5b                   pop ebx
// 006066a5  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
