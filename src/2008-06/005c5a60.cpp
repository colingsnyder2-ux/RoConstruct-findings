// roc 2008-06 005c5a60  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5a60
//
// 005c5a60  64a100000000         mov eax, dword ptr fs:[0]
// 005c5a66  6aff                 push -1
// 005c5a68  681e4c7d00           push 0x7d4c1e
// 005c5a6d  50                   push eax
// 005c5a6e  b801000000           mov eax, 1
// 005c5a73  64892500000000       mov dword ptr fs:[0], esp
// 005c5a7a  8405dc959700         test byte ptr [0x9795dc], al
// 005c5a80  7530                 jne 0x5c5ab2
// 005c5a82  0905dc959700         or dword ptr [0x9795dc], eax
// 005c5a88  6aff                 push -1
// 005c5a8a  684caf9500           push 0x95af4c
// 005c5a8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5a97  e8f4e4f8ff           call 0x553f90
// 005c5a9c  83c408               add esp, 8
// 005c5a9f  a3d8959700           mov dword ptr [0x9795d8], eax
// 005c5aa4  8b0c24               mov ecx, dword ptr [esp]
// 005c5aa7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5aae  83c40c               add esp, 0xc
// 005c5ab1  c3                   ret 
// 005c5ab2  8b0c24               mov ecx, dword ptr [esp]
// 005c5ab5  a1d8959700           mov eax, dword ptr [0x9795d8]
// 005c5aba  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5ac1  83c40c               add esp, 0xc
// 005c5ac4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
