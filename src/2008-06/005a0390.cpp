// roc 2008-06 005a0390  unit: RBX::Workspace  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0390
//
// 005a0390  64a100000000         mov eax, dword ptr fs:[0]
// 005a0396  6aff                 push -1
// 005a0398  68fe287d00           push 0x7d28fe
// 005a039d  50                   push eax
// 005a039e  b801000000           mov eax, 1
// 005a03a3  64892500000000       mov dword ptr fs:[0], esp
// 005a03aa  8405546a9700         test byte ptr [0x976a54], al
// 005a03b0  7530                 jne 0x5a03e2
// 005a03b2  0905546a9700         or dword ptr [0x976a54], eax
// 005a03b8  6aff                 push -1
// 005a03ba  68b0a99500           push 0x95a9b0
// 005a03bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a03c7  e8c43bfbff           call 0x553f90
// 005a03cc  83c408               add esp, 8
// 005a03cf  a3506a9700           mov dword ptr [0x976a50], eax
// 005a03d4  8b0c24               mov ecx, dword ptr [esp]
// 005a03d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005a03de  83c40c               add esp, 0xc
// 005a03e1  c3                   ret 
// 005a03e2  8b0c24               mov ecx, dword ptr [esp]
// 005a03e5  a1506a9700           mov eax, dword ptr [0x976a50]
// 005a03ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005a03f1  83c40c               add esp, 0xc
// 005a03f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
