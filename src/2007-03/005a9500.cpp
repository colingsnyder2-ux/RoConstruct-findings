// roc 2007-03 005a9500  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9500
//
// 005a9500  681c8f8b00           push 0x8b8f1c
// 005a9505  68b0d04900           push 0x49d0b0
// 005a950a  e841d31700           call 0x726850
// 005a950f  83c408               add esp, 8
// 005a9512  e9892cefff           jmp 0x49c1a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
