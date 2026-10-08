// roc 2010-06 00785030  unit: RBX::HUMAN::Seated  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785030
//
// 00785030  6810507800           push 0x785010
// 00785035  688035c200           push 0xc23580
// 0078503a  e851c6c7ff           call 0x401690
// 0078503f  83c408               add esp, 8
// 00785042  e929feffff           jmp 0x784e70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
