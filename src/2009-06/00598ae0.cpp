// from server: 100% by auto
// roc 2009-06 00598ae0  unit: seg_00590000  size: 1291 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598ae0
//
// 00598ae0  83ec18               sub esp, 0x18
// 00598ae3  53                   push ebx
// 00598ae4  55                   push ebp
// 00598ae5  0fb76a02             movzx ebp, word ptr [edx + 2]
// 00598ae9  56                   push esi
// 00598aea  33f6                 xor esi, esi
// 00598aec  57                   push edi
// 00598aed  8bd9                 mov ebx, ecx
// 00598aef  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00598af7  896c2414             mov dword ptr [esp + 0x14], ebp
// 00598afb  8d4e07               lea ecx, [esi + 7]
// 00598afe  8d7e04               lea edi, [esi + 4]
// 00598b01  85ed                 test ebp, ebp
// 00598b03  7508                 jne 0x598b0d
// 00598b05  b98a000000           mov ecx, 0x8a
// 00598b0a  8d7d03               lea edi, [ebp + 3]
// 00598b0d  85db                 test ebx, ebx
// 00598b0f  0f8cce040000         jl 0x598fe3
// 00598b15  83c206               add edx, 6
// 00598b18  43                   inc ebx
// 00598b19  89542418             mov dword ptr [esp + 0x18], edx
// 00598b1d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00598b21  bd01000000           mov ebp, 1
// 00598b26  eb08                 jmp 0x598b30
// 00598b28  8da42400000000       lea esp, [esp]
// 00598b2f  90                   nop 
// 00598b30  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00598b34  0fb71b               movzx ebx, word ptr [ebx]
// 00598b37  8b542414             mov edx, dword ptr [esp + 0x14]
// 00598b3b  03f5                 add esi, ebp
// 00598b3d  3bf1                 cmp esi, ecx
// 00598b3f  89542424             mov dword ptr [esp + 0x24], edx
// 00598b43  895c2414             mov dword ptr [esp + 0x14], ebx
// 00598b47  89742410             mov dword ptr [esp + 0x10], esi
// 00598b4b  7d08                 jge 0x598b55
// 00598b4d  3bd3                 cmp edx, ebx
// 00598b4f  0f847f040000         je 0x598fd4
// 00598b55  3bf7                 cmp esi, edi
// 00598b57  0f8da2000000         jge 0x598bff
// 00598b5d  8d4900               lea ecx, [ecx]
// 00598b60  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 00598b68  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00598b6e  bb10000000           mov ebx, 0x10
// 00598b73  2bdf                 sub ebx, edi
// 00598b75  3bcb                 cmp ecx, ebx
// 00598b77  7e5b                 jle 0x598bd4
// 00598b79  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 00598b81  8bd6                 mov edx, esi
// 00598b83  d3e2                 shl edx, cl
// 00598b85  8b4808               mov ecx, dword ptr [eax + 8]
// 00598b88  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00598b8f  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00598b96  8b5014               mov edx, dword ptr [eax + 0x14]
// 00598b99  881c11               mov byte ptr [ecx + edx], bl
// 00598b9c  016814               add dword ptr [eax + 0x14], ebp
// 00598b9f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00598ba2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00598ba9  8b5008               mov edx, dword ptr [eax + 8]
// 00598bac  881c11               mov byte ptr [ecx + edx], bl
// 00598baf  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00598bb5  016814               add dword ptr [eax + 0x14], ebp
// 00598bb8  b110                 mov cl, 0x10
// 00598bba  2aca                 sub cl, dl
// 00598bbc  66d3ee               shr si, cl
// 00598bbf  8d4c3af0             lea ecx, [edx + edi - 0x10]
// 00598bc3  8b542424             mov edx, dword ptr [esp + 0x24]
// 00598bc7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00598bce  8b742410             mov esi, dword ptr [esp + 0x10]
// 00598bd2  eb14                 jmp 0x598be8
// 00598bd4  668b9c907c0a0000     mov bx, word ptr [eax + edx*4 + 0xa7c]
// 00598bdc  66d3e3               shl bx, cl
// 00598bdf  660998b8160000       or word ptr [eax + 0x16b8], bx
// 00598be6  03cf                 add ecx, edi
// 00598be8  2bf5                 sub esi, ebp
// 00598bea  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00598bf0  89742410             mov dword ptr [esp + 0x10], esi
// 00598bf4  0f8566ffffff         jne 0x598b60
// 00598bfa  e9a7030000           jmp 0x598fa6
// 00598bff  85d2                 test edx, edx
// 00598c01  0f84a5010000         je 0x598dac
// 00598c07  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00598c0b  0f849c000000         je 0x598cad
// 00598c11  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 00598c19  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00598c1f  bb10000000           mov ebx, 0x10
// 00598c24  2bdf                 sub ebx, edi
// 00598c26  3bcb                 cmp ecx, ebx
// 00598c28  897c241c             mov dword ptr [esp + 0x1c], edi
// 00598c2c  7e5b                 jle 0x598c89
// 00598c2e  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 00598c36  8bfe                 mov edi, esi
// 00598c38  d3e7                 shl edi, cl
// 00598c3a  8b4808               mov ecx, dword ptr [eax + 8]
// 00598c3d  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598c44  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00598c4b  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598c4e  881c39               mov byte ptr [ecx + edi], bl
// 00598c51  016814               add dword ptr [eax + 0x14], ebp
// 00598c54  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00598c5b  8b4808               mov ecx, dword ptr [eax + 8]
// 00598c5e  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598c61  881c0f               mov byte ptr [edi + ecx], bl
// 00598c64  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00598c6a  016814               add dword ptr [eax + 0x14], ebp
// 00598c6d  b110                 mov cl, 0x10
// 00598c6f  2acb                 sub cl, bl
// 00598c71  66d3ee               shr si, cl
// 00598c74  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00598c78  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00598c7c  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00598c83  8b742410             mov esi, dword ptr [esp + 0x10]
// 00598c87  eb18                 jmp 0x598ca1
// 00598c89  668bbc907c0a0000     mov di, word ptr [eax + edx*4 + 0xa7c]
// 00598c91  66d3e7               shl di, cl
// 00598c94  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598c9b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00598c9f  03cf                 add ecx, edi
// 00598ca1  2bf5                 sub esi, ebp
// 00598ca3  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00598ca9  89742410             mov dword ptr [esp + 0x10], esi
// 00598cad  0fb7b8be0a0000       movzx edi, word ptr [eax + 0xabe]
// 00598cb4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00598cba  bb10000000           mov ebx, 0x10
// 00598cbf  2bdf                 sub ebx, edi
// 00598cc1  3bcb                 cmp ecx, ebx
// 00598cc3  897c241c             mov dword ptr [esp + 0x1c], edi
// 00598cc7  7e5a                 jle 0x598d23
// 00598cc9  0fb7b0bc0a0000       movzx esi, word ptr [eax + 0xabc]
// 00598cd0  8bfe                 mov edi, esi
// 00598cd2  d3e7                 shl edi, cl
// 00598cd4  8b4808               mov ecx, dword ptr [eax + 8]
// 00598cd7  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598cde  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00598ce5  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598ce8  881c39               mov byte ptr [ecx + edi], bl
// 00598ceb  016814               add dword ptr [eax + 0x14], ebp
// 00598cee  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00598cf5  8b4808               mov ecx, dword ptr [eax + 8]
// 00598cf8  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598cfb  881c0f               mov byte ptr [edi + ecx], bl
// 00598cfe  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00598d04  016814               add dword ptr [eax + 0x14], ebp
// 00598d07  b110                 mov cl, 0x10
// 00598d09  2acb                 sub cl, bl
// 00598d0b  66d3ee               shr si, cl
// 00598d0e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00598d12  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00598d16  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00598d1d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00598d21  eb17                 jmp 0x598d3a
// 00598d23  668bb8bc0a0000       mov di, word ptr [eax + 0xabc]
// 00598d2a  66d3e7               shl di, cl
// 00598d2d  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598d34  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00598d38  03cf                 add ecx, edi
// 00598d3a  83c6fd               add esi, -3
// 00598d3d  83f90e               cmp ecx, 0xe
// 00598d40  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00598d46  7e53                 jle 0x598d9b
// 00598d48  8bfe                 mov edi, esi
// 00598d4a  d3e7                 shl edi, cl
// 00598d4c  8b4808               mov ecx, dword ptr [eax + 8]
// 00598d4f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598d56  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00598d5d  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598d60  881c39               mov byte ptr [ecx + edi], bl
// 00598d63  016814               add dword ptr [eax + 0x14], ebp
// 00598d66  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00598d6d  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598d70  8b4808               mov ecx, dword ptr [eax + 8]
// 00598d73  881c0f               mov byte ptr [edi + ecx], bl
// 00598d76  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00598d7c  016814               add dword ptr [eax + 0x14], ebp
// 00598d7f  b110                 mov cl, 0x10
// 00598d81  2acb                 sub cl, bl
// 00598d83  66d3ee               shr si, cl
// 00598d86  83c3f2               add ebx, -0xe
// 00598d89  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 00598d8f  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00598d96  e90b020000           jmp 0x598fa6
// 00598d9b  d3e6                 shl esi, cl
// 00598d9d  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 00598da4  83c102               add ecx, 2
// 00598da7  e9f4010000           jmp 0x598fa0
// 00598dac  83fe0a               cmp esi, 0xa
// 00598daf  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00598db5  bb10000000           mov ebx, 0x10
// 00598dba  0f8ff4000000         jg 0x598eb4
// 00598dc0  0fb7b8c20a0000       movzx edi, word ptr [eax + 0xac2]
// 00598dc7  2bdf                 sub ebx, edi
// 00598dc9  3bcb                 cmp ecx, ebx
// 00598dcb  897c241c             mov dword ptr [esp + 0x1c], edi
// 00598dcf  7e5a                 jle 0x598e2b
// 00598dd1  0fb7b0c00a0000       movzx esi, word ptr [eax + 0xac0]
// 00598dd8  8bfe                 mov edi, esi
// 00598dda  d3e7                 shl edi, cl
// 00598ddc  8b4808               mov ecx, dword ptr [eax + 8]
// 00598ddf  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598de6  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00598ded  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598df0  881c39               mov byte ptr [ecx + edi], bl
// 00598df3  016814               add dword ptr [eax + 0x14], ebp
// 00598df6  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00598dfd  8b4808               mov ecx, dword ptr [eax + 8]
// 00598e00  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598e03  881c0f               mov byte ptr [edi + ecx], bl
// 00598e06  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00598e0c  016814               add dword ptr [eax + 0x14], ebp
// 00598e0f  b110                 mov cl, 0x10
// 00598e11  2acb                 sub cl, bl
// 00598e13  66d3ee               shr si, cl
// 00598e16  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00598e1a  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00598e1e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00598e25  8b742410             mov esi, dword ptr [esp + 0x10]
// 00598e29  eb17                 jmp 0x598e42
// 00598e2b  668bb8c00a0000       mov di, word ptr [eax + 0xac0]
// 00598e32  66d3e7               shl di, cl
// 00598e35  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598e3c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00598e40  03cf                 add ecx, edi
// 00598e42  83c6fd               add esi, -3
// 00598e45  83f90d               cmp ecx, 0xd
// 00598e48  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00598e4e  7e53                 jle 0x598ea3
// 00598e50  8bfe                 mov edi, esi
// 00598e52  d3e7                 shl edi, cl
// 00598e54  8b4808               mov ecx, dword ptr [eax + 8]
// 00598e57  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598e5e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00598e65  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598e68  881c39               mov byte ptr [ecx + edi], bl
// 00598e6b  016814               add dword ptr [eax + 0x14], ebp
// 00598e6e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00598e75  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598e78  8b4808               mov ecx, dword ptr [eax + 8]
// 00598e7b  881c0f               mov byte ptr [edi + ecx], bl
// 00598e7e  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00598e84  016814               add dword ptr [eax + 0x14], ebp
// 00598e87  b110                 mov cl, 0x10
// 00598e89  2acb                 sub cl, bl
// 00598e8b  66d3ee               shr si, cl
// 00598e8e  83c3f3               add ebx, -0xd
// 00598e91  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 00598e97  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00598e9e  e903010000           jmp 0x598fa6
// 00598ea3  d3e6                 shl esi, cl
// 00598ea5  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 00598eac  83c103               add ecx, 3
// 00598eaf  e9ec000000           jmp 0x598fa0
// 00598eb4  0fb7b8c60a0000       movzx edi, word ptr [eax + 0xac6]
// 00598ebb  2bdf                 sub ebx, edi
// 00598ebd  3bcb                 cmp ecx, ebx
// 00598ebf  897c241c             mov dword ptr [esp + 0x1c], edi
// 00598ec3  7e5a                 jle 0x598f1f
// 00598ec5  0fb7b0c40a0000       movzx esi, word ptr [eax + 0xac4]
// 00598ecc  8bfe                 mov edi, esi
// 00598ece  d3e7                 shl edi, cl
// 00598ed0  8b4808               mov ecx, dword ptr [eax + 8]
// 00598ed3  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598eda  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00598ee1  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598ee4  881c39               mov byte ptr [ecx + edi], bl
// 00598ee7  016814               add dword ptr [eax + 0x14], ebp
// 00598eea  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00598ef1  8b4808               mov ecx, dword ptr [eax + 8]
// 00598ef4  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598ef7  881c0f               mov byte ptr [edi + ecx], bl
// 00598efa  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00598f00  016814               add dword ptr [eax + 0x14], ebp
// 00598f03  b110                 mov cl, 0x10
// 00598f05  2acb                 sub cl, bl
// 00598f07  66d3ee               shr si, cl
// 00598f0a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00598f0e  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00598f12  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00598f19  8b742410             mov esi, dword ptr [esp + 0x10]
// 00598f1d  eb17                 jmp 0x598f36
// 00598f1f  668bb8c40a0000       mov di, word ptr [eax + 0xac4]
// 00598f26  66d3e7               shl di, cl
// 00598f29  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598f30  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00598f34  03cf                 add ecx, edi
// 00598f36  83c6f5               add esi, -0xb
// 00598f39  83f909               cmp ecx, 9
// 00598f3c  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00598f42  7e50                 jle 0x598f94
// 00598f44  8bfe                 mov edi, esi
// 00598f46  d3e7                 shl edi, cl
// 00598f48  8b4808               mov ecx, dword ptr [eax + 8]
// 00598f4b  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00598f52  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00598f59  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598f5c  881c39               mov byte ptr [ecx + edi], bl
// 00598f5f  016814               add dword ptr [eax + 0x14], ebp
// 00598f62  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00598f69  8b7814               mov edi, dword ptr [eax + 0x14]
// 00598f6c  8b4808               mov ecx, dword ptr [eax + 8]
// 00598f6f  881c0f               mov byte ptr [edi + ecx], bl
// 00598f72  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00598f78  016814               add dword ptr [eax + 0x14], ebp
// 00598f7b  b110                 mov cl, 0x10
// 00598f7d  2acb                 sub cl, bl
// 00598f7f  66d3ee               shr si, cl
// 00598f82  83c3f7               add ebx, -9
// 00598f85  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 00598f8b  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00598f92  eb12                 jmp 0x598fa6
// 00598f94  d3e6                 shl esi, cl
// 00598f96  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 00598f9d  83c107               add ecx, 7
// 00598fa0  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00598fa6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00598faa  33f6                 xor esi, esi
// 00598fac  8954241c             mov dword ptr [esp + 0x1c], edx
// 00598fb0  85c9                 test ecx, ecx
// 00598fb2  750a                 jne 0x598fbe
// 00598fb4  b98a000000           mov ecx, 0x8a
// 00598fb9  8d7e03               lea edi, [esi + 3]
// 00598fbc  eb16                 jmp 0x598fd4
// 00598fbe  3bd1                 cmp edx, ecx
// 00598fc0  750a                 jne 0x598fcc
// 00598fc2  b906000000           mov ecx, 6
// 00598fc7  8d79fd               lea edi, [ecx - 3]
// 00598fca  eb08                 jmp 0x598fd4
// 00598fcc  b907000000           mov ecx, 7
// 00598fd1  8d79fd               lea edi, [ecx - 3]
// 00598fd4  8344241804           add dword ptr [esp + 0x18], 4
// 00598fd9  296c2420             sub dword ptr [esp + 0x20], ebp
// 00598fdd  0f854dfbffff         jne 0x598b30
// 00598fe3  5f                   pop edi
// 00598fe4  5e                   pop esi
// 00598fe5  5d                   pop ebp
// 00598fe6  5b                   pop ebx
// 00598fe7  83c418               add esp, 0x18
// 00598fea  c3                   ret 
// library zlib-1.2.3/trees.c (function _send_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
