// roc 2008-06 00633340  unit: RBX::VExplosion::?$BoundPropGetSet  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633340
//
// 00633340  64a100000000         mov eax, dword ptr fs:[0]
// 00633346  6aff                 push -1
// 00633348  688e9f7d00           push 0x7d9f8e
// 0063334d  50                   push eax
// 0063334e  b801000000           mov eax, 1
// 00633353  64892500000000       mov dword ptr fs:[0], esp
// 0063335a  840534cb9700         test byte ptr [0x97cb34], al
// 00633360  7530                 jne 0x633392
// 00633362  090534cb9700         or dword ptr [0x97cb34], eax
// 00633368  6aff                 push -1
// 0063336a  6818da9500           push 0x95da18
// 0063336f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633377  e8140cf2ff           call 0x553f90
// 0063337c  83c408               add esp, 8
// 0063337f  a330cb9700           mov dword ptr [0x97cb30], eax
// 00633384  8b0c24               mov ecx, dword ptr [esp]
// 00633387  64890d00000000       mov dword ptr fs:[0], ecx
// 0063338e  83c40c               add esp, 0xc
// 00633391  c3                   ret 
// 00633392  8b0c24               mov ecx, dword ptr [esp]
// 00633395  a130cb9700           mov eax, dword ptr [0x97cb30]
// 0063339a  64890d00000000       mov dword ptr fs:[0], ecx
// 006333a1  83c40c               add esp, 0xc
// 006333a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
