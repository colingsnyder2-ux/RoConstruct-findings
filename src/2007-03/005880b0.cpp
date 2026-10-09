// roc 2007-03 005880b0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005880b0
//
// 005880b0  64a100000000         mov eax, dword ptr fs:[0]
// 005880b6  6aff                 push -1
// 005880b8  68be737500           push 0x7573be
// 005880bd  50                   push eax
// 005880be  b801000000           mov eax, 1
// 005880c3  64892500000000       mov dword ptr fs:[0], esp
// 005880ca  840520d88b00         test byte ptr [0x8bd820], al
// 005880d0  7530                 jne 0x588102
// 005880d2  090520d88b00         or dword ptr [0x8bd820], eax
// 005880d8  6aff                 push -1
// 005880da  68409c8a00           push 0x8a9c40
// 005880df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005880e7  e8f457faff           call 0x52d8e0
// 005880ec  83c408               add esp, 8
// 005880ef  a31cd88b00           mov dword ptr [0x8bd81c], eax
// 005880f4  8b0c24               mov ecx, dword ptr [esp]
// 005880f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005880fe  83c40c               add esp, 0xc
// 00588101  c3                   ret 
// 00588102  8b0c24               mov ecx, dword ptr [esp]
// 00588105  a11cd88b00           mov eax, dword ptr [0x8bd81c]
// 0058810a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588111  83c40c               add esp, 0xc
// 00588114  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
