// roc 2009-12 005fe610  unit: G3D::H::PAV?$Array::?$Set  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe610
//
// 005fe610  8bc1                 mov eax, ecx
// 005fe612  33c9                 xor ecx, ecx
// 005fe614  89480c               mov dword ptr [eax + 0xc], ecx
// 005fe617  8908                 mov dword ptr [eax], ecx
// 005fe619  894810               mov dword ptr [eax + 0x10], ecx
// 005fe61c  894804               mov dword ptr [eax + 4], ecx
// 005fe61f  894814               mov dword ptr [eax + 0x14], ecx
// 005fe622  894808               mov dword ptr [eax + 8], ecx
// 005fe625  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Face@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
