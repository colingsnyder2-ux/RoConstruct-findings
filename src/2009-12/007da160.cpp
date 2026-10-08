// roc 2009-12 007da160  unit: RBX::SpatialFilter  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da160
//
// 007da160  56                   push esi
// 007da161  8bf1                 mov esi, ecx
// 007da163  c7068cf99e00         mov dword ptr [esi], 0x9ef98c
// 007da169  8b4604               mov eax, dword ptr [esi + 4]
// 007da16c  50                   push eax
// 007da16d  e86e02e1ff           call 0x5ea3e0
// 007da172  33c0                 xor eax, eax
// 007da174  83c404               add esp, 4
// 007da177  894604               mov dword ptr [esi + 4], eax
// 007da17a  894608               mov dword ptr [esi + 8], eax
// 007da17d  89460c               mov dword ptr [esi + 0xc], eax
// 007da180  5e                   pop esi
// 007da181  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ??1ConvexPolygon@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
