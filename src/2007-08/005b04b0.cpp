// roc 2007-08 005b04b0  unit: RBX::AIChaseController  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b04b0
//
// 005b04b0  64a100000000         mov eax, dword ptr fs:[0]
// 005b04b6  6aff                 push -1
// 005b04b8  686e8b7500           push 0x758b6e
// 005b04bd  50                   push eax
// 005b04be  b801000000           mov eax, 1
// 005b04c3  64892500000000       mov dword ptr fs:[0], esp
// 005b04ca  8405d45d8c00         test byte ptr [0x8c5dd4], al
// 005b04d0  7530                 jne 0x5b0502
// 005b04d2  0905d45d8c00         or dword ptr [0x8c5dd4], eax
// 005b04d8  6aff                 push -1
// 005b04da  68605e7b00           push 0x7b5e60
// 005b04df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005b04e7  e854c4f7ff           call 0x52c940
// 005b04ec  83c408               add esp, 8
// 005b04ef  a3d05d8c00           mov dword ptr [0x8c5dd0], eax
// 005b04f4  8b0c24               mov ecx, dword ptr [esp]
// 005b04f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005b04fe  83c40c               add esp, 0xc
// 005b0501  c3                   ret 
// 005b0502  8b0c24               mov ecx, dword ptr [esp]
// 005b0505  a1d05d8c00           mov eax, dword ptr [0x8c5dd0]
// 005b050a  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0511  83c40c               add esp, 0xc
// 005b0514  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
