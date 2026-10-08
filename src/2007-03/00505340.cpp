// roc 2007-03 00505340  unit: seg_00500000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505340
//
// 00505340  c7019c067a00         mov dword ptr [ecx], 0x7a069c
// 00505346  83c104               add ecx, 4
// 00505349  c70194067a00         mov dword ptr [ecx], 0x7a0694
// 0050534f  e9dc5df7ff           jmp 0x47b130
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
