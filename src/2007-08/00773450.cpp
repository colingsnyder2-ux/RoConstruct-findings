// roc 2007-08 00773450  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773450
//
// 00773450  68e42c7b00           push 0x7b2ce4
// 00773455  68d82c7b00           push 0x7b2cd8
// 0077345a  b930528c00           mov ecx, 0x8c5230
// 0077345f  e80cb7e2ff           call 0x59eb70
// 00773464  6860b07700           push 0x77b060
// 00773469  e8b5d8ebff           call 0x630d23
// 0077346e  59                   pop ecx
// 0077346f  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_Selected@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
