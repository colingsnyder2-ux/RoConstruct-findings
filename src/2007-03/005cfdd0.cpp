// roc 2007-03 005cfdd0  unit: seg_005c0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cfdd0
//
// 005cfdd0  64a100000000         mov eax, dword ptr fs:[0]
// 005cfdd6  6aff                 push -1
// 005cfdd8  683eac7500           push 0x75ac3e
// 005cfddd  50                   push eax
// 005cfdde  b801000000           mov eax, 1
// 005cfde3  64892500000000       mov dword ptr fs:[0], esp
// 005cfdea  8405e0ff8b00         test byte ptr [0x8bffe0], al
// 005cfdf0  7530                 jne 0x5cfe22
// 005cfdf2  0905e0ff8b00         or dword ptr [0x8bffe0], eax
// 005cfdf8  6aff                 push -1
// 005cfdfa  68e4eb8a00           push 0x8aebe4
// 005cfdff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cfe07  e8d4daf5ff           call 0x52d8e0
// 005cfe0c  83c408               add esp, 8
// 005cfe0f  a3dcff8b00           mov dword ptr [0x8bffdc], eax
// 005cfe14  8b0c24               mov ecx, dword ptr [esp]
// 005cfe17  64890d00000000       mov dword ptr fs:[0], ecx
// 005cfe1e  83c40c               add esp, 0xc
// 005cfe21  c3                   ret 
// 005cfe22  8b0c24               mov ecx, dword ptr [esp]
// 005cfe25  a1dcff8b00           mov eax, dword ptr [0x8bffdc]
// 005cfe2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005cfe31  83c40c               add esp, 0xc
// 005cfe34  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
