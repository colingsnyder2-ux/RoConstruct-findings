// roc 2008-06 005c56e0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c56e0
//
// 005c56e0  64a100000000         mov eax, dword ptr fs:[0]
// 005c56e6  6aff                 push -1
// 005c56e8  681e4b7d00           push 0x7d4b1e
// 005c56ed  50                   push eax
// 005c56ee  b801000000           mov eax, 1
// 005c56f3  64892500000000       mov dword ptr fs:[0], esp
// 005c56fa  84059c959700         test byte ptr [0x97959c], al
// 005c5700  7530                 jne 0x5c5732
// 005c5702  09059c959700         or dword ptr [0x97959c], eax
// 005c5708  6aff                 push -1
// 005c570a  68fcae9500           push 0x95aefc
// 005c570f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5717  e874e8f8ff           call 0x553f90
// 005c571c  83c408               add esp, 8
// 005c571f  a398959700           mov dword ptr [0x979598], eax
// 005c5724  8b0c24               mov ecx, dword ptr [esp]
// 005c5727  64890d00000000       mov dword ptr fs:[0], ecx
// 005c572e  83c40c               add esp, 0xc
// 005c5731  c3                   ret 
// 005c5732  8b0c24               mov ecx, dword ptr [esp]
// 005c5735  a198959700           mov eax, dword ptr [0x979598]
// 005c573a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5741  83c40c               add esp, 0xc
// 005c5744  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
