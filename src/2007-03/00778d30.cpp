// roc 2007-03 00778d30  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778d30
//
// 00778d30  c7053c57890090e67900 mov dword ptr [0x89573c], 0x79e690
// 00778d3a  b93c578900           mov ecx, 0x89573c
// 00778d3f  e9bc10d5ff           jmp 0x4c9e00
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
