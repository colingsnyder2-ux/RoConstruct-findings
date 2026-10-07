// roc 2007-08 004cbc60  unit: seg_004c0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cbc60
//
// 004cbc60  8bc1                 mov eax, ecx
// 004cbc62  33c9                 xor ecx, ecx
// 004cbc64  c700ccef7900         mov dword ptr [eax], 0x79efcc
// 004cbc6a  c7400401234567       mov dword ptr [eax + 4], 0x67452301
// 004cbc71  c7400889abcdef       mov dword ptr [eax + 8], 0xefcdab89
// 004cbc78  c7400cfedcba98       mov dword ptr [eax + 0xc], 0x98badcfe
// 004cbc7f  c7401076543210       mov dword ptr [eax + 0x10], 0x10325476
// 004cbc86  c74014f0e1d2c3       mov dword ptr [eax + 0x14], 0xc3d2e1f0
// 004cbc8d  894818               mov dword ptr [eax + 0x18], ecx
// 004cbc90  89481c               mov dword ptr [eax + 0x1c], ecx
// 004cbc93  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??0CSHA1@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
