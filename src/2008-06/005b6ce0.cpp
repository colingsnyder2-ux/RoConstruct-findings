// roc 2008-06 005b6ce0  unit: RBX::DropperTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6ce0
//
// 005b6ce0  64a100000000         mov eax, dword ptr fs:[0]
// 005b6ce6  6aff                 push -1
// 005b6ce8  687e397d00           push 0x7d397e
// 005b6ced  50                   push eax
// 005b6cee  b801000000           mov eax, 1
// 005b6cf3  64892500000000       mov dword ptr fs:[0], esp
// 005b6cfa  8405d8719700         test byte ptr [0x9771d8], al
// 005b6d00  7530                 jne 0x5b6d32
// 005b6d02  0905d8719700         or dword ptr [0x9771d8], eax
// 005b6d08  6aff                 push -1
// 005b6d0a  6804d39400           push 0x94d304
// 005b6d0f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005b6d17  e874d2f9ff           call 0x553f90
// 005b6d1c  83c408               add esp, 8
// 005b6d1f  a3d4719700           mov dword ptr [0x9771d4], eax
// 005b6d24  8b0c24               mov ecx, dword ptr [esp]
// 005b6d27  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6d2e  83c40c               add esp, 0xc
// 005b6d31  c3                   ret 
// 005b6d32  8b0c24               mov ecx, dword ptr [esp]
// 005b6d35  a1d4719700           mov eax, dword ptr [0x9771d4]
// 005b6d3a  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6d41  83c40c               add esp, 0xc
// 005b6d44  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
