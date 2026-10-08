// roc 2007-03 0046f4a0  unit: seg_00460000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f4a0
//
// 0046f4a0  c701546d7900         mov dword ptr [ecx], 0x796d54
// 0046f4a6  83c104               add ecx, 4
// 0046f4a9  c701dc597900         mov dword ptr [ecx], 0x7959dc
// 0046f4af  e90ceeffff           jmp 0x46e2c0
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
