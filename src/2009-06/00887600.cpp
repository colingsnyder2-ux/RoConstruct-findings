// roc 2009-06 00887600  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887600
//
// 00887600  6a01                 push 1
// 00887602  33c9                 xor ecx, ecx
// 00887604  51                   push ecx
// 00887605  51                   push ecx
// 00887606  b8904b4c00           mov eax, 0x4c4b90
// 0088760b  50                   push eax
// 0088760c  68584e8c00           push 0x8c4e58
// 00887611  68e0538c00           push 0x8c53e0
// 00887616  b98cdda300           mov ecx, 0xa3dd8c
// 0088761b  e8901ec4ff           call 0x4c94b0
// 00887620  68e0558900           push 0x8955e0
// 00887625  e8d124e9ff           call 0x719afb
// 0088762a  59                   pop ecx
// 0088762b  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__EpropPlayerCount@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
