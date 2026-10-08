// roc 2007-08 005f1960  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1960
//
// 005f1960  6804788c00           push 0x8c7804
// 005f1965  68900c5f00           push 0x5f0c90
// 005f196a  e8b13b1300           call 0x725520
// 005f196f  83c408               add esp, 8
// 005f1972  e9d9eeffff           jmp 0x5f0850
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
