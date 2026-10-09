// roc 2007-03 005dec50  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dec50
//
// 005dec50  64a100000000         mov eax, dword ptr fs:[0]
// 005dec56  6aff                 push -1
// 005dec58  68aebb7500           push 0x75bbae
// 005dec5d  50                   push eax
// 005dec5e  b801000000           mov eax, 1
// 005dec63  64892500000000       mov dword ptr fs:[0], esp
// 005dec6a  84058c078c00         test byte ptr [0x8c078c], al
// 005dec70  7530                 jne 0x5deca2
// 005dec72  09058c078c00         or dword ptr [0x8c078c], eax
// 005dec78  6aff                 push -1
// 005dec7a  6874aa8a00           push 0x8aaa74
// 005dec7f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dec87  e854ecf4ff           call 0x52d8e0
// 005dec8c  83c408               add esp, 8
// 005dec8f  a388078c00           mov dword ptr [0x8c0788], eax
// 005dec94  8b0c24               mov ecx, dword ptr [esp]
// 005dec97  64890d00000000       mov dword ptr fs:[0], ecx
// 005dec9e  83c40c               add esp, 0xc
// 005deca1  c3                   ret 
// 005deca2  8b0c24               mov ecx, dword ptr [esp]
// 005deca5  a188078c00           mov eax, dword ptr [0x8c0788]
// 005decaa  64890d00000000       mov dword ptr fs:[0], ecx
// 005decb1  83c40c               add esp, 0xc
// 005decb4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
