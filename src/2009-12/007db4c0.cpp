// roc 2009-12 007db4c0  unit: RBX::LuaDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007db4c0
//
// 007db4c0  6890b47d00           push 0x7db490
// 007db4c5  680490b900           push 0xb99004
// 007db4ca  e86161c2ff           call 0x401630
// 007db4cf  83c408               add esp, 8
// 007db4d2  e9c9fdffff           jmp 0x7db2a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
