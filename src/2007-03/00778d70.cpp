// roc 2007-03 00778d70  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778d70
//
// 00778d70  c7051c57890080e67900 mov dword ptr [0x89571c], 0x79e680
// 00778d7a  b91c578900           mov ecx, 0x89571c
// 00778d7f  e97c0dd5ff           jmp 0x4c9b00
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
