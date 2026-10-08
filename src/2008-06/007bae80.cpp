// from server: 100% by auto
// roc 2008-06 007bae80  unit: G3D::H::PAV?$Array::?$Set  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007bae80
//
// 007bae80  8bc1                 mov eax, ecx
// 007bae82  83c9ff               or ecx, 0xffffffff
// 007bae85  c70000000000         mov dword ptr [eax], 0
// 007bae8b  894808               mov dword ptr [eax + 8], ecx
// 007bae8e  c7400400000000       mov dword ptr [eax + 4], 0
// 007bae95  89480c               mov dword ptr [eax + 0xc], ecx
// 007bae98  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Edge@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
