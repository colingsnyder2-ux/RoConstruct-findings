// roc 2007-03 0049f060  unit: seg_00490000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049f060
//
// 0049f060  68108f8b00           push 0x8b8f10
// 0049f065  6880d04900           push 0x49d080
// 0049f06a  e8e1772800           call 0x726850
// 0049f06f  83c408               add esp, 8
// 0049f072  e9a9cfffff           jmp 0x49c020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
