// from server: 100% by auto
// roc 2011-06 0056def0  unit: seg_00560000  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056def0
//
// 0056def0  55                   push ebp
// 0056def1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0056def5  807d0908             cmp byte ptr [ebp + 9], 8
// 0056def9  0f851b010000         jne 0x56e01a
// 0056deff  807d0a01             cmp byte ptr [ebp + 0xa], 1
// 0056df03  0f8511010000         jne 0x56e01a
// 0056df09  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056df0d  83e901               sub ecx, 1
// 0056df10  53                   push ebx
// 0056df11  56                   push esi
// 0056df12  57                   push edi
// 0056df13  0f848f000000         je 0x56dfa8
// 0056df19  83e901               sub ecx, 1
// 0056df1c  744d                 je 0x56df6b
// 0056df1e  83e902               sub ecx, 2
// 0056df21  0f85c3000000         jne 0x56dfea
// 0056df27  8b7d00               mov edi, dword ptr [ebp]
// 0056df2a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056df2e  33d2                 xor edx, edx
// 0056df30  8bde                 mov ebx, esi
// 0056df32  b904000000           mov ecx, 4
// 0056df37  85ff                 test edi, edi
// 0056df39  0f86ab000000         jbe 0x56dfea
// 0056df3f  90                   nop 
// 0056df40  0fb603               movzx eax, byte ptr [ebx]
// 0056df43  83e00f               and eax, 0xf
// 0056df46  d3e0                 shl eax, cl
// 0056df48  0bd0                 or edx, eax
// 0056df4a  85c9                 test ecx, ecx
// 0056df4c  750c                 jne 0x56df5a
// 0056df4e  8816                 mov byte ptr [esi], dl
// 0056df50  46                   inc esi
// 0056df51  b904000000           mov ecx, 4
// 0056df56  33d2                 xor edx, edx
// 0056df58  eb03                 jmp 0x56df5d
// 0056df5a  83e904               sub ecx, 4
// 0056df5d  43                   inc ebx
// 0056df5e  83ef01               sub edi, 1
// 0056df61  75dd                 jne 0x56df40
// 0056df63  83f904               cmp ecx, 4
// 0056df66  e97b000000           jmp 0x56dfe6
// 0056df6b  8b7d00               mov edi, dword ptr [ebp]
// 0056df6e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056df72  33d2                 xor edx, edx
// 0056df74  8bde                 mov ebx, esi
// 0056df76  b906000000           mov ecx, 6
// 0056df7b  85ff                 test edi, edi
// 0056df7d  766b                 jbe 0x56dfea
// 0056df7f  90                   nop 
// 0056df80  0fb603               movzx eax, byte ptr [ebx]
// 0056df83  83e003               and eax, 3
// 0056df86  d3e0                 shl eax, cl
// 0056df88  0bd0                 or edx, eax
// 0056df8a  85c9                 test ecx, ecx
// 0056df8c  750c                 jne 0x56df9a
// 0056df8e  8816                 mov byte ptr [esi], dl
// 0056df90  46                   inc esi
// 0056df91  b906000000           mov ecx, 6
// 0056df96  33d2                 xor edx, edx
// 0056df98  eb03                 jmp 0x56df9d
// 0056df9a  83e902               sub ecx, 2
// 0056df9d  43                   inc ebx
// 0056df9e  83ef01               sub edi, 1
// 0056dfa1  75dd                 jne 0x56df80
// 0056dfa3  83f906               cmp ecx, 6
// 0056dfa6  eb3e                 jmp 0x56dfe6
// 0056dfa8  8b7d00               mov edi, dword ptr [ebp]
// 0056dfab  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056dfaf  33d2                 xor edx, edx
// 0056dfb1  8bde                 mov ebx, esi
// 0056dfb3  b980000000           mov ecx, 0x80
// 0056dfb8  85ff                 test edi, edi
// 0056dfba  762e                 jbe 0x56dfea
// 0056dfbc  8d642400             lea esp, [esp]
// 0056dfc0  803b00               cmp byte ptr [ebx], 0
// 0056dfc3  7402                 je 0x56dfc7
// 0056dfc5  0bd1                 or edx, ecx
// 0056dfc7  43                   inc ebx
// 0056dfc8  83f901               cmp ecx, 1
// 0056dfcb  7e04                 jle 0x56dfd1
// 0056dfcd  d1f9                 sar ecx, 1
// 0056dfcf  eb0a                 jmp 0x56dfdb
// 0056dfd1  8816                 mov byte ptr [esi], dl
// 0056dfd3  46                   inc esi
// 0056dfd4  b980000000           mov ecx, 0x80
// 0056dfd9  33d2                 xor edx, edx
// 0056dfdb  83ef01               sub edi, 1
// 0056dfde  75e0                 jne 0x56dfc0
// 0056dfe0  81f980000000         cmp ecx, 0x80
// 0056dfe6  7402                 je 0x56dfea
// 0056dfe8  8816                 mov byte ptr [esi], dl
// 0056dfea  8a44241c             mov al, byte ptr [esp + 0x1c]
// 0056dfee  884509               mov byte ptr [ebp + 9], al
// 0056dff1  f66d0a               imul byte ptr [ebp + 0xa]
// 0056dff4  5f                   pop edi
// 0056dff5  5e                   pop esi
// 0056dff6  88450b               mov byte ptr [ebp + 0xb], al
// 0056dff9  3c08                 cmp al, 8
// 0056dffb  5b                   pop ebx
// 0056dffc  0fb6c0               movzx eax, al
// 0056dfff  720c                 jb 0x56e00d
// 0056e001  c1e803               shr eax, 3
// 0056e004  0faf4500             imul eax, dword ptr [ebp]
// 0056e008  894504               mov dword ptr [ebp + 4], eax
// 0056e00b  5d                   pop ebp
// 0056e00c  c3                   ret 
// 0056e00d  0faf4500             imul eax, dword ptr [ebp]
// 0056e011  83c007               add eax, 7
// 0056e014  c1e803               shr eax, 3
// 0056e017  894504               mov dword ptr [ebp + 4], eax
// 0056e01a  5d                   pop ebp
// 0056e01b  c3                   ret 
// library libpng-1.2.6/pngwtran.c (function _png_do_pack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwtran.c
