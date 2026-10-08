// from server: 100% by auto
// roc 2007-08 00778d40  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778d40
//
// 00778d40  c705e075890034f17900 mov dword ptr [0x8975e0], 0x79f134
// 00778d4a  b9e0758900           mov ecx, 0x8975e0
// 00778d4f  e9ecccd5ff           jmp 0x4d5a40
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
