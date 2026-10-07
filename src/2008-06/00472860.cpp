// roc 2008-06 00472860  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472860
//
// 00472860  c70194e18100         mov dword ptr [ecx], 0x81e194
// 00472866  83c104               add ecx, 4
// 00472869  c7011cce8100         mov dword ptr [ecx], 0x81ce1c
// 0047286f  e91ceeffff           jmp 0x471690
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
