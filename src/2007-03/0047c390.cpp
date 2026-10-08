// roc 2007-03 0047c390  unit: seg_00470000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047c390
//
// 0047c390  c701047d7900         mov dword ptr [ecx], 0x797d04
// 0047c396  83c104               add ecx, 4
// 0047c399  c701907b7900         mov dword ptr [ecx], 0x797b90
// 0047c39f  e98cedffff           jmp 0x47b130
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
