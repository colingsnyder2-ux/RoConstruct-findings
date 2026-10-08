// roc 2007-08 00557780  unit: ChatEnter  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557780
//
// 00557780  64a100000000         mov eax, dword ptr fs:[0]
// 00557786  6aff                 push -1
// 00557788  680e327500           push 0x75320e
// 0055778d  50                   push eax
// 0055778e  b801000000           mov eax, 1
// 00557793  64892500000000       mov dword ptr fs:[0], esp
// 0055779a  8405f01e8c00         test byte ptr [0x8c1ef0], al
// 005577a0  7530                 jne 0x5577d2
// 005577a2  0905f01e8c00         or dword ptr [0x8c1ef0], eax
// 005577a8  6aff                 push -1
// 005577aa  6854a67b00           push 0x7ba654
// 005577af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005577b7  e88451fdff           call 0x52c940
// 005577bc  83c408               add esp, 8
// 005577bf  a3ec1e8c00           mov dword ptr [0x8c1eec], eax
// 005577c4  8b0c24               mov ecx, dword ptr [esp]
// 005577c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005577ce  83c40c               add esp, 0xc
// 005577d1  c3                   ret 
// 005577d2  8b0c24               mov ecx, dword ptr [esp]
// 005577d5  a1ec1e8c00           mov eax, dword ptr [0x8c1eec]
// 005577da  64890d00000000       mov dword ptr fs:[0], ecx
// 005577e1  83c40c               add esp, 0xc
// 005577e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
