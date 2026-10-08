// from server: 100% by auto
// roc 2011-06 005692d0  unit: seg_00560000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005692d0
//
// 005692d0  807a4800             cmp byte ptr [edx + 0x48], 0
// 005692d4  756c                 jne 0x569342
// 005692d6  80ba0a01000000       cmp byte ptr [edx + 0x10a], 0
// 005692dd  7563                 jne 0x569342
// 005692df  b803000000           mov eax, 3
// 005692e4  394228               cmp dword ptr [edx + 0x28], eax
// 005692e7  7559                 jne 0x569342
// 005692e9  394224               cmp dword ptr [edx + 0x24], eax
// 005692ec  7554                 jne 0x569342
// 005692ee  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 005692f2  754e                 jne 0x569342
// 005692f4  394264               cmp dword ptr [edx + 0x64], eax
// 005692f7  7549                 jne 0x569342
// 005692f9  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 005692ff  83790802             cmp dword ptr [ecx + 8], 2
// 00569303  753d                 jne 0x569342
// 00569305  b801000000           mov eax, 1
// 0056930a  39415c               cmp dword ptr [ecx + 0x5c], eax
// 0056930d  7533                 jne 0x569342
// 0056930f  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 00569315  752b                 jne 0x569342
// 00569317  83790c02             cmp dword ptr [ecx + 0xc], 2
// 0056931b  7f25                 jg 0x569342
// 0056931d  394160               cmp dword ptr [ecx + 0x60], eax
// 00569320  7520                 jne 0x569342
// 00569322  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 00569328  7518                 jne 0x569342
// 0056932a  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 00569330  395124               cmp dword ptr [ecx + 0x24], edx
// 00569333  750d                 jne 0x569342
// 00569335  395178               cmp dword ptr [ecx + 0x78], edx
// 00569338  7508                 jne 0x569342
// 0056933a  3991cc000000         cmp dword ptr [ecx + 0xcc], edx
// 00569340  7402                 je 0x569344
// 00569342  32c0                 xor al, al
// 00569344  c3                   ret 
// library jpeg-6b/jdmaster.c (function _use_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
