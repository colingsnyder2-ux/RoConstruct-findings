// from server: 100% by auto
// roc 2009-06 004dc610  unit: RBX::Network::ConcurrentRakPeer::PacketJob  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dc610
//
// 004dc610  56                   push esi
// 004dc611  8bf1                 mov esi, ecx
// 004dc613  d906                 fld dword ptr [esi]
// 004dc615  83ec08               sub esp, 8
// 004dc618  dd1c24               fstp qword ptr [esp]
// 004dc61b  e850ffffff           call 0x4dc570
// 004dc620  83c408               add esp, 8
// 004dc623  84c0                 test al, al
// 004dc625  7431                 je 0x4dc658
// 004dc627  d94604               fld dword ptr [esi + 4]
// 004dc62a  83ec08               sub esp, 8
// 004dc62d  dd1c24               fstp qword ptr [esp]
// 004dc630  e83bffffff           call 0x4dc570
// 004dc635  83c408               add esp, 8
// 004dc638  84c0                 test al, al
// 004dc63a  741c                 je 0x4dc658
// 004dc63c  d94608               fld dword ptr [esi + 8]
// 004dc63f  83ec08               sub esp, 8
// 004dc642  dd1c24               fstp qword ptr [esp]
// 004dc645  e826ffffff           call 0x4dc570
// 004dc64a  83c408               add esp, 8
// 004dc64d  84c0                 test al, al
// 004dc64f  7407                 je 0x4dc658
// 004dc651  b801000000           mov eax, 1
// 004dc656  5e                   pop esi
// 004dc657  c3                   ret 
// 004dc658  33c0                 xor eax, eax
// 004dc65a  5e                   pop esi
// 004dc65b  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?isFinite@Vector3@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
