// roc 2008-06 0048a250  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a250
//
// 0048a250  64a100000000         mov eax, dword ptr fs:[0]
// 0048a256  6aff                 push -1
// 0048a258  68ae5f7c00           push 0x7c5fae
// 0048a25d  50                   push eax
// 0048a25e  b801000000           mov eax, 1
// 0048a263  64892500000000       mov dword ptr fs:[0], esp
// 0048a26a  840564fb9600         test byte ptr [0x96fb64], al
// 0048a270  7530                 jne 0x48a2a2
// 0048a272  090564fb9600         or dword ptr [0x96fb64], eax
// 0048a278  6aff                 push -1
// 0048a27a  6854369500           push 0x953654
// 0048a27f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048a287  e8049d0c00           call 0x553f90
// 0048a28c  83c408               add esp, 8
// 0048a28f  a360fb9600           mov dword ptr [0x96fb60], eax
// 0048a294  8b0c24               mov ecx, dword ptr [esp]
// 0048a297  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a29e  83c40c               add esp, 0xc
// 0048a2a1  c3                   ret 
// 0048a2a2  8b0c24               mov ecx, dword ptr [esp]
// 0048a2a5  a160fb9600           mov eax, dword ptr [0x96fb60]
// 0048a2aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a2b1  83c40c               add esp, 0xc
// 0048a2b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
