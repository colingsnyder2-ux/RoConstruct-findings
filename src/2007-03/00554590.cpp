// roc 2007-03 00554590  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554590
//
// 00554590  64a100000000         mov eax, dword ptr fs:[0]
// 00554596  6aff                 push -1
// 00554598  686e3b7500           push 0x753b6e
// 0055459d  50                   push eax
// 0055459e  b801000000           mov eax, 1
// 005545a3  64892500000000       mov dword ptr fs:[0], esp
// 005545aa  84050cc18b00         test byte ptr [0x8bc10c], al
// 005545b0  7530                 jne 0x5545e2
// 005545b2  09050cc18b00         or dword ptr [0x8bc10c], eax
// 005545b8  6aff                 push -1
// 005545ba  6840098a00           push 0x8a0940
// 005545bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005545c7  e81493fdff           call 0x52d8e0
// 005545cc  83c408               add esp, 8
// 005545cf  a308c18b00           mov dword ptr [0x8bc108], eax
// 005545d4  8b0c24               mov ecx, dword ptr [esp]
// 005545d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005545de  83c40c               add esp, 0xc
// 005545e1  c3                   ret 
// 005545e2  8b0c24               mov ecx, dword ptr [esp]
// 005545e5  a108c18b00           mov eax, dword ptr [0x8bc108]
// 005545ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005545f1  83c40c               add esp, 0xc
// 005545f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
