// from server: 100% by auto
// roc 2007-08 0050f6b0  unit: G3D::TextInput::WrongSymbol  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f6b0
//
// 0050f6b0  8bc1                 mov eax, ecx
// 0050f6b2  33c9                 xor ecx, ecx
// 0050f6b4  89480c               mov dword ptr [eax + 0xc], ecx
// 0050f6b7  8908                 mov dword ptr [eax], ecx
// 0050f6b9  894810               mov dword ptr [eax + 0x10], ecx
// 0050f6bc  894804               mov dword ptr [eax + 4], ecx
// 0050f6bf  894814               mov dword ptr [eax + 0x14], ecx
// 0050f6c2  894808               mov dword ptr [eax + 8], ecx
// 0050f6c5  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Face@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
