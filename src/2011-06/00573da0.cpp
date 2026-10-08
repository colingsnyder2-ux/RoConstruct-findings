// from server: 100% by auto
// roc 2011-06 00573da0  unit: seg_00570000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573da0
//
// 00573da0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00573da6  53                   push ebx
// 00573da7  83f910               cmp ecx, 0x10
// 00573daa  7537                 jne 0x573de3
// 00573dac  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00573db3  8b5014               mov edx, dword ptr [eax + 0x14]
// 00573db6  8b4808               mov ecx, dword ptr [eax + 8]
// 00573db9  881c11               mov byte ptr [ecx + edx], bl
// 00573dbc  ff4014               inc dword ptr [eax + 0x14]
// 00573dbf  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00573dc6  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573dc9  8b5008               mov edx, dword ptr [eax + 8]
// 00573dcc  881c11               mov byte ptr [ecx + edx], bl
// 00573dcf  ff4014               inc dword ptr [eax + 0x14]
// 00573dd2  33c9                 xor ecx, ecx
// 00573dd4  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 00573ddb  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00573de1  5b                   pop ebx
// 00573de2  c3                   ret 
// 00573de3  83f908               cmp ecx, 8
// 00573de6  7c28                 jl 0x573e10
// 00573de8  8b5008               mov edx, dword ptr [eax + 8]
// 00573deb  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573dee  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 00573df4  881c0a               mov byte ptr [edx + ecx], bl
// 00573df7  660fb690b9160000     movzx dx, byte ptr [eax + 0x16b9]
// 00573dff  ff4014               inc dword ptr [eax + 0x14]
// 00573e02  8380bc160000f8       add dword ptr [eax + 0x16bc], -8
// 00573e09  668990b8160000       mov word ptr [eax + 0x16b8], dx
// 00573e10  5b                   pop ebx
// 00573e11  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
