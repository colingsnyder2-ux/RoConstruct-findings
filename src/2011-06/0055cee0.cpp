// from server: 100% by auto
// roc 2011-06 0055cee0  unit: seg_00550000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055cee0
//
// 0055cee0  55                   push ebp
// 0055cee1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0055cee5  8a4d09               mov cl, byte ptr [ebp + 9]
// 0055cee8  56                   push esi
// 0055cee9  8b7500               mov esi, dword ptr [ebp]
// 0055ceec  80f908               cmp cl, 8
// 0055ceef  0f8265010000         jb 0x55d05a
// 0055cef5  8a4508               mov al, byte ptr [ebp + 8]
// 0055cef8  b202                 mov dl, 2
// 0055cefa  84c2                 test dl, al
// 0055cefc  0f8558010000         jne 0x55d05a
// 0055cf02  53                   push ebx
// 0055cf03  57                   push edi
// 0055cf04  84c0                 test al, al
// 0055cf06  0f8589000000         jne 0x55cf95
// 0055cf0c  80f908               cmp cl, 8
// 0055cf0f  7532                 jne 0x55cf43
// 0055cf11  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055cf15  8d4c06ff             lea ecx, [esi + eax - 1]
// 0055cf19  8d0471               lea eax, [ecx + esi*2]
// 0055cf1c  85f6                 test esi, esi
// 0055cf1e  0f8604010000         jbe 0x55d028
// 0055cf24  8bfe                 mov edi, esi
// 0055cf26  0fb619               movzx ebx, byte ptr [ecx]
// 0055cf29  8818                 mov byte ptr [eax], bl
// 0055cf2b  0fb619               movzx ebx, byte ptr [ecx]
// 0055cf2e  48                   dec eax
// 0055cf2f  8818                 mov byte ptr [eax], bl
// 0055cf31  0fb619               movzx ebx, byte ptr [ecx]
// 0055cf34  48                   dec eax
// 0055cf35  8818                 mov byte ptr [eax], bl
// 0055cf37  48                   dec eax
// 0055cf38  49                   dec ecx
// 0055cf39  83ef01               sub edi, 1
// 0055cf3c  75e8                 jne 0x55cf26
// 0055cf3e  e9e5000000           jmp 0x55d028
// 0055cf43  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055cf47  8d4c71ff             lea ecx, [ecx + esi*2 - 1]
// 0055cf4b  8d04b1               lea eax, [ecx + esi*4]
// 0055cf4e  85f6                 test esi, esi
// 0055cf50  0f86d2000000         jbe 0x55d028
// 0055cf56  8bfe                 mov edi, esi
// 0055cf58  eb06                 jmp 0x55cf60
// 0055cf5a  8d9b00000000         lea ebx, [ebx]
// 0055cf60  0fb619               movzx ebx, byte ptr [ecx]
// 0055cf63  8818                 mov byte ptr [eax], bl
// 0055cf65  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055cf69  8858ff               mov byte ptr [eax - 1], bl
// 0055cf6c  0fb619               movzx ebx, byte ptr [ecx]
// 0055cf6f  48                   dec eax
// 0055cf70  8858ff               mov byte ptr [eax - 1], bl
// 0055cf73  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055cf77  48                   dec eax
// 0055cf78  48                   dec eax
// 0055cf79  8818                 mov byte ptr [eax], bl
// 0055cf7b  0fb619               movzx ebx, byte ptr [ecx]
// 0055cf7e  48                   dec eax
// 0055cf7f  8818                 mov byte ptr [eax], bl
// 0055cf81  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055cf85  49                   dec ecx
// 0055cf86  48                   dec eax
// 0055cf87  8818                 mov byte ptr [eax], bl
// 0055cf89  48                   dec eax
// 0055cf8a  49                   dec ecx
// 0055cf8b  83ef01               sub edi, 1
// 0055cf8e  75d0                 jne 0x55cf60
// 0055cf90  e993000000           jmp 0x55d028
// 0055cf95  3c04                 cmp al, 4
// 0055cf97  0f858b000000         jne 0x55d028
// 0055cf9d  80f908               cmp cl, 8
// 0055cfa0  7533                 jne 0x55cfd5
// 0055cfa2  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055cfa6  8d4c70ff             lea ecx, [eax + esi*2 - 1]
// 0055cfaa  8d0471               lea eax, [ecx + esi*2]
// 0055cfad  85f6                 test esi, esi
// 0055cfaf  7677                 jbe 0x55d028
// 0055cfb1  8bfe                 mov edi, esi
// 0055cfb3  0fb619               movzx ebx, byte ptr [ecx]
// 0055cfb6  8818                 mov byte ptr [eax], bl
// 0055cfb8  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055cfbc  49                   dec ecx
// 0055cfbd  48                   dec eax
// 0055cfbe  8818                 mov byte ptr [eax], bl
// 0055cfc0  0fb619               movzx ebx, byte ptr [ecx]
// 0055cfc3  48                   dec eax
// 0055cfc4  8818                 mov byte ptr [eax], bl
// 0055cfc6  0fb619               movzx ebx, byte ptr [ecx]
// 0055cfc9  48                   dec eax
// 0055cfca  8818                 mov byte ptr [eax], bl
// 0055cfcc  48                   dec eax
// 0055cfcd  49                   dec ecx
// 0055cfce  83ef01               sub edi, 1
// 0055cfd1  75e0                 jne 0x55cfb3
// 0055cfd3  eb53                 jmp 0x55d028
// 0055cfd5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055cfd9  8d4cb1ff             lea ecx, [ecx + esi*4 - 1]
// 0055cfdd  8d04b1               lea eax, [ecx + esi*4]
// 0055cfe0  85f6                 test esi, esi
// 0055cfe2  7644                 jbe 0x55d028
// 0055cfe4  8bfe                 mov edi, esi
// 0055cfe6  0fb619               movzx ebx, byte ptr [ecx]
// 0055cfe9  8818                 mov byte ptr [eax], bl
// 0055cfeb  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055cfef  8858ff               mov byte ptr [eax - 1], bl
// 0055cff2  48                   dec eax
// 0055cff3  49                   dec ecx
// 0055cff4  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055cff8  8858ff               mov byte ptr [eax - 1], bl
// 0055cffb  0fb659fe             movzx ebx, byte ptr [ecx - 2]
// 0055cfff  49                   dec ecx
// 0055d000  48                   dec eax
// 0055d001  8858ff               mov byte ptr [eax - 1], bl
// 0055d004  0fb619               movzx ebx, byte ptr [ecx]
// 0055d007  48                   dec eax
// 0055d008  8858ff               mov byte ptr [eax - 1], bl
// 0055d00b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055d00f  48                   dec eax
// 0055d010  48                   dec eax
// 0055d011  8818                 mov byte ptr [eax], bl
// 0055d013  0fb619               movzx ebx, byte ptr [ecx]
// 0055d016  48                   dec eax
// 0055d017  8818                 mov byte ptr [eax], bl
// 0055d019  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055d01d  49                   dec ecx
// 0055d01e  48                   dec eax
// 0055d01f  8818                 mov byte ptr [eax], bl
// 0055d021  48                   dec eax
// 0055d022  49                   dec ecx
// 0055d023  83ef01               sub edi, 1
// 0055d026  75be                 jne 0x55cfe6
// 0055d028  00550a               add byte ptr [ebp + 0xa], dl
// 0055d02b  8a4509               mov al, byte ptr [ebp + 9]
// 0055d02e  8a4d0a               mov cl, byte ptr [ebp + 0xa]
// 0055d031  085508               or byte ptr [ebp + 8], dl
// 0055d034  f6e9                 imul cl
// 0055d036  5f                   pop edi
// 0055d037  88450b               mov byte ptr [ebp + 0xb], al
// 0055d03a  3c08                 cmp al, 8
// 0055d03c  5b                   pop ebx
// 0055d03d  0fb6c0               movzx eax, al
// 0055d040  720c                 jb 0x55d04e
// 0055d042  c1e803               shr eax, 3
// 0055d045  0fafc6               imul eax, esi
// 0055d048  5e                   pop esi
// 0055d049  894504               mov dword ptr [ebp + 4], eax
// 0055d04c  5d                   pop ebp
// 0055d04d  c3                   ret 
// 0055d04e  0fafc6               imul eax, esi
// 0055d051  83c007               add eax, 7
// 0055d054  c1e803               shr eax, 3
// 0055d057  894504               mov dword ptr [ebp + 4], eax
// 0055d05a  5e                   pop esi
// 0055d05b  5d                   pop ebp
// 0055d05c  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_gray_to_rgb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
