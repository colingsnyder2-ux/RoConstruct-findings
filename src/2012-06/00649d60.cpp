// roc 2012-06 00649d60  unit: seg_00640000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00649d60
//
// 00649d60  55                   push ebp
// 00649d61  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00649d65  8a4d09               mov cl, byte ptr [ebp + 9]
// 00649d68  56                   push esi
// 00649d69  8b7500               mov esi, dword ptr [ebp]
// 00649d6c  80f908               cmp cl, 8
// 00649d6f  0f8265010000         jb 0x649eda
// 00649d75  8a4508               mov al, byte ptr [ebp + 8]
// 00649d78  b202                 mov dl, 2
// 00649d7a  84c2                 test dl, al
// 00649d7c  0f8558010000         jne 0x649eda
// 00649d82  53                   push ebx
// 00649d83  57                   push edi
// 00649d84  84c0                 test al, al
// 00649d86  0f8589000000         jne 0x649e15
// 00649d8c  80f908               cmp cl, 8
// 00649d8f  7532                 jne 0x649dc3
// 00649d91  8b442418             mov eax, dword ptr [esp + 0x18]
// 00649d95  8d4c06ff             lea ecx, [esi + eax - 1]
// 00649d99  8d0471               lea eax, [ecx + esi*2]
// 00649d9c  85f6                 test esi, esi
// 00649d9e  0f8604010000         jbe 0x649ea8
// 00649da4  8bfe                 mov edi, esi
// 00649da6  0fb619               movzx ebx, byte ptr [ecx]
// 00649da9  8818                 mov byte ptr [eax], bl
// 00649dab  0fb619               movzx ebx, byte ptr [ecx]
// 00649dae  48                   dec eax
// 00649daf  8818                 mov byte ptr [eax], bl
// 00649db1  0fb619               movzx ebx, byte ptr [ecx]
// 00649db4  48                   dec eax
// 00649db5  8818                 mov byte ptr [eax], bl
// 00649db7  48                   dec eax
// 00649db8  49                   dec ecx
// 00649db9  83ef01               sub edi, 1
// 00649dbc  75e8                 jne 0x649da6
// 00649dbe  e9e5000000           jmp 0x649ea8
// 00649dc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00649dc7  8d4c71ff             lea ecx, [ecx + esi*2 - 1]
// 00649dcb  8d04b1               lea eax, [ecx + esi*4]
// 00649dce  85f6                 test esi, esi
// 00649dd0  0f86d2000000         jbe 0x649ea8
// 00649dd6  8bfe                 mov edi, esi
// 00649dd8  eb06                 jmp 0x649de0
// 00649dda  8d9b00000000         lea ebx, [ebx]
// 00649de0  0fb619               movzx ebx, byte ptr [ecx]
// 00649de3  8818                 mov byte ptr [eax], bl
// 00649de5  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649de9  8858ff               mov byte ptr [eax - 1], bl
// 00649dec  0fb619               movzx ebx, byte ptr [ecx]
// 00649def  48                   dec eax
// 00649df0  8858ff               mov byte ptr [eax - 1], bl
// 00649df3  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649df7  48                   dec eax
// 00649df8  48                   dec eax
// 00649df9  8818                 mov byte ptr [eax], bl
// 00649dfb  0fb619               movzx ebx, byte ptr [ecx]
// 00649dfe  48                   dec eax
// 00649dff  8818                 mov byte ptr [eax], bl
// 00649e01  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649e05  49                   dec ecx
// 00649e06  48                   dec eax
// 00649e07  8818                 mov byte ptr [eax], bl
// 00649e09  48                   dec eax
// 00649e0a  49                   dec ecx
// 00649e0b  83ef01               sub edi, 1
// 00649e0e  75d0                 jne 0x649de0
// 00649e10  e993000000           jmp 0x649ea8
// 00649e15  3c04                 cmp al, 4
// 00649e17  0f858b000000         jne 0x649ea8
// 00649e1d  80f908               cmp cl, 8
// 00649e20  7533                 jne 0x649e55
// 00649e22  8b442418             mov eax, dword ptr [esp + 0x18]
// 00649e26  8d4c70ff             lea ecx, [eax + esi*2 - 1]
// 00649e2a  8d0471               lea eax, [ecx + esi*2]
// 00649e2d  85f6                 test esi, esi
// 00649e2f  7677                 jbe 0x649ea8
// 00649e31  8bfe                 mov edi, esi
// 00649e33  0fb619               movzx ebx, byte ptr [ecx]
// 00649e36  8818                 mov byte ptr [eax], bl
// 00649e38  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649e3c  49                   dec ecx
// 00649e3d  48                   dec eax
// 00649e3e  8818                 mov byte ptr [eax], bl
// 00649e40  0fb619               movzx ebx, byte ptr [ecx]
// 00649e43  48                   dec eax
// 00649e44  8818                 mov byte ptr [eax], bl
// 00649e46  0fb619               movzx ebx, byte ptr [ecx]
// 00649e49  48                   dec eax
// 00649e4a  8818                 mov byte ptr [eax], bl
// 00649e4c  48                   dec eax
// 00649e4d  49                   dec ecx
// 00649e4e  83ef01               sub edi, 1
// 00649e51  75e0                 jne 0x649e33
// 00649e53  eb53                 jmp 0x649ea8
// 00649e55  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00649e59  8d4cb1ff             lea ecx, [ecx + esi*4 - 1]
// 00649e5d  8d04b1               lea eax, [ecx + esi*4]
// 00649e60  85f6                 test esi, esi
// 00649e62  7644                 jbe 0x649ea8
// 00649e64  8bfe                 mov edi, esi
// 00649e66  0fb619               movzx ebx, byte ptr [ecx]
// 00649e69  8818                 mov byte ptr [eax], bl
// 00649e6b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649e6f  8858ff               mov byte ptr [eax - 1], bl
// 00649e72  48                   dec eax
// 00649e73  49                   dec ecx
// 00649e74  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649e78  8858ff               mov byte ptr [eax - 1], bl
// 00649e7b  0fb659fe             movzx ebx, byte ptr [ecx - 2]
// 00649e7f  49                   dec ecx
// 00649e80  48                   dec eax
// 00649e81  8858ff               mov byte ptr [eax - 1], bl
// 00649e84  0fb619               movzx ebx, byte ptr [ecx]
// 00649e87  48                   dec eax
// 00649e88  8858ff               mov byte ptr [eax - 1], bl
// 00649e8b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649e8f  48                   dec eax
// 00649e90  48                   dec eax
// 00649e91  8818                 mov byte ptr [eax], bl
// 00649e93  0fb619               movzx ebx, byte ptr [ecx]
// 00649e96  48                   dec eax
// 00649e97  8818                 mov byte ptr [eax], bl
// 00649e99  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649e9d  49                   dec ecx
// 00649e9e  48                   dec eax
// 00649e9f  8818                 mov byte ptr [eax], bl
// 00649ea1  48                   dec eax
// 00649ea2  49                   dec ecx
// 00649ea3  83ef01               sub edi, 1
// 00649ea6  75be                 jne 0x649e66
// 00649ea8  00550a               add byte ptr [ebp + 0xa], dl
// 00649eab  8a4509               mov al, byte ptr [ebp + 9]
// 00649eae  8a4d0a               mov cl, byte ptr [ebp + 0xa]
// 00649eb1  085508               or byte ptr [ebp + 8], dl
// 00649eb4  f6e9                 imul cl
// 00649eb6  5f                   pop edi
// 00649eb7  88450b               mov byte ptr [ebp + 0xb], al
// 00649eba  3c08                 cmp al, 8
// 00649ebc  5b                   pop ebx
// 00649ebd  0fb6c0               movzx eax, al
// 00649ec0  720c                 jb 0x649ece
// 00649ec2  c1e803               shr eax, 3
// 00649ec5  0fafc6               imul eax, esi
// 00649ec8  5e                   pop esi
// 00649ec9  894504               mov dword ptr [ebp + 4], eax
// 00649ecc  5d                   pop ebp
// 00649ecd  c3                   ret 
// 00649ece  0fafc6               imul eax, esi
// 00649ed1  83c007               add eax, 7
// 00649ed4  c1e803               shr eax, 3
// 00649ed7  894504               mov dword ptr [ebp + 4], eax
// 00649eda  5e                   pop esi
// 00649edb  5d                   pop ebp
// 00649edc  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_gray_to_rgb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
