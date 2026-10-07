// roc 2011-06 0078ba90  unit: RBX::Block  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078ba90
//
// 0078ba90  c701149aab00         mov dword ptr [ecx], 0xab9a14
// 0078ba96  83c104               add ecx, 4
// 0078ba99  c701ec99ab00         mov dword ptr [ecx], 0xab99ec
// 0078ba9f  e96ce8dfff           jmp 0x58a310
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
