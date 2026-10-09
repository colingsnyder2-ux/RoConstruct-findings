// roc 2008-06 005fd690  unit: RBX::Tool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd690
//
// 005fd690  64a100000000         mov eax, dword ptr fs:[0]
// 005fd696  6aff                 push -1
// 005fd698  68be7e7d00           push 0x7d7ebe
// 005fd69d  50                   push eax
// 005fd69e  b801000000           mov eax, 1
// 005fd6a3  64892500000000       mov dword ptr fs:[0], esp
// 005fd6aa  8405e0b59700         test byte ptr [0x97b5e0], al
// 005fd6b0  7530                 jne 0x5fd6e2
// 005fd6b2  0905e0b59700         or dword ptr [0x97b5e0], eax
// 005fd6b8  6aff                 push -1
// 005fd6ba  6860b28400           push 0x84b260
// 005fd6bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fd6c7  e8c468f5ff           call 0x553f90
// 005fd6cc  83c408               add esp, 8
// 005fd6cf  a3dcb59700           mov dword ptr [0x97b5dc], eax
// 005fd6d4  8b0c24               mov ecx, dword ptr [esp]
// 005fd6d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd6de  83c40c               add esp, 0xc
// 005fd6e1  c3                   ret 
// 005fd6e2  8b0c24               mov ecx, dword ptr [esp]
// 005fd6e5  a1dcb59700           mov eax, dword ptr [0x97b5dc]
// 005fd6ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd6f1  83c40c               add esp, 0xc
// 005fd6f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
