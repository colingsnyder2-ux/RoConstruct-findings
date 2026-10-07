// roc 2007-08 007243b0  unit: CXTIconHandle  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007243b0
//
// 007243b0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007243b6  83f910               cmp ecx, 0x10
// 007243b9  53                   push ebx
// 007243ba  7539                 jne 0x7243f5
// 007243bc  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007243c3  8b5014               mov edx, dword ptr [eax + 0x14]
// 007243c6  8b4808               mov ecx, dword ptr [eax + 8]
// 007243c9  881c11               mov byte ptr [ecx + edx], bl
// 007243cc  83401401             add dword ptr [eax + 0x14], 1
// 007243d0  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007243d7  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007243da  8b5008               mov edx, dword ptr [eax + 8]
// 007243dd  881c11               mov byte ptr [ecx + edx], bl
// 007243e0  83401401             add dword ptr [eax + 0x14], 1
// 007243e4  33c9                 xor ecx, ecx
// 007243e6  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007243ec  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 007243f3  5b                   pop ebx
// 007243f4  c3                   ret 
// 007243f5  83f908               cmp ecx, 8
// 007243f8  7c29                 jl 0x724423
// 007243fa  8b4808               mov ecx, dword ptr [eax + 8]
// 007243fd  8b5014               mov edx, dword ptr [eax + 0x14]
// 00724400  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 00724406  881c11               mov byte ptr [ecx + edx], bl
// 00724409  660fb688b9160000     movzx cx, byte ptr [eax + 0x16b9]
// 00724411  83401401             add dword ptr [eax + 0x14], 1
// 00724415  8380bc160000f8       add dword ptr [eax + 0x16bc], -8
// 0072441c  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 00724423  5b                   pop ebx
// 00724424  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_flush)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
