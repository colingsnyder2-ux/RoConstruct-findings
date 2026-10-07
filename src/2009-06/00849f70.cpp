// roc 2009-06 00849f70  unit: RBX::RbxG3D::MegaTextureProxy  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00849f70
//
// 00849f70  56                   push esi
// 00849f71  8bf1                 mov esi, ecx
// 00849f73  8b4608               mov eax, dword ptr [esi + 8]
// 00849f76  50                   push eax
// 00849f77  e81413d2ff           call 0x56b290
// 00849f7c  33c0                 xor eax, eax
// 00849f7e  83c404               add esp, 4
// 00849f81  894608               mov dword ptr [esi + 8], eax
// 00849f84  89460c               mov dword ptr [esi + 0xc], eax
// 00849f87  894610               mov dword ptr [esi + 0x10], eax
// 00849f8a  5e                   pop esi
// 00849f8b  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Entry@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
