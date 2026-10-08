// roc 2009-12 0061b7d0  unit: seg_00610000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061b7d0
//
// 0061b7d0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061b7d6  83f908               cmp ecx, 8
// 0061b7d9  53                   push ebx
// 0061b7da  7e22                 jle 0x61b7fe
// 0061b7dc  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061b7e3  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061b7e6  8b4808               mov ecx, dword ptr [eax + 8]
// 0061b7e9  881c11               mov byte ptr [ecx + edx], bl
// 0061b7ec  ff4014               inc dword ptr [eax + 0x14]
// 0061b7ef  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b7f2  8b5008               mov edx, dword ptr [eax + 8]
// 0061b7f5  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061b7fc  eb10                 jmp 0x61b80e
// 0061b7fe  85c9                 test ecx, ecx
// 0061b800  7e12                 jle 0x61b814
// 0061b802  8b4808               mov ecx, dword ptr [eax + 8]
// 0061b805  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061b808  8a98b8160000         mov bl, byte ptr [eax + 0x16b8]
// 0061b80e  881c11               mov byte ptr [ecx + edx], bl
// 0061b811  ff4014               inc dword ptr [eax + 0x14]
// 0061b814  33c9                 xor ecx, ecx
// 0061b816  668988b8160000       mov word ptr [eax + 0x16b8], cx
// 0061b81d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061b823  5b                   pop ebx
// 0061b824  c3                   ret 
// library zlib-1.2.3/trees.c (function _bi_windup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
