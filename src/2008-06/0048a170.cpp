// roc 2008-06 0048a170  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a170
//
// 0048a170  64a100000000         mov eax, dword ptr fs:[0]
// 0048a176  6aff                 push -1
// 0048a178  686e5f7c00           push 0x7c5f6e
// 0048a17d  50                   push eax
// 0048a17e  b801000000           mov eax, 1
// 0048a183  64892500000000       mov dword ptr fs:[0], esp
// 0048a18a  840554fb9600         test byte ptr [0x96fb54], al
// 0048a190  7530                 jne 0x48a1c2
// 0048a192  090554fb9600         or dword ptr [0x96fb54], eax
// 0048a198  6aff                 push -1
// 0048a19a  68bcc18300           push 0x83c1bc
// 0048a19f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048a1a7  e8e49d0c00           call 0x553f90
// 0048a1ac  83c408               add esp, 8
// 0048a1af  a350fb9600           mov dword ptr [0x96fb50], eax
// 0048a1b4  8b0c24               mov ecx, dword ptr [esp]
// 0048a1b7  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a1be  83c40c               add esp, 0xc
// 0048a1c1  c3                   ret 
// 0048a1c2  8b0c24               mov ecx, dword ptr [esp]
// 0048a1c5  a150fb9600           mov eax, dword ptr [0x96fb50]
// 0048a1ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a1d1  83c40c               add esp, 0xc
// 0048a1d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
