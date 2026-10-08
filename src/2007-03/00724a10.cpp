// roc 2007-03 00724a10  unit: seg_00720000  size: 1297 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00724a10
//
// 00724a10  83ec18               sub esp, 0x18
// 00724a13  53                   push ebx
// 00724a14  55                   push ebp
// 00724a15  0fb76a02             movzx ebp, word ptr [edx + 2]
// 00724a19  56                   push esi
// 00724a1a  33f6                 xor esi, esi
// 00724a1c  85ed                 test ebp, ebp
// 00724a1e  57                   push edi
// 00724a1f  8bd9                 mov ebx, ecx
// 00724a21  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00724a29  896c2414             mov dword ptr [esp + 0x14], ebp
// 00724a2d  b907000000           mov ecx, 7
// 00724a32  bf04000000           mov edi, 4
// 00724a37  750a                 jne 0x724a43
// 00724a39  b98a000000           mov ecx, 0x8a
// 00724a3e  bf03000000           mov edi, 3
// 00724a43  85db                 test ebx, ebx
// 00724a45  0f8cce040000         jl 0x724f19
// 00724a4b  83c206               add edx, 6
// 00724a4e  83c301               add ebx, 1
// 00724a51  89542418             mov dword ptr [esp + 0x18], edx
// 00724a55  895c2420             mov dword ptr [esp + 0x20], ebx
// 00724a59  bd01000000           mov ebp, 1
// 00724a5e  8bff                 mov edi, edi
// 00724a60  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00724a64  0fb71b               movzx ebx, word ptr [ebx]
// 00724a67  8b542414             mov edx, dword ptr [esp + 0x14]
// 00724a6b  03f5                 add esi, ebp
// 00724a6d  3bf1                 cmp esi, ecx
// 00724a6f  89542424             mov dword ptr [esp + 0x24], edx
// 00724a73  895c2414             mov dword ptr [esp + 0x14], ebx
// 00724a77  89742410             mov dword ptr [esp + 0x10], esi
// 00724a7b  7d08                 jge 0x724a85
// 00724a7d  3bd3                 cmp edx, ebx
// 00724a7f  0f8485040000         je 0x724f0a
// 00724a85  3bf7                 cmp esi, edi
// 00724a87  0f8da2000000         jge 0x724b2f
// 00724a8d  8d4900               lea ecx, [ecx]
// 00724a90  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 00724a98  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724a9e  bb10000000           mov ebx, 0x10
// 00724aa3  2bdf                 sub ebx, edi
// 00724aa5  3bcb                 cmp ecx, ebx
// 00724aa7  7e5b                 jle 0x724b04
// 00724aa9  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 00724ab1  8bd6                 mov edx, esi
// 00724ab3  d3e2                 shl edx, cl
// 00724ab5  8b4808               mov ecx, dword ptr [eax + 8]
// 00724ab8  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724abf  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724ac6  8b5014               mov edx, dword ptr [eax + 0x14]
// 00724ac9  881c11               mov byte ptr [ecx + edx], bl
// 00724acc  016814               add dword ptr [eax + 0x14], ebp
// 00724acf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724ad2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724ad9  8b5008               mov edx, dword ptr [eax + 8]
// 00724adc  881c11               mov byte ptr [ecx + edx], bl
// 00724adf  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00724ae5  016814               add dword ptr [eax + 0x14], ebp
// 00724ae8  b110                 mov cl, 0x10
// 00724aea  2aca                 sub cl, dl
// 00724aec  66d3ee               shr si, cl
// 00724aef  8d4c3af0             lea ecx, [edx + edi - 0x10]
// 00724af3  8b542424             mov edx, dword ptr [esp + 0x24]
// 00724af7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724afe  8b742410             mov esi, dword ptr [esp + 0x10]
// 00724b02  eb14                 jmp 0x724b18
// 00724b04  668b9c907c0a0000     mov bx, word ptr [eax + edx*4 + 0xa7c]
// 00724b0c  66d3e3               shl bx, cl
// 00724b0f  660998b8160000       or word ptr [eax + 0x16b8], bx
// 00724b16  03cf                 add ecx, edi
// 00724b18  2bf5                 sub esi, ebp
// 00724b1a  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724b20  89742410             mov dword ptr [esp + 0x10], esi
// 00724b24  0f8566ffffff         jne 0x724a90
// 00724b2a  e9a7030000           jmp 0x724ed6
// 00724b2f  85d2                 test edx, edx
// 00724b31  0f84a5010000         je 0x724cdc
// 00724b37  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00724b3b  0f849c000000         je 0x724bdd
// 00724b41  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 00724b49  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724b4f  bb10000000           mov ebx, 0x10
// 00724b54  2bdf                 sub ebx, edi
// 00724b56  3bcb                 cmp ecx, ebx
// 00724b58  897c241c             mov dword ptr [esp + 0x1c], edi
// 00724b5c  7e5b                 jle 0x724bb9
// 00724b5e  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 00724b66  8bfe                 mov edi, esi
// 00724b68  d3e7                 shl edi, cl
// 00724b6a  8b4808               mov ecx, dword ptr [eax + 8]
// 00724b6d  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724b74  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724b7b  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724b7e  881c39               mov byte ptr [ecx + edi], bl
// 00724b81  016814               add dword ptr [eax + 0x14], ebp
// 00724b84  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724b8b  8b4808               mov ecx, dword ptr [eax + 8]
// 00724b8e  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724b91  881c0f               mov byte ptr [edi + ecx], bl
// 00724b94  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00724b9a  016814               add dword ptr [eax + 0x14], ebp
// 00724b9d  b110                 mov cl, 0x10
// 00724b9f  2acb                 sub cl, bl
// 00724ba1  66d3ee               shr si, cl
// 00724ba4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00724ba8  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00724bac  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724bb3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00724bb7  eb18                 jmp 0x724bd1
// 00724bb9  668bbc907c0a0000     mov di, word ptr [eax + edx*4 + 0xa7c]
// 00724bc1  66d3e7               shl di, cl
// 00724bc4  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724bcb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00724bcf  03cf                 add ecx, edi
// 00724bd1  2bf5                 sub esi, ebp
// 00724bd3  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724bd9  89742410             mov dword ptr [esp + 0x10], esi
// 00724bdd  0fb7b8be0a0000       movzx edi, word ptr [eax + 0xabe]
// 00724be4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724bea  bb10000000           mov ebx, 0x10
// 00724bef  2bdf                 sub ebx, edi
// 00724bf1  3bcb                 cmp ecx, ebx
// 00724bf3  897c241c             mov dword ptr [esp + 0x1c], edi
// 00724bf7  7e5a                 jle 0x724c53
// 00724bf9  0fb7b0bc0a0000       movzx esi, word ptr [eax + 0xabc]
// 00724c00  8bfe                 mov edi, esi
// 00724c02  d3e7                 shl edi, cl
// 00724c04  8b4808               mov ecx, dword ptr [eax + 8]
// 00724c07  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724c0e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724c15  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724c18  881c39               mov byte ptr [ecx + edi], bl
// 00724c1b  016814               add dword ptr [eax + 0x14], ebp
// 00724c1e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724c25  8b4808               mov ecx, dword ptr [eax + 8]
// 00724c28  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724c2b  881c0f               mov byte ptr [edi + ecx], bl
// 00724c2e  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00724c34  016814               add dword ptr [eax + 0x14], ebp
// 00724c37  b110                 mov cl, 0x10
// 00724c39  2acb                 sub cl, bl
// 00724c3b  66d3ee               shr si, cl
// 00724c3e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00724c42  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00724c46  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724c4d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00724c51  eb17                 jmp 0x724c6a
// 00724c53  668bb8bc0a0000       mov di, word ptr [eax + 0xabc]
// 00724c5a  66d3e7               shl di, cl
// 00724c5d  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724c64  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00724c68  03cf                 add ecx, edi
// 00724c6a  83c6fd               add esi, -3
// 00724c6d  83f90e               cmp ecx, 0xe
// 00724c70  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724c76  7e53                 jle 0x724ccb
// 00724c78  8bfe                 mov edi, esi
// 00724c7a  d3e7                 shl edi, cl
// 00724c7c  8b4808               mov ecx, dword ptr [eax + 8]
// 00724c7f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724c86  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724c8d  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724c90  881c39               mov byte ptr [ecx + edi], bl
// 00724c93  016814               add dword ptr [eax + 0x14], ebp
// 00724c96  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724c9d  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724ca0  8b4808               mov ecx, dword ptr [eax + 8]
// 00724ca3  881c0f               mov byte ptr [edi + ecx], bl
// 00724ca6  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00724cac  016814               add dword ptr [eax + 0x14], ebp
// 00724caf  b110                 mov cl, 0x10
// 00724cb1  2acb                 sub cl, bl
// 00724cb3  66d3ee               shr si, cl
// 00724cb6  83c3f2               add ebx, -0xe
// 00724cb9  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 00724cbf  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724cc6  e90b020000           jmp 0x724ed6
// 00724ccb  d3e6                 shl esi, cl
// 00724ccd  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 00724cd4  83c102               add ecx, 2
// 00724cd7  e9f4010000           jmp 0x724ed0
// 00724cdc  83fe0a               cmp esi, 0xa
// 00724cdf  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724ce5  bb10000000           mov ebx, 0x10
// 00724cea  0f8ff4000000         jg 0x724de4
// 00724cf0  0fb7b8c20a0000       movzx edi, word ptr [eax + 0xac2]
// 00724cf7  2bdf                 sub ebx, edi
// 00724cf9  3bcb                 cmp ecx, ebx
// 00724cfb  897c241c             mov dword ptr [esp + 0x1c], edi
// 00724cff  7e5a                 jle 0x724d5b
// 00724d01  0fb7b0c00a0000       movzx esi, word ptr [eax + 0xac0]
// 00724d08  8bfe                 mov edi, esi
// 00724d0a  d3e7                 shl edi, cl
// 00724d0c  8b4808               mov ecx, dword ptr [eax + 8]
// 00724d0f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724d16  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724d1d  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724d20  881c39               mov byte ptr [ecx + edi], bl
// 00724d23  016814               add dword ptr [eax + 0x14], ebp
// 00724d26  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724d2d  8b4808               mov ecx, dword ptr [eax + 8]
// 00724d30  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724d33  881c0f               mov byte ptr [edi + ecx], bl
// 00724d36  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00724d3c  016814               add dword ptr [eax + 0x14], ebp
// 00724d3f  b110                 mov cl, 0x10
// 00724d41  2acb                 sub cl, bl
// 00724d43  66d3ee               shr si, cl
// 00724d46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00724d4a  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00724d4e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724d55  8b742410             mov esi, dword ptr [esp + 0x10]
// 00724d59  eb17                 jmp 0x724d72
// 00724d5b  668bb8c00a0000       mov di, word ptr [eax + 0xac0]
// 00724d62  66d3e7               shl di, cl
// 00724d65  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724d6c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00724d70  03cf                 add ecx, edi
// 00724d72  83c6fd               add esi, -3
// 00724d75  83f90d               cmp ecx, 0xd
// 00724d78  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724d7e  7e53                 jle 0x724dd3
// 00724d80  8bfe                 mov edi, esi
// 00724d82  d3e7                 shl edi, cl
// 00724d84  8b4808               mov ecx, dword ptr [eax + 8]
// 00724d87  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724d8e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724d95  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724d98  881c39               mov byte ptr [ecx + edi], bl
// 00724d9b  016814               add dword ptr [eax + 0x14], ebp
// 00724d9e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724da5  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724da8  8b4808               mov ecx, dword ptr [eax + 8]
// 00724dab  881c0f               mov byte ptr [edi + ecx], bl
// 00724dae  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00724db4  016814               add dword ptr [eax + 0x14], ebp
// 00724db7  b110                 mov cl, 0x10
// 00724db9  2acb                 sub cl, bl
// 00724dbb  66d3ee               shr si, cl
// 00724dbe  83c3f3               add ebx, -0xd
// 00724dc1  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 00724dc7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724dce  e903010000           jmp 0x724ed6
// 00724dd3  d3e6                 shl esi, cl
// 00724dd5  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 00724ddc  83c103               add ecx, 3
// 00724ddf  e9ec000000           jmp 0x724ed0
// 00724de4  0fb7b8c60a0000       movzx edi, word ptr [eax + 0xac6]
// 00724deb  2bdf                 sub ebx, edi
// 00724ded  3bcb                 cmp ecx, ebx
// 00724def  897c241c             mov dword ptr [esp + 0x1c], edi
// 00724df3  7e5a                 jle 0x724e4f
// 00724df5  0fb7b0c40a0000       movzx esi, word ptr [eax + 0xac4]
// 00724dfc  8bfe                 mov edi, esi
// 00724dfe  d3e7                 shl edi, cl
// 00724e00  8b4808               mov ecx, dword ptr [eax + 8]
// 00724e03  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724e0a  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724e11  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724e14  881c39               mov byte ptr [ecx + edi], bl
// 00724e17  016814               add dword ptr [eax + 0x14], ebp
// 00724e1a  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724e21  8b4808               mov ecx, dword ptr [eax + 8]
// 00724e24  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724e27  881c0f               mov byte ptr [edi + ecx], bl
// 00724e2a  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00724e30  016814               add dword ptr [eax + 0x14], ebp
// 00724e33  b110                 mov cl, 0x10
// 00724e35  2acb                 sub cl, bl
// 00724e37  66d3ee               shr si, cl
// 00724e3a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00724e3e  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00724e42  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724e49  8b742410             mov esi, dword ptr [esp + 0x10]
// 00724e4d  eb17                 jmp 0x724e66
// 00724e4f  668bb8c40a0000       mov di, word ptr [eax + 0xac4]
// 00724e56  66d3e7               shl di, cl
// 00724e59  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724e60  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00724e64  03cf                 add ecx, edi
// 00724e66  83c6f5               add esi, -0xb
// 00724e69  83f909               cmp ecx, 9
// 00724e6c  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724e72  7e50                 jle 0x724ec4
// 00724e74  8bfe                 mov edi, esi
// 00724e76  d3e7                 shl edi, cl
// 00724e78  8b4808               mov ecx, dword ptr [eax + 8]
// 00724e7b  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00724e82  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724e89  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724e8c  881c39               mov byte ptr [ecx + edi], bl
// 00724e8f  016814               add dword ptr [eax + 0x14], ebp
// 00724e92  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724e99  8b7814               mov edi, dword ptr [eax + 0x14]
// 00724e9c  8b4808               mov ecx, dword ptr [eax + 8]
// 00724e9f  881c0f               mov byte ptr [edi + ecx], bl
// 00724ea2  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00724ea8  016814               add dword ptr [eax + 0x14], ebp
// 00724eab  b110                 mov cl, 0x10
// 00724ead  2acb                 sub cl, bl
// 00724eaf  66d3ee               shr si, cl
// 00724eb2  83c3f7               add ebx, -9
// 00724eb5  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 00724ebb  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724ec2  eb12                 jmp 0x724ed6
// 00724ec4  d3e6                 shl esi, cl
// 00724ec6  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 00724ecd  83c107               add ecx, 7
// 00724ed0  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724ed6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00724eda  33f6                 xor esi, esi
// 00724edc  85c9                 test ecx, ecx
// 00724ede  8954241c             mov dword ptr [esp + 0x1c], edx
// 00724ee2  750c                 jne 0x724ef0
// 00724ee4  b98a000000           mov ecx, 0x8a
// 00724ee9  bf03000000           mov edi, 3
// 00724eee  eb1a                 jmp 0x724f0a
// 00724ef0  3bd1                 cmp edx, ecx
// 00724ef2  750c                 jne 0x724f00
// 00724ef4  b906000000           mov ecx, 6
// 00724ef9  bf03000000           mov edi, 3
// 00724efe  eb0a                 jmp 0x724f0a
// 00724f00  b907000000           mov ecx, 7
// 00724f05  bf04000000           mov edi, 4
// 00724f0a  8344241804           add dword ptr [esp + 0x18], 4
// 00724f0f  296c2420             sub dword ptr [esp + 0x20], ebp
// 00724f13  0f8547fbffff         jne 0x724a60
// 00724f19  5f                   pop edi
// 00724f1a  5e                   pop esi
// 00724f1b  5d                   pop ebp
// 00724f1c  5b                   pop ebx
// 00724f1d  83c418               add esp, 0x18
// 00724f20  c3                   ret 
// library zlib-1.2.3/trees.c (function _send_tree)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
