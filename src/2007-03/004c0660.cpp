// roc 2007-03 004c0660  unit: seg_004c0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0660
//
// 004c0660  8bc1                 mov eax, ecx
// 004c0662  33c9                 xor ecx, ecx
// 004c0664  c7005ce57900         mov dword ptr [eax], 0x79e55c
// 004c066a  c7400401234567       mov dword ptr [eax + 4], 0x67452301
// 004c0671  c7400889abcdef       mov dword ptr [eax + 8], 0xefcdab89
// 004c0678  c7400cfedcba98       mov dword ptr [eax + 0xc], 0x98badcfe
// 004c067f  c7401076543210       mov dword ptr [eax + 0x10], 0x10325476
// 004c0686  c74014f0e1d2c3       mov dword ptr [eax + 0x14], 0xc3d2e1f0
// 004c068d  894818               mov dword ptr [eax + 0x18], ecx
// 004c0690  89481c               mov dword ptr [eax + 0x1c], ecx
// 004c0693  c3                   ret 
// library rbxgs-raknet/SHA1.cpp (function ??0CSHA1@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
