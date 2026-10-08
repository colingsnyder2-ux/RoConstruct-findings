// from server: 100% by auto
// roc 2009-06 0084bba0  unit: G3D::H::PAV?$Array::?$Set  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084bba0
//
// 0084bba0  8bc1                 mov eax, ecx
// 0084bba2  33c9                 xor ecx, ecx
// 0084bba4  89480c               mov dword ptr [eax + 0xc], ecx
// 0084bba7  8908                 mov dword ptr [eax], ecx
// 0084bba9  894810               mov dword ptr [eax + 0x10], ecx
// 0084bbac  894804               mov dword ptr [eax + 4], ecx
// 0084bbaf  894814               mov dword ptr [eax + 0x14], ecx
// 0084bbb2  894808               mov dword ptr [eax + 8], ecx
// 0084bbb5  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Face@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
