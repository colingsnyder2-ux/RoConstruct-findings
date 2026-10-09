// roc 2007-03 00588040  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588040
//
// 00588040  64a100000000         mov eax, dword ptr fs:[0]
// 00588046  6aff                 push -1
// 00588048  689e737500           push 0x75739e
// 0058804d  50                   push eax
// 0058804e  b801000000           mov eax, 1
// 00588053  64892500000000       mov dword ptr fs:[0], esp
// 0058805a  840518d88b00         test byte ptr [0x8bd818], al
// 00588060  7530                 jne 0x588092
// 00588062  090518d88b00         or dword ptr [0x8bd818], eax
// 00588068  6aff                 push -1
// 0058806a  68349c8a00           push 0x8a9c34
// 0058806f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00588077  e86458faff           call 0x52d8e0
// 0058807c  83c408               add esp, 8
// 0058807f  a314d88b00           mov dword ptr [0x8bd814], eax
// 00588084  8b0c24               mov ecx, dword ptr [esp]
// 00588087  64890d00000000       mov dword ptr fs:[0], ecx
// 0058808e  83c40c               add esp, 0xc
// 00588091  c3                   ret 
// 00588092  8b0c24               mov ecx, dword ptr [esp]
// 00588095  a114d88b00           mov eax, dword ptr [0x8bd814]
// 0058809a  64890d00000000       mov dword ptr fs:[0], ecx
// 005880a1  83c40c               add esp, 0xc
// 005880a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
