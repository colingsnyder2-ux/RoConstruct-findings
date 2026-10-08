// from server: 100% by auto
// roc 2009-06 006f6030  unit: RBX::SpatialFilter  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f6030
//
// 006f6030  56                   push esi
// 006f6031  8bf1                 mov esi, ecx
// 006f6033  c70614e98e00         mov dword ptr [esi], 0x8ee914
// 006f6039  8b4604               mov eax, dword ptr [esi + 4]
// 006f603c  50                   push eax
// 006f603d  e84e52e7ff           call 0x56b290
// 006f6042  33c0                 xor eax, eax
// 006f6044  83c404               add esp, 4
// 006f6047  894604               mov dword ptr [esi + 4], eax
// 006f604a  894608               mov dword ptr [esi + 8], eax
// 006f604d  89460c               mov dword ptr [esi + 0xc], eax
// 006f6050  5e                   pop esi
// 006f6051  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ??1ConvexPolygon@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
