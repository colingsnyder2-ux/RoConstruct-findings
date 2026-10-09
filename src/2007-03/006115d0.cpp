// roc 2007-03 006115d0  unit: seg_00610000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006115d0
//
// 006115d0  64a100000000         mov eax, dword ptr fs:[0]
// 006115d6  6aff                 push -1
// 006115d8  684ed67500           push 0x75d64e
// 006115dd  50                   push eax
// 006115de  b801000000           mov eax, 1
// 006115e3  64892500000000       mov dword ptr fs:[0], esp
// 006115ea  8405f4128c00         test byte ptr [0x8c12f4], al
// 006115f0  7530                 jne 0x611622
// 006115f2  0905f4128c00         or dword ptr [0x8c12f4], eax
// 006115f8  6aff                 push -1
// 006115fa  68481f7c00           push 0x7c1f48
// 006115ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00611607  e8d4c2f1ff           call 0x52d8e0
// 0061160c  83c408               add esp, 8
// 0061160f  a3f0128c00           mov dword ptr [0x8c12f0], eax
// 00611614  8b0c24               mov ecx, dword ptr [esp]
// 00611617  64890d00000000       mov dword ptr fs:[0], ecx
// 0061161e  83c40c               add esp, 0xc
// 00611621  c3                   ret 
// 00611622  8b0c24               mov ecx, dword ptr [esp]
// 00611625  a1f0128c00           mov eax, dword ptr [0x8c12f0]
// 0061162a  64890d00000000       mov dword ptr fs:[0], ecx
// 00611631  83c40c               add esp, 0xc
// 00611634  c3                   ret 
// library openrbx-client/App\humanoid\Jumping.cpp (function ??$doDeclare@$1?sJumping@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Jumping.cpp
