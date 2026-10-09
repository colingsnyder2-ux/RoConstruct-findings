// roc 2007-03 00555390  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555390
//
// 00555390  64a100000000         mov eax, dword ptr fs:[0]
// 00555396  6aff                 push -1
// 00555398  686e3f7500           push 0x753f6e
// 0055539d  50                   push eax
// 0055539e  b801000000           mov eax, 1
// 005553a3  64892500000000       mov dword ptr fs:[0], esp
// 005553aa  84050cc28b00         test byte ptr [0x8bc20c], al
// 005553b0  7530                 jne 0x5553e2
// 005553b2  09050cc28b00         or dword ptr [0x8bc20c], eax
// 005553b8  6aff                 push -1
// 005553ba  6870b47b00           push 0x7bb470
// 005553bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005553c7  e81485fdff           call 0x52d8e0
// 005553cc  83c408               add esp, 8
// 005553cf  a308c28b00           mov dword ptr [0x8bc208], eax
// 005553d4  8b0c24               mov ecx, dword ptr [esp]
// 005553d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005553de  83c40c               add esp, 0xc
// 005553e1  c3                   ret 
// 005553e2  8b0c24               mov ecx, dword ptr [esp]
// 005553e5  a108c28b00           mov eax, dword ptr [0x8bc208]
// 005553ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005553f1  83c40c               add esp, 0xc
// 005553f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
