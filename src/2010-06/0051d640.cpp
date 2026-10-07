// roc 2010-06 0051d640  unit: RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051d640
//
// 0051d640  33c0                 xor eax, eax
// 0051d642  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 0051d649  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 0051d650  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 0051d657  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 0051d65e  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 0051d665  894118               mov dword ptr [ecx + 0x18], eax
// 0051d668  89411c               mov dword ptr [ecx + 0x1c], eax
// 0051d66b  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Reset@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
