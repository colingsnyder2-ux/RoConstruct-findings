// roc 2010-06 0051e9b0  unit: Ogre::RbxMeshPartAdapter  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051e9b0
//
// 0051e9b0  33c0                 xor eax, eax
// 0051e9b2  c7011ce6a100         mov dword ptr [ecx], 0xa1e61c
// 0051e9b8  c7410401234567       mov dword ptr [ecx + 4], 0x67452301
// 0051e9bf  c7410889abcdef       mov dword ptr [ecx + 8], 0xefcdab89
// 0051e9c6  c7410cfedcba98       mov dword ptr [ecx + 0xc], 0x98badcfe
// 0051e9cd  c7411076543210       mov dword ptr [ecx + 0x10], 0x10325476
// 0051e9d4  c74114f0e1d2c3       mov dword ptr [ecx + 0x14], 0xc3d2e1f0
// 0051e9db  894118               mov dword ptr [ecx + 0x18], eax
// 0051e9de  89411c               mov dword ptr [ecx + 0x1c], eax
// 0051e9e1  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??1CSHA1@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
