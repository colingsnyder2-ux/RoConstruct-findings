// roc 2008-06 006672d0  unit: RBX::HUMAN::StrafingNoPhysics  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006672d0
//
// 006672d0  64a100000000         mov eax, dword ptr fs:[0]
// 006672d6  6aff                 push -1
// 006672d8  685ec27d00           push 0x7dc25e
// 006672dd  50                   push eax
// 006672de  b801000000           mov eax, 1
// 006672e3  64892500000000       mov dword ptr fs:[0], esp
// 006672ea  8405c8d99700         test byte ptr [0x97d9c8], al
// 006672f0  7530                 jne 0x667322
// 006672f2  0905c8d99700         or dword ptr [0x97d9c8], eax
// 006672f8  6aff                 push -1
// 006672fa  68e0cd8400           push 0x84cde0
// 006672ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00667307  e884cceeff           call 0x553f90
// 0066730c  83c408               add esp, 8
// 0066730f  a3c4d99700           mov dword ptr [0x97d9c4], eax
// 00667314  8b0c24               mov ecx, dword ptr [esp]
// 00667317  64890d00000000       mov dword ptr fs:[0], ecx
// 0066731e  83c40c               add esp, 0xc
// 00667321  c3                   ret 
// 00667322  8b0c24               mov ecx, dword ptr [esp]
// 00667325  a1c4d99700           mov eax, dword ptr [0x97d9c4]
// 0066732a  64890d00000000       mov dword ptr fs:[0], ecx
// 00667331  83c40c               add esp, 0xc
// 00667334  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
