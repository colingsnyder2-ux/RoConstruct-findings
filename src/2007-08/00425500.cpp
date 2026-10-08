// roc 2007-08 00425500  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00425500
//
// 00425500  68dcb48b00           push 0x8bb4dc
// 00425505  68c0064200           push 0x4206c0
// 0042550a  e811003000           call 0x725520
// 0042550f  83c408               add esp, 8
// 00425512  e929abffff           jmp 0x420040
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
