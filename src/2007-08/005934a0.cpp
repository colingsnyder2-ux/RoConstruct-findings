// roc 2007-08 005934a0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005934a0
//
// 005934a0  64a100000000         mov eax, dword ptr fs:[0]
// 005934a6  6aff                 push -1
// 005934a8  680e707500           push 0x75700e
// 005934ad  50                   push eax
// 005934ae  b801000000           mov eax, 1
// 005934b3  64892500000000       mov dword ptr fs:[0], esp
// 005934ba  84052c4d8c00         test byte ptr [0x8c4d2c], al
// 005934c0  7530                 jne 0x5934f2
// 005934c2  09052c4d8c00         or dword ptr [0x8c4d2c], eax
// 005934c8  6aff                 push -1
// 005934ca  6830418b00           push 0x8b4130
// 005934cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005934d7  e86494f9ff           call 0x52c940
// 005934dc  83c408               add esp, 8
// 005934df  a3284d8c00           mov dword ptr [0x8c4d28], eax
// 005934e4  8b0c24               mov ecx, dword ptr [esp]
// 005934e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005934ee  83c40c               add esp, 0xc
// 005934f1  c3                   ret 
// 005934f2  8b0c24               mov ecx, dword ptr [esp]
// 005934f5  a1284d8c00           mov eax, dword ptr [0x8c4d28]
// 005934fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00593501  83c40c               add esp, 0xc
// 00593504  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
