// roc 2007-08 00593200  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593200
//
// 00593200  64a100000000         mov eax, dword ptr fs:[0]
// 00593206  6aff                 push -1
// 00593208  684e6f7500           push 0x756f4e
// 0059320d  50                   push eax
// 0059320e  b801000000           mov eax, 1
// 00593213  64892500000000       mov dword ptr fs:[0], esp
// 0059321a  8405fc4c8c00         test byte ptr [0x8c4cfc], al
// 00593220  7530                 jne 0x593252
// 00593222  0905fc4c8c00         or dword ptr [0x8c4cfc], eax
// 00593228  6aff                 push -1
// 0059322a  680c288a00           push 0x8a280c
// 0059322f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593237  e80497f9ff           call 0x52c940
// 0059323c  83c408               add esp, 8
// 0059323f  a3f84c8c00           mov dword ptr [0x8c4cf8], eax
// 00593244  8b0c24               mov ecx, dword ptr [esp]
// 00593247  64890d00000000       mov dword ptr fs:[0], ecx
// 0059324e  83c40c               add esp, 0xc
// 00593251  c3                   ret 
// 00593252  8b0c24               mov ecx, dword ptr [esp]
// 00593255  a1f84c8c00           mov eax, dword ptr [0x8c4cf8]
// 0059325a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593261  83c40c               add esp, 0xc
// 00593264  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
