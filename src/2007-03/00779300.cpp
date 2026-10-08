// roc 2007-03 00779300  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779300
//
// 00779300  c7058c6489007c067a00 mov dword ptr [0x89648c], 0x7a067c
// 0077930a  b98c648900           mov ecx, 0x89648c
// 0077930f  e93caed8ff           jmp 0x504150
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
