// roc 2009-06 004ab420  unit: G3D::Win32Window  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ab420
//
// 004ab420  c701b4228c00         mov dword ptr [ecx], 0x8c22b4
// 004ab426  83c104               add ecx, 4
// 004ab429  c701a8208c00         mov dword ptr [ecx], 0x8c20a8
// 004ab42f  e91cfd3900           jmp 0x84b150
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
