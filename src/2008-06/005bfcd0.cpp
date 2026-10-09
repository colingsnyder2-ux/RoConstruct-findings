// roc 2008-06 005bfcd0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfcd0
//
// 005bfcd0  64a100000000         mov eax, dword ptr fs:[0]
// 005bfcd6  6aff                 push -1
// 005bfcd8  68ee417d00           push 0x7d41ee
// 005bfcdd  50                   push eax
// 005bfcde  b801000000           mov eax, 1
// 005bfce3  64892500000000       mov dword ptr fs:[0], esp
// 005bfcea  8405c8779700         test byte ptr [0x9777c8], al
// 005bfcf0  7530                 jne 0x5bfd22
// 005bfcf2  0905c8779700         or dword ptr [0x9777c8], eax
// 005bfcf8  6aff                 push -1
// 005bfcfa  6814c79500           push 0x95c714
// 005bfcff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfd07  e88442f9ff           call 0x553f90
// 005bfd0c  83c408               add esp, 8
// 005bfd0f  a3c4779700           mov dword ptr [0x9777c4], eax
// 005bfd14  8b0c24               mov ecx, dword ptr [esp]
// 005bfd17  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfd1e  83c40c               add esp, 0xc
// 005bfd21  c3                   ret 
// 005bfd22  8b0c24               mov ecx, dword ptr [esp]
// 005bfd25  a1c4779700           mov eax, dword ptr [0x9777c4]
// 005bfd2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfd31  83c40c               add esp, 0xc
// 005bfd34  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
