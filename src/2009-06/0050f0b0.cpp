// roc 2009-06 0050f0b0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050f0b0
//
// 0050f0b0  33c0                 xor eax, eax
// 0050f0b2  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 0050f0b9  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 0050f0c0  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 0050f0c7  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 0050f0ce  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 0050f0d5  894118               mov dword ptr [ecx + 0x18], eax
// 0050f0d8  89411c               mov dword ptr [ecx + 0x1c], eax
// 0050f0db  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Reset@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
