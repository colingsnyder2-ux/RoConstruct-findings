// roc 2007-03 00461e80  unit: seg_00460000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00461e80
//
// 00461e80  68d4638b00           push 0x8b63d4
// 00461e85  68b0814400           push 0x4481b0
// 00461e8a  e8c1492c00           call 0x726850
// 00461e8f  83c408               add esp, 8
// 00461e92  e9f95dfeff           jmp 0x447c90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
