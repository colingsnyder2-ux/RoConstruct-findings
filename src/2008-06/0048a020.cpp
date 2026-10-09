// roc 2008-06 0048a020  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a020
//
// 0048a020  64a100000000         mov eax, dword ptr fs:[0]
// 0048a026  6aff                 push -1
// 0048a028  680e5f7c00           push 0x7c5f0e
// 0048a02d  50                   push eax
// 0048a02e  b801000000           mov eax, 1
// 0048a033  64892500000000       mov dword ptr fs:[0], esp
// 0048a03a  84053cfb9600         test byte ptr [0x96fb3c], al
// 0048a040  7530                 jne 0x48a072
// 0048a042  09053cfb9600         or dword ptr [0x96fb3c], eax
// 0048a048  6aff                 push -1
// 0048a04a  6898c18300           push 0x83c198
// 0048a04f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048a057  e8349f0c00           call 0x553f90
// 0048a05c  83c408               add esp, 8
// 0048a05f  a338fb9600           mov dword ptr [0x96fb38], eax
// 0048a064  8b0c24               mov ecx, dword ptr [esp]
// 0048a067  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a06e  83c40c               add esp, 0xc
// 0048a071  c3                   ret 
// 0048a072  8b0c24               mov ecx, dword ptr [esp]
// 0048a075  a138fb9600           mov eax, dword ptr [0x96fb38]
// 0048a07a  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a081  83c40c               add esp, 0xc
// 0048a084  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
