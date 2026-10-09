// roc 2009-12 007d7ec0  unit: RBX::HUMAN::StrafingNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7ec0
//
// 007d7ec0  68b07e7d00           push 0x7d7eb0
// 007d7ec5  68ec8eb900           push 0xb98eec
// 007d7eca  e86197c2ff           call 0x401630
// 007d7ecf  83c408               add esp, 8
// 007d7ed2  e939ffffff           jmp 0x7d7e10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
