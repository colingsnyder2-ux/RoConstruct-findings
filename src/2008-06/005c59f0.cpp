// roc 2008-06 005c59f0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c59f0
//
// 005c59f0  64a100000000         mov eax, dword ptr fs:[0]
// 005c59f6  6aff                 push -1
// 005c59f8  68fe4b7d00           push 0x7d4bfe
// 005c59fd  50                   push eax
// 005c59fe  b801000000           mov eax, 1
// 005c5a03  64892500000000       mov dword ptr fs:[0], esp
// 005c5a0a  8405d4959700         test byte ptr [0x9795d4], al
// 005c5a10  7530                 jne 0x5c5a42
// 005c5a12  0905d4959700         or dword ptr [0x9795d4], eax
// 005c5a18  6aff                 push -1
// 005c5a1a  683caf9500           push 0x95af3c
// 005c5a1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5a27  e864e5f8ff           call 0x553f90
// 005c5a2c  83c408               add esp, 8
// 005c5a2f  a3d0959700           mov dword ptr [0x9795d0], eax
// 005c5a34  8b0c24               mov ecx, dword ptr [esp]
// 005c5a37  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5a3e  83c40c               add esp, 0xc
// 005c5a41  c3                   ret 
// 005c5a42  8b0c24               mov ecx, dword ptr [esp]
// 005c5a45  a1d0959700           mov eax, dword ptr [0x9795d0]
// 005c5a4a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5a51  83c40c               add esp, 0xc
// 005c5a54  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
