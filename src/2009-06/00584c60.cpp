// roc 2009-06 00584c60  unit: seg_00580000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00584c60
//
// 00584c60  55                   push ebp
// 00584c61  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00584c65  8a4d09               mov cl, byte ptr [ebp + 9]
// 00584c68  56                   push esi
// 00584c69  8b7500               mov esi, dword ptr [ebp]
// 00584c6c  80f908               cmp cl, 8
// 00584c6f  0f8265010000         jb 0x584dda
// 00584c75  8a4508               mov al, byte ptr [ebp + 8]
// 00584c78  b202                 mov dl, 2
// 00584c7a  84c2                 test dl, al
// 00584c7c  0f8558010000         jne 0x584dda
// 00584c82  53                   push ebx
// 00584c83  57                   push edi
// 00584c84  84c0                 test al, al
// 00584c86  0f8589000000         jne 0x584d15
// 00584c8c  80f908               cmp cl, 8
// 00584c8f  7532                 jne 0x584cc3
// 00584c91  8b442418             mov eax, dword ptr [esp + 0x18]
// 00584c95  8d4c06ff             lea ecx, [esi + eax - 1]
// 00584c99  8d0471               lea eax, [ecx + esi*2]
// 00584c9c  85f6                 test esi, esi
// 00584c9e  0f8604010000         jbe 0x584da8
// 00584ca4  8bfe                 mov edi, esi
// 00584ca6  0fb619               movzx ebx, byte ptr [ecx]
// 00584ca9  8818                 mov byte ptr [eax], bl
// 00584cab  0fb619               movzx ebx, byte ptr [ecx]
// 00584cae  48                   dec eax
// 00584caf  8818                 mov byte ptr [eax], bl
// 00584cb1  0fb619               movzx ebx, byte ptr [ecx]
// 00584cb4  48                   dec eax
// 00584cb5  8818                 mov byte ptr [eax], bl
// 00584cb7  48                   dec eax
// 00584cb8  49                   dec ecx
// 00584cb9  83ef01               sub edi, 1
// 00584cbc  75e8                 jne 0x584ca6
// 00584cbe  e9e5000000           jmp 0x584da8
// 00584cc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00584cc7  8d4c71ff             lea ecx, [ecx + esi*2 - 1]
// 00584ccb  8d04b1               lea eax, [ecx + esi*4]
// 00584cce  85f6                 test esi, esi
// 00584cd0  0f86d2000000         jbe 0x584da8
// 00584cd6  8bfe                 mov edi, esi
// 00584cd8  eb06                 jmp 0x584ce0
// 00584cda  8d9b00000000         lea ebx, [ebx]
// 00584ce0  0fb619               movzx ebx, byte ptr [ecx]
// 00584ce3  8818                 mov byte ptr [eax], bl
// 00584ce5  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584ce9  8858ff               mov byte ptr [eax - 1], bl
// 00584cec  0fb619               movzx ebx, byte ptr [ecx]
// 00584cef  48                   dec eax
// 00584cf0  8858ff               mov byte ptr [eax - 1], bl
// 00584cf3  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584cf7  48                   dec eax
// 00584cf8  48                   dec eax
// 00584cf9  8818                 mov byte ptr [eax], bl
// 00584cfb  0fb619               movzx ebx, byte ptr [ecx]
// 00584cfe  48                   dec eax
// 00584cff  8818                 mov byte ptr [eax], bl
// 00584d01  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584d05  49                   dec ecx
// 00584d06  48                   dec eax
// 00584d07  8818                 mov byte ptr [eax], bl
// 00584d09  48                   dec eax
// 00584d0a  49                   dec ecx
// 00584d0b  83ef01               sub edi, 1
// 00584d0e  75d0                 jne 0x584ce0
// 00584d10  e993000000           jmp 0x584da8
// 00584d15  3c04                 cmp al, 4
// 00584d17  0f858b000000         jne 0x584da8
// 00584d1d  80f908               cmp cl, 8
// 00584d20  7533                 jne 0x584d55
// 00584d22  8b442418             mov eax, dword ptr [esp + 0x18]
// 00584d26  8d4c70ff             lea ecx, [eax + esi*2 - 1]
// 00584d2a  8d0471               lea eax, [ecx + esi*2]
// 00584d2d  85f6                 test esi, esi
// 00584d2f  7677                 jbe 0x584da8
// 00584d31  8bfe                 mov edi, esi
// 00584d33  0fb619               movzx ebx, byte ptr [ecx]
// 00584d36  8818                 mov byte ptr [eax], bl
// 00584d38  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584d3c  49                   dec ecx
// 00584d3d  48                   dec eax
// 00584d3e  8818                 mov byte ptr [eax], bl
// 00584d40  0fb619               movzx ebx, byte ptr [ecx]
// 00584d43  48                   dec eax
// 00584d44  8818                 mov byte ptr [eax], bl
// 00584d46  0fb619               movzx ebx, byte ptr [ecx]
// 00584d49  48                   dec eax
// 00584d4a  8818                 mov byte ptr [eax], bl
// 00584d4c  48                   dec eax
// 00584d4d  49                   dec ecx
// 00584d4e  83ef01               sub edi, 1
// 00584d51  75e0                 jne 0x584d33
// 00584d53  eb53                 jmp 0x584da8
// 00584d55  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00584d59  8d4cb1ff             lea ecx, [ecx + esi*4 - 1]
// 00584d5d  8d04b1               lea eax, [ecx + esi*4]
// 00584d60  85f6                 test esi, esi
// 00584d62  7644                 jbe 0x584da8
// 00584d64  8bfe                 mov edi, esi
// 00584d66  0fb619               movzx ebx, byte ptr [ecx]
// 00584d69  8818                 mov byte ptr [eax], bl
// 00584d6b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584d6f  8858ff               mov byte ptr [eax - 1], bl
// 00584d72  48                   dec eax
// 00584d73  49                   dec ecx
// 00584d74  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584d78  8858ff               mov byte ptr [eax - 1], bl
// 00584d7b  0fb659fe             movzx ebx, byte ptr [ecx - 2]
// 00584d7f  49                   dec ecx
// 00584d80  48                   dec eax
// 00584d81  8858ff               mov byte ptr [eax - 1], bl
// 00584d84  0fb619               movzx ebx, byte ptr [ecx]
// 00584d87  48                   dec eax
// 00584d88  8858ff               mov byte ptr [eax - 1], bl
// 00584d8b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584d8f  48                   dec eax
// 00584d90  48                   dec eax
// 00584d91  8818                 mov byte ptr [eax], bl
// 00584d93  0fb619               movzx ebx, byte ptr [ecx]
// 00584d96  48                   dec eax
// 00584d97  8818                 mov byte ptr [eax], bl
// 00584d99  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584d9d  49                   dec ecx
// 00584d9e  48                   dec eax
// 00584d9f  8818                 mov byte ptr [eax], bl
// 00584da1  48                   dec eax
// 00584da2  49                   dec ecx
// 00584da3  83ef01               sub edi, 1
// 00584da6  75be                 jne 0x584d66
// 00584da8  00550a               add byte ptr [ebp + 0xa], dl
// 00584dab  8a4509               mov al, byte ptr [ebp + 9]
// 00584dae  8a4d0a               mov cl, byte ptr [ebp + 0xa]
// 00584db1  085508               or byte ptr [ebp + 8], dl
// 00584db4  f6e9                 imul cl
// 00584db6  5f                   pop edi
// 00584db7  88450b               mov byte ptr [ebp + 0xb], al
// 00584dba  3c08                 cmp al, 8
// 00584dbc  5b                   pop ebx
// 00584dbd  0fb6c0               movzx eax, al
// 00584dc0  720c                 jb 0x584dce
// 00584dc2  c1e803               shr eax, 3
// 00584dc5  0fafc6               imul eax, esi
// 00584dc8  5e                   pop esi
// 00584dc9  894504               mov dword ptr [ebp + 4], eax
// 00584dcc  5d                   pop ebp
// 00584dcd  c3                   ret 
// 00584dce  0fafc6               imul eax, esi
// 00584dd1  83c007               add eax, 7
// 00584dd4  c1e803               shr eax, 3
// 00584dd7  894504               mov dword ptr [ebp + 4], eax
// 00584dda  5e                   pop esi
// 00584ddb  5d                   pop ebp
// 00584ddc  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_gray_to_rgb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
