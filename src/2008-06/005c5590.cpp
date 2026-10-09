// roc 2008-06 005c5590  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5590
//
// 005c5590  64a100000000         mov eax, dword ptr fs:[0]
// 005c5596  6aff                 push -1
// 005c5598  68be4a7d00           push 0x7d4abe
// 005c559d  50                   push eax
// 005c559e  b801000000           mov eax, 1
// 005c55a3  64892500000000       mov dword ptr fs:[0], esp
// 005c55aa  840584959700         test byte ptr [0x979584], al
// 005c55b0  7530                 jne 0x5c55e2
// 005c55b2  090584959700         or dword ptr [0x979584], eax
// 005c55b8  6aff                 push -1
// 005c55ba  6854d29400           push 0x94d254
// 005c55bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c55c7  e8c4e9f8ff           call 0x553f90
// 005c55cc  83c408               add esp, 8
// 005c55cf  a380959700           mov dword ptr [0x979580], eax
// 005c55d4  8b0c24               mov ecx, dword ptr [esp]
// 005c55d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c55de  83c40c               add esp, 0xc
// 005c55e1  c3                   ret 
// 005c55e2  8b0c24               mov ecx, dword ptr [esp]
// 005c55e5  a180959700           mov eax, dword ptr [0x979580]
// 005c55ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005c55f1  83c40c               add esp, 0xc
// 005c55f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
