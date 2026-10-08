// roc 2007-08 00595210  unit: RBX::DropperTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595210
//
// 00595210  68b44d8c00           push 0x8c4db4
// 00595215  68a03c5900           push 0x593ca0
// 0059521a  e801031900           call 0x725520
// 0059521f  83c408               add esp, 8
// 00595222  e969dfffff           jmp 0x593190
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
