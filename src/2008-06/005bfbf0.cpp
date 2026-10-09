// roc 2008-06 005bfbf0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfbf0
//
// 005bfbf0  64a100000000         mov eax, dword ptr fs:[0]
// 005bfbf6  6aff                 push -1
// 005bfbf8  68ae417d00           push 0x7d41ae
// 005bfbfd  50                   push eax
// 005bfbfe  b801000000           mov eax, 1
// 005bfc03  64892500000000       mov dword ptr fs:[0], esp
// 005bfc0a  8405b8779700         test byte ptr [0x9777b8], al
// 005bfc10  7530                 jne 0x5bfc42
// 005bfc12  0905b8779700         or dword ptr [0x9777b8], eax
// 005bfc18  6aff                 push -1
// 005bfc1a  68e8c69500           push 0x95c6e8
// 005bfc1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfc27  e86443f9ff           call 0x553f90
// 005bfc2c  83c408               add esp, 8
// 005bfc2f  a3b4779700           mov dword ptr [0x9777b4], eax
// 005bfc34  8b0c24               mov ecx, dword ptr [esp]
// 005bfc37  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfc3e  83c40c               add esp, 0xc
// 005bfc41  c3                   ret 
// 005bfc42  8b0c24               mov ecx, dword ptr [esp]
// 005bfc45  a1b4779700           mov eax, dword ptr [0x9777b4]
// 005bfc4a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfc51  83c40c               add esp, 0xc
// 005bfc54  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
