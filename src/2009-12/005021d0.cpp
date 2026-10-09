// roc 2009-12 005021d0  unit: RBX::VShirt::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005021d0
//
// 005021d0  68f0684f00           push 0x4f68f0
// 005021d5  6870deb700           push 0xb7de70
// 005021da  e851f4efff           call 0x401630
// 005021df  83c408               add esp, 8
// 005021e2  e9b938ffff           jmp 0x4f5aa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
