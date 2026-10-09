// roc 2007-03 00588270  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588270
//
// 00588270  64a100000000         mov eax, dword ptr fs:[0]
// 00588276  6aff                 push -1
// 00588278  683e747500           push 0x75743e
// 0058827d  50                   push eax
// 0058827e  b801000000           mov eax, 1
// 00588283  64892500000000       mov dword ptr fs:[0], esp
// 0058828a  840540d88b00         test byte ptr [0x8bd840], al
// 00588290  7530                 jne 0x5882c2
// 00588292  090540d88b00         or dword ptr [0x8bd840], eax
// 00588298  6aff                 push -1
// 0058829a  68d8a88a00           push 0x8aa8d8
// 0058829f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005882a7  e83456faff           call 0x52d8e0
// 005882ac  83c408               add esp, 8
// 005882af  a33cd88b00           mov dword ptr [0x8bd83c], eax
// 005882b4  8b0c24               mov ecx, dword ptr [esp]
// 005882b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005882be  83c40c               add esp, 0xc
// 005882c1  c3                   ret 
// 005882c2  8b0c24               mov ecx, dword ptr [esp]
// 005882c5  a13cd88b00           mov eax, dword ptr [0x8bd83c]
// 005882ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005882d1  83c40c               add esp, 0xc
// 005882d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
