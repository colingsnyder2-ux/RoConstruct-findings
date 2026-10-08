// roc 2007-03 0058ce90  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058ce90
//
// 0058ce90  6884658b00           push 0x8b6584
// 0058ce95  6840604500           push 0x456040
// 0058ce9a  e8b1991900           call 0x726850
// 0058ce9f  83c408               add esp, 8
// 0058cea2  e9998cecff           jmp 0x455b40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
