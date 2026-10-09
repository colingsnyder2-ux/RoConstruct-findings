// roc 2009-12 006d5ec0  unit: RBX::LockTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5ec0
//
// 006d5ec0  68c0496d00           push 0x6d49c0
// 006d5ec5  68442db900           push 0xb92d44
// 006d5eca  e861b7d2ff           call 0x401630
// 006d5ecf  83c408               add esp, 8
// 006d5ed2  e939e4ffff           jmp 0x6d4310
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
