// from server: 100% by tester
// roc 2007-03 004bf080  unit: seg_004b0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bf080
//
// 004bf080  33c0                 xor eax, eax
// 004bf082  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 004bf089  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 004bf090  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 004bf097  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 004bf09e  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 004bf0a5  894118               mov dword ptr [ecx + 0x18], eax
// 004bf0a8  89411c               mov dword ptr [ecx + 0x1c], eax
// 004bf0ab  c3                   ret 
// library rbxgs-raknet/SHA1.cpp (function ?Reset@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
