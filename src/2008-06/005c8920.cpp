// roc 2008-06 005c8920  unit: RBX::LaserTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8920
//
// 005c8920  8bc1                 mov eax, ecx
// 005c8922  33c9                 xor ecx, ecx
// 005c8924  8908                 mov dword ptr [eax], ecx
// 005c8926  894804               mov dword ptr [eax + 4], ecx
// 005c8929  894808               mov dword ptr [eax + 8], ecx
// 005c892c  89480c               mov dword ptr [eax + 0xc], ecx
// 005c892f  c3                   ret 
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ??0MD5Hash@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
