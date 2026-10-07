// roc 2010-06 0051e970  unit: Ogre::RbxMeshPartAdapter  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051e970
//
// 0051e970  8bc1                 mov eax, ecx
// 0051e972  33c9                 xor ecx, ecx
// 0051e974  c7001ce6a100         mov dword ptr [eax], 0xa1e61c
// 0051e97a  c7400401234567       mov dword ptr [eax + 4], 0x67452301
// 0051e981  c7400889abcdef       mov dword ptr [eax + 8], 0xefcdab89
// 0051e988  c7400cfedcba98       mov dword ptr [eax + 0xc], 0x98badcfe
// 0051e98f  c7401076543210       mov dword ptr [eax + 0x10], 0x10325476
// 0051e996  c74014f0e1d2c3       mov dword ptr [eax + 0x14], 0xc3d2e1f0
// 0051e99d  894818               mov dword ptr [eax + 0x18], ecx
// 0051e9a0  89481c               mov dword ptr [eax + 0x1c], ecx
// 0051e9a3  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ??0CSHA1@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
