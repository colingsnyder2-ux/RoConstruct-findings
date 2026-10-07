// roc 2008-06 0052b790  unit: seg_00520000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b790
//
// 0052b790  807a4800             cmp byte ptr [edx + 0x48], 0
// 0052b794  756c                 jne 0x52b802
// 0052b796  80ba0a01000000       cmp byte ptr [edx + 0x10a], 0
// 0052b79d  7563                 jne 0x52b802
// 0052b79f  b803000000           mov eax, 3
// 0052b7a4  394228               cmp dword ptr [edx + 0x28], eax
// 0052b7a7  7559                 jne 0x52b802
// 0052b7a9  394224               cmp dword ptr [edx + 0x24], eax
// 0052b7ac  7554                 jne 0x52b802
// 0052b7ae  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 0052b7b2  754e                 jne 0x52b802
// 0052b7b4  394264               cmp dword ptr [edx + 0x64], eax
// 0052b7b7  7549                 jne 0x52b802
// 0052b7b9  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 0052b7bf  83790802             cmp dword ptr [ecx + 8], 2
// 0052b7c3  753d                 jne 0x52b802
// 0052b7c5  b801000000           mov eax, 1
// 0052b7ca  39415c               cmp dword ptr [ecx + 0x5c], eax
// 0052b7cd  7533                 jne 0x52b802
// 0052b7cf  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 0052b7d5  752b                 jne 0x52b802
// 0052b7d7  83790c02             cmp dword ptr [ecx + 0xc], 2
// 0052b7db  7f25                 jg 0x52b802
// 0052b7dd  394160               cmp dword ptr [ecx + 0x60], eax
// 0052b7e0  7520                 jne 0x52b802
// 0052b7e2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 0052b7e8  7518                 jne 0x52b802
// 0052b7ea  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 0052b7f0  395124               cmp dword ptr [ecx + 0x24], edx
// 0052b7f3  750d                 jne 0x52b802
// 0052b7f5  395178               cmp dword ptr [ecx + 0x78], edx
// 0052b7f8  7508                 jne 0x52b802
// 0052b7fa  3991cc000000         cmp dword ptr [ecx + 0xcc], edx
// 0052b800  7402                 je 0x52b804
// 0052b802  32c0                 xor al, al
// 0052b804  c3                   ret 
// library jpeg-6b/jdmaster.c (function _use_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
