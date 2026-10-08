// roc 2012-06 008f38f0  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f38f0
//
// 008f38f0  6860388f00           push 0x8f3860
// 008f38f5  683461e500           push 0xe56134
// 008f38fa  e8a1dcb0ff           call 0x4015a0
// 008f38ff  83c408               add esp, 8
// 008f3902  e9d9feffff           jmp 0x8f37e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
