// roc 2008-06 0048a100  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a100
//
// 0048a100  64a100000000         mov eax, dword ptr fs:[0]
// 0048a106  6aff                 push -1
// 0048a108  684e5f7c00           push 0x7c5f4e
// 0048a10d  50                   push eax
// 0048a10e  b801000000           mov eax, 1
// 0048a113  64892500000000       mov dword ptr fs:[0], esp
// 0048a11a  84054cfb9600         test byte ptr [0x96fb4c], al
// 0048a120  7530                 jne 0x48a152
// 0048a122  09054cfb9600         or dword ptr [0x96fb4c], eax
// 0048a128  6aff                 push -1
// 0048a12a  68c4c18300           push 0x83c1c4
// 0048a12f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048a137  e8549e0c00           call 0x553f90
// 0048a13c  83c408               add esp, 8
// 0048a13f  a348fb9600           mov dword ptr [0x96fb48], eax
// 0048a144  8b0c24               mov ecx, dword ptr [esp]
// 0048a147  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a14e  83c40c               add esp, 0xc
// 0048a151  c3                   ret 
// 0048a152  8b0c24               mov ecx, dword ptr [esp]
// 0048a155  a148fb9600           mov eax, dword ptr [0x96fb48]
// 0048a15a  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a161  83c40c               add esp, 0xc
// 0048a164  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
