// roc 2007-08 00602cb0  unit: RBX::FallingDown  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602cb0
//
// 00602cb0  68e87f8c00           push 0x8c7fe8
// 00602cb5  68a02c6000           push 0x602ca0
// 00602cba  e861281200           call 0x725520
// 00602cbf  83c408               add esp, 8
// 00602cc2  e969ffffff           jmp 0x602c30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
