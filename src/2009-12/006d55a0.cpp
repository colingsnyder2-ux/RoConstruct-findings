// roc 2009-12 006d55a0  unit: RBX::StudsTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d55a0
//
// 006d55a0  6830496d00           push 0x6d4930
// 006d55a5  68202db900           push 0xb92d20
// 006d55aa  e881c0d2ff           call 0x401630
// 006d55af  83c408               add esp, 8
// 006d55b2  e969e9ffff           jmp 0x6d3f20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
