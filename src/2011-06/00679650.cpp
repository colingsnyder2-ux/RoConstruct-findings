// from server: 100% by auto
// roc 2011-06 00679650  unit: RBX::SpecialShape  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00679650
//
// 00679650  8bc1                 mov eax, ecx
// 00679652  33c9                 xor ecx, ecx
// 00679654  8908                 mov dword ptr [eax], ecx
// 00679656  894804               mov dword ptr [eax + 4], ecx
// 00679659  894808               mov dword ptr [eax + 8], ecx
// 0067965c  89480c               mov dword ptr [eax + 0xc], ecx
// 0067965f  c3                   ret 
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ??0MD5Hash@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
