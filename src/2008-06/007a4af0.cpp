// roc 2008-06 007a4af0  unit: CXTIconHandle  size: 602 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a4af0
//
// 007a4af0  51                   push ecx
// 007a4af1  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a4af7  83f90b               cmp ecx, 0xb
// 007a4afa  53                   push ebx
// 007a4afb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007a4aff  55                   push ebp
// 007a4b00  56                   push esi
// 007a4b01  57                   push edi
// 007a4b02  bd01000000           mov ebp, 1
// 007a4b07  7e5e                 jle 0x7a4b67
// 007a4b09  8b742418             mov esi, dword ptr [esp + 0x18]
// 007a4b0d  81c6fffeffff         add esi, 0xfffffeff
// 007a4b13  8bd6                 mov edx, esi
// 007a4b15  d3e2                 shl edx, cl
// 007a4b17  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a4b1a  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a4b21  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a4b28  8b5008               mov edx, dword ptr [eax + 8]
// 007a4b2b  881c11               mov byte ptr [ecx + edx], bl
// 007a4b2e  016814               add dword ptr [eax + 0x14], ebp
// 007a4b31  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a4b38  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a4b3b  8b5008               mov edx, dword ptr [eax + 8]
// 007a4b3e  881c11               mov byte ptr [ecx + edx], bl
// 007a4b41  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a4b47  016814               add dword ptr [eax + 0x14], ebp
// 007a4b4a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007a4b4e  b110                 mov cl, 0x10
// 007a4b50  2aca                 sub cl, dl
// 007a4b52  66d3ee               shr si, cl
// 007a4b55  83c2f5               add edx, -0xb
// 007a4b58  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a4b5e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4b65  eb1c                 jmp 0x7a4b83
// 007a4b67  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a4b6b  81c2fffeffff         add edx, 0xfffffeff
// 007a4b71  d3e2                 shl edx, cl
// 007a4b73  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a4b7a  83c105               add ecx, 5
// 007a4b7d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a4b83  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a4b89  83f90b               cmp ecx, 0xb
// 007a4b8c  7e5d                 jle 0x7a4beb
// 007a4b8e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007a4b92  4e                   dec esi
// 007a4b93  8bd6                 mov edx, esi
// 007a4b95  d3e2                 shl edx, cl
// 007a4b97  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a4b9a  895c2410             mov dword ptr [esp + 0x10], ebx
// 007a4b9e  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a4ba5  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a4bac  8b5008               mov edx, dword ptr [eax + 8]
// 007a4baf  881c11               mov byte ptr [ecx + edx], bl
// 007a4bb2  016814               add dword ptr [eax + 0x14], ebp
// 007a4bb5  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a4bbc  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a4bbf  8b5008               mov edx, dword ptr [eax + 8]
// 007a4bc2  881c11               mov byte ptr [ecx + edx], bl
// 007a4bc5  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a4bcb  016814               add dword ptr [eax + 0x14], ebp
// 007a4bce  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007a4bd2  b110                 mov cl, 0x10
// 007a4bd4  2aca                 sub cl, dl
// 007a4bd6  66d3ee               shr si, cl
// 007a4bd9  83c2f5               add edx, -0xb
// 007a4bdc  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a4be2  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4be9  eb17                 jmp 0x7a4c02
// 007a4beb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a4bef  4a                   dec edx
// 007a4bf0  d3e2                 shl edx, cl
// 007a4bf2  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a4bf9  83c105               add ecx, 5
// 007a4bfc  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a4c02  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a4c08  83f90c               cmp ecx, 0xc
// 007a4c0b  7e5b                 jle 0x7a4c68
// 007a4c0d  8d73fc               lea esi, [ebx - 4]
// 007a4c10  8bd6                 mov edx, esi
// 007a4c12  d3e2                 shl edx, cl
// 007a4c14  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a4c17  895c2410             mov dword ptr [esp + 0x10], ebx
// 007a4c1b  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a4c22  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a4c29  8b5008               mov edx, dword ptr [eax + 8]
// 007a4c2c  881c11               mov byte ptr [ecx + edx], bl
// 007a4c2f  016814               add dword ptr [eax + 0x14], ebp
// 007a4c32  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a4c39  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a4c3c  8b5008               mov edx, dword ptr [eax + 8]
// 007a4c3f  881c11               mov byte ptr [ecx + edx], bl
// 007a4c42  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a4c48  016814               add dword ptr [eax + 0x14], ebp
// 007a4c4b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007a4c4f  b110                 mov cl, 0x10
// 007a4c51  2aca                 sub cl, dl
// 007a4c53  66d3ee               shr si, cl
// 007a4c56  83c2f4               add edx, -0xc
// 007a4c59  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a4c5f  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4c66  eb15                 jmp 0x7a4c7d
// 007a4c68  8d53fc               lea edx, [ebx - 4]
// 007a4c6b  d3e2                 shl edx, cl
// 007a4c6d  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a4c74  83c104               add ecx, 4
// 007a4c77  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a4c7d  33ff                 xor edi, edi
// 007a4c7f  85db                 test ebx, ebx
// 007a4c81  0f8e9c000000         jle 0x7a4d23
// 007a4c87  eb07                 jmp 0x7a4c90
// 007a4c89  8da42400000000       lea esp, [esp]
// 007a4c90  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a4c96  83f90d               cmp ecx, 0xd
// 007a4c99  0fb69774158700       movzx edx, byte ptr [edi + 0x871574]
// 007a4ca0  7e5c                 jle 0x7a4cfe
// 007a4ca2  0fb7b4907e0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7e]
// 007a4caa  8bd6                 mov edx, esi
// 007a4cac  d3e2                 shl edx, cl
// 007a4cae  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a4cb1  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a4cb8  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a4cbf  8b5008               mov edx, dword ptr [eax + 8]
// 007a4cc2  881c11               mov byte ptr [ecx + edx], bl
// 007a4cc5  016814               add dword ptr [eax + 0x14], ebp
// 007a4cc8  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a4ccf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a4cd2  8b5008               mov edx, dword ptr [eax + 8]
// 007a4cd5  881c11               mov byte ptr [ecx + edx], bl
// 007a4cd8  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a4cde  016814               add dword ptr [eax + 0x14], ebp
// 007a4ce1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007a4ce5  b110                 mov cl, 0x10
// 007a4ce7  2aca                 sub cl, dl
// 007a4ce9  66d3ee               shr si, cl
// 007a4cec  83c2f3               add edx, -0xd
// 007a4cef  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a4cf5  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4cfc  eb1b                 jmp 0x7a4d19
// 007a4cfe  668b94907e0a0000     mov dx, word ptr [eax + edx*4 + 0xa7e]
// 007a4d06  66d3e2               shl dx, cl
// 007a4d09  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a4d10  83c103               add ecx, 3
// 007a4d13  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a4d19  03fd                 add edi, ebp
// 007a4d1b  3bfb                 cmp edi, ebx
// 007a4d1d  0f8c6dffffff         jl 0x7a4c90
// 007a4d23  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a4d27  49                   dec ecx
// 007a4d28  8d9094000000         lea edx, [eax + 0x94]
// 007a4d2e  e8adf8ffff           call 0x7a45e0
// 007a4d33  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a4d37  5f                   pop edi
// 007a4d38  5e                   pop esi
// 007a4d39  5d                   pop ebp
// 007a4d3a  49                   dec ecx
// 007a4d3b  8d9088090000         lea edx, [eax + 0x988]
// 007a4d41  5b                   pop ebx
// 007a4d42  83c404               add esp, 4
// 007a4d45  e996f8ffff           jmp 0x7a45e0
// library zlib-1.2.3/trees.c (function _send_all_trees)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
