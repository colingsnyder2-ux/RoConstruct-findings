// roc 2008-06 004c9b70  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9b70
//
// 004c9b70  64a100000000         mov eax, dword ptr fs:[0]
// 004c9b76  6aff                 push -1
// 004c9b78  68ce977c00           push 0x7c97ce
// 004c9b7d  50                   push eax
// 004c9b7e  b801000000           mov eax, 1
// 004c9b83  64892500000000       mov dword ptr fs:[0], esp
// 004c9b8a  8405c41a9700         test byte ptr [0x971ac4], al
// 004c9b90  7530                 jne 0x4c9bc2
// 004c9b92  0905c41a9700         or dword ptr [0x971ac4], eax
// 004c9b98  6aff                 push -1
// 004c9b9a  6858f88300           push 0x83f858
// 004c9b9f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c9ba7  e8e4a30800           call 0x553f90
// 004c9bac  83c408               add esp, 8
// 004c9baf  a3c01a9700           mov dword ptr [0x971ac0], eax
// 004c9bb4  8b0c24               mov ecx, dword ptr [esp]
// 004c9bb7  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9bbe  83c40c               add esp, 0xc
// 004c9bc1  c3                   ret 
// 004c9bc2  8b0c24               mov ecx, dword ptr [esp]
// 004c9bc5  a1c01a9700           mov eax, dword ptr [0x971ac0]
// 004c9bca  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9bd1  83c40c               add esp, 0xc
// 004c9bd4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
