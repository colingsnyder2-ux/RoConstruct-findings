// roc 2007-08 00593660  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593660
//
// 00593660  64a100000000         mov eax, dword ptr fs:[0]
// 00593666  6aff                 push -1
// 00593668  688e707500           push 0x75708e
// 0059366d  50                   push eax
// 0059366e  b801000000           mov eax, 1
// 00593673  64892500000000       mov dword ptr fs:[0], esp
// 0059367a  84054c4d8c00         test byte ptr [0x8c4d4c], al
// 00593680  7530                 jne 0x5936b2
// 00593682  09054c4d8c00         or dword ptr [0x8c4d4c], eax
// 00593688  6aff                 push -1
// 0059368a  6860418b00           push 0x8b4160
// 0059368f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593697  e8a492f9ff           call 0x52c940
// 0059369c  83c408               add esp, 8
// 0059369f  a3484d8c00           mov dword ptr [0x8c4d48], eax
// 005936a4  8b0c24               mov ecx, dword ptr [esp]
// 005936a7  64890d00000000       mov dword ptr fs:[0], ecx
// 005936ae  83c40c               add esp, 0xc
// 005936b1  c3                   ret 
// 005936b2  8b0c24               mov ecx, dword ptr [esp]
// 005936b5  a1484d8c00           mov eax, dword ptr [0x8c4d48]
// 005936ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005936c1  83c40c               add esp, 0xc
// 005936c4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
