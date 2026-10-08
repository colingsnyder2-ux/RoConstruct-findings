// from server: 100% by auto
// roc 2007-08 0050fa20  unit: G3D::TextInput::WrongSymbol  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050fa20
//
// 0050fa20  56                   push esi
// 0050fa21  8bf1                 mov esi, ecx
// 0050fa23  8b4608               mov eax, dword ptr [esi + 8]
// 0050fa26  50                   push eax
// 0050fa27  e8e4fdfeff           call 0x4ff810
// 0050fa2c  33c0                 xor eax, eax
// 0050fa2e  83c404               add esp, 4
// 0050fa31  894608               mov dword ptr [esi + 8], eax
// 0050fa34  89460c               mov dword ptr [esi + 0xc], eax
// 0050fa37  894610               mov dword ptr [esi + 0x10], eax
// 0050fa3a  5e                   pop esi
// 0050fa3b  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Entry@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
