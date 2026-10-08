// from server: 100% by auto
// roc 2010-06 0048ebe0  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ebe0
//
// 0048ebe0  c7016c50a100         mov dword ptr [ecx], 0xa1506c
// 0048ebe6  83c104               add ecx, 4
// 0048ebe9  c701f43ca100         mov dword ptr [ecx], 0xa13cf4
// 0048ebef  e91ceeffff           jmp 0x48da10
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
