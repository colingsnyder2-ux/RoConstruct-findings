// roc 2012-06 008f8540  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f8540
//
// 008f8540  6810818f00           push 0x8f8110
// 008f8545  68ec65e500           push 0xe565ec
// 008f854a  e85190b0ff           call 0x4015a0
// 008f854f  83c408               add esp, 8
// 008f8552  e9b9faffff           jmp 0x8f8010
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
