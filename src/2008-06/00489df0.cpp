// roc 2008-06 00489df0  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489df0
//
// 00489df0  64a100000000         mov eax, dword ptr fs:[0]
// 00489df6  6aff                 push -1
// 00489df8  686e5e7c00           push 0x7c5e6e
// 00489dfd  50                   push eax
// 00489dfe  b801000000           mov eax, 1
// 00489e03  64892500000000       mov dword ptr fs:[0], esp
// 00489e0a  840514fb9600         test byte ptr [0x96fb14], al
// 00489e10  7530                 jne 0x489e42
// 00489e12  090514fb9600         or dword ptr [0x96fb14], eax
// 00489e18  6aff                 push -1
// 00489e1a  6838b78300           push 0x83b738
// 00489e1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489e27  e864a10c00           call 0x553f90
// 00489e2c  83c408               add esp, 8
// 00489e2f  a310fb9600           mov dword ptr [0x96fb10], eax
// 00489e34  8b0c24               mov ecx, dword ptr [esp]
// 00489e37  64890d00000000       mov dword ptr fs:[0], ecx
// 00489e3e  83c40c               add esp, 0xc
// 00489e41  c3                   ret 
// 00489e42  8b0c24               mov ecx, dword ptr [esp]
// 00489e45  a110fb9600           mov eax, dword ptr [0x96fb10]
// 00489e4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00489e51  83c40c               add esp, 0xc
// 00489e54  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
