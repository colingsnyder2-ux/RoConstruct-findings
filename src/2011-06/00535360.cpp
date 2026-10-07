// roc 2011-06 00535360  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00535360
//
// 00535360  33c0                 xor eax, eax
// 00535362  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 00535369  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 00535370  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 00535377  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 0053537e  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 00535385  894118               mov dword ptr [ecx + 0x18], eax
// 00535388  89411c               mov dword ptr [ecx + 0x1c], eax
// 0053538b  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Reset@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
