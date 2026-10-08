// roc 2007-03 005e9ff0  unit: seg_005e0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e9ff0
//
// 005e9ff0  68100f8c00           push 0x8c0f10
// 005e9ff5  68e09f5e00           push 0x5e9fe0
// 005e9ffa  e851c81300           call 0x726850
// 005e9fff  83c408               add esp, 8
// 005ea002  e969ffffff           jmp 0x5e9f70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
