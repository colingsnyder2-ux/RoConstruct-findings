// roc 2007-03 00555080  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555080
//
// 00555080  64a100000000         mov eax, dword ptr fs:[0]
// 00555086  6aff                 push -1
// 00555088  688e3e7500           push 0x753e8e
// 0055508d  50                   push eax
// 0055508e  b801000000           mov eax, 1
// 00555093  64892500000000       mov dword ptr fs:[0], esp
// 0055509a  8405d4c18b00         test byte ptr [0x8bc1d4], al
// 005550a0  7530                 jne 0x5550d2
// 005550a2  0905d4c18b00         or dword ptr [0x8bc1d4], eax
// 005550a8  6aff                 push -1
// 005550aa  6854878a00           push 0x8a8754
// 005550af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005550b7  e82488fdff           call 0x52d8e0
// 005550bc  83c408               add esp, 8
// 005550bf  a3d0c18b00           mov dword ptr [0x8bc1d0], eax
// 005550c4  8b0c24               mov ecx, dword ptr [esp]
// 005550c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005550ce  83c40c               add esp, 0xc
// 005550d1  c3                   ret 
// 005550d2  8b0c24               mov ecx, dword ptr [esp]
// 005550d5  a1d0c18b00           mov eax, dword ptr [0x8bc1d0]
// 005550da  64890d00000000       mov dword ptr fs:[0], ecx
// 005550e1  83c40c               add esp, 0xc
// 005550e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
