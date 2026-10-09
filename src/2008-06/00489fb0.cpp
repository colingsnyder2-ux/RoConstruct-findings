// roc 2008-06 00489fb0  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489fb0
//
// 00489fb0  64a100000000         mov eax, dword ptr fs:[0]
// 00489fb6  6aff                 push -1
// 00489fb8  68ee5e7c00           push 0x7c5eee
// 00489fbd  50                   push eax
// 00489fbe  b801000000           mov eax, 1
// 00489fc3  64892500000000       mov dword ptr fs:[0], esp
// 00489fca  840534fb9600         test byte ptr [0x96fb34], al
// 00489fd0  7530                 jne 0x48a002
// 00489fd2  090534fb9600         or dword ptr [0x96fb34], eax
// 00489fd8  6aff                 push -1
// 00489fda  68b0c18300           push 0x83c1b0
// 00489fdf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489fe7  e8a49f0c00           call 0x553f90
// 00489fec  83c408               add esp, 8
// 00489fef  a330fb9600           mov dword ptr [0x96fb30], eax
// 00489ff4  8b0c24               mov ecx, dword ptr [esp]
// 00489ff7  64890d00000000       mov dword ptr fs:[0], ecx
// 00489ffe  83c40c               add esp, 0xc
// 0048a001  c3                   ret 
// 0048a002  8b0c24               mov ecx, dword ptr [esp]
// 0048a005  a130fb9600           mov eax, dword ptr [0x96fb30]
// 0048a00a  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a011  83c40c               add esp, 0xc
// 0048a014  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
