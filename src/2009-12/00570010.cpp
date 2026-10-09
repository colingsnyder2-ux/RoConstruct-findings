// roc 2009-12 00570010  unit: RakPeer  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00570010
//
// 00570010  8bc1                 mov eax, ecx
// 00570012  33c9                 xor ecx, ecx
// 00570014  c7004c069c00         mov dword ptr [eax], 0x9c064c
// 0057001a  c7400401234567       mov dword ptr [eax + 4], 0x67452301
// 00570021  c7400889abcdef       mov dword ptr [eax + 8], 0xefcdab89
// 00570028  c7400cfedcba98       mov dword ptr [eax + 0xc], 0x98badcfe
// 0057002f  c7401076543210       mov dword ptr [eax + 0x10], 0x10325476
// 00570036  c74014f0e1d2c3       mov dword ptr [eax + 0x14], 0xc3d2e1f0
// 0057003d  894818               mov dword ptr [eax + 0x18], ecx
// 00570040  89481c               mov dword ptr [eax + 0x1c], ecx
// 00570043  c3                   ret 
// library rbxgs-raknet/SHA1.cpp (function ??0CSHA1@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
