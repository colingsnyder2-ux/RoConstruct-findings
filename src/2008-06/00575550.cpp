// roc 2008-06 00575550  unit: RBX::ServiceProvider  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575550
//
// 00575550  64a100000000         mov eax, dword ptr fs:[0]
// 00575556  6aff                 push -1
// 00575558  684e057d00           push 0x7d054e
// 0057555d  50                   push eax
// 0057555e  b801000000           mov eax, 1
// 00575563  64892500000000       mov dword ptr fs:[0], esp
// 0057556a  8405f0519700         test byte ptr [0x9751f0], al
// 00575570  7530                 jne 0x5755a2
// 00575572  0905f0519700         or dword ptr [0x9751f0], eax
// 00575578  6aff                 push -1
// 0057557a  688c108400           push 0x84108c
// 0057557f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00575587  e804eafdff           call 0x553f90
// 0057558c  83c408               add esp, 8
// 0057558f  a3ec519700           mov dword ptr [0x9751ec], eax
// 00575594  8b0c24               mov ecx, dword ptr [esp]
// 00575597  64890d00000000       mov dword ptr fs:[0], ecx
// 0057559e  83c40c               add esp, 0xc
// 005755a1  c3                   ret 
// 005755a2  8b0c24               mov ecx, dword ptr [esp]
// 005755a5  a1ec519700           mov eax, dword ptr [0x9751ec]
// 005755aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005755b1  83c40c               add esp, 0xc
// 005755b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
