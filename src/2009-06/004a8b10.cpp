// roc 2009-06 004a8b10  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8b10
//
// 004a8b10  c701b41f8c00         mov dword ptr [ecx], 0x8c1fb4
// 004a8b16  83c104               add ecx, 4
// 004a8b19  c701bc0c8c00         mov dword ptr [ecx], 0x8c0cbc
// 004a8b1f  e91ceeffff           jmp 0x4a7940
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
