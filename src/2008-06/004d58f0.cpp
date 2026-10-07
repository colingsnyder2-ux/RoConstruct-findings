// roc 2008-06 004d58f0  unit: seg_004d0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d58f0
//
// 004d58f0  33c0                 xor eax, eax
// 004d58f2  c7011c6b8200         mov dword ptr [ecx], 0x826b1c
// 004d58f8  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 004d58ff  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 004d5906  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 004d590d  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 004d5914  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 004d591b  894118               mov dword ptr [ecx + 0x18], eax
// 004d591e  89411c               mov dword ptr [ecx + 0x1c], eax
// 004d5921  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??1CSHA1@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
