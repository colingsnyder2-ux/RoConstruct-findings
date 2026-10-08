// roc 2009-12 004d7ef0  unit: G3D::Win32Window  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7ef0
//
// 004d7ef0  c701ac7b9b00         mov dword ptr [ecx], 0x9b7bac
// 004d7ef6  83c104               add ecx, 4
// 004d7ef9  c70190799b00         mov dword ptr [ecx], 0x9b7990
// 004d7eff  e9dc49ffff           jmp 0x4cc8e0
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
