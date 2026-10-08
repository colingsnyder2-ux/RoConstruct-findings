// from server: 100% by auto
// roc 2008-06 00520740  unit: seg_00520000  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520740
//
// 00520740  8b442404             mov eax, dword ptr [esp + 4]
// 00520744  8a4808               mov cl, byte ptr [eax + 8]
// 00520747  8b10                 mov edx, dword ptr [eax]
// 00520749  53                   push ebx
// 0052074a  56                   push esi
// 0052074b  80f906               cmp cl, 6
// 0052074e  0f85a7000000         jne 0x5207fb
// 00520754  80780908             cmp byte ptr [eax + 9], 8
// 00520758  8b4004               mov eax, dword ptr [eax + 4]
// 0052075b  753b                 jne 0x520798
// 0052075d  03442410             add eax, dword ptr [esp + 0x10]
// 00520761  8bc8                 mov ecx, eax
// 00520763  85d2                 test edx, edx
// 00520765  0f86f8000000         jbe 0x520863
// 0052076b  8bf2                 mov esi, edx
// 0052076d  8d4900               lea ecx, [ecx]
// 00520770  8a50ff               mov dl, byte ptr [eax - 1]
// 00520773  48                   dec eax
// 00520774  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00520778  48                   dec eax
// 00520779  8859ff               mov byte ptr [ecx - 1], bl
// 0052077c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00520780  49                   dec ecx
// 00520781  48                   dec eax
// 00520782  49                   dec ecx
// 00520783  8819                 mov byte ptr [ecx], bl
// 00520785  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00520789  48                   dec eax
// 0052078a  49                   dec ecx
// 0052078b  8819                 mov byte ptr [ecx], bl
// 0052078d  49                   dec ecx
// 0052078e  83ee01               sub esi, 1
// 00520791  8811                 mov byte ptr [ecx], dl
// 00520793  75db                 jne 0x520770
// 00520795  5e                   pop esi
// 00520796  5b                   pop ebx
// 00520797  c3                   ret 
// 00520798  03442410             add eax, dword ptr [esp + 0x10]
// 0052079c  8bc8                 mov ecx, eax
// 0052079e  85d2                 test edx, edx
// 005207a0  0f86bd000000         jbe 0x520863
// 005207a6  8bf2                 mov esi, edx
// 005207a8  8a50ff               mov dl, byte ptr [eax - 1]
// 005207ab  48                   dec eax
// 005207ac  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005207b0  48                   dec eax
// 005207b1  48                   dec eax
// 005207b2  885c240d             mov byte ptr [esp + 0xd], bl
// 005207b6  0fb618               movzx ebx, byte ptr [eax]
// 005207b9  8859ff               mov byte ptr [ecx - 1], bl
// 005207bc  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005207c0  49                   dec ecx
// 005207c1  8859ff               mov byte ptr [ecx - 1], bl
// 005207c4  48                   dec eax
// 005207c5  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005207c9  49                   dec ecx
// 005207ca  8859ff               mov byte ptr [ecx - 1], bl
// 005207cd  48                   dec eax
// 005207ce  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005207d2  49                   dec ecx
// 005207d3  48                   dec eax
// 005207d4  8859ff               mov byte ptr [ecx - 1], bl
// 005207d7  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005207db  49                   dec ecx
// 005207dc  48                   dec eax
// 005207dd  49                   dec ecx
// 005207de  8819                 mov byte ptr [ecx], bl
// 005207e0  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005207e4  48                   dec eax
// 005207e5  49                   dec ecx
// 005207e6  8819                 mov byte ptr [ecx], bl
// 005207e8  49                   dec ecx
// 005207e9  8811                 mov byte ptr [ecx], dl
// 005207eb  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 005207f0  49                   dec ecx
// 005207f1  83ee01               sub esi, 1
// 005207f4  8811                 mov byte ptr [ecx], dl
// 005207f6  75b0                 jne 0x5207a8
// 005207f8  5e                   pop esi
// 005207f9  5b                   pop ebx
// 005207fa  c3                   ret 
// 005207fb  80f904               cmp cl, 4
// 005207fe  7563                 jne 0x520863
// 00520800  80780908             cmp byte ptr [eax + 9], 8
// 00520804  8b4004               mov eax, dword ptr [eax + 4]
// 00520807  7522                 jne 0x52082b
// 00520809  03442410             add eax, dword ptr [esp + 0x10]
// 0052080d  8bc8                 mov ecx, eax
// 0052080f  85d2                 test edx, edx
// 00520811  7650                 jbe 0x520863
// 00520813  8bf2                 mov esi, edx
// 00520815  8a50ff               mov dl, byte ptr [eax - 1]
// 00520818  48                   dec eax
// 00520819  8a58ff               mov bl, byte ptr [eax - 1]
// 0052081c  48                   dec eax
// 0052081d  49                   dec ecx
// 0052081e  8819                 mov byte ptr [ecx], bl
// 00520820  49                   dec ecx
// 00520821  83ee01               sub esi, 1
// 00520824  8811                 mov byte ptr [ecx], dl
// 00520826  75ed                 jne 0x520815
// 00520828  5e                   pop esi
// 00520829  5b                   pop ebx
// 0052082a  c3                   ret 
// 0052082b  03442410             add eax, dword ptr [esp + 0x10]
// 0052082f  8bc8                 mov ecx, eax
// 00520831  85d2                 test edx, edx
// 00520833  762e                 jbe 0x520863
// 00520835  8bf2                 mov esi, edx
// 00520837  8a50ff               mov dl, byte ptr [eax - 1]
// 0052083a  48                   dec eax
// 0052083b  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0052083f  48                   dec eax
// 00520840  48                   dec eax
// 00520841  885c240d             mov byte ptr [esp + 0xd], bl
// 00520845  0fb618               movzx ebx, byte ptr [eax]
// 00520848  49                   dec ecx
// 00520849  8819                 mov byte ptr [ecx], bl
// 0052084b  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0052084f  48                   dec eax
// 00520850  49                   dec ecx
// 00520851  8819                 mov byte ptr [ecx], bl
// 00520853  49                   dec ecx
// 00520854  8811                 mov byte ptr [ecx], dl
// 00520856  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 0052085b  49                   dec ecx
// 0052085c  83ee01               sub esi, 1
// 0052085f  8811                 mov byte ptr [ecx], dl
// 00520861  75d4                 jne 0x520837
// 00520863  5e                   pop esi
// 00520864  5b                   pop ebx
// 00520865  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
