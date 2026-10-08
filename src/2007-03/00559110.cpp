// roc 2007-03 00559110  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00559110
//
// 00559110  6854c28b00           push 0x8bc254
// 00559115  68405d5500           push 0x555d40
// 0055911a  e831d71c00           call 0x726850
// 0055911f  83c408               add esp, 8
// 00559122  e9a9b9ffff           jmp 0x554ad0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
