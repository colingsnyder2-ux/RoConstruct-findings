// roc 2011-06 0075cc10  unit: RBX::BoxSelectCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075cc10
//
// 0075cc10  6860c27500           push 0x75c260
// 0075cc15  68e851cd00           push 0xcd51e8
// 0075cc1a  e8f149caff           call 0x401610
// 0075cc1f  83c408               add esp, 8
// 0075cc22  e949f4ffff           jmp 0x75c070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
