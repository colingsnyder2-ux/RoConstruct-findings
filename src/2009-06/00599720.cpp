// from server: 100% by auto
// roc 2009-06 00599720  unit: seg_00590000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599720
//
// 00599720  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599726  53                   push ebx
// 00599727  83f910               cmp ecx, 0x10
// 0059972a  7537                 jne 0x599763
// 0059972c  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00599733  8b5014               mov edx, dword ptr [eax + 0x14]
// 00599736  8b4808               mov ecx, dword ptr [eax + 8]
// 00599739  881c11               mov byte ptr [ecx + edx], bl
// 0059973c  ff4014               inc dword ptr [eax + 0x14]
// 0059973f  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00599746  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00599749  8b5008               mov edx, dword ptr [eax + 8]
// 0059974c  881c11               mov byte ptr [ecx + edx], bl
// 0059974f  ff4014               inc dword ptr [eax + 0x14]
// 00599752  33c9                 xor ecx, ecx
// 00599754  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0059975b  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599761  5b                   pop ebx
// 00599762  c3                   ret 
// 00599763  83f908               cmp ecx, 8
// 00599766  7c28                 jl 0x599790
// 00599768  8b5008               mov edx, dword ptr [eax + 8]
// 0059976b  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0059976e  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 00599774  881c0a               mov byte ptr [edx + ecx], bl
// 00599777  660fb690b9160000     movzx dx, byte ptr [eax + 0x16b9]
// 0059977f  ff4014               inc dword ptr [eax + 0x14]
// 00599782  8380bc160000f8       add dword ptr [eax + 0x16bc], -8
// 00599789  668990b8160000       mov word ptr [eax + 0x16b8], dx
// 00599790  5b                   pop ebx
// 00599791  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
