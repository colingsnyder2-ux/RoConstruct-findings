// roc 2007-03 005cfe40  unit: seg_005c0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cfe40
//
// 005cfe40  64a100000000         mov eax, dword ptr fs:[0]
// 005cfe46  6aff                 push -1
// 005cfe48  685eac7500           push 0x75ac5e
// 005cfe4d  50                   push eax
// 005cfe4e  b801000000           mov eax, 1
// 005cfe53  64892500000000       mov dword ptr fs:[0], esp
// 005cfe5a  8405e8ff8b00         test byte ptr [0x8bffe8], al
// 005cfe60  7530                 jne 0x5cfe92
// 005cfe62  0905e8ff8b00         or dword ptr [0x8bffe8], eax
// 005cfe68  6aff                 push -1
// 005cfe6a  68580f7c00           push 0x7c0f58
// 005cfe6f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cfe77  e864daf5ff           call 0x52d8e0
// 005cfe7c  83c408               add esp, 8
// 005cfe7f  a3e4ff8b00           mov dword ptr [0x8bffe4], eax
// 005cfe84  8b0c24               mov ecx, dword ptr [esp]
// 005cfe87  64890d00000000       mov dword ptr fs:[0], ecx
// 005cfe8e  83c40c               add esp, 0xc
// 005cfe91  c3                   ret 
// 005cfe92  8b0c24               mov ecx, dword ptr [esp]
// 005cfe95  a1e4ff8b00           mov eax, dword ptr [0x8bffe4]
// 005cfe9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005cfea1  83c40c               add esp, 0xc
// 005cfea4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
