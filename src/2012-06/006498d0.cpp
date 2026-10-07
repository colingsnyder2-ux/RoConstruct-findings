// roc 2012-06 006498d0  unit: seg_00640000  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006498d0
//
// 006498d0  8b442404             mov eax, dword ptr [esp + 4]
// 006498d4  8a4808               mov cl, byte ptr [eax + 8]
// 006498d7  8b10                 mov edx, dword ptr [eax]
// 006498d9  53                   push ebx
// 006498da  56                   push esi
// 006498db  80f906               cmp cl, 6
// 006498de  0f85a7000000         jne 0x64998b
// 006498e4  80780908             cmp byte ptr [eax + 9], 8
// 006498e8  8b4004               mov eax, dword ptr [eax + 4]
// 006498eb  753b                 jne 0x649928
// 006498ed  03442410             add eax, dword ptr [esp + 0x10]
// 006498f1  8bc8                 mov ecx, eax
// 006498f3  85d2                 test edx, edx
// 006498f5  0f86f8000000         jbe 0x6499f3
// 006498fb  8bf2                 mov esi, edx
// 006498fd  8d4900               lea ecx, [ecx]
// 00649900  8a50ff               mov dl, byte ptr [eax - 1]
// 00649903  48                   dec eax
// 00649904  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00649908  48                   dec eax
// 00649909  8859ff               mov byte ptr [ecx - 1], bl
// 0064990c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00649910  49                   dec ecx
// 00649911  48                   dec eax
// 00649912  49                   dec ecx
// 00649913  8819                 mov byte ptr [ecx], bl
// 00649915  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00649919  48                   dec eax
// 0064991a  49                   dec ecx
// 0064991b  8819                 mov byte ptr [ecx], bl
// 0064991d  49                   dec ecx
// 0064991e  83ee01               sub esi, 1
// 00649921  8811                 mov byte ptr [ecx], dl
// 00649923  75db                 jne 0x649900
// 00649925  5e                   pop esi
// 00649926  5b                   pop ebx
// 00649927  c3                   ret 
// 00649928  03442410             add eax, dword ptr [esp + 0x10]
// 0064992c  8bc8                 mov ecx, eax
// 0064992e  85d2                 test edx, edx
// 00649930  0f86bd000000         jbe 0x6499f3
// 00649936  8bf2                 mov esi, edx
// 00649938  8a50ff               mov dl, byte ptr [eax - 1]
// 0064993b  48                   dec eax
// 0064993c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00649940  48                   dec eax
// 00649941  48                   dec eax
// 00649942  885c240d             mov byte ptr [esp + 0xd], bl
// 00649946  0fb618               movzx ebx, byte ptr [eax]
// 00649949  8859ff               mov byte ptr [ecx - 1], bl
// 0064994c  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00649950  49                   dec ecx
// 00649951  8859ff               mov byte ptr [ecx - 1], bl
// 00649954  48                   dec eax
// 00649955  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00649959  49                   dec ecx
// 0064995a  8859ff               mov byte ptr [ecx - 1], bl
// 0064995d  48                   dec eax
// 0064995e  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00649962  49                   dec ecx
// 00649963  48                   dec eax
// 00649964  8859ff               mov byte ptr [ecx - 1], bl
// 00649967  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0064996b  49                   dec ecx
// 0064996c  48                   dec eax
// 0064996d  49                   dec ecx
// 0064996e  8819                 mov byte ptr [ecx], bl
// 00649970  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00649974  48                   dec eax
// 00649975  49                   dec ecx
// 00649976  8819                 mov byte ptr [ecx], bl
// 00649978  49                   dec ecx
// 00649979  8811                 mov byte ptr [ecx], dl
// 0064997b  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00649980  49                   dec ecx
// 00649981  83ee01               sub esi, 1
// 00649984  8811                 mov byte ptr [ecx], dl
// 00649986  75b0                 jne 0x649938
// 00649988  5e                   pop esi
// 00649989  5b                   pop ebx
// 0064998a  c3                   ret 
// 0064998b  80f904               cmp cl, 4
// 0064998e  7563                 jne 0x6499f3
// 00649990  80780908             cmp byte ptr [eax + 9], 8
// 00649994  8b4004               mov eax, dword ptr [eax + 4]
// 00649997  7522                 jne 0x6499bb
// 00649999  03442410             add eax, dword ptr [esp + 0x10]
// 0064999d  8bc8                 mov ecx, eax
// 0064999f  85d2                 test edx, edx
// 006499a1  7650                 jbe 0x6499f3
// 006499a3  8bf2                 mov esi, edx
// 006499a5  8a50ff               mov dl, byte ptr [eax - 1]
// 006499a8  48                   dec eax
// 006499a9  8a58ff               mov bl, byte ptr [eax - 1]
// 006499ac  48                   dec eax
// 006499ad  49                   dec ecx
// 006499ae  8819                 mov byte ptr [ecx], bl
// 006499b0  49                   dec ecx
// 006499b1  83ee01               sub esi, 1
// 006499b4  8811                 mov byte ptr [ecx], dl
// 006499b6  75ed                 jne 0x6499a5
// 006499b8  5e                   pop esi
// 006499b9  5b                   pop ebx
// 006499ba  c3                   ret 
// 006499bb  03442410             add eax, dword ptr [esp + 0x10]
// 006499bf  8bc8                 mov ecx, eax
// 006499c1  85d2                 test edx, edx
// 006499c3  762e                 jbe 0x6499f3
// 006499c5  8bf2                 mov esi, edx
// 006499c7  8a50ff               mov dl, byte ptr [eax - 1]
// 006499ca  48                   dec eax
// 006499cb  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 006499cf  48                   dec eax
// 006499d0  48                   dec eax
// 006499d1  885c240d             mov byte ptr [esp + 0xd], bl
// 006499d5  0fb618               movzx ebx, byte ptr [eax]
// 006499d8  49                   dec ecx
// 006499d9  8819                 mov byte ptr [ecx], bl
// 006499db  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 006499df  48                   dec eax
// 006499e0  49                   dec ecx
// 006499e1  8819                 mov byte ptr [ecx], bl
// 006499e3  49                   dec ecx
// 006499e4  8811                 mov byte ptr [ecx], dl
// 006499e6  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 006499eb  49                   dec ecx
// 006499ec  83ee01               sub esi, 1
// 006499ef  8811                 mov byte ptr [ecx], dl
// 006499f1  75d4                 jne 0x6499c7
// 006499f3  5e                   pop esi
// 006499f4  5b                   pop ebx
// 006499f5  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
