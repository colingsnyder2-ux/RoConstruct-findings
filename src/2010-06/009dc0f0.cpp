// roc 2010-06 009dc0f0  unit: seg_009d0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc0f0
//
// 009dc0f0  c705bc70b800fc3ca100 mov dword ptr [0xb870bc], 0xa13cfc
// 009dc0fa  b9bc70b800           mov ecx, 0xb870bc
// 009dc0ff  e91cccaaff           jmp 0x488d20
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
