// roc 2009-06 00654e70  unit: RBX::DropperTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654e70
//
// 00654e70  6810346500           push 0x653410
// 00654e75  6854c7a400           push 0xa4c754
// 00654e7a  e891c8daff           call 0x401710
// 00654e7f  83c408               add esp, 8
// 00654e82  e929d9ffff           jmp 0x6527b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
