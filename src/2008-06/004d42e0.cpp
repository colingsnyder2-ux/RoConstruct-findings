// roc 2008-06 004d42e0  unit: seg_004d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d42e0
//
// 004d42e0  33c0                 xor eax, eax
// 004d42e2  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 004d42e9  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 004d42f0  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 004d42f7  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 004d42fe  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 004d4305  894118               mov dword ptr [ecx + 0x18], eax
// 004d4308  89411c               mov dword ptr [ecx + 0x1c], eax
// 004d430b  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Reset@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
