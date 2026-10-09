// roc 2008-06 005bfe90  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfe90
//
// 005bfe90  64a100000000         mov eax, dword ptr fs:[0]
// 005bfe96  6aff                 push -1
// 005bfe98  686e427d00           push 0x7d426e
// 005bfe9d  50                   push eax
// 005bfe9e  b801000000           mov eax, 1
// 005bfea3  64892500000000       mov dword ptr fs:[0], esp
// 005bfeaa  8405e8779700         test byte ptr [0x9777e8], al
// 005bfeb0  7530                 jne 0x5bfee2
// 005bfeb2  0905e8779700         or dword ptr [0x9777e8], eax
// 005bfeb8  6aff                 push -1
// 005bfeba  6898159600           push 0x961598
// 005bfebf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfec7  e8c440f9ff           call 0x553f90
// 005bfecc  83c408               add esp, 8
// 005bfecf  a3e4779700           mov dword ptr [0x9777e4], eax
// 005bfed4  8b0c24               mov ecx, dword ptr [esp]
// 005bfed7  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfede  83c40c               add esp, 0xc
// 005bfee1  c3                   ret 
// 005bfee2  8b0c24               mov ecx, dword ptr [esp]
// 005bfee5  a1e4779700           mov eax, dword ptr [0x9777e4]
// 005bfeea  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfef1  83c40c               add esp, 0xc
// 005bfef4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
