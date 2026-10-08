// from server: 100% by auto
// roc 2008-06 007a52c0  unit: CXTIconHandle  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a52c0
//
// 007a52c0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a52c6  83f908               cmp ecx, 8
// 007a52c9  53                   push ebx
// 007a52ca  7e22                 jle 0x7a52ee
// 007a52cc  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a52d3  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a52d6  8b4808               mov ecx, dword ptr [eax + 8]
// 007a52d9  881c11               mov byte ptr [ecx + edx], bl
// 007a52dc  ff4014               inc dword ptr [eax + 0x14]
// 007a52df  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a52e2  8b5008               mov edx, dword ptr [eax + 8]
// 007a52e5  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a52ec  eb10                 jmp 0x7a52fe
// 007a52ee  85c9                 test ecx, ecx
// 007a52f0  7e12                 jle 0x7a5304
// 007a52f2  8b4808               mov ecx, dword ptr [eax + 8]
// 007a52f5  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a52f8  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 007a52fe  881c11               mov byte ptr [ecx + edx], bl
// 007a5301  ff4014               inc dword ptr [eax + 0x14]
// 007a5304  33c9                 xor ecx, ecx
// 007a5306  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 007a530d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a5313  5b                   pop ebx
// 007a5314  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_windup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
