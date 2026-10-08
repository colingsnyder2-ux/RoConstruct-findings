// roc 2008-06 00636350  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636350
//
// 00636350  6864cb9700           push 0x97cb64
// 00636355  6890356300           push 0x633590
// 0063635a  e8d10ff2ff           call 0x557330
// 0063635f  83c408               add esp, 8
// 00636362  e9b9d0ffff           jmp 0x633420
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
