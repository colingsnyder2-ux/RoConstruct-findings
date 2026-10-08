// roc 2007-08 0058da60  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058da60
//
// 0058da60  64a100000000         mov eax, dword ptr fs:[0]
// 0058da66  6aff                 push -1
// 0058da68  689e667500           push 0x75669e
// 0058da6d  50                   push eax
// 0058da6e  b801000000           mov eax, 1
// 0058da73  64892500000000       mov dword ptr fs:[0], esp
// 0058da7a  840588378c00         test byte ptr [0x8c3788], al
// 0058da80  7530                 jne 0x58dab2
// 0058da82  090588378c00         or dword ptr [0x8c3788], eax
// 0058da88  6aff                 push -1
// 0058da8a  68d8f38a00           push 0x8af3d8
// 0058da8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058da97  e8a4eef9ff           call 0x52c940
// 0058da9c  83c408               add esp, 8
// 0058da9f  a384378c00           mov dword ptr [0x8c3784], eax
// 0058daa4  8b0c24               mov ecx, dword ptr [esp]
// 0058daa7  64890d00000000       mov dword ptr fs:[0], ecx
// 0058daae  83c40c               add esp, 0xc
// 0058dab1  c3                   ret 
// 0058dab2  8b0c24               mov ecx, dword ptr [esp]
// 0058dab5  a184378c00           mov eax, dword ptr [0x8c3784]
// 0058daba  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dac1  83c40c               add esp, 0xc
// 0058dac4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
