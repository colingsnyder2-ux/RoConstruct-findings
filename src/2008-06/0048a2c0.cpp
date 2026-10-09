// roc 2008-06 0048a2c0  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a2c0
//
// 0048a2c0  64a100000000         mov eax, dword ptr fs:[0]
// 0048a2c6  6aff                 push -1
// 0048a2c8  68ce5f7c00           push 0x7c5fce
// 0048a2cd  50                   push eax
// 0048a2ce  b801000000           mov eax, 1
// 0048a2d3  64892500000000       mov dword ptr fs:[0], esp
// 0048a2da  84056cfb9600         test byte ptr [0x96fb6c], al
// 0048a2e0  7530                 jne 0x48a312
// 0048a2e2  09056cfb9600         or dword ptr [0x96fb6c], eax
// 0048a2e8  6aff                 push -1
// 0048a2ea  68e8379500           push 0x9537e8
// 0048a2ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048a2f7  e8949c0c00           call 0x553f90
// 0048a2fc  83c408               add esp, 8
// 0048a2ff  a368fb9600           mov dword ptr [0x96fb68], eax
// 0048a304  8b0c24               mov ecx, dword ptr [esp]
// 0048a307  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a30e  83c40c               add esp, 0xc
// 0048a311  c3                   ret 
// 0048a312  8b0c24               mov ecx, dword ptr [esp]
// 0048a315  a168fb9600           mov eax, dword ptr [0x96fb68]
// 0048a31a  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a321  83c40c               add esp, 0xc
// 0048a324  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
