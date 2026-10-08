// from server: 100% by auto
// roc 2008-06 00529b00  unit: G3D::Line  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529b00
//
// 00529b00  55                   push ebp
// 00529b01  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00529b05  807d0908             cmp byte ptr [ebp + 9], 8
// 00529b09  0f851b010000         jne 0x529c2a
// 00529b0f  807d0a01             cmp byte ptr [ebp + 0xa], 1
// 00529b13  0f8511010000         jne 0x529c2a
// 00529b19  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00529b1d  83e901               sub ecx, 1
// 00529b20  53                   push ebx
// 00529b21  56                   push esi
// 00529b22  57                   push edi
// 00529b23  0f848f000000         je 0x529bb8
// 00529b29  83e901               sub ecx, 1
// 00529b2c  744d                 je 0x529b7b
// 00529b2e  83e902               sub ecx, 2
// 00529b31  0f85c3000000         jne 0x529bfa
// 00529b37  8b7d00               mov edi, dword ptr [ebp]
// 00529b3a  8b742418             mov esi, dword ptr [esp + 0x18]
// 00529b3e  33d2                 xor edx, edx
// 00529b40  8bde                 mov ebx, esi
// 00529b42  b904000000           mov ecx, 4
// 00529b47  85ff                 test edi, edi
// 00529b49  0f86ab000000         jbe 0x529bfa
// 00529b4f  90                   nop 
// 00529b50  0fb603               movzx eax, byte ptr [ebx]
// 00529b53  83e00f               and eax, 0xf
// 00529b56  d3e0                 shl eax, cl
// 00529b58  0bd0                 or edx, eax
// 00529b5a  85c9                 test ecx, ecx
// 00529b5c  750c                 jne 0x529b6a
// 00529b5e  8816                 mov byte ptr [esi], dl
// 00529b60  46                   inc esi
// 00529b61  b904000000           mov ecx, 4
// 00529b66  33d2                 xor edx, edx
// 00529b68  eb03                 jmp 0x529b6d
// 00529b6a  83e904               sub ecx, 4
// 00529b6d  43                   inc ebx
// 00529b6e  83ef01               sub edi, 1
// 00529b71  75dd                 jne 0x529b50
// 00529b73  83f904               cmp ecx, 4
// 00529b76  e97b000000           jmp 0x529bf6
// 00529b7b  8b7d00               mov edi, dword ptr [ebp]
// 00529b7e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00529b82  33d2                 xor edx, edx
// 00529b84  8bde                 mov ebx, esi
// 00529b86  b906000000           mov ecx, 6
// 00529b8b  85ff                 test edi, edi
// 00529b8d  766b                 jbe 0x529bfa
// 00529b8f  90                   nop 
// 00529b90  0fb603               movzx eax, byte ptr [ebx]
// 00529b93  83e003               and eax, 3
// 00529b96  d3e0                 shl eax, cl
// 00529b98  0bd0                 or edx, eax
// 00529b9a  85c9                 test ecx, ecx
// 00529b9c  750c                 jne 0x529baa
// 00529b9e  8816                 mov byte ptr [esi], dl
// 00529ba0  46                   inc esi
// 00529ba1  b906000000           mov ecx, 6
// 00529ba6  33d2                 xor edx, edx
// 00529ba8  eb03                 jmp 0x529bad
// 00529baa  83e902               sub ecx, 2
// 00529bad  43                   inc ebx
// 00529bae  83ef01               sub edi, 1
// 00529bb1  75dd                 jne 0x529b90
// 00529bb3  83f906               cmp ecx, 6
// 00529bb6  eb3e                 jmp 0x529bf6
// 00529bb8  8b7d00               mov edi, dword ptr [ebp]
// 00529bbb  8b742418             mov esi, dword ptr [esp + 0x18]
// 00529bbf  33d2                 xor edx, edx
// 00529bc1  8bde                 mov ebx, esi
// 00529bc3  b980000000           mov ecx, 0x80
// 00529bc8  85ff                 test edi, edi
// 00529bca  762e                 jbe 0x529bfa
// 00529bcc  8d642400             lea esp, [esp]
// 00529bd0  803b00               cmp byte ptr [ebx], 0
// 00529bd3  7402                 je 0x529bd7
// 00529bd5  0bd1                 or edx, ecx
// 00529bd7  43                   inc ebx
// 00529bd8  83f901               cmp ecx, 1
// 00529bdb  7e04                 jle 0x529be1
// 00529bdd  d1f9                 sar ecx, 1
// 00529bdf  eb0a                 jmp 0x529beb
// 00529be1  8816                 mov byte ptr [esi], dl
// 00529be3  46                   inc esi
// 00529be4  b980000000           mov ecx, 0x80
// 00529be9  33d2                 xor edx, edx
// 00529beb  83ef01               sub edi, 1
// 00529bee  75e0                 jne 0x529bd0
// 00529bf0  81f980000000         cmp ecx, 0x80
// 00529bf6  7402                 je 0x529bfa
// 00529bf8  8816                 mov byte ptr [esi], dl
// 00529bfa  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00529bfe  884509               mov byte ptr [ebp + 9], al
// 00529c01  f66d0a               imul byte ptr [ebp + 0xa]
// 00529c04  5f                   pop edi
// 00529c05  5e                   pop esi
// 00529c06  88450b               mov byte ptr [ebp + 0xb], al
// 00529c09  3c08                 cmp al, 8
// 00529c0b  5b                   pop ebx
// 00529c0c  0fb6c0               movzx eax, al
// 00529c0f  720c                 jb 0x529c1d
// 00529c11  c1e803               shr eax, 3
// 00529c14  0faf4500             imul eax, dword ptr [ebp]
// 00529c18  894504               mov dword ptr [ebp + 4], eax
// 00529c1b  5d                   pop ebp
// 00529c1c  c3                   ret 
// 00529c1d  0faf4500             imul eax, dword ptr [ebp]
// 00529c21  83c007               add eax, 7
// 00529c24  c1e803               shr eax, 3
// 00529c27  894504               mov dword ptr [ebp + 4], eax
// 00529c2a  5d                   pop ebp
// 00529c2b  c3                   ret 
// library libpng-1.2.6/pngwtran.c (function _png_do_pack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwtran.c
