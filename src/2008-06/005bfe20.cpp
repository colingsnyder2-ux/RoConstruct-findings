// roc 2008-06 005bfe20  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfe20
//
// 005bfe20  64a100000000         mov eax, dword ptr fs:[0]
// 005bfe26  6aff                 push -1
// 005bfe28  684e427d00           push 0x7d424e
// 005bfe2d  50                   push eax
// 005bfe2e  b801000000           mov eax, 1
// 005bfe33  64892500000000       mov dword ptr fs:[0], esp
// 005bfe3a  8405e0779700         test byte ptr [0x9777e0], al
// 005bfe40  7530                 jne 0x5bfe72
// 005bfe42  0905e0779700         or dword ptr [0x9777e0], eax
// 005bfe48  6aff                 push -1
// 005bfe4a  68f0119600           push 0x9611f0
// 005bfe4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfe57  e83441f9ff           call 0x553f90
// 005bfe5c  83c408               add esp, 8
// 005bfe5f  a3dc779700           mov dword ptr [0x9777dc], eax
// 005bfe64  8b0c24               mov ecx, dword ptr [esp]
// 005bfe67  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfe6e  83c40c               add esp, 0xc
// 005bfe71  c3                   ret 
// 005bfe72  8b0c24               mov ecx, dword ptr [esp]
// 005bfe75  a1dc779700           mov eax, dword ptr [0x9777dc]
// 005bfe7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfe81  83c40c               add esp, 0xc
// 005bfe84  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
