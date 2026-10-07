// roc 2009-06 0058e310  unit: seg_00580000  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058e310
//
// 0058e310  55                   push ebp
// 0058e311  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0058e315  807d0908             cmp byte ptr [ebp + 9], 8
// 0058e319  0f851b010000         jne 0x58e43a
// 0058e31f  807d0a01             cmp byte ptr [ebp + 0xa], 1
// 0058e323  0f8511010000         jne 0x58e43a
// 0058e329  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058e32d  83e901               sub ecx, 1
// 0058e330  53                   push ebx
// 0058e331  56                   push esi
// 0058e332  57                   push edi
// 0058e333  0f848f000000         je 0x58e3c8
// 0058e339  83e901               sub ecx, 1
// 0058e33c  744d                 je 0x58e38b
// 0058e33e  83e902               sub ecx, 2
// 0058e341  0f85c3000000         jne 0x58e40a
// 0058e347  8b7d00               mov edi, dword ptr [ebp]
// 0058e34a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058e34e  33d2                 xor edx, edx
// 0058e350  8bde                 mov ebx, esi
// 0058e352  b904000000           mov ecx, 4
// 0058e357  85ff                 test edi, edi
// 0058e359  0f86ab000000         jbe 0x58e40a
// 0058e35f  90                   nop 
// 0058e360  0fb603               movzx eax, byte ptr [ebx]
// 0058e363  83e00f               and eax, 0xf
// 0058e366  d3e0                 shl eax, cl
// 0058e368  0bd0                 or edx, eax
// 0058e36a  85c9                 test ecx, ecx
// 0058e36c  750c                 jne 0x58e37a
// 0058e36e  8816                 mov byte ptr [esi], dl
// 0058e370  46                   inc esi
// 0058e371  b904000000           mov ecx, 4
// 0058e376  33d2                 xor edx, edx
// 0058e378  eb03                 jmp 0x58e37d
// 0058e37a  83e904               sub ecx, 4
// 0058e37d  43                   inc ebx
// 0058e37e  83ef01               sub edi, 1
// 0058e381  75dd                 jne 0x58e360
// 0058e383  83f904               cmp ecx, 4
// 0058e386  e97b000000           jmp 0x58e406
// 0058e38b  8b7d00               mov edi, dword ptr [ebp]
// 0058e38e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058e392  33d2                 xor edx, edx
// 0058e394  8bde                 mov ebx, esi
// 0058e396  b906000000           mov ecx, 6
// 0058e39b  85ff                 test edi, edi
// 0058e39d  766b                 jbe 0x58e40a
// 0058e39f  90                   nop 
// 0058e3a0  0fb603               movzx eax, byte ptr [ebx]
// 0058e3a3  83e003               and eax, 3
// 0058e3a6  d3e0                 shl eax, cl
// 0058e3a8  0bd0                 or edx, eax
// 0058e3aa  85c9                 test ecx, ecx
// 0058e3ac  750c                 jne 0x58e3ba
// 0058e3ae  8816                 mov byte ptr [esi], dl
// 0058e3b0  46                   inc esi
// 0058e3b1  b906000000           mov ecx, 6
// 0058e3b6  33d2                 xor edx, edx
// 0058e3b8  eb03                 jmp 0x58e3bd
// 0058e3ba  83e902               sub ecx, 2
// 0058e3bd  43                   inc ebx
// 0058e3be  83ef01               sub edi, 1
// 0058e3c1  75dd                 jne 0x58e3a0
// 0058e3c3  83f906               cmp ecx, 6
// 0058e3c6  eb3e                 jmp 0x58e406
// 0058e3c8  8b7d00               mov edi, dword ptr [ebp]
// 0058e3cb  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058e3cf  33d2                 xor edx, edx
// 0058e3d1  8bde                 mov ebx, esi
// 0058e3d3  b980000000           mov ecx, 0x80
// 0058e3d8  85ff                 test edi, edi
// 0058e3da  762e                 jbe 0x58e40a
// 0058e3dc  8d642400             lea esp, [esp]
// 0058e3e0  803b00               cmp byte ptr [ebx], 0
// 0058e3e3  7402                 je 0x58e3e7
// 0058e3e5  0bd1                 or edx, ecx
// 0058e3e7  43                   inc ebx
// 0058e3e8  83f901               cmp ecx, 1
// 0058e3eb  7e04                 jle 0x58e3f1
// 0058e3ed  d1f9                 sar ecx, 1
// 0058e3ef  eb0a                 jmp 0x58e3fb
// 0058e3f1  8816                 mov byte ptr [esi], dl
// 0058e3f3  46                   inc esi
// 0058e3f4  b980000000           mov ecx, 0x80
// 0058e3f9  33d2                 xor edx, edx
// 0058e3fb  83ef01               sub edi, 1
// 0058e3fe  75e0                 jne 0x58e3e0
// 0058e400  81f980000000         cmp ecx, 0x80
// 0058e406  7402                 je 0x58e40a
// 0058e408  8816                 mov byte ptr [esi], dl
// 0058e40a  8a44241c             mov al, byte ptr [esp + 0x1c]
// 0058e40e  884509               mov byte ptr [ebp + 9], al
// 0058e411  f66d0a               imul byte ptr [ebp + 0xa]
// 0058e414  5f                   pop edi
// 0058e415  5e                   pop esi
// 0058e416  88450b               mov byte ptr [ebp + 0xb], al
// 0058e419  3c08                 cmp al, 8
// 0058e41b  5b                   pop ebx
// 0058e41c  0fb6c0               movzx eax, al
// 0058e41f  720c                 jb 0x58e42d
// 0058e421  c1e803               shr eax, 3
// 0058e424  0faf4500             imul eax, dword ptr [ebp]
// 0058e428  894504               mov dword ptr [ebp + 4], eax
// 0058e42b  5d                   pop ebp
// 0058e42c  c3                   ret 
// 0058e42d  0faf4500             imul eax, dword ptr [ebp]
// 0058e431  83c007               add eax, 7
// 0058e434  c1e803               shr eax, 3
// 0058e437  894504               mov dword ptr [ebp + 4], eax
// 0058e43a  5d                   pop ebp
// 0058e43b  c3                   ret 
// library libpng-1.2.6/pngwtran.c (function _png_do_pack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwtran.c
