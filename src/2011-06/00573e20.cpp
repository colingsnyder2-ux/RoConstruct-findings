// from server: 100% by auto
// roc 2011-06 00573e20  unit: seg_00570000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573e20
//
// 00573e20  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00573e26  83f908               cmp ecx, 8
// 00573e29  53                   push ebx
// 00573e2a  7e22                 jle 0x573e4e
// 00573e2c  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00573e33  8b5014               mov edx, dword ptr [eax + 0x14]
// 00573e36  8b4808               mov ecx, dword ptr [eax + 8]
// 00573e39  881c11               mov byte ptr [ecx + edx], bl
// 00573e3c  ff4014               inc dword ptr [eax + 0x14]
// 00573e3f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573e42  8b5008               mov edx, dword ptr [eax + 8]
// 00573e45  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00573e4c  eb10                 jmp 0x573e5e
// 00573e4e  85c9                 test ecx, ecx
// 00573e50  7e12                 jle 0x573e64
// 00573e52  8b4808               mov ecx, dword ptr [eax + 8]
// 00573e55  8b5014               mov edx, dword ptr [eax + 0x14]
// 00573e58  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 00573e5e  881c11               mov byte ptr [ecx + edx], bl
// 00573e61  ff4014               inc dword ptr [eax + 0x14]
// 00573e64  33c9                 xor ecx, ecx
// 00573e66  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 00573e6d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00573e73  5b                   pop ebx
// 00573e74  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_windup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
