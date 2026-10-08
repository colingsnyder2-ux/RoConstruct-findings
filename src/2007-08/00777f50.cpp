// from server: 100% by auto
// roc 2007-08 00777f50  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777f50
//
// 00777f50  c70528ac8800d4657900 mov dword ptr [0x88ac28], 0x7965d4
// 00777f5a  b928ac8800           mov ecx, 0x88ac28
// 00777f5f  e9ec8ad9ff           jmp 0x510a50
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
