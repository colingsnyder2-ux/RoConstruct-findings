// roc 2007-03 0051a280  unit: seg_00510000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051a280
//
// 0051a280  807a4800             cmp byte ptr [edx + 0x48], 0
// 0051a284  756c                 jne 0x51a2f2
// 0051a286  80ba0a01000000       cmp byte ptr [edx + 0x10a], 0
// 0051a28d  7563                 jne 0x51a2f2
// 0051a28f  b803000000           mov eax, 3
// 0051a294  394228               cmp dword ptr [edx + 0x28], eax
// 0051a297  7559                 jne 0x51a2f2
// 0051a299  394224               cmp dword ptr [edx + 0x24], eax
// 0051a29c  7554                 jne 0x51a2f2
// 0051a29e  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 0051a2a2  754e                 jne 0x51a2f2
// 0051a2a4  394264               cmp dword ptr [edx + 0x64], eax
// 0051a2a7  7549                 jne 0x51a2f2
// 0051a2a9  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 0051a2af  83790802             cmp dword ptr [ecx + 8], 2
// 0051a2b3  753d                 jne 0x51a2f2
// 0051a2b5  b801000000           mov eax, 1
// 0051a2ba  39415c               cmp dword ptr [ecx + 0x5c], eax
// 0051a2bd  7533                 jne 0x51a2f2
// 0051a2bf  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 0051a2c5  752b                 jne 0x51a2f2
// 0051a2c7  83790c02             cmp dword ptr [ecx + 0xc], 2
// 0051a2cb  7f25                 jg 0x51a2f2
// 0051a2cd  394160               cmp dword ptr [ecx + 0x60], eax
// 0051a2d0  7520                 jne 0x51a2f2
// 0051a2d2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 0051a2d8  7518                 jne 0x51a2f2
// 0051a2da  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 0051a2e0  395124               cmp dword ptr [ecx + 0x24], edx
// 0051a2e3  750d                 jne 0x51a2f2
// 0051a2e5  395178               cmp dword ptr [ecx + 0x78], edx
// 0051a2e8  7508                 jne 0x51a2f2
// 0051a2ea  3991cc000000         cmp dword ptr [ecx + 0xcc], edx
// 0051a2f0  7402                 je 0x51a2f4
// 0051a2f2  32c0                 xor al, al
// 0051a2f4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _use_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
