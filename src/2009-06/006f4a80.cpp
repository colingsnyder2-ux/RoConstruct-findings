// roc 2009-06 006f4a80  unit: RBX::HUMAN::GettingUp  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4a80
//
// 006f4a80  56                   push esi
// 006f4a81  8bf1                 mov esi, ecx
// 006f4a83  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f4a86  50                   push eax
// 006f4a87  e80468e7ff           call 0x56b290
// 006f4a8c  33c0                 xor eax, eax
// 006f4a8e  83c404               add esp, 4
// 006f4a91  89460c               mov dword ptr [esi + 0xc], eax
// 006f4a94  894610               mov dword ptr [esi + 0x10], eax
// 006f4a97  894614               mov dword ptr [esi + 0x14], eax
// 006f4a9a  5e                   pop esi
// 006f4a9b  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
