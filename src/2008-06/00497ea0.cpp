// roc 2008-06 00497ea0  unit: RBX::Network::Players  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00497ea0
//
// 00497ea0  56                   push esi
// 00497ea1  8bf1                 mov esi, ecx
// 00497ea3  8b460c               mov eax, dword ptr [esi + 0xc]
// 00497ea6  50                   push eax
// 00497ea7  e874fe0600           call 0x507d20
// 00497eac  33c0                 xor eax, eax
// 00497eae  83c404               add esp, 4
// 00497eb1  89460c               mov dword ptr [esi + 0xc], eax
// 00497eb4  894610               mov dword ptr [esi + 0x10], eax
// 00497eb7  894614               mov dword ptr [esi + 0x14], eax
// 00497eba  5e                   pop esi
// 00497ebb  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
