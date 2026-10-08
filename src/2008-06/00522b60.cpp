// from server: 100% by auto
// roc 2008-06 00522b60  unit: seg_00520000  size: 956 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00522b60
//
// 00522b60  8b542404             mov edx, dword ptr [esp + 4]
// 00522b64  8a4208               mov al, byte ptr [edx + 8]
// 00522b67  83ec08               sub esp, 8
// 00522b6a  53                   push ebx
// 00522b6b  55                   push ebp
// 00522b6c  56                   push esi
// 00522b6d  8b32                 mov esi, dword ptr [edx]
// 00522b6f  57                   push edi
// 00522b70  84c0                 test al, al
// 00522b72  0f8536020000         jne 0x522dae
// 00522b78  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00522b7c  85c9                 test ecx, ecx
// 00522b7e  7406                 je 0x522b86
// 00522b80  0fb77908             movzx edi, word ptr [ecx + 8]
// 00522b84  eb0c                 jmp 0x522b92
// 00522b86  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00522b8e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00522b92  8a4209               mov al, byte ptr [edx + 9]
// 00522b95  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00522b99  3c08                 cmp al, 8
// 00522b9b  0f8359010000         jae 0x522cfa
// 00522ba1  0fb6c0               movzx eax, al
// 00522ba4  83e801               sub eax, 1
// 00522ba7  0f84df000000         je 0x522c8c
// 00522bad  83e801               sub eax, 1
// 00522bb0  7471                 je 0x522c23
// 00522bb2  83e802               sub eax, 2
// 00522bb5  0f8530010000         jne 0x522ceb
// 00522bbb  8bc7                 mov eax, edi
// 00522bbd  8d56ff               lea edx, [esi - 1]
// 00522bc0  83e201               and edx, 1
// 00522bc3  c1e004               shl eax, 4
// 00522bc6  03c7                 add eax, edi
// 00522bc8  03d2                 add edx, edx
// 00522bca  03d2                 add edx, edx
// 00522bcc  0fb7c8               movzx ecx, ax
// 00522bcf  8d7eff               lea edi, [esi - 1]
// 00522bd2  8bc2                 mov eax, edx
// 00522bd4  d1ef                 shr edi, 1
// 00522bd6  ba04000000           mov edx, 4
// 00522bdb  03fb                 add edi, ebx
// 00522bdd  2bd0                 sub edx, eax
// 00522bdf  894c2410             mov dword ptr [esp + 0x10], ecx
// 00522be3  8d6c1eff             lea ebp, [esi + ebx - 1]
// 00522be7  85f6                 test esi, esi
// 00522be9  0f86f4000000         jbe 0x522ce3
// 00522bef  89742414             mov dword ptr [esp + 0x14], esi
// 00522bf3  0fb607               movzx eax, byte ptr [edi]
// 00522bf6  8aca                 mov cl, dl
// 00522bf8  d3e8                 shr eax, cl
// 00522bfa  83e00f               and eax, 0xf
// 00522bfd  8ac8                 mov cl, al
// 00522bff  c0e104               shl cl, 4
// 00522c02  0ac8                 or cl, al
// 00522c04  884d00               mov byte ptr [ebp], cl
// 00522c07  83fa04               cmp edx, 4
// 00522c0a  7505                 jne 0x522c11
// 00522c0c  33d2                 xor edx, edx
// 00522c0e  4f                   dec edi
// 00522c0f  eb05                 jmp 0x522c16
// 00522c11  ba04000000           mov edx, 4
// 00522c16  4d                   dec ebp
// 00522c17  836c241401           sub dword ptr [esp + 0x14], 1
// 00522c1c  75d5                 jne 0x522bf3
// 00522c1e  e9c0000000           jmp 0x522ce3
// 00522c23  6bff55               imul edi, edi, 0x55
// 00522c26  0fb7d7               movzx edx, di
// 00522c29  89542410             mov dword ptr [esp + 0x10], edx
// 00522c2d  8d46ff               lea eax, [esi - 1]
// 00522c30  83e003               and eax, 3
// 00522c33  8d7eff               lea edi, [esi - 1]
// 00522c36  ba03000000           mov edx, 3
// 00522c3b  c1ef02               shr edi, 2
// 00522c3e  2bd0                 sub edx, eax
// 00522c40  03fb                 add edi, ebx
// 00522c42  03d2                 add edx, edx
// 00522c44  8d6c1eff             lea ebp, [esi + ebx - 1]
// 00522c48  85f6                 test esi, esi
// 00522c4a  0f8693000000         jbe 0x522ce3
// 00522c50  89742414             mov dword ptr [esp + 0x14], esi
// 00522c54  0fb607               movzx eax, byte ptr [edi]
// 00522c57  8aca                 mov cl, dl
// 00522c59  d3e8                 shr eax, cl
// 00522c5b  83e003               and eax, 3
// 00522c5e  8ac8                 mov cl, al
// 00522c60  02c9                 add cl, cl
// 00522c62  02c9                 add cl, cl
// 00522c64  0ac8                 or cl, al
// 00522c66  02c9                 add cl, cl
// 00522c68  02c9                 add cl, cl
// 00522c6a  0ac8                 or cl, al
// 00522c6c  02c9                 add cl, cl
// 00522c6e  02c9                 add cl, cl
// 00522c70  0ac8                 or cl, al
// 00522c72  884d00               mov byte ptr [ebp], cl
// 00522c75  83fa06               cmp edx, 6
// 00522c78  7505                 jne 0x522c7f
// 00522c7a  33d2                 xor edx, edx
// 00522c7c  4f                   dec edi
// 00522c7d  eb03                 jmp 0x522c82
// 00522c7f  83c202               add edx, 2
// 00522c82  4d                   dec ebp
// 00522c83  836c241401           sub dword ptr [esp + 0x14], 1
// 00522c88  75ca                 jne 0x522c54
// 00522c8a  eb57                 jmp 0x522ce3
// 00522c8c  69ffff000000         imul edi, edi, 0xff
// 00522c92  0fb7c7               movzx eax, di
// 00522c95  89442410             mov dword ptr [esp + 0x10], eax
// 00522c99  8d7eff               lea edi, [esi - 1]
// 00522c9c  8d4eff               lea ecx, [esi - 1]
// 00522c9f  c1ef03               shr edi, 3
// 00522ca2  83e107               and ecx, 7
// 00522ca5  b807000000           mov eax, 7
// 00522caa  03fb                 add edi, ebx
// 00522cac  2bc1                 sub eax, ecx
// 00522cae  8d6c1eff             lea ebp, [esi + ebx - 1]
// 00522cb2  85f6                 test esi, esi
// 00522cb4  7631                 jbe 0x522ce7
// 00522cb6  89742414             mov dword ptr [esp + 0x14], esi
// 00522cba  8d9b00000000         lea ebx, [ebx]
// 00522cc0  8a17                 mov dl, byte ptr [edi]
// 00522cc2  8ac8                 mov cl, al
// 00522cc4  d2ea                 shr dl, cl
// 00522cc6  80e201               and dl, 1
// 00522cc9  f6da                 neg dl
// 00522ccb  1ad2                 sbb dl, dl
// 00522ccd  885500               mov byte ptr [ebp], dl
// 00522cd0  83f807               cmp eax, 7
// 00522cd3  7505                 jne 0x522cda
// 00522cd5  33c0                 xor eax, eax
// 00522cd7  4f                   dec edi
// 00522cd8  eb01                 jmp 0x522cdb
// 00522cda  40                   inc eax
// 00522cdb  4d                   dec ebp
// 00522cdc  836c241401           sub dword ptr [esp + 0x14], 1
// 00522ce1  75dd                 jne 0x522cc0
// 00522ce3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00522ce7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00522ceb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00522cef  c6420908             mov byte ptr [edx + 9], 8
// 00522cf3  c6420b08             mov byte ptr [edx + 0xb], 8
// 00522cf7  897204               mov dword ptr [edx + 4], esi
// 00522cfa  85c9                 test ecx, ecx
// 00522cfc  0f8412020000         je 0x522f14
// 00522d02  8a4209               mov al, byte ptr [edx + 9]
// 00522d05  3c08                 cmp al, 8
// 00522d07  7544                 jne 0x522d4d
// 00522d09  8d4c1eff             lea ecx, [esi + ebx - 1]
// 00522d0d  8d4473ff             lea eax, [ebx + esi*2 - 1]
// 00522d11  85f6                 test esi, esi
// 00522d13  0f8685000000         jbe 0x522d9e
// 00522d19  8bee                 mov ebp, esi
// 00522d1b  eb03                 jmp 0x522d20
// 00522d1d  8d4900               lea ecx, [ecx]
// 00522d20  660fb619             movzx bx, byte ptr [ecx]
// 00522d24  663bdf               cmp bx, di
// 00522d27  7505                 jne 0x522d2e
// 00522d29  c60000               mov byte ptr [eax], 0
// 00522d2c  eb03                 jmp 0x522d31
// 00522d2e  c600ff               mov byte ptr [eax], 0xff
// 00522d31  8a19                 mov bl, byte ptr [ecx]
// 00522d33  48                   dec eax
// 00522d34  8818                 mov byte ptr [eax], bl
// 00522d36  48                   dec eax
// 00522d37  49                   dec ecx
// 00522d38  83ed01               sub ebp, 1
// 00522d3b  75e3                 jne 0x522d20
// 00522d3d  8a4209               mov al, byte ptr [edx + 9]
// 00522d40  c6420804             mov byte ptr [edx + 8], 4
// 00522d44  c6420a02             mov byte ptr [edx + 0xa], 2
// 00522d48  e99e010000           jmp 0x522eeb
// 00522d4d  3c10                 cmp al, 0x10
// 00522d4f  754d                 jne 0x522d9e
// 00522d51  8b4204               mov eax, dword ptr [edx + 4]
// 00522d54  8d4c18ff             lea ecx, [eax + ebx - 1]
// 00522d58  8d4443ff             lea eax, [ebx + eax*2 - 1]
// 00522d5c  85f6                 test esi, esi
// 00522d5e  763e                 jbe 0x522d9e
// 00522d60  0fb7ef               movzx ebp, di
// 00522d63  8bfe                 mov edi, esi
// 00522d65  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522d69  0fb619               movzx ebx, byte ptr [ecx]
// 00522d6c  c1e208               shl edx, 8
// 00522d6f  0bd3                 or edx, ebx
// 00522d71  3bd5                 cmp edx, ebp
// 00522d73  7509                 jne 0x522d7e
// 00522d75  c60000               mov byte ptr [eax], 0
// 00522d78  48                   dec eax
// 00522d79  c60000               mov byte ptr [eax], 0
// 00522d7c  eb07                 jmp 0x522d85
// 00522d7e  c600ff               mov byte ptr [eax], 0xff
// 00522d81  48                   dec eax
// 00522d82  c600ff               mov byte ptr [eax], 0xff
// 00522d85  0fb611               movzx edx, byte ptr [ecx]
// 00522d88  48                   dec eax
// 00522d89  8810                 mov byte ptr [eax], dl
// 00522d8b  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522d8f  49                   dec ecx
// 00522d90  48                   dec eax
// 00522d91  8810                 mov byte ptr [eax], dl
// 00522d93  48                   dec eax
// 00522d94  49                   dec ecx
// 00522d95  83ef01               sub edi, 1
// 00522d98  75cb                 jne 0x522d65
// 00522d9a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00522d9e  8a4209               mov al, byte ptr [edx + 9]
// 00522da1  c6420804             mov byte ptr [edx + 8], 4
// 00522da5  c6420a02             mov byte ptr [edx + 0xa], 2
// 00522da9  e93d010000           jmp 0x522eeb
// 00522dae  3c02                 cmp al, 2
// 00522db0  0f855e010000         jne 0x522f14
// 00522db6  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00522dba  85ed                 test ebp, ebp
// 00522dbc  0f8452010000         je 0x522f14
// 00522dc2  8a4209               mov al, byte ptr [edx + 9]
// 00522dc5  3c08                 cmp al, 8
// 00522dc7  7563                 jne 0x522e2c
// 00522dc9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00522dcd  8b4a04               mov ecx, dword ptr [edx + 4]
// 00522dd0  8d4c01ff             lea ecx, [ecx + eax - 1]
// 00522dd4  8d44b0ff             lea eax, [eax + esi*4 - 1]
// 00522dd8  85f6                 test esi, esi
// 00522dda  0f86fe000000         jbe 0x522ede
// 00522de0  8bfe                 mov edi, esi
// 00522de2  660fb659fe           movzx bx, byte ptr [ecx - 2]
// 00522de7  663b5d02             cmp bx, word ptr [ebp + 2]
// 00522deb  751a                 jne 0x522e07
// 00522ded  660fb659ff           movzx bx, byte ptr [ecx - 1]
// 00522df2  663b5d04             cmp bx, word ptr [ebp + 4]
// 00522df6  750f                 jne 0x522e07
// 00522df8  660fb619             movzx bx, byte ptr [ecx]
// 00522dfc  663b5d06             cmp bx, word ptr [ebp + 6]
// 00522e00  7505                 jne 0x522e07
// 00522e02  c60000               mov byte ptr [eax], 0
// 00522e05  eb03                 jmp 0x522e0a
// 00522e07  c600ff               mov byte ptr [eax], 0xff
// 00522e0a  0fb619               movzx ebx, byte ptr [ecx]
// 00522e0d  48                   dec eax
// 00522e0e  8818                 mov byte ptr [eax], bl
// 00522e10  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00522e14  49                   dec ecx
// 00522e15  48                   dec eax
// 00522e16  8818                 mov byte ptr [eax], bl
// 00522e18  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00522e1c  49                   dec ecx
// 00522e1d  48                   dec eax
// 00522e1e  8818                 mov byte ptr [eax], bl
// 00522e20  48                   dec eax
// 00522e21  49                   dec ecx
// 00522e22  83ef01               sub edi, 1
// 00522e25  75bb                 jne 0x522de2
// 00522e27  e9b2000000           jmp 0x522ede
// 00522e2c  3c10                 cmp al, 0x10
// 00522e2e  0f85aa000000         jne 0x522ede
// 00522e34  8b442420             mov eax, dword ptr [esp + 0x20]
// 00522e38  8b4a04               mov ecx, dword ptr [edx + 4]
// 00522e3b  8d4c01ff             lea ecx, [ecx + eax - 1]
// 00522e3f  8d44f0ff             lea eax, [eax + esi*8 - 1]
// 00522e43  85f6                 test esi, esi
// 00522e45  0f8693000000         jbe 0x522ede
// 00522e4b  8bfe                 mov edi, esi
// 00522e4d  8d4900               lea ecx, [ecx]
// 00522e50  0fb651fb             movzx edx, byte ptr [ecx - 5]
// 00522e54  0fb659fc             movzx ebx, byte ptr [ecx - 4]
// 00522e58  c1e208               shl edx, 8
// 00522e5b  0bd3                 or edx, ebx
// 00522e5d  0fb75d02             movzx ebx, word ptr [ebp + 2]
// 00522e61  3bd3                 cmp edx, ebx
// 00522e63  7532                 jne 0x522e97
// 00522e65  0fb651fd             movzx edx, byte ptr [ecx - 3]
// 00522e69  0fb659fe             movzx ebx, byte ptr [ecx - 2]
// 00522e6d  c1e208               shl edx, 8
// 00522e70  0bd3                 or edx, ebx
// 00522e72  0fb75d04             movzx ebx, word ptr [ebp + 4]
// 00522e76  3bd3                 cmp edx, ebx
// 00522e78  751d                 jne 0x522e97
// 00522e7a  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522e7e  0fb619               movzx ebx, byte ptr [ecx]
// 00522e81  c1e208               shl edx, 8
// 00522e84  0bd3                 or edx, ebx
// 00522e86  0fb75d06             movzx ebx, word ptr [ebp + 6]
// 00522e8a  3bd3                 cmp edx, ebx
// 00522e8c  7509                 jne 0x522e97
// 00522e8e  c60000               mov byte ptr [eax], 0
// 00522e91  48                   dec eax
// 00522e92  c60000               mov byte ptr [eax], 0
// 00522e95  eb07                 jmp 0x522e9e
// 00522e97  c600ff               mov byte ptr [eax], 0xff
// 00522e9a  48                   dec eax
// 00522e9b  c600ff               mov byte ptr [eax], 0xff
// 00522e9e  0fb611               movzx edx, byte ptr [ecx]
// 00522ea1  8850ff               mov byte ptr [eax - 1], dl
// 00522ea4  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522ea8  48                   dec eax
// 00522ea9  49                   dec ecx
// 00522eaa  8850ff               mov byte ptr [eax - 1], dl
// 00522ead  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522eb1  48                   dec eax
// 00522eb2  49                   dec ecx
// 00522eb3  8850ff               mov byte ptr [eax - 1], dl
// 00522eb6  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522eba  48                   dec eax
// 00522ebb  49                   dec ecx
// 00522ebc  48                   dec eax
// 00522ebd  8810                 mov byte ptr [eax], dl
// 00522ebf  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522ec3  49                   dec ecx
// 00522ec4  48                   dec eax
// 00522ec5  8810                 mov byte ptr [eax], dl
// 00522ec7  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522ecb  49                   dec ecx
// 00522ecc  48                   dec eax
// 00522ecd  8810                 mov byte ptr [eax], dl
// 00522ecf  48                   dec eax
// 00522ed0  49                   dec ecx
// 00522ed1  83ef01               sub edi, 1
// 00522ed4  0f8576ffffff         jne 0x522e50
// 00522eda  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00522ede  8a4209               mov al, byte ptr [edx + 9]
// 00522ee1  c6420806             mov byte ptr [edx + 8], 6
// 00522ee5  c6420a04             mov byte ptr [edx + 0xa], 4
// 00522ee9  02c0                 add al, al
// 00522eeb  02c0                 add al, al
// 00522eed  88420b               mov byte ptr [edx + 0xb], al
// 00522ef0  3c08                 cmp al, 8
// 00522ef2  0fb6c0               movzx eax, al
// 00522ef5  7211                 jb 0x522f08
// 00522ef7  c1e803               shr eax, 3
// 00522efa  0fafc6               imul eax, esi
// 00522efd  5f                   pop edi
// 00522efe  5e                   pop esi
// 00522eff  5d                   pop ebp
// 00522f00  894204               mov dword ptr [edx + 4], eax
// 00522f03  5b                   pop ebx
// 00522f04  83c408               add esp, 8
// 00522f07  c3                   ret 
// 00522f08  0fafc6               imul eax, esi
// 00522f0b  83c007               add eax, 7
// 00522f0e  c1e803               shr eax, 3
// 00522f11  894204               mov dword ptr [edx + 4], eax
// 00522f14  5f                   pop edi
// 00522f15  5e                   pop esi
// 00522f16  5d                   pop ebp
// 00522f17  5b                   pop ebx
// 00522f18  83c408               add esp, 8
// 00522f1b  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_expand)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
