// roc 2008-06 007f17c0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f17c0
//
// 007f17c0  6a01                 push 1
// 007f17c2  33c9                 xor ecx, ecx
// 007f17c4  51                   push ecx
// 007f17c5  51                   push ecx
// 007f17c6  b8106c4900           mov eax, 0x496c10
// 007f17cb  50                   push eax
// 007f17cc  6890248200           push 0x822490
// 007f17d1  68702b8200           push 0x822b70
// 007f17d6  b9a8039700           mov ecx, 0x9703a8
// 007f17db  e83091caff           call 0x49a910
// 007f17e0  6800b87f00           push 0x7fb800
// 007f17e5  e8c5ffeaff           call 0x6a17af
// 007f17ea  59                   pop ecx
// 007f17eb  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__EpropPlayerCount@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
