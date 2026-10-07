// roc 2008-06 007b9430  unit: RBX::Render::MegaTextureProxy  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b9430
//
// 007b9430  56                   push esi
// 007b9431  8bf1                 mov esi, ecx
// 007b9433  8b4608               mov eax, dword ptr [esi + 8]
// 007b9436  50                   push eax
// 007b9437  e8e4e8d4ff           call 0x507d20
// 007b943c  33c0                 xor eax, eax
// 007b943e  83c404               add esp, 4
// 007b9441  894608               mov dword ptr [esi + 8], eax
// 007b9444  89460c               mov dword ptr [esi + 0xc], eax
// 007b9447  894610               mov dword ptr [esi + 0x10], eax
// 007b944a  5e                   pop esi
// 007b944b  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Entry@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
