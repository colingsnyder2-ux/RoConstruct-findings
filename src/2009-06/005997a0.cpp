// roc 2009-06 005997a0  unit: seg_00590000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005997a0
//
// 005997a0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 005997a6  83f908               cmp ecx, 8
// 005997a9  53                   push ebx
// 005997aa  7e22                 jle 0x5997ce
// 005997ac  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005997b3  8b5014               mov edx, dword ptr [eax + 0x14]
// 005997b6  8b4808               mov ecx, dword ptr [eax + 8]
// 005997b9  881c11               mov byte ptr [ecx + edx], bl
// 005997bc  ff4014               inc dword ptr [eax + 0x14]
// 005997bf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005997c2  8b5008               mov edx, dword ptr [eax + 8]
// 005997c5  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005997cc  eb10                 jmp 0x5997de
// 005997ce  85c9                 test ecx, ecx
// 005997d0  7e12                 jle 0x5997e4
// 005997d2  8b4808               mov ecx, dword ptr [eax + 8]
// 005997d5  8b5014               mov edx, dword ptr [eax + 0x14]
// 005997d8  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 005997de  881c11               mov byte ptr [ecx + edx], bl
// 005997e1  ff4014               inc dword ptr [eax + 0x14]
// 005997e4  33c9                 xor ecx, ecx
// 005997e6  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 005997ed  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 005997f3  5b                   pop ebx
// 005997f4  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_windup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
