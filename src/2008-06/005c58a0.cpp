// roc 2008-06 005c58a0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c58a0
//
// 005c58a0  64a100000000         mov eax, dword ptr fs:[0]
// 005c58a6  6aff                 push -1
// 005c58a8  689e4b7d00           push 0x7d4b9e
// 005c58ad  50                   push eax
// 005c58ae  b801000000           mov eax, 1
// 005c58b3  64892500000000       mov dword ptr fs:[0], esp
// 005c58ba  8405bc959700         test byte ptr [0x9795bc], al
// 005c58c0  7530                 jne 0x5c58f2
// 005c58c2  0905bc959700         or dword ptr [0x9795bc], eax
// 005c58c8  6aff                 push -1
// 005c58ca  681caf9500           push 0x95af1c
// 005c58cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c58d7  e8b4e6f8ff           call 0x553f90
// 005c58dc  83c408               add esp, 8
// 005c58df  a3b8959700           mov dword ptr [0x9795b8], eax
// 005c58e4  8b0c24               mov ecx, dword ptr [esp]
// 005c58e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c58ee  83c40c               add esp, 0xc
// 005c58f1  c3                   ret 
// 005c58f2  8b0c24               mov ecx, dword ptr [esp]
// 005c58f5  a1b8959700           mov eax, dword ptr [0x9795b8]
// 005c58fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5901  83c40c               add esp, 0xc
// 005c5904  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
