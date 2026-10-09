// roc 2009-12 006b4f10  unit: RBX::VStockSound::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4f10
//
// 006b4f10  6810416b00           push 0x6b4110
// 006b4f15  68a01cb900           push 0xb91ca0
// 006b4f1a  e811c7d4ff           call 0x401630
// 006b4f1f  83c408               add esp, 8
// 006b4f22  e9b9ecffff           jmp 0x6b3be0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
