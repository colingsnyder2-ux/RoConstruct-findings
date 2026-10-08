// roc 2007-08 005939e0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005939e0
//
// 005939e0  64a100000000         mov eax, dword ptr fs:[0]
// 005939e6  6aff                 push -1
// 005939e8  688e717500           push 0x75718e
// 005939ed  50                   push eax
// 005939ee  b801000000           mov eax, 1
// 005939f3  64892500000000       mov dword ptr fs:[0], esp
// 005939fa  84058c4d8c00         test byte ptr [0x8c4d8c], al
// 00593a00  7530                 jne 0x593a32
// 00593a02  09058c4d8c00         or dword ptr [0x8c4d8c], eax
// 00593a08  6aff                 push -1
// 00593a0a  68c4418b00           push 0x8b41c4
// 00593a0f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593a17  e8248ff9ff           call 0x52c940
// 00593a1c  83c408               add esp, 8
// 00593a1f  a3884d8c00           mov dword ptr [0x8c4d88], eax
// 00593a24  8b0c24               mov ecx, dword ptr [esp]
// 00593a27  64890d00000000       mov dword ptr fs:[0], ecx
// 00593a2e  83c40c               add esp, 0xc
// 00593a31  c3                   ret 
// 00593a32  8b0c24               mov ecx, dword ptr [esp]
// 00593a35  a1884d8c00           mov eax, dword ptr [0x8c4d88]
// 00593a3a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593a41  83c40c               add esp, 0xc
// 00593a44  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
