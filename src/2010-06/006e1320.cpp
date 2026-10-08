// roc 2010-06 006e1320  unit: RBX::VTextLabel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e1320
//
// 006e1320  6830c65a00           push 0x5ac630
// 006e1325  684cc2c000           push 0xc0c24c
// 006e132a  e86103d2ff           call 0x401690
// 006e132f  83c408               add esp, 8
// 006e1332  e9e9a8ecff           jmp 0x5abc20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
