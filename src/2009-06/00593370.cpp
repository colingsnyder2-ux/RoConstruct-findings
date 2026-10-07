// roc 2009-06 00593370  unit: seg_00590000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593370
//
// 00593370  807a4800             cmp byte ptr [edx + 0x48], 0
// 00593374  756c                 jne 0x5933e2
// 00593376  80ba0a01000000       cmp byte ptr [edx + 0x10a], 0
// 0059337d  7563                 jne 0x5933e2
// 0059337f  b803000000           mov eax, 3
// 00593384  394228               cmp dword ptr [edx + 0x28], eax
// 00593387  7559                 jne 0x5933e2
// 00593389  394224               cmp dword ptr [edx + 0x24], eax
// 0059338c  7554                 jne 0x5933e2
// 0059338e  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 00593392  754e                 jne 0x5933e2
// 00593394  394264               cmp dword ptr [edx + 0x64], eax
// 00593397  7549                 jne 0x5933e2
// 00593399  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 0059339f  83790802             cmp dword ptr [ecx + 8], 2
// 005933a3  753d                 jne 0x5933e2
// 005933a5  b801000000           mov eax, 1
// 005933aa  39415c               cmp dword ptr [ecx + 0x5c], eax
// 005933ad  7533                 jne 0x5933e2
// 005933af  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 005933b5  752b                 jne 0x5933e2
// 005933b7  83790c02             cmp dword ptr [ecx + 0xc], 2
// 005933bb  7f25                 jg 0x5933e2
// 005933bd  394160               cmp dword ptr [ecx + 0x60], eax
// 005933c0  7520                 jne 0x5933e2
// 005933c2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 005933c8  7518                 jne 0x5933e2
// 005933ca  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 005933d0  395124               cmp dword ptr [ecx + 0x24], edx
// 005933d3  750d                 jne 0x5933e2
// 005933d5  395178               cmp dword ptr [ecx + 0x78], edx
// 005933d8  7508                 jne 0x5933e2
// 005933da  3991cc000000         cmp dword ptr [ecx + 0xcc], edx
// 005933e0  7402                 je 0x5933e4
// 005933e2  32c0                 xor al, al
// 005933e4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _use_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
