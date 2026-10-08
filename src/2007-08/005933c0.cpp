// roc 2007-08 005933c0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005933c0
//
// 005933c0  64a100000000         mov eax, dword ptr fs:[0]
// 005933c6  6aff                 push -1
// 005933c8  68ce6f7500           push 0x756fce
// 005933cd  50                   push eax
// 005933ce  b801000000           mov eax, 1
// 005933d3  64892500000000       mov dword ptr fs:[0], esp
// 005933da  84051c4d8c00         test byte ptr [0x8c4d1c], al
// 005933e0  7530                 jne 0x593412
// 005933e2  09051c4d8c00         or dword ptr [0x8c4d1c], eax
// 005933e8  6aff                 push -1
// 005933ea  6820418b00           push 0x8b4120
// 005933ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005933f7  e84495f9ff           call 0x52c940
// 005933fc  83c408               add esp, 8
// 005933ff  a3184d8c00           mov dword ptr [0x8c4d18], eax
// 00593404  8b0c24               mov ecx, dword ptr [esp]
// 00593407  64890d00000000       mov dword ptr fs:[0], ecx
// 0059340e  83c40c               add esp, 0xc
// 00593411  c3                   ret 
// 00593412  8b0c24               mov ecx, dword ptr [esp]
// 00593415  a1184d8c00           mov eax, dword ptr [0x8c4d18]
// 0059341a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593421  83c40c               add esp, 0xc
// 00593424  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
