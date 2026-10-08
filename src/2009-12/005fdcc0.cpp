// roc 2009-12 005fdcc0  unit: G3D::H::PAV?$Array::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fdcc0
//
// 005fdcc0  c701dc2e9c00         mov dword ptr [ecx], 0x9c2edc
// 005fdcc6  83c104               add ecx, 4
// 005fdcc9  c701d42e9c00         mov dword ptr [ecx], 0x9c2ed4
// 005fdccf  e90cececff           jmp 0x4cc8e0
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
