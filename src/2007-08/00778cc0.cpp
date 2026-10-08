// from server: 100% by auto
// roc 2007-08 00778cc0  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778cc0
//
// 00778cc0  c705246c890024f07900 mov dword ptr [0x896c24], 0x79f024
// 00778cca  b9246c8900           mov ecx, 0x896c24
// 00778ccf  e95c62d5ff           jmp 0x4cef30
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
