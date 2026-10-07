// roc 2010-06 0057d2b0  unit: seg_00570000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d2b0
//
// 0057d2b0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057d2b6  53                   push ebx
// 0057d2b7  83f910               cmp ecx, 0x10
// 0057d2ba  7537                 jne 0x57d2f3
// 0057d2bc  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057d2c3  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057d2c6  8b4808               mov ecx, dword ptr [eax + 8]
// 0057d2c9  881c11               mov byte ptr [ecx + edx], bl
// 0057d2cc  ff4014               inc dword ptr [eax + 0x14]
// 0057d2cf  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057d2d6  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d2d9  8b5008               mov edx, dword ptr [eax + 8]
// 0057d2dc  881c11               mov byte ptr [ecx + edx], bl
// 0057d2df  ff4014               inc dword ptr [eax + 0x14]
// 0057d2e2  33c9                 xor ecx, ecx
// 0057d2e4  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0057d2eb  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057d2f1  5b                   pop ebx
// 0057d2f2  c3                   ret 
// 0057d2f3  83f908               cmp ecx, 8
// 0057d2f6  7c28                 jl 0x57d320
// 0057d2f8  8b5008               mov edx, dword ptr [eax + 8]
// 0057d2fb  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d2fe  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 0057d304  881c0a               mov byte ptr [edx + ecx], bl
// 0057d307  660fb690b9160000     movzx dx, byte ptr [eax + 0x16b9]
// 0057d30f  ff4014               inc dword ptr [eax + 0x14]
// 0057d312  8380bc160000f8       add dword ptr [eax + 0x16bc], -8
// 0057d319  668990b8160000       mov word ptr [eax + 0x16b8], dx
// 0057d320  5b                   pop ebx
// 0057d321  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
