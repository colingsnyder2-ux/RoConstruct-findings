// roc 2009-06 006b7120  unit: RBX::BoxSelectCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b7120
//
// 006b7120  6830696b00           push 0x6b6930
// 006b7125  68ecfca400           push 0xa4fcec
// 006b712a  e8e1a5d4ff           call 0x401710
// 006b712f  83c408               add esp, 8
// 006b7132  e989f7ffff           jmp 0x6b68c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
