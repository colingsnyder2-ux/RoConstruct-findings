// from server: 100% by auto
// roc 2010-06 0071daa0  unit: RBX::ToolMouseCommand  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071daa0
//
// 0071daa0  c70114cca400         mov dword ptr [ecx], 0xa4cc14
// 0071daa6  83c104               add ecx, 4
// 0071daa9  c701fccba400         mov dword ptr [ecx], 0xa4cbfc
// 0071daaf  e9fc851f00           jmp 0x9160b0
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
