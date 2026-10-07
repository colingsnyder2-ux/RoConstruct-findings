// roc 2010-06 00571c60  unit: seg_00570000  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00571c60
//
// 00571c60  55                   push ebp
// 00571c61  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00571c65  807d0908             cmp byte ptr [ebp + 9], 8
// 00571c69  0f851b010000         jne 0x571d8a
// 00571c6f  807d0a01             cmp byte ptr [ebp + 0xa], 1
// 00571c73  0f8511010000         jne 0x571d8a
// 00571c79  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00571c7d  83e901               sub ecx, 1
// 00571c80  53                   push ebx
// 00571c81  56                   push esi
// 00571c82  57                   push edi
// 00571c83  0f848f000000         je 0x571d18
// 00571c89  83e901               sub ecx, 1
// 00571c8c  744d                 je 0x571cdb
// 00571c8e  83e902               sub ecx, 2
// 00571c91  0f85c3000000         jne 0x571d5a
// 00571c97  8b7d00               mov edi, dword ptr [ebp]
// 00571c9a  8b742418             mov esi, dword ptr [esp + 0x18]
// 00571c9e  33d2                 xor edx, edx
// 00571ca0  8bde                 mov ebx, esi
// 00571ca2  b904000000           mov ecx, 4
// 00571ca7  85ff                 test edi, edi
// 00571ca9  0f86ab000000         jbe 0x571d5a
// 00571caf  90                   nop 
// 00571cb0  0fb603               movzx eax, byte ptr [ebx]
// 00571cb3  83e00f               and eax, 0xf
// 00571cb6  d3e0                 shl eax, cl
// 00571cb8  0bd0                 or edx, eax
// 00571cba  85c9                 test ecx, ecx
// 00571cbc  750c                 jne 0x571cca
// 00571cbe  8816                 mov byte ptr [esi], dl
// 00571cc0  46                   inc esi
// 00571cc1  b904000000           mov ecx, 4
// 00571cc6  33d2                 xor edx, edx
// 00571cc8  eb03                 jmp 0x571ccd
// 00571cca  83e904               sub ecx, 4
// 00571ccd  43                   inc ebx
// 00571cce  83ef01               sub edi, 1
// 00571cd1  75dd                 jne 0x571cb0
// 00571cd3  83f904               cmp ecx, 4
// 00571cd6  e97b000000           jmp 0x571d56
// 00571cdb  8b7d00               mov edi, dword ptr [ebp]
// 00571cde  8b742418             mov esi, dword ptr [esp + 0x18]
// 00571ce2  33d2                 xor edx, edx
// 00571ce4  8bde                 mov ebx, esi
// 00571ce6  b906000000           mov ecx, 6
// 00571ceb  85ff                 test edi, edi
// 00571ced  766b                 jbe 0x571d5a
// 00571cef  90                   nop 
// 00571cf0  0fb603               movzx eax, byte ptr [ebx]
// 00571cf3  83e003               and eax, 3
// 00571cf6  d3e0                 shl eax, cl
// 00571cf8  0bd0                 or edx, eax
// 00571cfa  85c9                 test ecx, ecx
// 00571cfc  750c                 jne 0x571d0a
// 00571cfe  8816                 mov byte ptr [esi], dl
// 00571d00  46                   inc esi
// 00571d01  b906000000           mov ecx, 6
// 00571d06  33d2                 xor edx, edx
// 00571d08  eb03                 jmp 0x571d0d
// 00571d0a  83e902               sub ecx, 2
// 00571d0d  43                   inc ebx
// 00571d0e  83ef01               sub edi, 1
// 00571d11  75dd                 jne 0x571cf0
// 00571d13  83f906               cmp ecx, 6
// 00571d16  eb3e                 jmp 0x571d56
// 00571d18  8b7d00               mov edi, dword ptr [ebp]
// 00571d1b  8b742418             mov esi, dword ptr [esp + 0x18]
// 00571d1f  33d2                 xor edx, edx
// 00571d21  8bde                 mov ebx, esi
// 00571d23  b980000000           mov ecx, 0x80
// 00571d28  85ff                 test edi, edi
// 00571d2a  762e                 jbe 0x571d5a
// 00571d2c  8d642400             lea esp, [esp]
// 00571d30  803b00               cmp byte ptr [ebx], 0
// 00571d33  7402                 je 0x571d37
// 00571d35  0bd1                 or edx, ecx
// 00571d37  43                   inc ebx
// 00571d38  83f901               cmp ecx, 1
// 00571d3b  7e04                 jle 0x571d41
// 00571d3d  d1f9                 sar ecx, 1
// 00571d3f  eb0a                 jmp 0x571d4b
// 00571d41  8816                 mov byte ptr [esi], dl
// 00571d43  46                   inc esi
// 00571d44  b980000000           mov ecx, 0x80
// 00571d49  33d2                 xor edx, edx
// 00571d4b  83ef01               sub edi, 1
// 00571d4e  75e0                 jne 0x571d30
// 00571d50  81f980000000         cmp ecx, 0x80
// 00571d56  7402                 je 0x571d5a
// 00571d58  8816                 mov byte ptr [esi], dl
// 00571d5a  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00571d5e  884509               mov byte ptr [ebp + 9], al
// 00571d61  f66d0a               imul byte ptr [ebp + 0xa]
// 00571d64  5f                   pop edi
// 00571d65  5e                   pop esi
// 00571d66  88450b               mov byte ptr [ebp + 0xb], al
// 00571d69  3c08                 cmp al, 8
// 00571d6b  5b                   pop ebx
// 00571d6c  0fb6c0               movzx eax, al
// 00571d6f  720c                 jb 0x571d7d
// 00571d71  c1e803               shr eax, 3
// 00571d74  0faf4500             imul eax, dword ptr [ebp]
// 00571d78  894504               mov dword ptr [ebp + 4], eax
// 00571d7b  5d                   pop ebp
// 00571d7c  c3                   ret 
// 00571d7d  0faf4500             imul eax, dword ptr [ebp]
// 00571d81  83c007               add eax, 7
// 00571d84  c1e803               shr eax, 3
// 00571d87  894504               mov dword ptr [ebp + 4], eax
// 00571d8a  5d                   pop ebp
// 00571d8b  c3                   ret 
// library libpng-1.2.6/pngwtran.c (function _png_do_pack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwtran.c
