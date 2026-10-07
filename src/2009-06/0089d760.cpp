// roc 2009-06 0089d760  unit: seg_00890000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d760
//
// 0089d760  c7055895a300b44c9200 mov dword ptr [0xa39558], 0x924cb4
// 0089d76a  b95895a300           mov ecx, 0xa39558
// 0089d76f  e91cc9faff           jmp 0x84a090
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
