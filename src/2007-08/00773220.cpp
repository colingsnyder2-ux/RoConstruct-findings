// roc 2007-08 00773220  unit: seg_00770000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773220
//
// 00773220  33c9                 xor ecx, ecx
// 00773222  51                   push ecx
// 00773223  68604c7a00           push 0x7a4c60
// 00773228  6810cc7900           push 0x79cc10
// 0077322d  6894027b00           push 0x7b0294
// 00773232  51                   push ecx
// 00773233  b820275900           mov eax, 0x592720
// 00773238  50                   push eax
// 00773239  b9784c8c00           mov ecx, 0x8c4c78
// 0077323e  e84dfae1ff           call 0x592c90
// 00773243  6890ae7700           push 0x77ae90
// 00773248  e8d6daebff           call 0x630d23
// 0077324d  59                   pop ecx
// 0077324e  c3                   ret 
// library rbxgs/v8datamodel\Visit.cpp (function ??__Edesc_setPing@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Visit.cpp
