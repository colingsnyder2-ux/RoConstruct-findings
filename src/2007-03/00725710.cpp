// roc 2007-03 00725710  unit: seg_00720000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00725710
//
// 00725710  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00725716  83fa08               cmp edx, 8
// 00725719  53                   push ebx
// 0072571a  56                   push esi
// 0072571b  7e3d                 jle 0x72575a
// 0072571d  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00725724  8b5014               mov edx, dword ptr [eax + 0x14]
// 00725727  8b4808               mov ecx, dword ptr [eax + 8]
// 0072572a  881c11               mov byte ptr [ecx + edx], bl
// 0072572d  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00725734  8b5008               mov edx, dword ptr [eax + 8]
// 00725737  be01000000           mov esi, 1
// 0072573c  017014               add dword ptr [eax + 0x14], esi
// 0072573f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725742  881c11               mov byte ptr [ecx + edx], bl
// 00725745  017014               add dword ptr [eax + 0x14], esi
// 00725748  33c9                 xor ecx, ecx
// 0072574a  5e                   pop esi
// 0072574b  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 00725752  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725758  5b                   pop ebx
// 00725759  c3                   ret 
// 0072575a  33c9                 xor ecx, ecx
// 0072575c  3bd1                 cmp edx, ecx
// 0072575e  7e13                 jle 0x725773
// 00725760  8b7014               mov esi, dword ptr [eax + 0x14]
// 00725763  8b5008               mov edx, dword ptr [eax + 8]
// 00725766  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 0072576c  881c32               mov byte ptr [edx + esi], bl
// 0072576f  83401401             add dword ptr [eax + 0x14], 1
// 00725773  5e                   pop esi
// 00725774  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0072577b  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725781  5b                   pop ebx
// 00725782  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_windup)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
