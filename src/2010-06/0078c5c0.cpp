// from server: 100% by auto
// roc 2010-06 0078c5c0  unit: RBX::SpatialFilter  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078c5c0
//
// 0078c5c0  56                   push esi
// 0078c5c1  8bf1                 mov esi, ecx
// 0078c5c3  c7065c3ca500         mov dword ptr [esi], 0xa53c5c
// 0078c5c9  8b4604               mov eax, dword ptr [esi + 4]
// 0078c5cc  50                   push eax
// 0078c5cd  e8ee13dcff           call 0x54d9c0
// 0078c5d2  33c0                 xor eax, eax
// 0078c5d4  83c404               add esp, 4
// 0078c5d7  894604               mov dword ptr [esi + 4], eax
// 0078c5da  894608               mov dword ptr [esi + 8], eax
// 0078c5dd  89460c               mov dword ptr [esi + 0xc], eax
// 0078c5e0  5e                   pop esi
// 0078c5e1  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ??1ConvexPolygon@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
