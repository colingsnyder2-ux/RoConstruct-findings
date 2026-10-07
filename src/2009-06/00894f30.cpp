// roc 2009-06 00894f30  unit: seg_00890000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894f30
//
// 00894f30  c70530ae9e00e8ff8b00 mov dword ptr [0x9eae30], 0x8bffe8
// 00894f3a  b930ae9e00           mov ecx, 0x9eae30
// 00894f3f  e90c62fbff           jmp 0x84b150
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
