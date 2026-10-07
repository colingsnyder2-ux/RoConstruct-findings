// roc 2008-06 007ba5c0  unit: G3D::H::PAV?$Array::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ba5c0
//
// 007ba5c0  c701545d8700         mov dword ptr [ecx], 0x875d54
// 007ba5c6  83c104               add ecx, 4
// 007ba5c9  c7014c5d8700         mov dword ptr [ecx], 0x875d4c
// 007ba5cf  e94c5bccff           jmp 0x480120
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
