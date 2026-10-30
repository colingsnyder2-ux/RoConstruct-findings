// from server: 100% by auto
// roc 2008-06 00520bd0  unit: seg_00520000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520bd0
//
// 00520bd0  55                   push ebp
// 00520bd1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00520bd5  8a4d09               mov cl, byte ptr [ebp + 9]
// 00520bd8  56                   push esi
// 00520bd9  8b7500               mov esi, dword ptr [ebp]
// 00520bdc  80f908               cmp cl, 8
// 00520bdf  0f8265010000         jb 0x520d4a
// 00520be5  8a4508               mov al, byte ptr [ebp + 8]
// 00520be8  b202                 mov dl, 2
// 00520bea  84c2                 test dl, al
// 00520bec  0f8558010000         jne 0x520d4a
// 00520bf2  53                   push ebx
// 00520bf3  57                   push edi
// 00520bf4  84c0                 test al, al
// 00520bf6  0f8589000000         jne 0x520c85
// 00520bfc  80f908               cmp cl, 8
// 00520bff  7532                 jne 0x520c33
// 00520c01  8b442418             mov eax, dword ptr [esp + 0x18]
// 00520c05  8d4c06ff             lea ecx, [esi + eax - 1]
// 00520c09  8d0471               lea eax, [ecx + esi*2]
// 00520c0c  85f6                 test esi, esi
// 00520c0e  0f8604010000         jbe 0x520d18
// 00520c14  8bfe                 mov edi, esi
// 00520c16  0fb619               movzx ebx, byte ptr [ecx]
// 00520c19  8818                 mov byte ptr [eax], bl
// 00520c1b  0fb619               movzx ebx, byte ptr [ecx]
// 00520c1e  48                   dec eax
// 00520c1f  8818                 mov byte ptr [eax], bl
// 00520c21  0fb619               movzx ebx, byte ptr [ecx]
// 00520c24  48                   dec eax
// 00520c25  8818                 mov byte ptr [eax], bl
// 00520c27  48                   dec eax
// 00520c28  49                   dec ecx
// 00520c29  83ef01               sub edi, 1
// 00520c2c  75e8                 jne 0x520c16
// 00520c2e  e9e5000000           jmp 0x520d18
// 00520c33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00520c37  8d4c71ff             lea ecx, [ecx + esi*2 - 1]
// 00520c3b  8d04b1               lea eax, [ecx + esi*4]
// 00520c3e  85f6                 test esi, esi
// 00520c40  0f86d2000000         jbe 0x520d18
// 00520c46  8bfe                 mov edi, esi
// 00520c48  eb06                 jmp 0x520c50
// 00520c4a  8d9b00000000         lea ebx, [ebx]
// 00520c50  0fb619               movzx ebx, byte ptr [ecx]
// 00520c53  8818                 mov byte ptr [eax], bl
// 00520c55  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520c59  8858ff               mov byte ptr [eax - 1], bl
// 00520c5c  0fb619               movzx ebx, byte ptr [ecx]
// 00520c5f  48                   dec eax
// 00520c60  8858ff               mov byte ptr [eax - 1], bl
// 00520c63  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520c67  48                   dec eax
// 00520c68  48                   dec eax
// 00520c69  8818                 mov byte ptr [eax], bl
// 00520c6b  0fb619               movzx ebx, byte ptr [ecx]
// 00520c6e  48                   dec eax
// 00520c6f  8818                 mov byte ptr [eax], bl
// 00520c71  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520c75  49                   dec ecx
// 00520c76  48                   dec eax
// 00520c77  8818                 mov byte ptr [eax], bl
// 00520c79  48                   dec eax
// 00520c7a  49                   dec ecx
// 00520c7b  83ef01               sub edi, 1
// 00520c7e  75d0                 jne 0x520c50
// 00520c80  e993000000           jmp 0x520d18
// 00520c85  3c04                 cmp al, 4
// 00520c87  0f858b000000         jne 0x520d18
// 00520c8d  80f908               cmp cl, 8
// 00520c90  7533                 jne 0x520cc5
// 00520c92  8b442418             mov eax, dword ptr [esp + 0x18]
// 00520c96  8d4c70ff             lea ecx, [eax + esi*2 - 1]
// 00520c9a  8d0471               lea eax, [ecx + esi*2]
// 00520c9d  85f6                 test esi, esi
// 00520c9f  7677                 jbe 0x520d18
// 00520ca1  8bfe                 mov edi, esi
// 00520ca3  0fb619               movzx ebx, byte ptr [ecx]
// 00520ca6  8818                 mov byte ptr [eax], bl
// 00520ca8  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520cac  49                   dec ecx
// 00520cad  48                   dec eax
// 00520cae  8818                 mov byte ptr [eax], bl
// 00520cb0  0fb619               movzx ebx, byte ptr [ecx]
// 00520cb3  48                   dec eax
// 00520cb4  8818                 mov byte ptr [eax], bl
// 00520cb6  0fb619               movzx ebx, byte ptr [ecx]
// 00520cb9  48                   dec eax
// 00520cba  8818                 mov byte ptr [eax], bl
// 00520cbc  48                   dec eax
// 00520cbd  49                   dec ecx
// 00520cbe  83ef01               sub edi, 1
// 00520cc1  75e0                 jne 0x520ca3
// 00520cc3  eb53                 jmp 0x520d18
// 00520cc5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00520cc9  8d4cb1ff             lea ecx, [ecx + esi*4 - 1]
// 00520ccd  8d04b1               lea eax, [ecx + esi*4]
// 00520cd0  85f6                 test esi, esi
// 00520cd2  7644                 jbe 0x520d18
// 00520cd4  8bfe                 mov edi, esi
// 00520cd6  0fb619               movzx ebx, byte ptr [ecx]
// 00520cd9  8818                 mov byte ptr [eax], bl
// 00520cdb  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520cdf  8858ff               mov byte ptr [eax - 1], bl
// 00520ce2  48                   dec eax
// 00520ce3  49                   dec ecx
// 00520ce4  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520ce8  8858ff               mov byte ptr [eax - 1], bl
// 00520ceb  0fb659fe             movzx ebx, byte ptr [ecx - 2]
// 00520cef  49                   dec ecx
// 00520cf0  48                   dec eax
// 00520cf1  8858ff               mov byte ptr [eax - 1], bl
// 00520cf4  0fb619               movzx ebx, byte ptr [ecx]
// 00520cf7  48                   dec eax
// 00520cf8  8858ff               mov byte ptr [eax - 1], bl
// 00520cfb  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520cff  48                   dec eax
// 00520d00  48                   dec eax
// 00520d01  8818                 mov byte ptr [eax], bl
// 00520d03  0fb619               movzx ebx, byte ptr [ecx]
// 00520d06  48                   dec eax
// 00520d07  8818                 mov byte ptr [eax], bl
// 00520d09  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520d0d  49                   dec ecx
// 00520d0e  48                   dec eax
// 00520d0f  8818                 mov byte ptr [eax], bl
// 00520d11  48                   dec eax
// 00520d12  49                   dec ecx
// 00520d13  83ef01               sub edi, 1
// 00520d16  75be                 jne 0x520cd6
// 00520d18  00550a               add byte ptr [ebp + 0xa], dl
// 00520d1b  8a4509               mov al, byte ptr [ebp + 9]
// 00520d1e  8a4d0a               mov cl, byte ptr [ebp + 0xa]
// 00520d21  085508               or byte ptr [ebp + 8], dl
// 00520d24  f6e9                 imul cl
// 00520d26  5f                   pop edi
// 00520d27  88450b               mov byte ptr [ebp + 0xb], al
// 00520d2a  3c08                 cmp al, 8
// 00520d2c  5b                   pop ebx
// 00520d2d  0fb6c0               movzx eax, al
// 00520d30  720c                 jb 0x520d3e
// 00520d32  c1e803               shr eax, 3
// 00520d35  0fafc6               imul eax, esi
// 00520d38  5e                   pop esi
// 00520d39  894504               mov dword ptr [ebp + 4], eax
// 00520d3c  5d                   pop ebp
// 00520d3d  c3                   ret 
// 00520d3e  0fafc6               imul eax, esi
// 00520d41  83c007               add eax, 7
// 00520d44  c1e803               shr eax, 3
// 00520d47  894504               mov dword ptr [ebp + 4], eax
// 00520d4a  5e                   pop esi
// 00520d4b  5d                   pop ebp
// 00520d4c  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_gray_to_rgb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
