// roc 2007-08 00770640  unit: seg_00770000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770640
//
// 00770640  33c9                 xor ecx, ecx
// 00770642  51                   push ecx
// 00770643  68ac557a00           push 0x7a55ac
// 00770648  68a8557a00           push 0x7a55a8
// 0077064d  51                   push ecx
// 0077064e  b8403d5300           mov eax, 0x533d40
// 00770653  50                   push eax
// 00770654  b940118c00           mov ecx, 0x8c1140
// 00770659  e83233dcff           call 0x533990
// 0077065e  6870947700           push 0x779470
// 00770663  e8bb06ecff           call 0x630d23
// 00770668  59                   pop ecx
// 00770669  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??__Efunc_setSelection@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
