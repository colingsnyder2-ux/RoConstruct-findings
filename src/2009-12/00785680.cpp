// roc 2009-12 00785680  unit: RBX::ToolMouseCommand  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00785680
//
// 00785680  c701249a9e00         mov dword ptr [ecx], 0x9e9a24
// 00785686  83c104               add ecx, 4
// 00785689  c7010c9a9e00         mov dword ptr [ecx], 0x9e9a0c
// 0078568f  e91c331900           jmp 0x9189b0
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
