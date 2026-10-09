// roc 2008-06 005bfc60  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfc60
//
// 005bfc60  64a100000000         mov eax, dword ptr fs:[0]
// 005bfc66  6aff                 push -1
// 005bfc68  68ce417d00           push 0x7d41ce
// 005bfc6d  50                   push eax
// 005bfc6e  b801000000           mov eax, 1
// 005bfc73  64892500000000       mov dword ptr fs:[0], esp
// 005bfc7a  8405c0779700         test byte ptr [0x9777c0], al
// 005bfc80  7530                 jne 0x5bfcb2
// 005bfc82  0905c0779700         or dword ptr [0x9777c0], eax
// 005bfc88  6aff                 push -1
// 005bfc8a  68f8c69500           push 0x95c6f8
// 005bfc8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfc97  e8f442f9ff           call 0x553f90
// 005bfc9c  83c408               add esp, 8
// 005bfc9f  a3bc779700           mov dword ptr [0x9777bc], eax
// 005bfca4  8b0c24               mov ecx, dword ptr [esp]
// 005bfca7  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfcae  83c40c               add esp, 0xc
// 005bfcb1  c3                   ret 
// 005bfcb2  8b0c24               mov ecx, dword ptr [esp]
// 005bfcb5  a1bc779700           mov eax, dword ptr [0x9777bc]
// 005bfcba  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfcc1  83c40c               add esp, 0xc
// 005bfcc4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
