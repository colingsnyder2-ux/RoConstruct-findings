// roc 2008-06 005bfd40  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfd40
//
// 005bfd40  64a100000000         mov eax, dword ptr fs:[0]
// 005bfd46  6aff                 push -1
// 005bfd48  680e427d00           push 0x7d420e
// 005bfd4d  50                   push eax
// 005bfd4e  b801000000           mov eax, 1
// 005bfd53  64892500000000       mov dword ptr fs:[0], esp
// 005bfd5a  8405d0779700         test byte ptr [0x9777d0], al
// 005bfd60  7530                 jne 0x5bfd92
// 005bfd62  0905d0779700         or dword ptr [0x9777d0], eax
// 005bfd68  6aff                 push -1
// 005bfd6a  6840c79500           push 0x95c740
// 005bfd6f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfd77  e81442f9ff           call 0x553f90
// 005bfd7c  83c408               add esp, 8
// 005bfd7f  a3cc779700           mov dword ptr [0x9777cc], eax
// 005bfd84  8b0c24               mov ecx, dword ptr [esp]
// 005bfd87  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfd8e  83c40c               add esp, 0xc
// 005bfd91  c3                   ret 
// 005bfd92  8b0c24               mov ecx, dword ptr [esp]
// 005bfd95  a1cc779700           mov eax, dword ptr [0x9777cc]
// 005bfd9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfda1  83c40c               add esp, 0xc
// 005bfda4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
