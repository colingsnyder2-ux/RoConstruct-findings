// roc 2008-06 005bff00  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bff00
//
// 005bff00  64a100000000         mov eax, dword ptr fs:[0]
// 005bff06  6aff                 push -1
// 005bff08  688e427d00           push 0x7d428e
// 005bff0d  50                   push eax
// 005bff0e  b801000000           mov eax, 1
// 005bff13  64892500000000       mov dword ptr fs:[0], esp
// 005bff1a  8405f0779700         test byte ptr [0x9777f0], al
// 005bff20  7530                 jne 0x5bff52
// 005bff22  0905f0779700         or dword ptr [0x9777f0], eax
// 005bff28  6aff                 push -1
// 005bff2a  681c189600           push 0x96181c
// 005bff2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bff37  e85440f9ff           call 0x553f90
// 005bff3c  83c408               add esp, 8
// 005bff3f  a3ec779700           mov dword ptr [0x9777ec], eax
// 005bff44  8b0c24               mov ecx, dword ptr [esp]
// 005bff47  64890d00000000       mov dword ptr fs:[0], ecx
// 005bff4e  83c40c               add esp, 0xc
// 005bff51  c3                   ret 
// 005bff52  8b0c24               mov ecx, dword ptr [esp]
// 005bff55  a1ec779700           mov eax, dword ptr [0x9777ec]
// 005bff5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bff61  83c40c               add esp, 0xc
// 005bff64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
