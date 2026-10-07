// roc 2009-06 005103e0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005103e0
//
// 005103e0  8bc1                 mov eax, ecx
// 005103e2  33c9                 xor ecx, ecx
// 005103e4  c7007c998c00         mov dword ptr [eax], 0x8c997c
// 005103ea  c7400401234567       mov dword ptr [eax + 4], 0x67452301
// 005103f1  c7400889abcdef       mov dword ptr [eax + 8], 0xefcdab89
// 005103f8  c7400cfedcba98       mov dword ptr [eax + 0xc], 0x98badcfe
// 005103ff  c7401076543210       mov dword ptr [eax + 0x10], 0x10325476
// 00510406  c74014f0e1d2c3       mov dword ptr [eax + 0x14], 0xc3d2e1f0
// 0051040d  894818               mov dword ptr [eax + 0x18], ecx
// 00510410  89481c               mov dword ptr [eax + 0x1c], ecx
// 00510413  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??0CSHA1@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
