// from server: 100% by auto
// roc 2010-06 009de0f0  unit: seg_009d0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de0f0
//
// 009de0f0  c705a4b8b9002c0ca200 mov dword ptr [0xb9b8a4], 0xa20c2c
// 009de0fa  b9a4b8b900           mov ecx, 0xb9b8a4
// 009de0ff  e92c1eb8ff           jmp 0x55ff30
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
