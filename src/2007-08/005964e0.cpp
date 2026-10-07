// roc 2007-08 005964e0  unit: RBX::LaserTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005964e0
//
// 005964e0  8bc1                 mov eax, ecx
// 005964e2  33c9                 xor ecx, ecx
// 005964e4  8908                 mov dword ptr [eax], ecx
// 005964e6  894804               mov dword ptr [eax + 4], ecx
// 005964e9  894808               mov dword ptr [eax + 8], ecx
// 005964ec  89480c               mov dword ptr [eax + 0xc], ecx
// 005964ef  c3                   ret 
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ??0MD5Hash@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
