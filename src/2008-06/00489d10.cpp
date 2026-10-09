// roc 2008-06 00489d10  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489d10
//
// 00489d10  64a100000000         mov eax, dword ptr fs:[0]
// 00489d16  6aff                 push -1
// 00489d18  682e5e7c00           push 0x7c5e2e
// 00489d1d  50                   push eax
// 00489d1e  b801000000           mov eax, 1
// 00489d23  64892500000000       mov dword ptr fs:[0], esp
// 00489d2a  840504fb9600         test byte ptr [0x96fb04], al
// 00489d30  7530                 jne 0x489d62
// 00489d32  090504fb9600         or dword ptr [0x96fb04], eax
// 00489d38  6aff                 push -1
// 00489d3a  684ca78300           push 0x83a74c
// 00489d3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489d47  e844a20c00           call 0x553f90
// 00489d4c  83c408               add esp, 8
// 00489d4f  a300fb9600           mov dword ptr [0x96fb00], eax
// 00489d54  8b0c24               mov ecx, dword ptr [esp]
// 00489d57  64890d00000000       mov dword ptr fs:[0], ecx
// 00489d5e  83c40c               add esp, 0xc
// 00489d61  c3                   ret 
// 00489d62  8b0c24               mov ecx, dword ptr [esp]
// 00489d65  a100fb9600           mov eax, dword ptr [0x96fb00]
// 00489d6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00489d71  83c40c               add esp, 0xc
// 00489d74  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
