// roc 2009-12 0056ecf0  unit: RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0056ecf0
//
// 0056ecf0  33c0                 xor eax, eax
// 0056ecf2  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 0056ecf9  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 0056ed00  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 0056ed07  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 0056ed0e  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 0056ed15  894118               mov dword ptr [ecx + 0x18], eax
// 0056ed18  89411c               mov dword ptr [ecx + 0x1c], eax
// 0056ed1b  c3                   ret 
// library rbxgs-raknet/SHA1.cpp (function ?Reset@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
