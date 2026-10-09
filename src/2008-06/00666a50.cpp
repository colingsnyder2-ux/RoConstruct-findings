// roc 2008-06 00666a50  unit: RBX::HUMAN::Landed  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666a50
//
// 00666a50  64a100000000         mov eax, dword ptr fs:[0]
// 00666a56  6aff                 push -1
// 00666a58  689ec17d00           push 0x7dc19e
// 00666a5d  50                   push eax
// 00666a5e  b801000000           mov eax, 1
// 00666a63  64892500000000       mov dword ptr fs:[0], esp
// 00666a6a  84058cd99700         test byte ptr [0x97d98c], al
// 00666a70  7530                 jne 0x666aa2
// 00666a72  09058cd99700         or dword ptr [0x97d98c], eax
// 00666a78  6aff                 push -1
// 00666a7a  6868cc8400           push 0x84cc68
// 00666a7f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00666a87  e804d5eeff           call 0x553f90
// 00666a8c  83c408               add esp, 8
// 00666a8f  a388d99700           mov dword ptr [0x97d988], eax
// 00666a94  8b0c24               mov ecx, dword ptr [esp]
// 00666a97  64890d00000000       mov dword ptr fs:[0], ecx
// 00666a9e  83c40c               add esp, 0xc
// 00666aa1  c3                   ret 
// 00666aa2  8b0c24               mov ecx, dword ptr [esp]
// 00666aa5  a188d99700           mov eax, dword ptr [0x97d988]
// 00666aaa  64890d00000000       mov dword ptr fs:[0], ecx
// 00666ab1  83c40c               add esp, 0xc
// 00666ab4  c3                   ret 
// library openrbx-client/App\humanoid\Running.cpp (function ??$doDeclare@$1?sRunning@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Running.cpp
