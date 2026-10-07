// roc 2007-08 00724430  unit: CXTIconHandle  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724430
//
// 00724430  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00724436  83fa08               cmp edx, 8
// 00724439  53                   push ebx
// 0072443a  56                   push esi
// 0072443b  7e3d                 jle 0x72447a
// 0072443d  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724444  8b5014               mov edx, dword ptr [eax + 0x14]
// 00724447  8b4808               mov ecx, dword ptr [eax + 8]
// 0072444a  881c11               mov byte ptr [ecx + edx], bl
// 0072444d  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724454  8b5008               mov edx, dword ptr [eax + 8]
// 00724457  be01000000           mov esi, 1
// 0072445c  017014               add dword ptr [eax + 0x14], esi
// 0072445f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724462  881c11               mov byte ptr [ecx + edx], bl
// 00724465  017014               add dword ptr [eax + 0x14], esi
// 00724468  33c9                 xor ecx, ecx
// 0072446a  5e                   pop esi
// 0072446b  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 00724472  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724478  5b                   pop ebx
// 00724479  c3                   ret 
// 0072447a  33c9                 xor ecx, ecx
// 0072447c  3bd1                 cmp edx, ecx
// 0072447e  7e13                 jle 0x724493
// 00724480  8b7014               mov esi, dword ptr [eax + 0x14]
// 00724483  8b5008               mov edx, dword ptr [eax + 8]
// 00724486  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 0072448c  881c32               mov byte ptr [edx + esi], bl
// 0072448f  83401401             add dword ptr [eax + 0x14], 1
// 00724493  5e                   pop esi
// 00724494  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0072449b  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007244a1  5b                   pop ebx
// 007244a2  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_windup)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
