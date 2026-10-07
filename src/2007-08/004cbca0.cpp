// roc 2007-08 004cbca0  unit: seg_004c0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cbca0
//
// 004cbca0  33c0                 xor eax, eax
// 004cbca2  c701ccef7900         mov dword ptr [ecx], 0x79efcc
// 004cbca8  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 004cbcaf  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 004cbcb6  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 004cbcbd  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 004cbcc4  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 004cbccb  894118               mov dword ptr [ecx + 0x18], eax
// 004cbcce  89411c               mov dword ptr [ecx + 0x1c], eax
// 004cbcd1  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??1CSHA1@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
