// from server: 100% by auto
// roc 2007-08 00778d20  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778d20
//
// 00778d20  c705146c89001cf07900 mov dword ptr [0x896c14], 0x79f01c
// 00778d2a  b9146c8900           mov ecx, 0x896c14
// 00778d2f  e98c61d5ff           jmp 0x4ceec0
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
