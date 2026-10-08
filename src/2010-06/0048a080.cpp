// from server: 100% by auto
// roc 2010-06 0048a080  unit: G3D::Win32Window  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048a080
//
// 0048a080  c7016c38a100         mov dword ptr [ecx], 0xa1386c
// 0048a086  83c104               add ecx, 4
// 0048a089  c701c435a100         mov dword ptr [ecx], 0xa135c4
// 0048a08f  e98cecffff           jmp 0x488d20
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
