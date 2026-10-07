// roc 2008-06 00481500  unit: G3D::Win32Window  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00481500
//
// 00481500  c70114f38100         mov dword ptr [ecx], 0x81f314
// 00481506  83c104               add ecx, 4
// 00481509  c701f8f08100         mov dword ptr [ecx], 0x81f0f8
// 0048150f  e90cecffff           jmp 0x480120
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
