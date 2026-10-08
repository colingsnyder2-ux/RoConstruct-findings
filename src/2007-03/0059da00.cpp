// roc 2007-03 0059da00  unit: seg_00590000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059da00
//
// 0059da00  6824838b00           push 0x8b8324
// 0059da05  68b0584800           push 0x4858b0
// 0059da0a  e8418e1800           call 0x726850
// 0059da0f  83c408               add esp, 8
// 0059da12  e9e973eeff           jmp 0x484e00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
