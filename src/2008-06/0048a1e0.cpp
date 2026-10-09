// roc 2008-06 0048a1e0  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a1e0
//
// 0048a1e0  64a100000000         mov eax, dword ptr fs:[0]
// 0048a1e6  6aff                 push -1
// 0048a1e8  688e5f7c00           push 0x7c5f8e
// 0048a1ed  50                   push eax
// 0048a1ee  b801000000           mov eax, 1
// 0048a1f3  64892500000000       mov dword ptr fs:[0], esp
// 0048a1fa  84055cfb9600         test byte ptr [0x96fb5c], al
// 0048a200  7530                 jne 0x48a232
// 0048a202  09055cfb9600         or dword ptr [0x96fb5c], eax
// 0048a208  6aff                 push -1
// 0048a20a  6808cd8300           push 0x83cd08
// 0048a20f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048a217  e8749d0c00           call 0x553f90
// 0048a21c  83c408               add esp, 8
// 0048a21f  a358fb9600           mov dword ptr [0x96fb58], eax
// 0048a224  8b0c24               mov ecx, dword ptr [esp]
// 0048a227  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a22e  83c40c               add esp, 0xc
// 0048a231  c3                   ret 
// 0048a232  8b0c24               mov ecx, dword ptr [esp]
// 0048a235  a158fb9600           mov eax, dword ptr [0x96fb58]
// 0048a23a  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a241  83c40c               add esp, 0xc
// 0048a244  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
