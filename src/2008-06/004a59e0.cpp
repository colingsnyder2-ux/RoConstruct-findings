// from server: 100% by auto
// roc 2008-06 004a59e0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a59e0
//
// 004a59e0  56                   push esi
// 004a59e1  8bf1                 mov esi, ecx
// 004a59e3  d906                 fld dword ptr [esi]
// 004a59e5  83ec08               sub esp, 8
// 004a59e8  dd1c24               fstp qword ptr [esp]
// 004a59eb  e850ffffff           call 0x4a5940
// 004a59f0  83c408               add esp, 8
// 004a59f3  84c0                 test al, al
// 004a59f5  7431                 je 0x4a5a28
// 004a59f7  d94604               fld dword ptr [esi + 4]
// 004a59fa  83ec08               sub esp, 8
// 004a59fd  dd1c24               fstp qword ptr [esp]
// 004a5a00  e83bffffff           call 0x4a5940
// 004a5a05  83c408               add esp, 8
// 004a5a08  84c0                 test al, al
// 004a5a0a  741c                 je 0x4a5a28
// 004a5a0c  d94608               fld dword ptr [esi + 8]
// 004a5a0f  83ec08               sub esp, 8
// 004a5a12  dd1c24               fstp qword ptr [esp]
// 004a5a15  e826ffffff           call 0x4a5940
// 004a5a1a  83c408               add esp, 8
// 004a5a1d  84c0                 test al, al
// 004a5a1f  7407                 je 0x4a5a28
// 004a5a21  b801000000           mov eax, 1
// 004a5a26  5e                   pop esi
// 004a5a27  c3                   ret 
// 004a5a28  33c0                 xor eax, eax
// 004a5a2a  5e                   pop esi
// 004a5a2b  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?isFinite@Vector3@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
