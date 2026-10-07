// roc 2011-06 005366d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005366d0
//
// 005366d0  33c0                 xor eax, eax
// 005366d2  c7010cf4a700         mov dword ptr [ecx], 0xa7f40c
// 005366d8  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 005366df  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 005366e6  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 005366ed  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 005366f4  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 005366fb  894118               mov dword ptr [ecx + 0x18], eax
// 005366fe  89411c               mov dword ptr [ecx + 0x1c], eax
// 00536701  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??1CSHA1@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
