// roc 2007-08 0047df80  unit: G3D::Win32Window  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047df80
//
// 0047df80  c7013c8b7900         mov dword ptr [ecx], 0x798b3c
// 0047df86  83c104               add ecx, 4
// 0047df89  c701e0887900         mov dword ptr [ecx], 0x7988e0
// 0047df8f  e9bc2a0900           jmp 0x510a50
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
