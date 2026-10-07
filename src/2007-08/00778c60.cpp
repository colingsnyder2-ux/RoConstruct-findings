// roc 2007-08 00778c60  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778c60
//
// 00778c60  c705346c89002cf07900 mov dword ptr [0x896c34], 0x79f02c
// 00778c6a  b9346c8900           mov ecx, 0x896c34
// 00778c6f  e92c63d5ff           jmp 0x4cefa0
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
