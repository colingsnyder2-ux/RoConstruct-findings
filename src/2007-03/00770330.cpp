// roc 2007-03 00770330  unit: seg_00770000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770330
//
// 00770330  33c9                 xor ecx, ecx
// 00770332  51                   push ecx
// 00770333  68c0a77900           push 0x79a7c0
// 00770338  68c4ae7900           push 0x79aec4
// 0077033d  51                   push ecx
// 0077033e  b8201e4900           mov eax, 0x491e20
// 00770343  50                   push eax
// 00770344  b990888b00           mov ecx, 0x8b8890
// 00770349  e802fbd1ff           call 0x48fe50
// 0077034e  68f0857700           push 0x7785f0
// 00770353  e85beeeaff           call 0x61f1b3
// 00770358  59                   pop ecx
// 00770359  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__EfuncChat@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
