// roc 2007-03 005547c0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005547c0
//
// 005547c0  64a100000000         mov eax, dword ptr fs:[0]
// 005547c6  6aff                 push -1
// 005547c8  680e3c7500           push 0x753c0e
// 005547cd  50                   push eax
// 005547ce  b801000000           mov eax, 1
// 005547d3  64892500000000       mov dword ptr fs:[0], esp
// 005547da  840534c18b00         test byte ptr [0x8bc134], al
// 005547e0  7530                 jne 0x554812
// 005547e2  090534c18b00         or dword ptr [0x8bc134], eax
// 005547e8  6aff                 push -1
// 005547ea  684c848a00           push 0x8a844c
// 005547ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005547f7  e8e490fdff           call 0x52d8e0
// 005547fc  83c408               add esp, 8
// 005547ff  a330c18b00           mov dword ptr [0x8bc130], eax
// 00554804  8b0c24               mov ecx, dword ptr [esp]
// 00554807  64890d00000000       mov dword ptr fs:[0], ecx
// 0055480e  83c40c               add esp, 0xc
// 00554811  c3                   ret 
// 00554812  8b0c24               mov ecx, dword ptr [esp]
// 00554815  a130c18b00           mov eax, dword ptr [0x8bc130]
// 0055481a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554821  83c40c               add esp, 0xc
// 00554824  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
