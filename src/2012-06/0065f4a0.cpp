// from server: 100% by auto
// roc 2012-06 0065f4a0  unit: seg_00650000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065f4a0
//
// 0065f4a0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065f4a6  53                   push ebx
// 0065f4a7  83f910               cmp ecx, 0x10
// 0065f4aa  7537                 jne 0x65f4e3
// 0065f4ac  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065f4b3  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f4b6  8b4808               mov ecx, dword ptr [eax + 8]
// 0065f4b9  881c11               mov byte ptr [ecx + edx], bl
// 0065f4bc  ff4014               inc dword ptr [eax + 0x14]
// 0065f4bf  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065f4c6  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065f4c9  8b5008               mov edx, dword ptr [eax + 8]
// 0065f4cc  881c11               mov byte ptr [ecx + edx], bl
// 0065f4cf  ff4014               inc dword ptr [eax + 0x14]
// 0065f4d2  33c9                 xor ecx, ecx
// 0065f4d4  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0065f4db  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065f4e1  5b                   pop ebx
// 0065f4e2  c3                   ret 
// 0065f4e3  83f908               cmp ecx, 8
// 0065f4e6  7c28                 jl 0x65f510
// 0065f4e8  8b5008               mov edx, dword ptr [eax + 8]
// 0065f4eb  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065f4ee  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 0065f4f4  881c0a               mov byte ptr [edx + ecx], bl
// 0065f4f7  660fb690b9160000     movzx dx, byte ptr [eax + 0x16b9]
// 0065f4ff  ff4014               inc dword ptr [eax + 0x14]
// 0065f502  8380bc160000f8       add dword ptr [eax + 0x16bc], -8
// 0065f509  668990b8160000       mov word ptr [eax + 0x16b8], dx
// 0065f510  5b                   pop ebx
// 0065f511  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
