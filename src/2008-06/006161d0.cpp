// roc 2008-06 006161d0  unit: RBX::ArrowTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006161d0
//
// 006161d0  64a100000000         mov eax, dword ptr fs:[0]
// 006161d6  6aff                 push -1
// 006161d8  68ee8f7d00           push 0x7d8fee
// 006161dd  50                   push eax
// 006161de  b801000000           mov eax, 1
// 006161e3  64892500000000       mov dword ptr fs:[0], esp
// 006161ea  8405f0be9700         test byte ptr [0x97bef0], al
// 006161f0  7530                 jne 0x616222
// 006161f2  0905f0be9700         or dword ptr [0x97bef0], eax
// 006161f8  6aff                 push -1
// 006161fa  68b8a99500           push 0x95a9b8
// 006161ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00616207  e884ddf3ff           call 0x553f90
// 0061620c  83c408               add esp, 8
// 0061620f  a3ecbe9700           mov dword ptr [0x97beec], eax
// 00616214  8b0c24               mov ecx, dword ptr [esp]
// 00616217  64890d00000000       mov dword ptr fs:[0], ecx
// 0061621e  83c40c               add esp, 0xc
// 00616221  c3                   ret 
// 00616222  8b0c24               mov ecx, dword ptr [esp]
// 00616225  a1ecbe9700           mov eax, dword ptr [0x97beec]
// 0061622a  64890d00000000       mov dword ptr fs:[0], ecx
// 00616231  83c40c               add esp, 0xc
// 00616234  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
