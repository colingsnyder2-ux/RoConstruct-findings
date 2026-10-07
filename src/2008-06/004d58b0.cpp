// roc 2008-06 004d58b0  unit: seg_004d0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d58b0
//
// 004d58b0  8bc1                 mov eax, ecx
// 004d58b2  33c9                 xor ecx, ecx
// 004d58b4  c7001c6b8200         mov dword ptr [eax], 0x826b1c
// 004d58ba  c7400401234567       mov dword ptr [eax + 4], 0x67452301
// 004d58c1  c7400889abcdef       mov dword ptr [eax + 8], 0xefcdab89
// 004d58c8  c7400cfedcba98       mov dword ptr [eax + 0xc], 0x98badcfe
// 004d58cf  c7401076543210       mov dword ptr [eax + 0x10], 0x10325476
// 004d58d6  c74014f0e1d2c3       mov dword ptr [eax + 0x14], 0xc3d2e1f0
// 004d58dd  894818               mov dword ptr [eax + 0x18], ecx
// 004d58e0  89481c               mov dword ptr [eax + 0x1c], ecx
// 004d58e3  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??0CSHA1@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
