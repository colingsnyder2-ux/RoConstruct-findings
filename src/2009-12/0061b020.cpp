// roc 2009-12 0061b020  unit: seg_00610000  size: 602 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061b020
//
// 0061b020  51                   push ecx
// 0061b021  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061b027  83f90b               cmp ecx, 0xb
// 0061b02a  53                   push ebx
// 0061b02b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0061b02f  55                   push ebp
// 0061b030  56                   push esi
// 0061b031  57                   push edi
// 0061b032  bd01000000           mov ebp, 1
// 0061b037  7e5e                 jle 0x61b097
// 0061b039  8b742418             mov esi, dword ptr [esp + 0x18]
// 0061b03d  81c6fffeffff         add esi, 0xfffffeff
// 0061b043  8bd6                 mov edx, esi
// 0061b045  d3e2                 shl edx, cl
// 0061b047  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b04a  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061b051  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061b058  8b5008               mov edx, dword ptr [eax + 8]
// 0061b05b  881c11               mov byte ptr [ecx + edx], bl
// 0061b05e  016814               add dword ptr [eax + 0x14], ebp
// 0061b061  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061b068  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b06b  8b5008               mov edx, dword ptr [eax + 8]
// 0061b06e  881c11               mov byte ptr [ecx + edx], bl
// 0061b071  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061b077  016814               add dword ptr [eax + 0x14], ebp
// 0061b07a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0061b07e  b110                 mov cl, 0x10
// 0061b080  2aca                 sub cl, dl
// 0061b082  66d3ee               shr si, cl
// 0061b085  83c2f5               add edx, -0xb
// 0061b088  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061b08e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061b095  eb1c                 jmp 0x61b0b3
// 0061b097  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061b09b  81c2fffeffff         add edx, 0xfffffeff
// 0061b0a1  d3e2                 shl edx, cl
// 0061b0a3  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061b0aa  83c105               add ecx, 5
// 0061b0ad  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061b0b3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061b0b9  83f90b               cmp ecx, 0xb
// 0061b0bc  7e5d                 jle 0x61b11b
// 0061b0be  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0061b0c2  4e                   dec esi
// 0061b0c3  8bd6                 mov edx, esi
// 0061b0c5  d3e2                 shl edx, cl
// 0061b0c7  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b0ca  895c2410             mov dword ptr [esp + 0x10], ebx
// 0061b0ce  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061b0d5  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061b0dc  8b5008               mov edx, dword ptr [eax + 8]
// 0061b0df  881c11               mov byte ptr [ecx + edx], bl
// 0061b0e2  016814               add dword ptr [eax + 0x14], ebp
// 0061b0e5  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061b0ec  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b0ef  8b5008               mov edx, dword ptr [eax + 8]
// 0061b0f2  881c11               mov byte ptr [ecx + edx], bl
// 0061b0f5  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061b0fb  016814               add dword ptr [eax + 0x14], ebp
// 0061b0fe  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0061b102  b110                 mov cl, 0x10
// 0061b104  2aca                 sub cl, dl
// 0061b106  66d3ee               shr si, cl
// 0061b109  83c2f5               add edx, -0xb
// 0061b10c  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061b112  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061b119  eb17                 jmp 0x61b132
// 0061b11b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061b11f  4a                   dec edx
// 0061b120  d3e2                 shl edx, cl
// 0061b122  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061b129  83c105               add ecx, 5
// 0061b12c  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061b132  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061b138  83f90c               cmp ecx, 0xc
// 0061b13b  7e5b                 jle 0x61b198
// 0061b13d  8d73fc               lea esi, [ebx - 4]
// 0061b140  8bd6                 mov edx, esi
// 0061b142  d3e2                 shl edx, cl
// 0061b144  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b147  895c2410             mov dword ptr [esp + 0x10], ebx
// 0061b14b  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061b152  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061b159  8b5008               mov edx, dword ptr [eax + 8]
// 0061b15c  881c11               mov byte ptr [ecx + edx], bl
// 0061b15f  016814               add dword ptr [eax + 0x14], ebp
// 0061b162  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061b169  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b16c  8b5008               mov edx, dword ptr [eax + 8]
// 0061b16f  881c11               mov byte ptr [ecx + edx], bl
// 0061b172  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061b178  016814               add dword ptr [eax + 0x14], ebp
// 0061b17b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0061b17f  b110                 mov cl, 0x10
// 0061b181  2aca                 sub cl, dl
// 0061b183  66d3ee               shr si, cl
// 0061b186  83c2f4               add edx, -0xc
// 0061b189  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061b18f  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061b196  eb15                 jmp 0x61b1ad
// 0061b198  8d53fc               lea edx, [ebx - 4]
// 0061b19b  d3e2                 shl edx, cl
// 0061b19d  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061b1a4  83c104               add ecx, 4
// 0061b1a7  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061b1ad  33ff                 xor edi, edi
// 0061b1af  85db                 test ebx, ebx
// 0061b1b1  0f8e9c000000         jle 0x61b253
// 0061b1b7  eb07                 jmp 0x61b1c0
// 0061b1b9  8da42400000000       lea esp, [esp]
// 0061b1c0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061b1c6  83f90d               cmp ecx, 0xd
// 0061b1c9  0fb697349d9c00       movzx edx, byte ptr [edi + 0x9c9d34]
// 0061b1d0  7e5c                 jle 0x61b22e
// 0061b1d2  0fb7b4907e0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7e]
// 0061b1da  8bd6                 mov edx, esi
// 0061b1dc  d3e2                 shl edx, cl
// 0061b1de  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b1e1  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061b1e8  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061b1ef  8b5008               mov edx, dword ptr [eax + 8]
// 0061b1f2  881c11               mov byte ptr [ecx + edx], bl
// 0061b1f5  016814               add dword ptr [eax + 0x14], ebp
// 0061b1f8  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061b1ff  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b202  8b5008               mov edx, dword ptr [eax + 8]
// 0061b205  881c11               mov byte ptr [ecx + edx], bl
// 0061b208  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061b20e  016814               add dword ptr [eax + 0x14], ebp
// 0061b211  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0061b215  b110                 mov cl, 0x10
// 0061b217  2aca                 sub cl, dl
// 0061b219  66d3ee               shr si, cl
// 0061b21c  83c2f3               add edx, -0xd
// 0061b21f  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061b225  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061b22c  eb1b                 jmp 0x61b249
// 0061b22e  668b94907e0a0000     mov dx, word ptr [eax + edx*4 + 0xa7e]
// 0061b236  66d3e2               shl dx, cl
// 0061b239  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061b240  83c103               add ecx, 3
// 0061b243  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061b249  03fd                 add edi, ebp
// 0061b24b  3bfb                 cmp edi, ebx
// 0061b24d  0f8c6dffffff         jl 0x61b1c0
// 0061b253  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061b257  49                   dec ecx
// 0061b258  8d9094000000         lea edx, [eax + 0x94]
// 0061b25e  e8adf8ffff           call 0x61ab10
// 0061b263  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061b267  5f                   pop edi
// 0061b268  5e                   pop esi
// 0061b269  5d                   pop ebp
// 0061b26a  49                   dec ecx
// 0061b26b  8d9088090000         lea edx, [eax + 0x988]
// 0061b271  5b                   pop ebx
// 0061b272  83c404               add esp, 4
// 0061b275  e996f8ffff           jmp 0x61ab10
// library zlib-1.2.3/trees.c (function _send_all_trees)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
