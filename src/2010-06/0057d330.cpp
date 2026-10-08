// from server: 100% by auto
// roc 2010-06 0057d330  unit: seg_00570000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d330
//
// 0057d330  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057d336  83f908               cmp ecx, 8
// 0057d339  53                   push ebx
// 0057d33a  7e22                 jle 0x57d35e
// 0057d33c  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057d343  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057d346  8b4808               mov ecx, dword ptr [eax + 8]
// 0057d349  881c11               mov byte ptr [ecx + edx], bl
// 0057d34c  ff4014               inc dword ptr [eax + 0x14]
// 0057d34f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d352  8b5008               mov edx, dword ptr [eax + 8]
// 0057d355  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057d35c  eb10                 jmp 0x57d36e
// 0057d35e  85c9                 test ecx, ecx
// 0057d360  7e12                 jle 0x57d374
// 0057d362  8b4808               mov ecx, dword ptr [eax + 8]
// 0057d365  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057d368  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 0057d36e  881c11               mov byte ptr [ecx + edx], bl
// 0057d371  ff4014               inc dword ptr [eax + 0x14]
// 0057d374  33c9                 xor ecx, ecx
// 0057d376  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0057d37d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057d383  5b                   pop ebx
// 0057d384  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_windup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
