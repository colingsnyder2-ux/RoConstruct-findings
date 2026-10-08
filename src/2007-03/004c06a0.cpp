// roc 2007-03 004c06a0  unit: seg_004c0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c06a0
//
// 004c06a0  33c0                 xor eax, eax
// 004c06a2  c7015ce57900         mov dword ptr [ecx], 0x79e55c
// 004c06a8  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 004c06af  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 004c06b6  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 004c06bd  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 004c06c4  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 004c06cb  894118               mov dword ptr [ecx + 0x18], eax
// 004c06ce  89411c               mov dword ptr [ecx + 0x1c], eax
// 004c06d1  c3                   ret 
// library rbxgs-raknet/SHA1.cpp (function ??1CSHA1@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
