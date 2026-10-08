// from server: 100% by auto
// roc 2007-08 00723c50  unit: CXTIconHandle  size: 606 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00723c50
//
// 00723c50  51                   push ecx
// 00723c51  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00723c57  83f90b               cmp ecx, 0xb
// 00723c5a  53                   push ebx
// 00723c5b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00723c5f  55                   push ebp
// 00723c60  56                   push esi
// 00723c61  57                   push edi
// 00723c62  bd01000000           mov ebp, 1
// 00723c67  7e5e                 jle 0x723cc7
// 00723c69  8b742418             mov esi, dword ptr [esp + 0x18]
// 00723c6d  81c6fffeffff         add esi, 0xfffffeff
// 00723c73  8bd6                 mov edx, esi
// 00723c75  d3e2                 shl edx, cl
// 00723c77  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00723c7a  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00723c81  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00723c88  8b5008               mov edx, dword ptr [eax + 8]
// 00723c8b  881c11               mov byte ptr [ecx + edx], bl
// 00723c8e  016814               add dword ptr [eax + 0x14], ebp
// 00723c91  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00723c98  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00723c9b  8b5008               mov edx, dword ptr [eax + 8]
// 00723c9e  881c11               mov byte ptr [ecx + edx], bl
// 00723ca1  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00723ca7  016814               add dword ptr [eax + 0x14], ebp
// 00723caa  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00723cae  b110                 mov cl, 0x10
// 00723cb0  2aca                 sub cl, dl
// 00723cb2  66d3ee               shr si, cl
// 00723cb5  83c2f5               add edx, -0xb
// 00723cb8  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00723cbe  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00723cc5  eb1c                 jmp 0x723ce3
// 00723cc7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00723ccb  81c2fffeffff         add edx, 0xfffffeff
// 00723cd1  d3e2                 shl edx, cl
// 00723cd3  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00723cda  83c105               add ecx, 5
// 00723cdd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00723ce3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00723ce9  83f90b               cmp ecx, 0xb
// 00723cec  7e5f                 jle 0x723d4d
// 00723cee  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00723cf2  83c6ff               add esi, -1
// 00723cf5  8bd6                 mov edx, esi
// 00723cf7  d3e2                 shl edx, cl
// 00723cf9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00723cfc  895c2410             mov dword ptr [esp + 0x10], ebx
// 00723d00  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00723d07  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00723d0e  8b5008               mov edx, dword ptr [eax + 8]
// 00723d11  881c11               mov byte ptr [ecx + edx], bl
// 00723d14  016814               add dword ptr [eax + 0x14], ebp
// 00723d17  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00723d1e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00723d21  8b5008               mov edx, dword ptr [eax + 8]
// 00723d24  881c11               mov byte ptr [ecx + edx], bl
// 00723d27  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00723d2d  016814               add dword ptr [eax + 0x14], ebp
// 00723d30  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00723d34  b110                 mov cl, 0x10
// 00723d36  2aca                 sub cl, dl
// 00723d38  66d3ee               shr si, cl
// 00723d3b  83c2f5               add edx, -0xb
// 00723d3e  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00723d44  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00723d4b  eb19                 jmp 0x723d66
// 00723d4d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00723d51  83c2ff               add edx, -1
// 00723d54  d3e2                 shl edx, cl
// 00723d56  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00723d5d  83c105               add ecx, 5
// 00723d60  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00723d66  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00723d6c  83f90c               cmp ecx, 0xc
// 00723d6f  7e5b                 jle 0x723dcc
// 00723d71  8d73fc               lea esi, [ebx - 4]
// 00723d74  8bd6                 mov edx, esi
// 00723d76  d3e2                 shl edx, cl
// 00723d78  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00723d7b  895c2410             mov dword ptr [esp + 0x10], ebx
// 00723d7f  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00723d86  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00723d8d  8b5008               mov edx, dword ptr [eax + 8]
// 00723d90  881c11               mov byte ptr [ecx + edx], bl
// 00723d93  016814               add dword ptr [eax + 0x14], ebp
// 00723d96  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00723d9d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00723da0  8b5008               mov edx, dword ptr [eax + 8]
// 00723da3  881c11               mov byte ptr [ecx + edx], bl
// 00723da6  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00723dac  016814               add dword ptr [eax + 0x14], ebp
// 00723daf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00723db3  b110                 mov cl, 0x10
// 00723db5  2aca                 sub cl, dl
// 00723db7  66d3ee               shr si, cl
// 00723dba  83c2f4               add edx, -0xc
// 00723dbd  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00723dc3  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00723dca  eb15                 jmp 0x723de1
// 00723dcc  8d53fc               lea edx, [ebx - 4]
// 00723dcf  d3e2                 shl edx, cl
// 00723dd1  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00723dd8  83c104               add ecx, 4
// 00723ddb  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00723de1  33ff                 xor edi, edi
// 00723de3  85db                 test ebx, ebx
// 00723de5  0f8e98000000         jle 0x723e83
// 00723deb  eb03                 jmp 0x723df0
// 00723ded  8d4900               lea ecx, [ecx]
// 00723df0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00723df6  83f90d               cmp ecx, 0xd
// 00723df9  0fb697ec467e00       movzx edx, byte ptr [edi + 0x7e46ec]
// 00723e00  7e5c                 jle 0x723e5e
// 00723e02  0fb7b4907e0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7e]
// 00723e0a  8bd6                 mov edx, esi
// 00723e0c  d3e2                 shl edx, cl
// 00723e0e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00723e11  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00723e18  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00723e1f  8b5008               mov edx, dword ptr [eax + 8]
// 00723e22  881c11               mov byte ptr [ecx + edx], bl
// 00723e25  016814               add dword ptr [eax + 0x14], ebp
// 00723e28  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00723e2f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00723e32  8b5008               mov edx, dword ptr [eax + 8]
// 00723e35  881c11               mov byte ptr [ecx + edx], bl
// 00723e38  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00723e3e  016814               add dword ptr [eax + 0x14], ebp
// 00723e41  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00723e45  b110                 mov cl, 0x10
// 00723e47  2aca                 sub cl, dl
// 00723e49  66d3ee               shr si, cl
// 00723e4c  83c2f3               add edx, -0xd
// 00723e4f  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00723e55  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00723e5c  eb1b                 jmp 0x723e79
// 00723e5e  668b94907e0a0000     mov dx, word ptr [eax + edx*4 + 0xa7e]
// 00723e66  66d3e2               shl dx, cl
// 00723e69  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00723e70  83c103               add ecx, 3
// 00723e73  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00723e79  03fd                 add edi, ebp
// 00723e7b  3bfb                 cmp edi, ebx
// 00723e7d  0f8c6dffffff         jl 0x723df0
// 00723e83  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00723e87  83c1ff               add ecx, -1
// 00723e8a  8d9094000000         lea edx, [eax + 0x94]
// 00723e90  e8abf8ffff           call 0x723740
// 00723e95  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00723e99  5f                   pop edi
// 00723e9a  5e                   pop esi
// 00723e9b  5d                   pop ebp
// 00723e9c  83c1ff               add ecx, -1
// 00723e9f  8d9088090000         lea edx, [eax + 0x988]
// 00723ea5  5b                   pop ebx
// 00723ea6  83c404               add esp, 4
// 00723ea9  e992f8ffff           jmp 0x723740
// library zlib-1.2.3/trees.c (function _send_all_trees)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
