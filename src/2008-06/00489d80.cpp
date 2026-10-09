// roc 2008-06 00489d80  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489d80
//
// 00489d80  64a100000000         mov eax, dword ptr fs:[0]
// 00489d86  6aff                 push -1
// 00489d88  684e5e7c00           push 0x7c5e4e
// 00489d8d  50                   push eax
// 00489d8e  b801000000           mov eax, 1
// 00489d93  64892500000000       mov dword ptr fs:[0], esp
// 00489d9a  84050cfb9600         test byte ptr [0x96fb0c], al
// 00489da0  7530                 jne 0x489dd2
// 00489da2  09050cfb9600         or dword ptr [0x96fb0c], eax
// 00489da8  6aff                 push -1
// 00489daa  6858a78300           push 0x83a758
// 00489daf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489db7  e8d4a10c00           call 0x553f90
// 00489dbc  83c408               add esp, 8
// 00489dbf  a308fb9600           mov dword ptr [0x96fb08], eax
// 00489dc4  8b0c24               mov ecx, dword ptr [esp]
// 00489dc7  64890d00000000       mov dword ptr fs:[0], ecx
// 00489dce  83c40c               add esp, 0xc
// 00489dd1  c3                   ret 
// 00489dd2  8b0c24               mov ecx, dword ptr [esp]
// 00489dd5  a108fb9600           mov eax, dword ptr [0x96fb08]
// 00489dda  64890d00000000       mov dword ptr fs:[0], ecx
// 00489de1  83c40c               add esp, 0xc
// 00489de4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
