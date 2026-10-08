// from server: 100% by auto
// roc 2010-06 00785fb0  unit: RBX::HUMAN::GettingUp  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785fb0
//
// 00785fb0  56                   push esi
// 00785fb1  8bf1                 mov esi, ecx
// 00785fb3  8b460c               mov eax, dword ptr [esi + 0xc]
// 00785fb6  50                   push eax
// 00785fb7  e8047adcff           call 0x54d9c0
// 00785fbc  33c0                 xor eax, eax
// 00785fbe  83c404               add esp, 4
// 00785fc1  89460c               mov dword ptr [esi + 0xc], eax
// 00785fc4  894610               mov dword ptr [esi + 0x10], eax
// 00785fc7  894614               mov dword ptr [esi + 0x14], eax
// 00785fca  5e                   pop esi
// 00785fcb  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
