// roc 2009-12 00532070  unit: RBX::Network::ConcurrentRakPeer::StatsUpdateJob  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00532070
//
// 00532070  56                   push esi
// 00532071  8bf1                 mov esi, ecx
// 00532073  d906                 fld dword ptr [esi]
// 00532075  83ec08               sub esp, 8
// 00532078  dd1c24               fstp qword ptr [esp]
// 0053207b  e860ffffff           call 0x531fe0
// 00532080  83c408               add esp, 8
// 00532083  84c0                 test al, al
// 00532085  7431                 je 0x5320b8
// 00532087  d94604               fld dword ptr [esi + 4]
// 0053208a  83ec08               sub esp, 8
// 0053208d  dd1c24               fstp qword ptr [esp]
// 00532090  e84bffffff           call 0x531fe0
// 00532095  83c408               add esp, 8
// 00532098  84c0                 test al, al
// 0053209a  741c                 je 0x5320b8
// 0053209c  d94608               fld dword ptr [esi + 8]
// 0053209f  83ec08               sub esp, 8
// 005320a2  dd1c24               fstp qword ptr [esp]
// 005320a5  e836ffffff           call 0x531fe0
// 005320aa  83c408               add esp, 8
// 005320ad  84c0                 test al, al
// 005320af  7407                 je 0x5320b8
// 005320b1  b801000000           mov eax, 1
// 005320b6  5e                   pop esi
// 005320b7  c3                   ret 
// 005320b8  33c0                 xor eax, eax
// 005320ba  5e                   pop esi
// 005320bb  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?isFinite@Vector3@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
