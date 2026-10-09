// roc 2008-06 005bfa30  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfa30
//
// 005bfa30  64a100000000         mov eax, dword ptr fs:[0]
// 005bfa36  6aff                 push -1
// 005bfa38  682e417d00           push 0x7d412e
// 005bfa3d  50                   push eax
// 005bfa3e  b801000000           mov eax, 1
// 005bfa43  64892500000000       mov dword ptr fs:[0], esp
// 005bfa4a  840598779700         test byte ptr [0x977798], al
// 005bfa50  7530                 jne 0x5bfa82
// 005bfa52  090598779700         or dword ptr [0x977798], eax
// 005bfa58  6aff                 push -1
// 005bfa5a  6830c59500           push 0x95c530
// 005bfa5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfa67  e82445f9ff           call 0x553f90
// 005bfa6c  83c408               add esp, 8
// 005bfa6f  a394779700           mov dword ptr [0x977794], eax
// 005bfa74  8b0c24               mov ecx, dword ptr [esp]
// 005bfa77  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfa7e  83c40c               add esp, 0xc
// 005bfa81  c3                   ret 
// 005bfa82  8b0c24               mov ecx, dword ptr [esp]
// 005bfa85  a194779700           mov eax, dword ptr [0x977794]
// 005bfa8a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfa91  83c40c               add esp, 0xc
// 005bfa94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
