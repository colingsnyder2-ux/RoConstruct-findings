// roc 2009-12 004d56e0  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d56e0
//
// 004d56e0  c7019c789b00         mov dword ptr [ecx], 0x9b789c
// 004d56e6  83c104               add ecx, 4
// 004d56e9  c701a4659b00         mov dword ptr [ecx], 0x9b65a4
// 004d56ef  e91ceeffff           jmp 0x4d4510
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
