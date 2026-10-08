// roc 2007-03 005ce570  unit: seg_005c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ce570
//
// 005ce570  68a0c28b00           push 0x8bc2a0
// 005ce575  68705e5500           push 0x555e70
// 005ce57a  e8d1821500           call 0x726850
// 005ce57f  83c408               add esp, 8
// 005ce582  e9996df8ff           jmp 0x555320
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
