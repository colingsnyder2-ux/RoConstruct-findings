// roc 2010-06 0055feb0  unit: G3D::Line  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055feb0
//
// 0055feb0  8bc1                 mov eax, ecx
// 0055feb2  33c9                 xor ecx, ecx
// 0055feb4  89480c               mov dword ptr [eax + 0xc], ecx
// 0055feb7  8908                 mov dword ptr [eax], ecx
// 0055feb9  894810               mov dword ptr [eax + 0x10], ecx
// 0055febc  894804               mov dword ptr [eax + 4], ecx
// 0055febf  894814               mov dword ptr [eax + 0x14], ecx
// 0055fec2  894808               mov dword ptr [eax + 8], ecx
// 0055fec5  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Face@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
