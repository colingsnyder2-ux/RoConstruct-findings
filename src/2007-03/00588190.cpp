// roc 2007-03 00588190  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588190
//
// 00588190  64a100000000         mov eax, dword ptr fs:[0]
// 00588196  6aff                 push -1
// 00588198  68fe737500           push 0x7573fe
// 0058819d  50                   push eax
// 0058819e  b801000000           mov eax, 1
// 005881a3  64892500000000       mov dword ptr fs:[0], esp
// 005881aa  840530d88b00         test byte ptr [0x8bd830], al
// 005881b0  7530                 jne 0x5881e2
// 005881b2  090530d88b00         or dword ptr [0x8bd830], eax
// 005881b8  6aff                 push -1
// 005881ba  68189c8a00           push 0x8a9c18
// 005881bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005881c7  e81457faff           call 0x52d8e0
// 005881cc  83c408               add esp, 8
// 005881cf  a32cd88b00           mov dword ptr [0x8bd82c], eax
// 005881d4  8b0c24               mov ecx, dword ptr [esp]
// 005881d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005881de  83c40c               add esp, 0xc
// 005881e1  c3                   ret 
// 005881e2  8b0c24               mov ecx, dword ptr [esp]
// 005881e5  a12cd88b00           mov eax, dword ptr [0x8bd82c]
// 005881ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005881f1  83c40c               add esp, 0xc
// 005881f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
