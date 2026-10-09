// roc 2007-03 00588120  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588120
//
// 00588120  64a100000000         mov eax, dword ptr fs:[0]
// 00588126  6aff                 push -1
// 00588128  68de737500           push 0x7573de
// 0058812d  50                   push eax
// 0058812e  b801000000           mov eax, 1
// 00588133  64892500000000       mov dword ptr fs:[0], esp
// 0058813a  840528d88b00         test byte ptr [0x8bd828], al
// 00588140  7530                 jne 0x588172
// 00588142  090528d88b00         or dword ptr [0x8bd828], eax
// 00588148  6aff                 push -1
// 0058814a  68089c8a00           push 0x8a9c08
// 0058814f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00588157  e88457faff           call 0x52d8e0
// 0058815c  83c408               add esp, 8
// 0058815f  a324d88b00           mov dword ptr [0x8bd824], eax
// 00588164  8b0c24               mov ecx, dword ptr [esp]
// 00588167  64890d00000000       mov dword ptr fs:[0], ecx
// 0058816e  83c40c               add esp, 0xc
// 00588171  c3                   ret 
// 00588172  8b0c24               mov ecx, dword ptr [esp]
// 00588175  a124d88b00           mov eax, dword ptr [0x8bd824]
// 0058817a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588181  83c40c               add esp, 0xc
// 00588184  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
