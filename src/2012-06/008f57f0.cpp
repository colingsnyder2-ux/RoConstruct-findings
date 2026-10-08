// roc 2012-06 008f57f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f57f0
//
// 008f57f0  68c0817e00           push 0x7e81c0
// 008f57f5  6874eae400           push 0xe4ea74
// 008f57fa  e8a1bdb0ff           call 0x4015a0
// 008f57ff  83c408               add esp, 8
// 008f5802  e9a915efff           jmp 0x7e6db0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
