// roc 2012-06 009474b0  unit: RBX::HammerTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009474b0
//
// 009474b0  6890458a00           push 0x8a4590
// 009474b5  68882fe500           push 0xe52f88
// 009474ba  e8e1a0abff           call 0x4015a0
// 009474bf  83c408               add esp, 8
// 009474c2  e969caf5ff           jmp 0x8a3f30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
