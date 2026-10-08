// roc 2007-08 00593890  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593890
//
// 00593890  64a100000000         mov eax, dword ptr fs:[0]
// 00593896  6aff                 push -1
// 00593898  682e717500           push 0x75712e
// 0059389d  50                   push eax
// 0059389e  b801000000           mov eax, 1
// 005938a3  64892500000000       mov dword ptr fs:[0], esp
// 005938aa  8405744d8c00         test byte ptr [0x8c4d74], al
// 005938b0  7530                 jne 0x5938e2
// 005938b2  0905744d8c00         or dword ptr [0x8c4d74], eax
// 005938b8  6aff                 push -1
// 005938ba  68a0418b00           push 0x8b41a0
// 005938bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005938c7  e87490f9ff           call 0x52c940
// 005938cc  83c408               add esp, 8
// 005938cf  a3704d8c00           mov dword ptr [0x8c4d70], eax
// 005938d4  8b0c24               mov ecx, dword ptr [esp]
// 005938d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005938de  83c40c               add esp, 0xc
// 005938e1  c3                   ret 
// 005938e2  8b0c24               mov ecx, dword ptr [esp]
// 005938e5  a1704d8c00           mov eax, dword ptr [0x8c4d70]
// 005938ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005938f1  83c40c               add esp, 0xc
// 005938f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
