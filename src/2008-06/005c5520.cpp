// roc 2008-06 005c5520  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5520
//
// 005c5520  64a100000000         mov eax, dword ptr fs:[0]
// 005c5526  6aff                 push -1
// 005c5528  689e4a7d00           push 0x7d4a9e
// 005c552d  50                   push eax
// 005c552e  b801000000           mov eax, 1
// 005c5533  64892500000000       mov dword ptr fs:[0], esp
// 005c553a  84057c959700         test byte ptr [0x97957c], al
// 005c5540  7530                 jne 0x5c5572
// 005c5542  09057c959700         or dword ptr [0x97957c], eax
// 005c5548  6aff                 push -1
// 005c554a  684cd29400           push 0x94d24c
// 005c554f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5557  e834eaf8ff           call 0x553f90
// 005c555c  83c408               add esp, 8
// 005c555f  a378959700           mov dword ptr [0x979578], eax
// 005c5564  8b0c24               mov ecx, dword ptr [esp]
// 005c5567  64890d00000000       mov dword ptr fs:[0], ecx
// 005c556e  83c40c               add esp, 0xc
// 005c5571  c3                   ret 
// 005c5572  8b0c24               mov ecx, dword ptr [esp]
// 005c5575  a178959700           mov eax, dword ptr [0x979578]
// 005c557a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5581  83c40c               add esp, 0xc
// 005c5584  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
