// roc 2009-12 0040b110  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040b110
//
// 0040b110  6860954000           push 0x409560
// 0040b115  680c96b700           push 0xb7960c
// 0040b11a  e81165ffff           call 0x401630
// 0040b11f  83c408               add esp, 8
// 0040b122  e9d9dfffff           jmp 0x409100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
