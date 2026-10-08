// roc 2007-08 0058d980  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d980
//
// 0058d980  64a100000000         mov eax, dword ptr fs:[0]
// 0058d986  6aff                 push -1
// 0058d988  685e667500           push 0x75665e
// 0058d98d  50                   push eax
// 0058d98e  b801000000           mov eax, 1
// 0058d993  64892500000000       mov dword ptr fs:[0], esp
// 0058d99a  840578378c00         test byte ptr [0x8c3778], al
// 0058d9a0  7530                 jne 0x58d9d2
// 0058d9a2  090578378c00         or dword ptr [0x8c3778], eax
// 0058d9a8  6aff                 push -1
// 0058d9aa  6800f48a00           push 0x8af400
// 0058d9af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058d9b7  e884eff9ff           call 0x52c940
// 0058d9bc  83c408               add esp, 8
// 0058d9bf  a374378c00           mov dword ptr [0x8c3774], eax
// 0058d9c4  8b0c24               mov ecx, dword ptr [esp]
// 0058d9c7  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d9ce  83c40c               add esp, 0xc
// 0058d9d1  c3                   ret 
// 0058d9d2  8b0c24               mov ecx, dword ptr [esp]
// 0058d9d5  a174378c00           mov eax, dword ptr [0x8c3774]
// 0058d9da  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d9e1  83c40c               add esp, 0xc
// 0058d9e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
