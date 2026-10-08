// roc 2012-06 008f31b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f31b0
//
// 008f31b0  6850308f00           push 0x8f3050
// 008f31b5  689860e500           push 0xe56098
// 008f31ba  e8e1e3b0ff           call 0x4015a0
// 008f31bf  83c408               add esp, 8
// 008f31c2  e919feffff           jmp 0x8f2fe0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
