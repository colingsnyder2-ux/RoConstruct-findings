// roc 2008-06 005bf8e0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf8e0
//
// 005bf8e0  64a100000000         mov eax, dword ptr fs:[0]
// 005bf8e6  6aff                 push -1
// 005bf8e8  68ce407d00           push 0x7d40ce
// 005bf8ed  50                   push eax
// 005bf8ee  b801000000           mov eax, 1
// 005bf8f3  64892500000000       mov dword ptr fs:[0], esp
// 005bf8fa  840580779700         test byte ptr [0x977780], al
// 005bf900  7530                 jne 0x5bf932
// 005bf902  090580779700         or dword ptr [0x977780], eax
// 005bf908  6aff                 push -1
// 005bf90a  686cbe9500           push 0x95be6c
// 005bf90f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf917  e87446f9ff           call 0x553f90
// 005bf91c  83c408               add esp, 8
// 005bf91f  a37c779700           mov dword ptr [0x97777c], eax
// 005bf924  8b0c24               mov ecx, dword ptr [esp]
// 005bf927  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf92e  83c40c               add esp, 0xc
// 005bf931  c3                   ret 
// 005bf932  8b0c24               mov ecx, dword ptr [esp]
// 005bf935  a17c779700           mov eax, dword ptr [0x97777c]
// 005bf93a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf941  83c40c               add esp, 0xc
// 005bf944  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
