// from server: 100% by auto
// roc 2007-08 0050f6d0  unit: G3D::TextInput::WrongSymbol  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f6d0
//
// 0050f6d0  8bc1                 mov eax, ecx
// 0050f6d2  83c9ff               or ecx, 0xffffffff
// 0050f6d5  c70000000000         mov dword ptr [eax], 0
// 0050f6db  894808               mov dword ptr [eax + 8], ecx
// 0050f6de  c7400400000000       mov dword ptr [eax + 4], 0
// 0050f6e5  89480c               mov dword ptr [eax + 0xc], ecx
// 0050f6e8  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Edge@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
