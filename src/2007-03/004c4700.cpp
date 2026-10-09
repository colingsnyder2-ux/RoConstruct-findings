// roc 2007-03 004c4700  unit: seg_004c0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4700
//
// 004c4700  64a100000000         mov eax, dword ptr fs:[0]
// 004c4706  6aff                 push -1
// 004c4708  689ed17400           push 0x74d19e
// 004c470d  50                   push eax
// 004c470e  b801000000           mov eax, 1
// 004c4713  64892500000000       mov dword ptr fs:[0], esp
// 004c471a  8405cc9e8b00         test byte ptr [0x8b9ecc], al
// 004c4720  7530                 jne 0x4c4752
// 004c4722  0905cc9e8b00         or dword ptr [0x8b9ecc], eax
// 004c4728  6aff                 push -1
// 004c472a  68946b8a00           push 0x8a6b94
// 004c472f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c4737  e8a4910600           call 0x52d8e0
// 004c473c  83c408               add esp, 8
// 004c473f  a3c89e8b00           mov dword ptr [0x8b9ec8], eax
// 004c4744  8b0c24               mov ecx, dword ptr [esp]
// 004c4747  64890d00000000       mov dword ptr fs:[0], ecx
// 004c474e  83c40c               add esp, 0xc
// 004c4751  c3                   ret 
// 004c4752  8b0c24               mov ecx, dword ptr [esp]
// 004c4755  a1c89e8b00           mov eax, dword ptr [0x8b9ec8]
// 004c475a  64890d00000000       mov dword ptr fs:[0], ecx
// 004c4761  83c40c               add esp, 0xc
// 004c4764  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
