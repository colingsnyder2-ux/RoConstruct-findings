// from server: 100% by auto
// roc 2007-08 007792d0  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007792d0
//
// 007792d0  c70528838900a40e7a00 mov dword ptr [0x898328], 0x7a0ea4
// 007792da  b928838900           mov ecx, 0x898328
// 007792df  e95c67d9ff           jmp 0x50fa40
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
