// roc 2008-06 00609c60  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609c60
//
// 00609c60  64a100000000         mov eax, dword ptr fs:[0]
// 00609c66  6aff                 push -1
// 00609c68  68ce897d00           push 0x7d89ce
// 00609c6d  50                   push eax
// 00609c6e  b801000000           mov eax, 1
// 00609c73  64892500000000       mov dword ptr fs:[0], esp
// 00609c7a  8405f4b99700         test byte ptr [0x97b9f4], al
// 00609c80  7530                 jne 0x609cb2
// 00609c82  0905f4b99700         or dword ptr [0x97b9f4], eax
// 00609c88  6aff                 push -1
// 00609c8a  6898298400           push 0x842998
// 00609c8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00609c97  e8f4a2f4ff           call 0x553f90
// 00609c9c  83c408               add esp, 8
// 00609c9f  a3f0b99700           mov dword ptr [0x97b9f0], eax
// 00609ca4  8b0c24               mov ecx, dword ptr [esp]
// 00609ca7  64890d00000000       mov dword ptr fs:[0], ecx
// 00609cae  83c40c               add esp, 0xc
// 00609cb1  c3                   ret 
// 00609cb2  8b0c24               mov ecx, dword ptr [esp]
// 00609cb5  a1f0b99700           mov eax, dword ptr [0x97b9f0]
// 00609cba  64890d00000000       mov dword ptr fs:[0], ecx
// 00609cc1  83c40c               add esp, 0xc
// 00609cc4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
