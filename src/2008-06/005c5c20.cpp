// roc 2008-06 005c5c20  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5c20
//
// 005c5c20  64a100000000         mov eax, dword ptr fs:[0]
// 005c5c26  6aff                 push -1
// 005c5c28  689e4c7d00           push 0x7d4c9e
// 005c5c2d  50                   push eax
// 005c5c2e  b801000000           mov eax, 1
// 005c5c33  64892500000000       mov dword ptr fs:[0], esp
// 005c5c3a  8405fc959700         test byte ptr [0x9795fc], al
// 005c5c40  7530                 jne 0x5c5c72
// 005c5c42  0905fc959700         or dword ptr [0x9795fc], eax
// 005c5c48  6aff                 push -1
// 005c5c4a  68201a9600           push 0x961a20
// 005c5c4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5c57  e834e3f8ff           call 0x553f90
// 005c5c5c  83c408               add esp, 8
// 005c5c5f  a3f8959700           mov dword ptr [0x9795f8], eax
// 005c5c64  8b0c24               mov ecx, dword ptr [esp]
// 005c5c67  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5c6e  83c40c               add esp, 0xc
// 005c5c71  c3                   ret 
// 005c5c72  8b0c24               mov ecx, dword ptr [esp]
// 005c5c75  a1f8959700           mov eax, dword ptr [0x9795f8]
// 005c5c7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5c81  83c40c               add esp, 0xc
// 005c5c84  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
