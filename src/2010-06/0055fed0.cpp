// roc 2010-06 0055fed0  unit: G3D::Line  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055fed0
//
// 0055fed0  8bc1                 mov eax, ecx
// 0055fed2  83c9ff               or ecx, 0xffffffff
// 0055fed5  c70000000000         mov dword ptr [eax], 0
// 0055fedb  894808               mov dword ptr [eax + 8], ecx
// 0055fede  c7400400000000       mov dword ptr [eax + 4], 0
// 0055fee5  89480c               mov dword ptr [eax + 0xc], ecx
// 0055fee8  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Edge@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
