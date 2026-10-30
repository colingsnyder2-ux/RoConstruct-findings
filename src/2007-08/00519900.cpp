// from server: 100% by auto
// roc 2007-08 00519900  unit: seg_00510000  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00519900
//
// 00519900  55                   push ebp
// 00519901  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00519905  8a4d09               mov cl, byte ptr [ebp + 9]
// 00519908  80f908               cmp cl, 8
// 0051990b  56                   push esi
// 0051990c  8b7500               mov esi, dword ptr [ebp]
// 0051990f  0f829d010000         jb 0x519ab2
// 00519915  8a4508               mov al, byte ptr [ebp + 8]
// 00519918  b202                 mov dl, 2
// 0051991a  84c2                 test dl, al
// 0051991c  0f8590010000         jne 0x519ab2
// 00519922  84c0                 test al, al
// 00519924  53                   push ebx
// 00519925  57                   push edi
// 00519926  0f8599000000         jne 0x5199c5
// 0051992c  80f908               cmp cl, 8
// 0051992f  753a                 jne 0x51996b
// 00519931  85f6                 test esi, esi
// 00519933  8b442418             mov eax, dword ptr [esp + 0x18]
// 00519937  8d4c06ff             lea ecx, [esi + eax - 1]
// 0051993b  8d0471               lea eax, [ecx + esi*2]
// 0051993e  0f863c010000         jbe 0x519a80
// 00519944  8bfe                 mov edi, esi
// 00519946  0fb619               movzx ebx, byte ptr [ecx]
// 00519949  8818                 mov byte ptr [eax], bl
// 0051994b  0fb619               movzx ebx, byte ptr [ecx]
// 0051994e  83e801               sub eax, 1
// 00519951  8818                 mov byte ptr [eax], bl
// 00519953  0fb619               movzx ebx, byte ptr [ecx]
// 00519956  83e801               sub eax, 1
// 00519959  8818                 mov byte ptr [eax], bl
// 0051995b  83e801               sub eax, 1
// 0051995e  83e901               sub ecx, 1
// 00519961  83ef01               sub edi, 1
// 00519964  75e0                 jne 0x519946
// 00519966  e915010000           jmp 0x519a80
// 0051996b  85f6                 test esi, esi
// 0051996d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00519971  8d4c71ff             lea ecx, [ecx + esi*2 - 1]
// 00519975  8d04b1               lea eax, [ecx + esi*4]
// 00519978  0f8602010000         jbe 0x519a80
// 0051997e  8bfe                 mov edi, esi
// 00519980  0fb619               movzx ebx, byte ptr [ecx]
// 00519983  8818                 mov byte ptr [eax], bl
// 00519985  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519989  8858ff               mov byte ptr [eax - 1], bl
// 0051998c  0fb619               movzx ebx, byte ptr [ecx]
// 0051998f  83e801               sub eax, 1
// 00519992  8858ff               mov byte ptr [eax - 1], bl
// 00519995  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519999  83e801               sub eax, 1
// 0051999c  83e801               sub eax, 1
// 0051999f  8818                 mov byte ptr [eax], bl
// 005199a1  0fb619               movzx ebx, byte ptr [ecx]
// 005199a4  83e801               sub eax, 1
// 005199a7  8818                 mov byte ptr [eax], bl
// 005199a9  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005199ad  83c1ff               add ecx, -1
// 005199b0  83e801               sub eax, 1
// 005199b3  8818                 mov byte ptr [eax], bl
// 005199b5  83e801               sub eax, 1
// 005199b8  83e901               sub ecx, 1
// 005199bb  83ef01               sub edi, 1
// 005199be  75c0                 jne 0x519980
// 005199c0  e9bb000000           jmp 0x519a80
// 005199c5  3c04                 cmp al, 4
// 005199c7  0f85b3000000         jne 0x519a80
// 005199cd  80f908               cmp cl, 8
// 005199d0  7543                 jne 0x519a15
// 005199d2  85f6                 test esi, esi
// 005199d4  8b442418             mov eax, dword ptr [esp + 0x18]
// 005199d8  8d4c70ff             lea ecx, [eax + esi*2 - 1]
// 005199dc  8d0471               lea eax, [ecx + esi*2]
// 005199df  0f869b000000         jbe 0x519a80
// 005199e5  8bfe                 mov edi, esi
// 005199e7  0fb619               movzx ebx, byte ptr [ecx]
// 005199ea  8818                 mov byte ptr [eax], bl
// 005199ec  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005199f0  83e901               sub ecx, 1
// 005199f3  83e801               sub eax, 1
// 005199f6  8818                 mov byte ptr [eax], bl
// 005199f8  0fb619               movzx ebx, byte ptr [ecx]
// 005199fb  83e801               sub eax, 1
// 005199fe  8818                 mov byte ptr [eax], bl
// 00519a00  0fb619               movzx ebx, byte ptr [ecx]
// 00519a03  83e801               sub eax, 1
// 00519a06  8818                 mov byte ptr [eax], bl
// 00519a08  83e801               sub eax, 1
// 00519a0b  83e901               sub ecx, 1
// 00519a0e  83ef01               sub edi, 1
// 00519a11  75d4                 jne 0x5199e7
// 00519a13  eb6b                 jmp 0x519a80
// 00519a15  85f6                 test esi, esi
// 00519a17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00519a1b  8d4cb1ff             lea ecx, [ecx + esi*4 - 1]
// 00519a1f  8d04b1               lea eax, [ecx + esi*4]
// 00519a22  765c                 jbe 0x519a80
// 00519a24  8bfe                 mov edi, esi
// 00519a26  0fb619               movzx ebx, byte ptr [ecx]
// 00519a29  8818                 mov byte ptr [eax], bl
// 00519a2b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519a2f  8858ff               mov byte ptr [eax - 1], bl
// 00519a32  83e801               sub eax, 1
// 00519a35  83e901               sub ecx, 1
// 00519a38  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519a3c  8858ff               mov byte ptr [eax - 1], bl
// 00519a3f  0fb659fe             movzx ebx, byte ptr [ecx - 2]
// 00519a43  83e901               sub ecx, 1
// 00519a46  83e801               sub eax, 1
// 00519a49  8858ff               mov byte ptr [eax - 1], bl
// 00519a4c  0fb619               movzx ebx, byte ptr [ecx]
// 00519a4f  83e801               sub eax, 1
// 00519a52  8858ff               mov byte ptr [eax - 1], bl
// 00519a55  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519a59  83e801               sub eax, 1
// 00519a5c  83e801               sub eax, 1
// 00519a5f  8818                 mov byte ptr [eax], bl
// 00519a61  0fb619               movzx ebx, byte ptr [ecx]
// 00519a64  83e801               sub eax, 1
// 00519a67  8818                 mov byte ptr [eax], bl
// 00519a69  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519a6d  83c1ff               add ecx, -1
// 00519a70  83e801               sub eax, 1
// 00519a73  8818                 mov byte ptr [eax], bl
// 00519a75  83e801               sub eax, 1
// 00519a78  83e901               sub ecx, 1
// 00519a7b  83ef01               sub edi, 1
// 00519a7e  75a6                 jne 0x519a26
// 00519a80  00550a               add byte ptr [ebp + 0xa], dl
// 00519a83  8a4509               mov al, byte ptr [ebp + 9]
// 00519a86  8a4d0a               mov cl, byte ptr [ebp + 0xa]
// 00519a89  085508               or byte ptr [ebp + 8], dl
// 00519a8c  f6e9                 imul cl
// 00519a8e  5f                   pop edi
// 00519a8f  88450b               mov byte ptr [ebp + 0xb], al
// 00519a92  3c08                 cmp al, 8
// 00519a94  5b                   pop ebx
// 00519a95  0fb6c0               movzx eax, al
// 00519a98  720c                 jb 0x519aa6
// 00519a9a  c1e803               shr eax, 3
// 00519a9d  0fafc6               imul eax, esi
// 00519aa0  5e                   pop esi
// 00519aa1  894504               mov dword ptr [ebp + 4], eax
// 00519aa4  5d                   pop ebp
// 00519aa5  c3                   ret 
// 00519aa6  0fafc6               imul eax, esi
// 00519aa9  83c007               add eax, 7
// 00519aac  c1e803               shr eax, 3
// 00519aaf  894504               mov dword ptr [ebp + 4], eax
// 00519ab2  5e                   pop esi
// 00519ab3  5d                   pop ebp
// 00519ab4  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_gray_to_rgb)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
