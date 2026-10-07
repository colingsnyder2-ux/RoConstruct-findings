// roc 2007-08 004ca680  unit: seg_004c0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca680
//
// 004ca680  33c0                 xor eax, eax
// 004ca682  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 004ca689  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 004ca690  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 004ca697  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 004ca69e  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 004ca6a5  894118               mov dword ptr [ecx + 0x18], eax
// 004ca6a8  89411c               mov dword ptr [ecx + 0x1c], eax
// 004ca6ab  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Reset@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
