// from server: 100% by auto
// roc 2010-06 00568390  unit: seg_00560000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00568390
//
// 00568390  55                   push ebp
// 00568391  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00568395  8a4d09               mov cl, byte ptr [ebp + 9]
// 00568398  56                   push esi
// 00568399  8b7500               mov esi, dword ptr [ebp]
// 0056839c  80f908               cmp cl, 8
// 0056839f  0f8265010000         jb 0x56850a
// 005683a5  8a4508               mov al, byte ptr [ebp + 8]
// 005683a8  b202                 mov dl, 2
// 005683aa  84c2                 test dl, al
// 005683ac  0f8558010000         jne 0x56850a
// 005683b2  53                   push ebx
// 005683b3  57                   push edi
// 005683b4  84c0                 test al, al
// 005683b6  0f8589000000         jne 0x568445
// 005683bc  80f908               cmp cl, 8
// 005683bf  7532                 jne 0x5683f3
// 005683c1  8b442418             mov eax, dword ptr [esp + 0x18]
// 005683c5  8d4c06ff             lea ecx, [esi + eax - 1]
// 005683c9  8d0471               lea eax, [ecx + esi*2]
// 005683cc  85f6                 test esi, esi
// 005683ce  0f8604010000         jbe 0x5684d8
// 005683d4  8bfe                 mov edi, esi
// 005683d6  0fb619               movzx ebx, byte ptr [ecx]
// 005683d9  8818                 mov byte ptr [eax], bl
// 005683db  0fb619               movzx ebx, byte ptr [ecx]
// 005683de  48                   dec eax
// 005683df  8818                 mov byte ptr [eax], bl
// 005683e1  0fb619               movzx ebx, byte ptr [ecx]
// 005683e4  48                   dec eax
// 005683e5  8818                 mov byte ptr [eax], bl
// 005683e7  48                   dec eax
// 005683e8  49                   dec ecx
// 005683e9  83ef01               sub edi, 1
// 005683ec  75e8                 jne 0x5683d6
// 005683ee  e9e5000000           jmp 0x5684d8
// 005683f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005683f7  8d4c71ff             lea ecx, [ecx + esi*2 - 1]
// 005683fb  8d04b1               lea eax, [ecx + esi*4]
// 005683fe  85f6                 test esi, esi
// 00568400  0f86d2000000         jbe 0x5684d8
// 00568406  8bfe                 mov edi, esi
// 00568408  eb06                 jmp 0x568410
// 0056840a  8d9b00000000         lea ebx, [ebx]
// 00568410  0fb619               movzx ebx, byte ptr [ecx]
// 00568413  8818                 mov byte ptr [eax], bl
// 00568415  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568419  8858ff               mov byte ptr [eax - 1], bl
// 0056841c  0fb619               movzx ebx, byte ptr [ecx]
// 0056841f  48                   dec eax
// 00568420  8858ff               mov byte ptr [eax - 1], bl
// 00568423  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568427  48                   dec eax
// 00568428  48                   dec eax
// 00568429  8818                 mov byte ptr [eax], bl
// 0056842b  0fb619               movzx ebx, byte ptr [ecx]
// 0056842e  48                   dec eax
// 0056842f  8818                 mov byte ptr [eax], bl
// 00568431  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568435  49                   dec ecx
// 00568436  48                   dec eax
// 00568437  8818                 mov byte ptr [eax], bl
// 00568439  48                   dec eax
// 0056843a  49                   dec ecx
// 0056843b  83ef01               sub edi, 1
// 0056843e  75d0                 jne 0x568410
// 00568440  e993000000           jmp 0x5684d8
// 00568445  3c04                 cmp al, 4
// 00568447  0f858b000000         jne 0x5684d8
// 0056844d  80f908               cmp cl, 8
// 00568450  7533                 jne 0x568485
// 00568452  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568456  8d4c70ff             lea ecx, [eax + esi*2 - 1]
// 0056845a  8d0471               lea eax, [ecx + esi*2]
// 0056845d  85f6                 test esi, esi
// 0056845f  7677                 jbe 0x5684d8
// 00568461  8bfe                 mov edi, esi
// 00568463  0fb619               movzx ebx, byte ptr [ecx]
// 00568466  8818                 mov byte ptr [eax], bl
// 00568468  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0056846c  49                   dec ecx
// 0056846d  48                   dec eax
// 0056846e  8818                 mov byte ptr [eax], bl
// 00568470  0fb619               movzx ebx, byte ptr [ecx]
// 00568473  48                   dec eax
// 00568474  8818                 mov byte ptr [eax], bl
// 00568476  0fb619               movzx ebx, byte ptr [ecx]
// 00568479  48                   dec eax
// 0056847a  8818                 mov byte ptr [eax], bl
// 0056847c  48                   dec eax
// 0056847d  49                   dec ecx
// 0056847e  83ef01               sub edi, 1
// 00568481  75e0                 jne 0x568463
// 00568483  eb53                 jmp 0x5684d8
// 00568485  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00568489  8d4cb1ff             lea ecx, [ecx + esi*4 - 1]
// 0056848d  8d04b1               lea eax, [ecx + esi*4]
// 00568490  85f6                 test esi, esi
// 00568492  7644                 jbe 0x5684d8
// 00568494  8bfe                 mov edi, esi
// 00568496  0fb619               movzx ebx, byte ptr [ecx]
// 00568499  8818                 mov byte ptr [eax], bl
// 0056849b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0056849f  8858ff               mov byte ptr [eax - 1], bl
// 005684a2  48                   dec eax
// 005684a3  49                   dec ecx
// 005684a4  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005684a8  8858ff               mov byte ptr [eax - 1], bl
// 005684ab  0fb659fe             movzx ebx, byte ptr [ecx - 2]
// 005684af  49                   dec ecx
// 005684b0  48                   dec eax
// 005684b1  8858ff               mov byte ptr [eax - 1], bl
// 005684b4  0fb619               movzx ebx, byte ptr [ecx]
// 005684b7  48                   dec eax
// 005684b8  8858ff               mov byte ptr [eax - 1], bl
// 005684bb  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005684bf  48                   dec eax
// 005684c0  48                   dec eax
// 005684c1  8818                 mov byte ptr [eax], bl
// 005684c3  0fb619               movzx ebx, byte ptr [ecx]
// 005684c6  48                   dec eax
// 005684c7  8818                 mov byte ptr [eax], bl
// 005684c9  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005684cd  49                   dec ecx
// 005684ce  48                   dec eax
// 005684cf  8818                 mov byte ptr [eax], bl
// 005684d1  48                   dec eax
// 005684d2  49                   dec ecx
// 005684d3  83ef01               sub edi, 1
// 005684d6  75be                 jne 0x568496
// 005684d8  00550a               add byte ptr [ebp + 0xa], dl
// 005684db  8a4509               mov al, byte ptr [ebp + 9]
// 005684de  8a4d0a               mov cl, byte ptr [ebp + 0xa]
// 005684e1  085508               or byte ptr [ebp + 8], dl
// 005684e4  f6e9                 imul cl
// 005684e6  5f                   pop edi
// 005684e7  88450b               mov byte ptr [ebp + 0xb], al
// 005684ea  3c08                 cmp al, 8
// 005684ec  5b                   pop ebx
// 005684ed  0fb6c0               movzx eax, al
// 005684f0  720c                 jb 0x5684fe
// 005684f2  c1e803               shr eax, 3
// 005684f5  0fafc6               imul eax, esi
// 005684f8  5e                   pop esi
// 005684f9  894504               mov dword ptr [ebp + 4], eax
// 005684fc  5d                   pop ebp
// 005684fd  c3                   ret 
// 005684fe  0fafc6               imul eax, esi
// 00568501  83c007               add eax, 7
// 00568504  c1e803               shr eax, 3
// 00568507  894504               mov dword ptr [ebp + 4], eax
// 0056850a  5e                   pop esi
// 0056850b  5d                   pop ebp
// 0056850c  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_gray_to_rgb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
