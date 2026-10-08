// roc 2007-08 00593510  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593510
//
// 00593510  64a100000000         mov eax, dword ptr fs:[0]
// 00593516  6aff                 push -1
// 00593518  682e707500           push 0x75702e
// 0059351d  50                   push eax
// 0059351e  b801000000           mov eax, 1
// 00593523  64892500000000       mov dword ptr fs:[0], esp
// 0059352a  8405344d8c00         test byte ptr [0x8c4d34], al
// 00593530  7530                 jne 0x593562
// 00593532  0905344d8c00         or dword ptr [0x8c4d34], eax
// 00593538  6aff                 push -1
// 0059353a  6838418b00           push 0x8b4138
// 0059353f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593547  e8f493f9ff           call 0x52c940
// 0059354c  83c408               add esp, 8
// 0059354f  a3304d8c00           mov dword ptr [0x8c4d30], eax
// 00593554  8b0c24               mov ecx, dword ptr [esp]
// 00593557  64890d00000000       mov dword ptr fs:[0], ecx
// 0059355e  83c40c               add esp, 0xc
// 00593561  c3                   ret 
// 00593562  8b0c24               mov ecx, dword ptr [esp]
// 00593565  a1304d8c00           mov eax, dword ptr [0x8c4d30]
// 0059356a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593571  83c40c               add esp, 0xc
// 00593574  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
