// roc 2008-06 005bfaa0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfaa0
//
// 005bfaa0  64a100000000         mov eax, dword ptr fs:[0]
// 005bfaa6  6aff                 push -1
// 005bfaa8  684e417d00           push 0x7d414e
// 005bfaad  50                   push eax
// 005bfaae  b801000000           mov eax, 1
// 005bfab3  64892500000000       mov dword ptr fs:[0], esp
// 005bfaba  8405a0779700         test byte ptr [0x9777a0], al
// 005bfac0  7530                 jne 0x5bfaf2
// 005bfac2  0905a0779700         or dword ptr [0x9777a0], eax
// 005bfac8  6aff                 push -1
// 005bfaca  6808c79500           push 0x95c708
// 005bfacf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfad7  e8b444f9ff           call 0x553f90
// 005bfadc  83c408               add esp, 8
// 005bfadf  a39c779700           mov dword ptr [0x97779c], eax
// 005bfae4  8b0c24               mov ecx, dword ptr [esp]
// 005bfae7  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfaee  83c40c               add esp, 0xc
// 005bfaf1  c3                   ret 
// 005bfaf2  8b0c24               mov ecx, dword ptr [esp]
// 005bfaf5  a19c779700           mov eax, dword ptr [0x97779c]
// 005bfafa  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfb01  83c40c               add esp, 0xc
// 005bfb04  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
