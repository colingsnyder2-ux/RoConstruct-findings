// roc 2008-06 006332d0  unit: RBX::VExplosion::?$BoundPropGetSet  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006332d0
//
// 006332d0  64a100000000         mov eax, dword ptr fs:[0]
// 006332d6  6aff                 push -1
// 006332d8  686e9f7d00           push 0x7d9f6e
// 006332dd  50                   push eax
// 006332de  b801000000           mov eax, 1
// 006332e3  64892500000000       mov dword ptr fs:[0], esp
// 006332ea  84052ccb9700         test byte ptr [0x97cb2c], al
// 006332f0  7530                 jne 0x633322
// 006332f2  09052ccb9700         or dword ptr [0x97cb2c], eax
// 006332f8  6aff                 push -1
// 006332fa  6808da9500           push 0x95da08
// 006332ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633307  e8840cf2ff           call 0x553f90
// 0063330c  83c408               add esp, 8
// 0063330f  a328cb9700           mov dword ptr [0x97cb28], eax
// 00633314  8b0c24               mov ecx, dword ptr [esp]
// 00633317  64890d00000000       mov dword ptr fs:[0], ecx
// 0063331e  83c40c               add esp, 0xc
// 00633321  c3                   ret 
// 00633322  8b0c24               mov ecx, dword ptr [esp]
// 00633325  a128cb9700           mov eax, dword ptr [0x97cb28]
// 0063332a  64890d00000000       mov dword ptr fs:[0], ecx
// 00633331  83c40c               add esp, 0xc
// 00633334  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
