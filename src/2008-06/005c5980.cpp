// roc 2008-06 005c5980  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5980
//
// 005c5980  64a100000000         mov eax, dword ptr fs:[0]
// 005c5986  6aff                 push -1
// 005c5988  68de4b7d00           push 0x7d4bde
// 005c598d  50                   push eax
// 005c598e  b801000000           mov eax, 1
// 005c5993  64892500000000       mov dword ptr fs:[0], esp
// 005c599a  8405cc959700         test byte ptr [0x9795cc], al
// 005c59a0  7530                 jne 0x5c59d2
// 005c59a2  0905cc959700         or dword ptr [0x9795cc], eax
// 005c59a8  6aff                 push -1
// 005c59aa  6830af9500           push 0x95af30
// 005c59af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c59b7  e8d4e5f8ff           call 0x553f90
// 005c59bc  83c408               add esp, 8
// 005c59bf  a3c8959700           mov dword ptr [0x9795c8], eax
// 005c59c4  8b0c24               mov ecx, dword ptr [esp]
// 005c59c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c59ce  83c40c               add esp, 0xc
// 005c59d1  c3                   ret 
// 005c59d2  8b0c24               mov ecx, dword ptr [esp]
// 005c59d5  a1c8959700           mov eax, dword ptr [0x9795c8]
// 005c59da  64890d00000000       mov dword ptr fs:[0], ecx
// 005c59e1  83c40c               add esp, 0xc
// 005c59e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
