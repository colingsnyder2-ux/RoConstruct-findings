// roc 2009-12 00972760  unit: seg_00970000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00972760
//
// 00972760  6a01                 push 1
// 00972762  689cb19b00           push 0x9bb19c
// 00972767  33c9                 xor ecx, ecx
// 00972769  68b0f29c00           push 0x9cf2b0
// 0097276e  51                   push ecx
// 0097276f  b880026700           mov eax, 0x670280
// 00972774  50                   push eax
// 00972775  b99805b900           mov ecx, 0xb90598
// 0097277a  e811bacfff           call 0x66e190
// 0097277f  68904a9800           push 0x984a90
// 00972784  e8a021e8ff           call 0x7f4929
// 00972789  59                   pop ecx
// 0097278a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
