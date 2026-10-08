// from server: 100% by auto
// roc 2010-06 004e0410  unit: RBX::Network::ConcurrentRakPeer::StatsUpdateJob  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e0410
//
// 004e0410  56                   push esi
// 004e0411  8bf1                 mov esi, ecx
// 004e0413  d906                 fld dword ptr [esi]
// 004e0415  83ec08               sub esp, 8
// 004e0418  dd1c24               fstp qword ptr [esp]
// 004e041b  e860ffffff           call 0x4e0380
// 004e0420  83c408               add esp, 8
// 004e0423  84c0                 test al, al
// 004e0425  7431                 je 0x4e0458
// 004e0427  d94604               fld dword ptr [esi + 4]
// 004e042a  83ec08               sub esp, 8
// 004e042d  dd1c24               fstp qword ptr [esp]
// 004e0430  e84bffffff           call 0x4e0380
// 004e0435  83c408               add esp, 8
// 004e0438  84c0                 test al, al
// 004e043a  741c                 je 0x4e0458
// 004e043c  d94608               fld dword ptr [esi + 8]
// 004e043f  83ec08               sub esp, 8
// 004e0442  dd1c24               fstp qword ptr [esp]
// 004e0445  e836ffffff           call 0x4e0380
// 004e044a  83c408               add esp, 8
// 004e044d  84c0                 test al, al
// 004e044f  7407                 je 0x4e0458
// 004e0451  b801000000           mov eax, 1
// 004e0456  5e                   pop esi
// 004e0457  c3                   ret 
// 004e0458  33c0                 xor eax, eax
// 004e045a  5e                   pop esi
// 004e045b  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?isFinite@Vector3@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
