// roc 2008-06 005bfb80  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfb80
//
// 005bfb80  64a100000000         mov eax, dword ptr fs:[0]
// 005bfb86  6aff                 push -1
// 005bfb88  688e417d00           push 0x7d418e
// 005bfb8d  50                   push eax
// 005bfb8e  b801000000           mov eax, 1
// 005bfb93  64892500000000       mov dword ptr fs:[0], esp
// 005bfb9a  8405b0779700         test byte ptr [0x9777b0], al
// 005bfba0  7530                 jne 0x5bfbd2
// 005bfba2  0905b0779700         or dword ptr [0x9777b0], eax
// 005bfba8  6aff                 push -1
// 005bfbaa  6834c79500           push 0x95c734
// 005bfbaf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfbb7  e8d443f9ff           call 0x553f90
// 005bfbbc  83c408               add esp, 8
// 005bfbbf  a3ac779700           mov dword ptr [0x9777ac], eax
// 005bfbc4  8b0c24               mov ecx, dword ptr [esp]
// 005bfbc7  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfbce  83c40c               add esp, 0xc
// 005bfbd1  c3                   ret 
// 005bfbd2  8b0c24               mov ecx, dword ptr [esp]
// 005bfbd5  a1ac779700           mov eax, dword ptr [0x9777ac]
// 005bfbda  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfbe1  83c40c               add esp, 0xc
// 005bfbe4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
