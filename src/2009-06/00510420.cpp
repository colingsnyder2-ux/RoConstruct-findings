// roc 2009-06 00510420  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510420
//
// 00510420  33c0                 xor eax, eax
// 00510422  c7017c998c00         mov dword ptr [ecx], 0x8c997c
// 00510428  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 0051042f  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 00510436  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 0051043d  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 00510444  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 0051044b  894118               mov dword ptr [ecx + 0x18], eax
// 0051044e  89411c               mov dword ptr [ecx + 0x1c], eax
// 00510451  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??1CSHA1@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
