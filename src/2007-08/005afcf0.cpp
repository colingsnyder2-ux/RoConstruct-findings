// roc 2007-08 005afcf0  unit: RBX::AssemblyStage  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afcf0
//
// 005afcf0  64a100000000         mov eax, dword ptr fs:[0]
// 005afcf6  6aff                 push -1
// 005afcf8  68be8a7500           push 0x758abe
// 005afcfd  50                   push eax
// 005afcfe  b801000000           mov eax, 1
// 005afd03  64892500000000       mov dword ptr fs:[0], esp
// 005afd0a  8405bc5d8c00         test byte ptr [0x8c5dbc], al
// 005afd10  7530                 jne 0x5afd42
// 005afd12  0905bc5d8c00         or dword ptr [0x8c5dbc], eax
// 005afd18  6aff                 push -1
// 005afd1a  68505e7b00           push 0x7b5e50
// 005afd1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005afd27  e814ccf7ff           call 0x52c940
// 005afd2c  83c408               add esp, 8
// 005afd2f  a3b85d8c00           mov dword ptr [0x8c5db8], eax
// 005afd34  8b0c24               mov ecx, dword ptr [esp]
// 005afd37  64890d00000000       mov dword ptr fs:[0], ecx
// 005afd3e  83c40c               add esp, 0xc
// 005afd41  c3                   ret 
// 005afd42  8b0c24               mov ecx, dword ptr [esp]
// 005afd45  a1b85d8c00           mov eax, dword ptr [0x8c5db8]
// 005afd4a  64890d00000000       mov dword ptr fs:[0], ecx
// 005afd51  83c40c               add esp, 0xc
// 005afd54  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
