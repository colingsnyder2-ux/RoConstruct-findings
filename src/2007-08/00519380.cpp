// roc 2007-08 00519380  unit: seg_00510000  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00519380
//
// 00519380  8b442404             mov eax, dword ptr [esp + 4]
// 00519384  8a4808               mov cl, byte ptr [eax + 8]
// 00519387  80f906               cmp cl, 6
// 0051938a  8b10                 mov edx, dword ptr [eax]
// 0051938c  53                   push ebx
// 0051938d  56                   push esi
// 0051938e  0f85df000000         jne 0x519473
// 00519394  80780908             cmp byte ptr [eax + 9], 8
// 00519398  8b4004               mov eax, dword ptr [eax + 4]
// 0051939b  754b                 jne 0x5193e8
// 0051939d  03442410             add eax, dword ptr [esp + 0x10]
// 005193a1  85d2                 test edx, edx
// 005193a3  8bc8                 mov ecx, eax
// 005193a5  0f8651010000         jbe 0x5194fc
// 005193ab  8bf2                 mov esi, edx
// 005193ad  8d4900               lea ecx, [ecx]
// 005193b0  8a50ff               mov dl, byte ptr [eax - 1]
// 005193b3  83e801               sub eax, 1
// 005193b6  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005193ba  83e801               sub eax, 1
// 005193bd  8859ff               mov byte ptr [ecx - 1], bl
// 005193c0  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005193c4  83e901               sub ecx, 1
// 005193c7  83e801               sub eax, 1
// 005193ca  83e901               sub ecx, 1
// 005193cd  8819                 mov byte ptr [ecx], bl
// 005193cf  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005193d3  83e801               sub eax, 1
// 005193d6  83e901               sub ecx, 1
// 005193d9  8819                 mov byte ptr [ecx], bl
// 005193db  83e901               sub ecx, 1
// 005193de  83ee01               sub esi, 1
// 005193e1  8811                 mov byte ptr [ecx], dl
// 005193e3  75cb                 jne 0x5193b0
// 005193e5  5e                   pop esi
// 005193e6  5b                   pop ebx
// 005193e7  c3                   ret 
// 005193e8  03442410             add eax, dword ptr [esp + 0x10]
// 005193ec  85d2                 test edx, edx
// 005193ee  8bc8                 mov ecx, eax
// 005193f0  0f8606010000         jbe 0x5194fc
// 005193f6  8bf2                 mov esi, edx
// 005193f8  eb06                 jmp 0x519400
// 005193fa  8d9b00000000         lea ebx, [ebx]
// 00519400  8a50ff               mov dl, byte ptr [eax - 1]
// 00519403  83e801               sub eax, 1
// 00519406  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0051940a  83e801               sub eax, 1
// 0051940d  83e801               sub eax, 1
// 00519410  885c240d             mov byte ptr [esp + 0xd], bl
// 00519414  0fb618               movzx ebx, byte ptr [eax]
// 00519417  8859ff               mov byte ptr [ecx - 1], bl
// 0051941a  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0051941e  83e901               sub ecx, 1
// 00519421  8859ff               mov byte ptr [ecx - 1], bl
// 00519424  83e801               sub eax, 1
// 00519427  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0051942b  83e901               sub ecx, 1
// 0051942e  8859ff               mov byte ptr [ecx - 1], bl
// 00519431  83e801               sub eax, 1
// 00519434  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00519438  83e901               sub ecx, 1
// 0051943b  83e801               sub eax, 1
// 0051943e  8859ff               mov byte ptr [ecx - 1], bl
// 00519441  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00519445  83e901               sub ecx, 1
// 00519448  83e801               sub eax, 1
// 0051944b  83e901               sub ecx, 1
// 0051944e  8819                 mov byte ptr [ecx], bl
// 00519450  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00519454  83e801               sub eax, 1
// 00519457  83e901               sub ecx, 1
// 0051945a  8819                 mov byte ptr [ecx], bl
// 0051945c  83e901               sub ecx, 1
// 0051945f  8811                 mov byte ptr [ecx], dl
// 00519461  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00519466  83e901               sub ecx, 1
// 00519469  83ee01               sub esi, 1
// 0051946c  8811                 mov byte ptr [ecx], dl
// 0051946e  7590                 jne 0x519400
// 00519470  5e                   pop esi
// 00519471  5b                   pop ebx
// 00519472  c3                   ret 
// 00519473  80f904               cmp cl, 4
// 00519476  0f8580000000         jne 0x5194fc
// 0051947c  80780908             cmp byte ptr [eax + 9], 8
// 00519480  8b4004               mov eax, dword ptr [eax + 4]
// 00519483  752a                 jne 0x5194af
// 00519485  03442410             add eax, dword ptr [esp + 0x10]
// 00519489  85d2                 test edx, edx
// 0051948b  8bc8                 mov ecx, eax
// 0051948d  766d                 jbe 0x5194fc
// 0051948f  8bf2                 mov esi, edx
// 00519491  8a50ff               mov dl, byte ptr [eax - 1]
// 00519494  83e801               sub eax, 1
// 00519497  8a58ff               mov bl, byte ptr [eax - 1]
// 0051949a  83e801               sub eax, 1
// 0051949d  83e901               sub ecx, 1
// 005194a0  8819                 mov byte ptr [ecx], bl
// 005194a2  83e901               sub ecx, 1
// 005194a5  83ee01               sub esi, 1
// 005194a8  8811                 mov byte ptr [ecx], dl
// 005194aa  75e5                 jne 0x519491
// 005194ac  5e                   pop esi
// 005194ad  5b                   pop ebx
// 005194ae  c3                   ret 
// 005194af  03442410             add eax, dword ptr [esp + 0x10]
// 005194b3  85d2                 test edx, edx
// 005194b5  8bc8                 mov ecx, eax
// 005194b7  7643                 jbe 0x5194fc
// 005194b9  8bf2                 mov esi, edx
// 005194bb  eb03                 jmp 0x5194c0
// 005194bd  8d4900               lea ecx, [ecx]
// 005194c0  8a50ff               mov dl, byte ptr [eax - 1]
// 005194c3  83e801               sub eax, 1
// 005194c6  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005194ca  83e801               sub eax, 1
// 005194cd  83e801               sub eax, 1
// 005194d0  885c240d             mov byte ptr [esp + 0xd], bl
// 005194d4  0fb618               movzx ebx, byte ptr [eax]
// 005194d7  83e901               sub ecx, 1
// 005194da  8819                 mov byte ptr [ecx], bl
// 005194dc  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005194e0  83e801               sub eax, 1
// 005194e3  83e901               sub ecx, 1
// 005194e6  8819                 mov byte ptr [ecx], bl
// 005194e8  83e901               sub ecx, 1
// 005194eb  8811                 mov byte ptr [ecx], dl
// 005194ed  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 005194f2  83e901               sub ecx, 1
// 005194f5  83ee01               sub esi, 1
// 005194f8  8811                 mov byte ptr [ecx], dl
// 005194fa  75c4                 jne 0x5194c0
// 005194fc  5e                   pop esi
// 005194fd  5b                   pop ebx
// 005194fe  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_swap_alpha)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
