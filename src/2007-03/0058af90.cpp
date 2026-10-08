// roc 2007-03 0058af90  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058af90
//
// 0058af90  689c648b00           push 0x8b649c
// 0058af95  6870ca4400           push 0x44ca70
// 0058af9a  e8b1b81900           call 0x726850
// 0058af9f  83c408               add esp, 8
// 0058afa2  e9e90cecff           jmp 0x44bc90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
