// from server: 100% by auto
// roc 2012-06 00659600  unit: seg_00650000  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00659600
//
// 00659600  55                   push ebp
// 00659601  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00659605  807d0908             cmp byte ptr [ebp + 9], 8
// 00659609  0f851b010000         jne 0x65972a
// 0065960f  807d0a01             cmp byte ptr [ebp + 0xa], 1
// 00659613  0f8511010000         jne 0x65972a
// 00659619  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065961d  83e901               sub ecx, 1
// 00659620  53                   push ebx
// 00659621  56                   push esi
// 00659622  57                   push edi
// 00659623  0f848f000000         je 0x6596b8
// 00659629  83e901               sub ecx, 1
// 0065962c  744d                 je 0x65967b
// 0065962e  83e902               sub ecx, 2
// 00659631  0f85c3000000         jne 0x6596fa
// 00659637  8b7d00               mov edi, dword ptr [ebp]
// 0065963a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065963e  33d2                 xor edx, edx
// 00659640  8bde                 mov ebx, esi
// 00659642  b904000000           mov ecx, 4
// 00659647  85ff                 test edi, edi
// 00659649  0f86ab000000         jbe 0x6596fa
// 0065964f  90                   nop 
// 00659650  0fb603               movzx eax, byte ptr [ebx]
// 00659653  83e00f               and eax, 0xf
// 00659656  d3e0                 shl eax, cl
// 00659658  0bd0                 or edx, eax
// 0065965a  85c9                 test ecx, ecx
// 0065965c  750c                 jne 0x65966a
// 0065965e  8816                 mov byte ptr [esi], dl
// 00659660  46                   inc esi
// 00659661  b904000000           mov ecx, 4
// 00659666  33d2                 xor edx, edx
// 00659668  eb03                 jmp 0x65966d
// 0065966a  83e904               sub ecx, 4
// 0065966d  43                   inc ebx
// 0065966e  83ef01               sub edi, 1
// 00659671  75dd                 jne 0x659650
// 00659673  83f904               cmp ecx, 4
// 00659676  e97b000000           jmp 0x6596f6
// 0065967b  8b7d00               mov edi, dword ptr [ebp]
// 0065967e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00659682  33d2                 xor edx, edx
// 00659684  8bde                 mov ebx, esi
// 00659686  b906000000           mov ecx, 6
// 0065968b  85ff                 test edi, edi
// 0065968d  766b                 jbe 0x6596fa
// 0065968f  90                   nop 
// 00659690  0fb603               movzx eax, byte ptr [ebx]
// 00659693  83e003               and eax, 3
// 00659696  d3e0                 shl eax, cl
// 00659698  0bd0                 or edx, eax
// 0065969a  85c9                 test ecx, ecx
// 0065969c  750c                 jne 0x6596aa
// 0065969e  8816                 mov byte ptr [esi], dl
// 006596a0  46                   inc esi
// 006596a1  b906000000           mov ecx, 6
// 006596a6  33d2                 xor edx, edx
// 006596a8  eb03                 jmp 0x6596ad
// 006596aa  83e902               sub ecx, 2
// 006596ad  43                   inc ebx
// 006596ae  83ef01               sub edi, 1
// 006596b1  75dd                 jne 0x659690
// 006596b3  83f906               cmp ecx, 6
// 006596b6  eb3e                 jmp 0x6596f6
// 006596b8  8b7d00               mov edi, dword ptr [ebp]
// 006596bb  8b742418             mov esi, dword ptr [esp + 0x18]
// 006596bf  33d2                 xor edx, edx
// 006596c1  8bde                 mov ebx, esi
// 006596c3  b980000000           mov ecx, 0x80
// 006596c8  85ff                 test edi, edi
// 006596ca  762e                 jbe 0x6596fa
// 006596cc  8d642400             lea esp, [esp]
// 006596d0  803b00               cmp byte ptr [ebx], 0
// 006596d3  7402                 je 0x6596d7
// 006596d5  0bd1                 or edx, ecx
// 006596d7  43                   inc ebx
// 006596d8  83f901               cmp ecx, 1
// 006596db  7e04                 jle 0x6596e1
// 006596dd  d1f9                 sar ecx, 1
// 006596df  eb0a                 jmp 0x6596eb
// 006596e1  8816                 mov byte ptr [esi], dl
// 006596e3  46                   inc esi
// 006596e4  b980000000           mov ecx, 0x80
// 006596e9  33d2                 xor edx, edx
// 006596eb  83ef01               sub edi, 1
// 006596ee  75e0                 jne 0x6596d0
// 006596f0  81f980000000         cmp ecx, 0x80
// 006596f6  7402                 je 0x6596fa
// 006596f8  8816                 mov byte ptr [esi], dl
// 006596fa  8a44241c             mov al, byte ptr [esp + 0x1c]
// 006596fe  884509               mov byte ptr [ebp + 9], al
// 00659701  f66d0a               imul byte ptr [ebp + 0xa]
// 00659704  5f                   pop edi
// 00659705  5e                   pop esi
// 00659706  88450b               mov byte ptr [ebp + 0xb], al
// 00659709  3c08                 cmp al, 8
// 0065970b  5b                   pop ebx
// 0065970c  0fb6c0               movzx eax, al
// 0065970f  720c                 jb 0x65971d
// 00659711  c1e803               shr eax, 3
// 00659714  0faf4500             imul eax, dword ptr [ebp]
// 00659718  894504               mov dword ptr [ebp + 4], eax
// 0065971b  5d                   pop ebp
// 0065971c  c3                   ret 
// 0065971d  0faf4500             imul eax, dword ptr [ebp]
// 00659721  83c007               add eax, 7
// 00659724  c1e803               shr eax, 3
// 00659727  894504               mov dword ptr [ebp + 4], eax
// 0065972a  5d                   pop ebp
// 0065972b  c3                   ret 
// library libpng-1.2.6/pngwtran.c (function _png_do_pack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwtran.c
