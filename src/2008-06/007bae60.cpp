// from server: 100% by auto
// roc 2008-06 007bae60  unit: G3D::H::PAV?$Array::?$Set  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007bae60
//
// 007bae60  8bc1                 mov eax, ecx
// 007bae62  33c9                 xor ecx, ecx
// 007bae64  89480c               mov dword ptr [eax + 0xc], ecx
// 007bae67  8908                 mov dword ptr [eax], ecx
// 007bae69  894810               mov dword ptr [eax + 0x10], ecx
// 007bae6c  894804               mov dword ptr [eax + 4], ecx
// 007bae6f  894814               mov dword ptr [eax + 0x14], ecx
// 007bae72  894808               mov dword ptr [eax + 8], ecx
// 007bae75  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Face@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
