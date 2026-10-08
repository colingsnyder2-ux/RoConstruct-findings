// roc 2007-08 005e6760  unit: RBX::VFlag::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e6760
//
// 005e6760  6854308c00           push 0x8c3054
// 005e6765  6800b35700           push 0x57b300
// 005e676a  e8b1ed1300           call 0x725520
// 005e676f  83c408               add esp, 8
// 005e6772  e98944f9ff           jmp 0x57ac00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
