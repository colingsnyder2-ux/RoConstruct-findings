// roc 2009-12 005fe630  unit: G3D::H::PAV?$Array::?$Set  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe630
//
// 005fe630  8bc1                 mov eax, ecx
// 005fe632  83c9ff               or ecx, 0xffffffff
// 005fe635  c70000000000         mov dword ptr [eax], 0
// 005fe63b  894808               mov dword ptr [eax + 8], ecx
// 005fe63e  c7400400000000       mov dword ptr [eax + 4], 0
// 005fe645  89480c               mov dword ptr [eax + 0xc], ecx
// 005fe648  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Edge@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
