// roc 2012-06 0065f520  unit: seg_00650000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065f520
//
// 0065f520  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065f526  83f908               cmp ecx, 8
// 0065f529  53                   push ebx
// 0065f52a  7e22                 jle 0x65f54e
// 0065f52c  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065f533  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f536  8b4808               mov ecx, dword ptr [eax + 8]
// 0065f539  881c11               mov byte ptr [ecx + edx], bl
// 0065f53c  ff4014               inc dword ptr [eax + 0x14]
// 0065f53f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065f542  8b5008               mov edx, dword ptr [eax + 8]
// 0065f545  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065f54c  eb10                 jmp 0x65f55e
// 0065f54e  85c9                 test ecx, ecx
// 0065f550  7e12                 jle 0x65f564
// 0065f552  8b4808               mov ecx, dword ptr [eax + 8]
// 0065f555  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f558  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 0065f55e  881c11               mov byte ptr [ecx + edx], bl
// 0065f561  ff4014               inc dword ptr [eax + 0x14]
// 0065f564  33c9                 xor ecx, ecx
// 0065f566  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0065f56d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065f573  5b                   pop ebx
// 0065f574  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_windup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
