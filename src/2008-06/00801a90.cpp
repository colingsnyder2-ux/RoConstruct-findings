// roc 2008-06 00801a90  unit: seg_00800000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801a90
//
// 00801a90  c70558c196002c5d8700 mov dword ptr [0x96c158], 0x875d2c
// 00801a9a  b958c19600           mov ecx, 0x96c158
// 00801a9f  e9ac7afbff           jmp 0x7b9550
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
