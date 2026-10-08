// from server: 100% by auto
// roc 2007-08 00778d80  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778d80
//
// 00778d80  c705c075890024f17900 mov dword ptr [0x8975c0], 0x79f124
// 00778d8a  b9c0758900           mov ecx, 0x8975c0
// 00778d8f  e9acc9d5ff           jmp 0x4d5740
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
