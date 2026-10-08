// roc 2009-12 005fc920  unit: G3D::TextInput::WrongSymbol  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc920
//
// 005fc920  56                   push esi
// 005fc921  8bf1                 mov esi, ecx
// 005fc923  8b4608               mov eax, dword ptr [esi + 8]
// 005fc926  50                   push eax
// 005fc927  e8b4dafeff           call 0x5ea3e0
// 005fc92c  33c0                 xor eax, eax
// 005fc92e  83c404               add esp, 4
// 005fc931  894608               mov dword ptr [esi + 8], eax
// 005fc934  89460c               mov dword ptr [esi + 0xc], eax
// 005fc937  894610               mov dword ptr [esi + 0x10], eax
// 005fc93a  5e                   pop esi
// 005fc93b  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Entry@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
