// roc 2012-06 006549e0  unit: seg_00650000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006549e0
//
// 006549e0  807a4800             cmp byte ptr [edx + 0x48], 0
// 006549e4  756c                 jne 0x654a52
// 006549e6  80ba0a01000000       cmp byte ptr [edx + 0x10a], 0
// 006549ed  7563                 jne 0x654a52
// 006549ef  b803000000           mov eax, 3
// 006549f4  394228               cmp dword ptr [edx + 0x28], eax
// 006549f7  7559                 jne 0x654a52
// 006549f9  394224               cmp dword ptr [edx + 0x24], eax
// 006549fc  7554                 jne 0x654a52
// 006549fe  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 00654a02  754e                 jne 0x654a52
// 00654a04  394264               cmp dword ptr [edx + 0x64], eax
// 00654a07  7549                 jne 0x654a52
// 00654a09  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 00654a0f  83790802             cmp dword ptr [ecx + 8], 2
// 00654a13  753d                 jne 0x654a52
// 00654a15  b801000000           mov eax, 1
// 00654a1a  39415c               cmp dword ptr [ecx + 0x5c], eax
// 00654a1d  7533                 jne 0x654a52
// 00654a1f  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 00654a25  752b                 jne 0x654a52
// 00654a27  83790c02             cmp dword ptr [ecx + 0xc], 2
// 00654a2b  7f25                 jg 0x654a52
// 00654a2d  394160               cmp dword ptr [ecx + 0x60], eax
// 00654a30  7520                 jne 0x654a52
// 00654a32  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 00654a38  7518                 jne 0x654a52
// 00654a3a  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 00654a40  395124               cmp dword ptr [ecx + 0x24], edx
// 00654a43  750d                 jne 0x654a52
// 00654a45  395178               cmp dword ptr [ecx + 0x78], edx
// 00654a48  7508                 jne 0x654a52
// 00654a4a  3991cc000000         cmp dword ptr [ecx + 0xcc], edx
// 00654a50  7402                 je 0x654a54
// 00654a52  32c0                 xor al, al
// 00654a54  c3                   ret 
// library jpeg-6b/jdmaster.c (function _use_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
