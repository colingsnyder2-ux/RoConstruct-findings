// roc 2007-08 005932e0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005932e0
//
// 005932e0  64a100000000         mov eax, dword ptr fs:[0]
// 005932e6  6aff                 push -1
// 005932e8  688e6f7500           push 0x756f8e
// 005932ed  50                   push eax
// 005932ee  b801000000           mov eax, 1
// 005932f3  64892500000000       mov dword ptr fs:[0], esp
// 005932fa  84050c4d8c00         test byte ptr [0x8c4d0c], al
// 00593300  7530                 jne 0x593332
// 00593302  09050c4d8c00         or dword ptr [0x8c4d0c], eax
// 00593308  6aff                 push -1
// 0059330a  6810418b00           push 0x8b4110
// 0059330f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593317  e82496f9ff           call 0x52c940
// 0059331c  83c408               add esp, 8
// 0059331f  a3084d8c00           mov dword ptr [0x8c4d08], eax
// 00593324  8b0c24               mov ecx, dword ptr [esp]
// 00593327  64890d00000000       mov dword ptr fs:[0], ecx
// 0059332e  83c40c               add esp, 0xc
// 00593331  c3                   ret 
// 00593332  8b0c24               mov ecx, dword ptr [esp]
// 00593335  a1084d8c00           mov eax, dword ptr [0x8c4d08]
// 0059333a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593341  83c40c               add esp, 0xc
// 00593344  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
