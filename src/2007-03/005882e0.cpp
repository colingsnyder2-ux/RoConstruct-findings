// roc 2007-03 005882e0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005882e0
//
// 005882e0  64a100000000         mov eax, dword ptr fs:[0]
// 005882e6  6aff                 push -1
// 005882e8  685e747500           push 0x75745e
// 005882ed  50                   push eax
// 005882ee  b801000000           mov eax, 1
// 005882f3  64892500000000       mov dword ptr fs:[0], esp
// 005882fa  840548d88b00         test byte ptr [0x8bd848], al
// 00588300  7530                 jne 0x588332
// 00588302  090548d88b00         or dword ptr [0x8bd848], eax
// 00588308  6aff                 push -1
// 0058830a  68b8aa8a00           push 0x8aaab8
// 0058830f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00588317  e8c455faff           call 0x52d8e0
// 0058831c  83c408               add esp, 8
// 0058831f  a344d88b00           mov dword ptr [0x8bd844], eax
// 00588324  8b0c24               mov ecx, dword ptr [esp]
// 00588327  64890d00000000       mov dword ptr fs:[0], ecx
// 0058832e  83c40c               add esp, 0xc
// 00588331  c3                   ret 
// 00588332  8b0c24               mov ecx, dword ptr [esp]
// 00588335  a144d88b00           mov eax, dword ptr [0x8bd844]
// 0058833a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588341  83c40c               add esp, 0xc
// 00588344  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
