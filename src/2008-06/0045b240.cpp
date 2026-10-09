// roc 2008-06 0045b240  unit: CRobloxWnd  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b240
//
// 0045b240  64a100000000         mov eax, dword ptr fs:[0]
// 0045b246  6aff                 push -1
// 0045b248  68de2a7c00           push 0x7c2ade
// 0045b24d  50                   push eax
// 0045b24e  b801000000           mov eax, 1
// 0045b253  64892500000000       mov dword ptr fs:[0], esp
// 0045b25a  84057cde9600         test byte ptr [0x96de7c], al
// 0045b260  7530                 jne 0x45b292
// 0045b262  09057cde9600         or dword ptr [0x96de7c], eax
// 0045b268  6aff                 push -1
// 0045b26a  68c0139500           push 0x9513c0
// 0045b26f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045b277  e8148d0f00           call 0x553f90
// 0045b27c  83c408               add esp, 8
// 0045b27f  a378de9600           mov dword ptr [0x96de78], eax
// 0045b284  8b0c24               mov ecx, dword ptr [esp]
// 0045b287  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b28e  83c40c               add esp, 0xc
// 0045b291  c3                   ret 
// 0045b292  8b0c24               mov ecx, dword ptr [esp]
// 0045b295  a178de9600           mov eax, dword ptr [0x96de78]
// 0045b29a  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b2a1  83c40c               add esp, 0xc
// 0045b2a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
