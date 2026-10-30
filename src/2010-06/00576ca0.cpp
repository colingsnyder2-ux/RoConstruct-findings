// from server: 100% by auto
// roc 2010-06 00576ca0  unit: seg_00570000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576ca0
//
// 00576ca0  807a4800             cmp byte ptr [edx + 0x48], 0
// 00576ca4  756c                 jne 0x576d12
// 00576ca6  80ba0a01000000       cmp byte ptr [edx + 0x10a], 0
// 00576cad  7563                 jne 0x576d12
// 00576caf  b803000000           mov eax, 3
// 00576cb4  394228               cmp dword ptr [edx + 0x28], eax
// 00576cb7  7559                 jne 0x576d12
// 00576cb9  394224               cmp dword ptr [edx + 0x24], eax
// 00576cbc  7554                 jne 0x576d12
// 00576cbe  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 00576cc2  754e                 jne 0x576d12
// 00576cc4  394264               cmp dword ptr [edx + 0x64], eax
// 00576cc7  7549                 jne 0x576d12
// 00576cc9  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 00576ccf  83790802             cmp dword ptr [ecx + 8], 2
// 00576cd3  753d                 jne 0x576d12
// 00576cd5  b801000000           mov eax, 1
// 00576cda  39415c               cmp dword ptr [ecx + 0x5c], eax
// 00576cdd  7533                 jne 0x576d12
// 00576cdf  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 00576ce5  752b                 jne 0x576d12
// 00576ce7  83790c02             cmp dword ptr [ecx + 0xc], 2
// 00576ceb  7f25                 jg 0x576d12
// 00576ced  394160               cmp dword ptr [ecx + 0x60], eax
// 00576cf0  7520                 jne 0x576d12
// 00576cf2  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 00576cf8  7518                 jne 0x576d12
// 00576cfa  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 00576d00  395124               cmp dword ptr [ecx + 0x24], edx
// 00576d03  750d                 jne 0x576d12
// 00576d05  395178               cmp dword ptr [ecx + 0x78], edx
// 00576d08  7508                 jne 0x576d12
// 00576d0a  3991cc000000         cmp dword ptr [ecx + 0xcc], edx
// 00576d10  7402                 je 0x576d14
// 00576d12  32c0                 xor al, al
// 00576d14  c3                   ret 
// library jpeg-6b/jdmaster.c (function _use_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
