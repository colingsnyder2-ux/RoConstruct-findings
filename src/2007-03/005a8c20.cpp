// roc 2007-03 005a8c20  unit: seg_005a0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8c20
//
// 005a8c20  64a100000000         mov eax, dword ptr fs:[0]
// 005a8c26  6aff                 push -1
// 005a8c28  683e957500           push 0x75953e
// 005a8c2d  50                   push eax
// 005a8c2e  b801000000           mov eax, 1
// 005a8c33  64892500000000       mov dword ptr fs:[0], esp
// 005a8c3a  8405bcf38b00         test byte ptr [0x8bf3bc], al
// 005a8c40  7530                 jne 0x5a8c72
// 005a8c42  0905bcf38b00         or dword ptr [0x8bf3bc], eax
// 005a8c48  6aff                 push -1
// 005a8c4a  68f85c7b00           push 0x7b5cf8
// 005a8c4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a8c57  e8844cf8ff           call 0x52d8e0
// 005a8c5c  83c408               add esp, 8
// 005a8c5f  a3b8f38b00           mov dword ptr [0x8bf3b8], eax
// 005a8c64  8b0c24               mov ecx, dword ptr [esp]
// 005a8c67  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8c6e  83c40c               add esp, 0xc
// 005a8c71  c3                   ret 
// 005a8c72  8b0c24               mov ecx, dword ptr [esp]
// 005a8c75  a1b8f38b00           mov eax, dword ptr [0x8bf3b8]
// 005a8c7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8c81  83c40c               add esp, 0xc
// 005a8c84  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
