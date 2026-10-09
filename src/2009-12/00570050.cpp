// roc 2009-12 00570050  unit: RakPeer  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00570050
//
// 00570050  33c0                 xor eax, eax
// 00570052  c7014c069c00         mov dword ptr [ecx], 0x9c064c
// 00570058  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 0057005f  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 00570066  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 0057006d  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 00570074  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 0057007b  894118               mov dword ptr [ecx + 0x18], eax
// 0057007e  89411c               mov dword ptr [ecx + 0x1c], eax
// 00570081  c3                   ret 
// library rbxgs-raknet/SHA1.cpp (function ??1CSHA1@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
