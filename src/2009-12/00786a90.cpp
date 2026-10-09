// roc 2009-12 00786a90  unit: RBX::BoxSelectCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00786a90
//
// 00786a90  68a0617800           push 0x7861a0
// 00786a95  68a888b900           push 0xb988a8
// 00786a9a  e891abc7ff           call 0x401630
// 00786a9f  83c408               add esp, 8
// 00786aa2  e989f6ffff           jmp 0x786130
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
