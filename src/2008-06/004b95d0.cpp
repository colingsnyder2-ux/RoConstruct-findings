// roc 2008-06 004b95d0  unit: RBX::Network::IdSerializer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b95d0
//
// 004b95d0  64a100000000         mov eax, dword ptr fs:[0]
// 004b95d6  6aff                 push -1
// 004b95d8  68ae8d7c00           push 0x7c8dae
// 004b95dd  50                   push eax
// 004b95de  b801000000           mov eax, 1
// 004b95e3  64892500000000       mov dword ptr fs:[0], esp
// 004b95ea  840508189700         test byte ptr [0x971808], al
// 004b95f0  7530                 jne 0x4b9622
// 004b95f2  090508189700         or dword ptr [0x971808], eax
// 004b95f8  6aff                 push -1
// 004b95fa  68e4448200           push 0x8244e4
// 004b95ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b9607  e884a90900           call 0x553f90
// 004b960c  83c408               add esp, 8
// 004b960f  a304189700           mov dword ptr [0x971804], eax
// 004b9614  8b0c24               mov ecx, dword ptr [esp]
// 004b9617  64890d00000000       mov dword ptr fs:[0], ecx
// 004b961e  83c40c               add esp, 0xc
// 004b9621  c3                   ret 
// 004b9622  8b0c24               mov ecx, dword ptr [esp]
// 004b9625  a104189700           mov eax, dword ptr [0x971804]
// 004b962a  64890d00000000       mov dword ptr fs:[0], ecx
// 004b9631  83c40c               add esp, 0xc
// 004b9634  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
