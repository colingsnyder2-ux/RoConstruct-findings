// roc 2009-06 0040af50  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040af50
//
// 0040af50  68d0954000           push 0x4095d0
// 0040af55  681898a300           push 0xa39818
// 0040af5a  e8b167ffff           call 0x401710
// 0040af5f  83c408               add esp, 8
// 0040af62  e999e1ffff           jmp 0x409100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
