// roc 2009-12 007d8c10  unit: RBX::HUMAN::GettingUp  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d8c10
//
// 007d8c10  56                   push esi
// 007d8c11  8bf1                 mov esi, ecx
// 007d8c13  8b460c               mov eax, dword ptr [esi + 0xc]
// 007d8c16  50                   push eax
// 007d8c17  e8c417e1ff           call 0x5ea3e0
// 007d8c1c  33c0                 xor eax, eax
// 007d8c1e  83c404               add esp, 4
// 007d8c21  89460c               mov dword ptr [esi + 0xc], eax
// 007d8c24  894610               mov dword ptr [esi + 0x10], eax
// 007d8c27  894614               mov dword ptr [esi + 0x14], eax
// 007d8c2a  5e                   pop esi
// 007d8c2b  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
