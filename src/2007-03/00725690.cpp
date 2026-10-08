// roc 2007-03 00725690  unit: seg_00720000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00725690
//
// 00725690  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00725696  83f910               cmp ecx, 0x10
// 00725699  53                   push ebx
// 0072569a  7539                 jne 0x7256d5
// 0072569c  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007256a3  8b5014               mov edx, dword ptr [eax + 0x14]
// 007256a6  8b4808               mov ecx, dword ptr [eax + 8]
// 007256a9  881c11               mov byte ptr [ecx + edx], bl
// 007256ac  83401401             add dword ptr [eax + 0x14], 1
// 007256b0  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007256b7  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007256ba  8b5008               mov edx, dword ptr [eax + 8]
// 007256bd  881c11               mov byte ptr [ecx + edx], bl
// 007256c0  83401401             add dword ptr [eax + 0x14], 1
// 007256c4  33c9                 xor ecx, ecx
// 007256c6  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007256cc  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 007256d3  5b                   pop ebx
// 007256d4  c3                   ret 
// 007256d5  83f908               cmp ecx, 8
// 007256d8  7c29                 jl 0x725703
// 007256da  8b4808               mov ecx, dword ptr [eax + 8]
// 007256dd  8b5014               mov edx, dword ptr [eax + 0x14]
// 007256e0  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 007256e6  881c11               mov byte ptr [ecx + edx], bl
// 007256e9  660fb688b9160000     movzx cx, byte ptr [eax + 0x16b9]
// 007256f1  83401401             add dword ptr [eax + 0x14], 1
// 007256f5  8380bc160000f8       add dword ptr [eax + 0x16bc], -8
// 007256fc  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 00725703  5b                   pop ebx
// 00725704  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_flush)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
