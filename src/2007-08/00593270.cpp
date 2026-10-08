// roc 2007-08 00593270  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593270
//
// 00593270  64a100000000         mov eax, dword ptr fs:[0]
// 00593276  6aff                 push -1
// 00593278  686e6f7500           push 0x756f6e
// 0059327d  50                   push eax
// 0059327e  b801000000           mov eax, 1
// 00593283  64892500000000       mov dword ptr fs:[0], esp
// 0059328a  8405044d8c00         test byte ptr [0x8c4d04], al
// 00593290  7530                 jne 0x5932c2
// 00593292  0905044d8c00         or dword ptr [0x8c4d04], eax
// 00593298  6aff                 push -1
// 0059329a  6808418b00           push 0x8b4108
// 0059329f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005932a7  e89496f9ff           call 0x52c940
// 005932ac  83c408               add esp, 8
// 005932af  a3004d8c00           mov dword ptr [0x8c4d00], eax
// 005932b4  8b0c24               mov ecx, dword ptr [esp]
// 005932b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005932be  83c40c               add esp, 0xc
// 005932c1  c3                   ret 
// 005932c2  8b0c24               mov ecx, dword ptr [esp]
// 005932c5  a1004d8c00           mov eax, dword ptr [0x8c4d00]
// 005932ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005932d1  83c40c               add esp, 0xc
// 005932d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
