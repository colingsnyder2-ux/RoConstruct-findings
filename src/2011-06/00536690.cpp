// roc 2011-06 00536690  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00536690
//
// 00536690  8bc1                 mov eax, ecx
// 00536692  33c9                 xor ecx, ecx
// 00536694  c7000cf4a700         mov dword ptr [eax], 0xa7f40c
// 0053669a  c7400401234567       mov dword ptr [eax + 4], 0x67452301
// 005366a1  c7400889abcdef       mov dword ptr [eax + 8], 0xefcdab89
// 005366a8  c7400cfedcba98       mov dword ptr [eax + 0xc], 0x98badcfe
// 005366af  c7401076543210       mov dword ptr [eax + 0x10], 0x10325476
// 005366b6  c74014f0e1d2c3       mov dword ptr [eax + 0x14], 0xc3d2e1f0
// 005366bd  894818               mov dword ptr [eax + 0x18], ecx
// 005366c0  89481c               mov dword ptr [eax + 0x1c], ecx
// 005366c3  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??0CSHA1@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
