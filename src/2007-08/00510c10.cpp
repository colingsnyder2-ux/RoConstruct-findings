// roc 2007-08 00510c10  unit: G3D::H::PAV?$Array::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00510c10
//
// 00510c10  c701d40e7a00         mov dword ptr [ecx], 0x7a0ed4
// 00510c16  83c104               add ecx, 4
// 00510c19  c701cc0e7a00         mov dword ptr [ecx], 0x7a0ecc
// 00510c1f  e92cfeffff           jmp 0x510a50
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
