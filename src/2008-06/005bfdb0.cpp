// roc 2008-06 005bfdb0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfdb0
//
// 005bfdb0  64a100000000         mov eax, dword ptr fs:[0]
// 005bfdb6  6aff                 push -1
// 005bfdb8  682e427d00           push 0x7d422e
// 005bfdbd  50                   push eax
// 005bfdbe  b801000000           mov eax, 1
// 005bfdc3  64892500000000       mov dword ptr fs:[0], esp
// 005bfdca  8405d8779700         test byte ptr [0x9777d8], al
// 005bfdd0  7530                 jne 0x5bfe02
// 005bfdd2  0905d8779700         or dword ptr [0x9777d8], eax
// 005bfdd8  6aff                 push -1
// 005bfdda  6840da9500           push 0x95da40
// 005bfddf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfde7  e8a441f9ff           call 0x553f90
// 005bfdec  83c408               add esp, 8
// 005bfdef  a3d4779700           mov dword ptr [0x9777d4], eax
// 005bfdf4  8b0c24               mov ecx, dword ptr [esp]
// 005bfdf7  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfdfe  83c40c               add esp, 0xc
// 005bfe01  c3                   ret 
// 005bfe02  8b0c24               mov ecx, dword ptr [esp]
// 005bfe05  a1d4779700           mov eax, dword ptr [0x9777d4]
// 005bfe0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfe11  83c40c               add esp, 0xc
// 005bfe14  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
