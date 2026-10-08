// from server: 100% by auto
// roc 2007-08 0051ff60  unit: seg_00510000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ff60
//
// 0051ff60  807a4800             cmp byte ptr [edx + 0x48], 0
// 0051ff64  756c                 jne 0x51ffd2
// 0051ff66  80ba0a01000000       cmp byte ptr [edx + 0x10a], 0
// 0051ff6d  7563                 jne 0x51ffd2
// 0051ff6f  b803000000           mov eax, 3
// 0051ff74  394228               cmp dword ptr [edx + 0x28], eax
// 0051ff77  7559                 jne 0x51ffd2
// 0051ff79  394224               cmp dword ptr [edx + 0x24], eax
// 0051ff7c  7554                 jne 0x51ffd2
// 0051ff7e  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 0051ff82  754e                 jne 0x51ffd2
// 0051ff84  394264               cmp dword ptr [edx + 0x64], eax
// 0051ff87  7549                 jne 0x51ffd2
// 0051ff89  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 0051ff8f  83790802             cmp dword ptr [ecx + 8], 2
// 0051ff93  753d                 jne 0x51ffd2
// 0051ff95  b801000000           mov eax, 1
// 0051ff9a  39415c               cmp dword ptr [ecx + 0x5c], eax
// 0051ff9d  7533                 jne 0x51ffd2
// 0051ff9f  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 0051ffa5  752b                 jne 0x51ffd2
// 0051ffa7  83790c02             cmp dword ptr [ecx + 0xc], 2
// 0051ffab  7f25                 jg 0x51ffd2
// 0051ffad  394160               cmp dword ptr [ecx + 0x60], eax
// 0051ffb0  7520                 jne 0x51ffd2
// 0051ffb2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 0051ffb8  7518                 jne 0x51ffd2
// 0051ffba  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 0051ffc0  395124               cmp dword ptr [ecx + 0x24], edx
// 0051ffc3  750d                 jne 0x51ffd2
// 0051ffc5  395178               cmp dword ptr [ecx + 0x78], edx
// 0051ffc8  7508                 jne 0x51ffd2
// 0051ffca  3991cc000000         cmp dword ptr [ecx + 0xcc], edx
// 0051ffd0  7402                 je 0x51ffd4
// 0051ffd2  32c0                 xor al, al
// 0051ffd4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _use_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
