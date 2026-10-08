// roc 2007-08 005937b0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005937b0
//
// 005937b0  64a100000000         mov eax, dword ptr fs:[0]
// 005937b6  6aff                 push -1
// 005937b8  68ee707500           push 0x7570ee
// 005937bd  50                   push eax
// 005937be  b801000000           mov eax, 1
// 005937c3  64892500000000       mov dword ptr fs:[0], esp
// 005937ca  8405644d8c00         test byte ptr [0x8c4d64], al
// 005937d0  7530                 jne 0x593802
// 005937d2  0905644d8c00         or dword ptr [0x8c4d64], eax
// 005937d8  6aff                 push -1
// 005937da  6888418b00           push 0x8b4188
// 005937df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005937e7  e85491f9ff           call 0x52c940
// 005937ec  83c408               add esp, 8
// 005937ef  a3604d8c00           mov dword ptr [0x8c4d60], eax
// 005937f4  8b0c24               mov ecx, dword ptr [esp]
// 005937f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005937fe  83c40c               add esp, 0xc
// 00593801  c3                   ret 
// 00593802  8b0c24               mov ecx, dword ptr [esp]
// 00593805  a1604d8c00           mov eax, dword ptr [0x8c4d60]
// 0059380a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593811  83c40c               add esp, 0xc
// 00593814  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
