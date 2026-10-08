// roc 2007-08 00770610  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770610
//
// 00770610  33c9                 xor ecx, ecx
// 00770612  51                   push ecx
// 00770613  68a4557a00           push 0x7a55a4
// 00770618  51                   push ecx
// 00770619  b840245300           mov eax, 0x532440
// 0077061e  50                   push eax
// 0077061f  b910118c00           mov ecx, 0x8c1110
// 00770624  e89732dcff           call 0x5338c0
// 00770629  6880947700           push 0x779480
// 0077062e  e8f006ecff           call 0x630d23
// 00770633  59                   pop ecx
// 00770634  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??__Efunc_getSelection@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
