// roc 2008-06 00489f40  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489f40
//
// 00489f40  64a100000000         mov eax, dword ptr fs:[0]
// 00489f46  6aff                 push -1
// 00489f48  68ce5e7c00           push 0x7c5ece
// 00489f4d  50                   push eax
// 00489f4e  b801000000           mov eax, 1
// 00489f53  64892500000000       mov dword ptr fs:[0], esp
// 00489f5a  84052cfb9600         test byte ptr [0x96fb2c], al
// 00489f60  7530                 jne 0x489f92
// 00489f62  09052cfb9600         or dword ptr [0x96fb2c], eax
// 00489f68  6aff                 push -1
// 00489f6a  68a0c18300           push 0x83c1a0
// 00489f6f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489f77  e814a00c00           call 0x553f90
// 00489f7c  83c408               add esp, 8
// 00489f7f  a328fb9600           mov dword ptr [0x96fb28], eax
// 00489f84  8b0c24               mov ecx, dword ptr [esp]
// 00489f87  64890d00000000       mov dword ptr fs:[0], ecx
// 00489f8e  83c40c               add esp, 0xc
// 00489f91  c3                   ret 
// 00489f92  8b0c24               mov ecx, dword ptr [esp]
// 00489f95  a128fb9600           mov eax, dword ptr [0x96fb28]
// 00489f9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00489fa1  83c40c               add esp, 0xc
// 00489fa4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
