// roc 2008-06 005bf800  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf800
//
// 005bf800  64a100000000         mov eax, dword ptr fs:[0]
// 005bf806  6aff                 push -1
// 005bf808  688e407d00           push 0x7d408e
// 005bf80d  50                   push eax
// 005bf80e  b801000000           mov eax, 1
// 005bf813  64892500000000       mov dword ptr fs:[0], esp
// 005bf81a  840570779700         test byte ptr [0x977770], al
// 005bf820  7530                 jne 0x5bf852
// 005bf822  090570779700         or dword ptr [0x977770], eax
// 005bf828  6aff                 push -1
// 005bf82a  68c8b39500           push 0x95b3c8
// 005bf82f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf837  e85447f9ff           call 0x553f90
// 005bf83c  83c408               add esp, 8
// 005bf83f  a36c779700           mov dword ptr [0x97776c], eax
// 005bf844  8b0c24               mov ecx, dword ptr [esp]
// 005bf847  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf84e  83c40c               add esp, 0xc
// 005bf851  c3                   ret 
// 005bf852  8b0c24               mov ecx, dword ptr [esp]
// 005bf855  a16c779700           mov eax, dword ptr [0x97776c]
// 005bf85a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf861  83c40c               add esp, 0xc
// 005bf864  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
