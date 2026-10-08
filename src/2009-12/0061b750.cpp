// roc 2009-12 0061b750  unit: seg_00610000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061b750
//
// 0061b750  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061b756  53                   push ebx
// 0061b757  83f910               cmp ecx, 0x10
// 0061b75a  7537                 jne 0x61b793
// 0061b75c  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061b763  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061b766  8b4808               mov ecx, dword ptr [eax + 8]
// 0061b769  881c11               mov byte ptr [ecx + edx], bl
// 0061b76c  ff4014               inc dword ptr [eax + 0x14]
// 0061b76f  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061b776  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b779  8b5008               mov edx, dword ptr [eax + 8]
// 0061b77c  881c11               mov byte ptr [ecx + edx], bl
// 0061b77f  ff4014               inc dword ptr [eax + 0x14]
// 0061b782  33c9                 xor ecx, ecx
// 0061b784  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0061b78b  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061b791  5b                   pop ebx
// 0061b792  c3                   ret 
// 0061b793  83f908               cmp ecx, 8
// 0061b796  7c28                 jl 0x61b7c0
// 0061b798  8b5008               mov edx, dword ptr [eax + 8]
// 0061b79b  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b79e  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 0061b7a4  881c0a               mov byte ptr [edx + ecx], bl
// 0061b7a7  660fb690b9160000     movzx dx, byte ptr [eax + 0x16b9]
// 0061b7af  ff4014               inc dword ptr [eax + 0x14]
// 0061b7b2  8380bc160000f8       add dword ptr [eax + 0x16bc], -8
// 0061b7b9  668990b8160000       mov word ptr [eax + 0x16b8], dx
// 0061b7c0  5b                   pop ebx
// 0061b7c1  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
