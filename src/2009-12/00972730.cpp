// roc 2009-12 00972730  unit: seg_00970000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00972730
//
// 00972730  6a01                 push 1
// 00972732  689cb19b00           push 0x9bb19c
// 00972737  33c9                 xor ecx, ecx
// 00972739  68acf29c00           push 0x9cf2ac
// 0097273e  51                   push ecx
// 0097273f  b880026700           mov eax, 0x670280
// 00972744  50                   push eax
// 00972745  b98808b900           mov ecx, 0xb90888
// 0097274a  e841bacfff           call 0x66e190
// 0097274f  68204c9800           push 0x984c20
// 00972754  e8d021e8ff           call 0x7f4929
// 00972759  59                   pop ecx
// 0097275a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunctionOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
