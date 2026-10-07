// roc 2009-06 0084bbc0  unit: G3D::H::PAV?$Array::?$Set  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084bbc0
//
// 0084bbc0  8bc1                 mov eax, ecx
// 0084bbc2  83c9ff               or ecx, 0xffffffff
// 0084bbc5  c70000000000         mov dword ptr [eax], 0
// 0084bbcb  894808               mov dword ptr [eax + 8], ecx
// 0084bbce  c7400400000000       mov dword ptr [eax + 4], 0
// 0084bbd5  89480c               mov dword ptr [eax + 0xc], ecx
// 0084bbd8  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??0Edge@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
