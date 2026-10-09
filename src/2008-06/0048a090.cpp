// roc 2008-06 0048a090  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a090
//
// 0048a090  64a100000000         mov eax, dword ptr fs:[0]
// 0048a096  6aff                 push -1
// 0048a098  682e5f7c00           push 0x7c5f2e
// 0048a09d  50                   push eax
// 0048a09e  b801000000           mov eax, 1
// 0048a0a3  64892500000000       mov dword ptr fs:[0], esp
// 0048a0aa  840544fb9600         test byte ptr [0x96fb44], al
// 0048a0b0  7530                 jne 0x48a0e2
// 0048a0b2  090544fb9600         or dword ptr [0x96fb44], eax
// 0048a0b8  6aff                 push -1
// 0048a0ba  6890c18300           push 0x83c190
// 0048a0bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048a0c7  e8c49e0c00           call 0x553f90
// 0048a0cc  83c408               add esp, 8
// 0048a0cf  a340fb9600           mov dword ptr [0x96fb40], eax
// 0048a0d4  8b0c24               mov ecx, dword ptr [esp]
// 0048a0d7  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a0de  83c40c               add esp, 0xc
// 0048a0e1  c3                   ret 
// 0048a0e2  8b0c24               mov ecx, dword ptr [esp]
// 0048a0e5  a140fb9600           mov eax, dword ptr [0x96fb40]
// 0048a0ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a0f1  83c40c               add esp, 0xc
// 0048a0f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
