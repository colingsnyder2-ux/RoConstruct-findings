// roc 2008-06 007a5240  unit: CXTIconHandle  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5240
//
// 007a5240  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a5246  53                   push ebx
// 007a5247  83f910               cmp ecx, 0x10
// 007a524a  7537                 jne 0x7a5283
// 007a524c  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a5253  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a5256  8b4808               mov ecx, dword ptr [eax + 8]
// 007a5259  881c11               mov byte ptr [ecx + edx], bl
// 007a525c  ff4014               inc dword ptr [eax + 0x14]
// 007a525f  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a5266  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a5269  8b5008               mov edx, dword ptr [eax + 8]
// 007a526c  881c11               mov byte ptr [ecx + edx], bl
// 007a526f  ff4014               inc dword ptr [eax + 0x14]
// 007a5272  33c9                 xor ecx, ecx
// 007a5274  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 007a527b  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a5281  5b                   pop ebx
// 007a5282  c3                   ret 
// 007a5283  83f908               cmp ecx, 8
// 007a5286  7c28                 jl 0x7a52b0
// 007a5288  8b5008               mov edx, dword ptr [eax + 8]
// 007a528b  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a528e  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 007a5294  881c0a               mov byte ptr [edx + ecx], bl
// 007a5297  660fb690b9160000     movzx dx, byte ptr [eax + 0x16b9]
// 007a529f  ff4014               inc dword ptr [eax + 0x14]
// 007a52a2  8380bc160000f8       add dword ptr [eax + 0x16bc], -8
// 007a52a9  668990b8160000       mov word ptr [eax + 0x16b8], dx
// 007a52b0  5b                   pop ebx
// 007a52b1  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
