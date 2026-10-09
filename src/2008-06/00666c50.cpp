// roc 2008-06 00666c50  unit: RBX::HUMAN::Dead  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666c50
//
// 00666c50  64a100000000         mov eax, dword ptr fs:[0]
// 00666c56  6aff                 push -1
// 00666c58  68bec17d00           push 0x7dc1be
// 00666c5d  50                   push eax
// 00666c5e  b801000000           mov eax, 1
// 00666c63  64892500000000       mov dword ptr fs:[0], esp
// 00666c6a  840598d99700         test byte ptr [0x97d998], al
// 00666c70  7530                 jne 0x666ca2
// 00666c72  090598d99700         or dword ptr [0x97d998], eax
// 00666c78  6aff                 push -1
// 00666c7a  68cccc8400           push 0x84cccc
// 00666c7f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00666c87  e804d3eeff           call 0x553f90
// 00666c8c  83c408               add esp, 8
// 00666c8f  a394d99700           mov dword ptr [0x97d994], eax
// 00666c94  8b0c24               mov ecx, dword ptr [esp]
// 00666c97  64890d00000000       mov dword ptr fs:[0], ecx
// 00666c9e  83c40c               add esp, 0xc
// 00666ca1  c3                   ret 
// 00666ca2  8b0c24               mov ecx, dword ptr [esp]
// 00666ca5  a194d99700           mov eax, dword ptr [0x97d994]
// 00666caa  64890d00000000       mov dword ptr fs:[0], ecx
// 00666cb1  83c40c               add esp, 0xc
// 00666cb4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
