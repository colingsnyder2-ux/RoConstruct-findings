// roc 2007-03 00778d50  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778d50
//
// 00778d50  c7052c57890088e67900 mov dword ptr [0x89572c], 0x79e688
// 00778d5a  b92c578900           mov ecx, 0x89572c
// 00778d5f  e90c0ed5ff           jmp 0x4c9b70
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
