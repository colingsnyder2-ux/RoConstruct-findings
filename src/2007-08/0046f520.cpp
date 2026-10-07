// roc 2007-08 0046f520  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f520
//
// 0046f520  c70144797900         mov dword ptr [ecx], 0x797944
// 0046f526  83c104               add ecx, 4
// 0046f529  c701cc657900         mov dword ptr [ecx], 0x7965cc
// 0046f52f  e90ceeffff           jmp 0x46e340
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
