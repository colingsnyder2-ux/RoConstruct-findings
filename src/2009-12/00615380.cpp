// roc 2009-12 00615380  unit: seg_00610000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615380
//
// 00615380  807a4800             cmp byte ptr [edx + 0x48], 0
// 00615384  756c                 jne 0x6153f2
// 00615386  80ba0a01000000       cmp byte ptr [edx + 0x10a], 0
// 0061538d  7563                 jne 0x6153f2
// 0061538f  b803000000           mov eax, 3
// 00615394  394228               cmp dword ptr [edx + 0x28], eax
// 00615397  7559                 jne 0x6153f2
// 00615399  394224               cmp dword ptr [edx + 0x24], eax
// 0061539c  7554                 jne 0x6153f2
// 0061539e  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 006153a2  754e                 jne 0x6153f2
// 006153a4  394264               cmp dword ptr [edx + 0x64], eax
// 006153a7  7549                 jne 0x6153f2
// 006153a9  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 006153af  83790802             cmp dword ptr [ecx + 8], 2
// 006153b3  753d                 jne 0x6153f2
// 006153b5  b801000000           mov eax, 1
// 006153ba  39415c               cmp dword ptr [ecx + 0x5c], eax
// 006153bd  7533                 jne 0x6153f2
// 006153bf  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 006153c5  752b                 jne 0x6153f2
// 006153c7  83790c02             cmp dword ptr [ecx + 0xc], 2
// 006153cb  7f25                 jg 0x6153f2
// 006153cd  394160               cmp dword ptr [ecx + 0x60], eax
// 006153d0  7520                 jne 0x6153f2
// 006153d2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 006153d8  7518                 jne 0x6153f2
// 006153da  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 006153e0  395124               cmp dword ptr [ecx + 0x24], edx
// 006153e3  750d                 jne 0x6153f2
// 006153e5  395178               cmp dword ptr [ecx + 0x78], edx
// 006153e8  7508                 jne 0x6153f2
// 006153ea  3991cc000000         cmp dword ptr [ecx + 0xcc], edx
// 006153f0  7402                 je 0x6153f4
// 006153f2  32c0                 xor al, al
// 006153f4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _use_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
