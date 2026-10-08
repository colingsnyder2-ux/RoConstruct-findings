// roc 2007-03 005a0780  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a0780
//
// 005a0780  6834838b00           push 0x8b8334
// 005a0785  68f0584800           push 0x4858f0
// 005a078a  e8c1601800           call 0x726850
// 005a078f  83c408               add esp, 8
// 005a0792  e96948eeff           jmp 0x485000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
