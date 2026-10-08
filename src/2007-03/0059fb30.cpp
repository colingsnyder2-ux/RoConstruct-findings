// roc 2007-03 0059fb30  unit: seg_00590000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059fb30
//
// 0059fb30  6830838b00           push 0x8b8330
// 0059fb35  68e0584800           push 0x4858e0
// 0059fb3a  e8116d1800           call 0x726850
// 0059fb3f  83c408               add esp, 8
// 0059fb42  e93954eeff           jmp 0x484f80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
