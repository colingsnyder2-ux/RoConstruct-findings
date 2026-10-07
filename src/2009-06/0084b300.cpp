// roc 2009-06 0084b300  unit: G3D::H::PAV?$Array::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084b300
//
// 0084b300  c701cc4c9200         mov dword ptr [ecx], 0x924ccc
// 0084b306  83c104               add ecx, 4
// 0084b309  c701c44c9200         mov dword ptr [ecx], 0x924cc4
// 0084b30f  e93cfeffff           jmp 0x84b150
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
