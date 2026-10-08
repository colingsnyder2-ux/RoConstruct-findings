// roc 2010-06 0040b460  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040b460
//
// 0040b460  68c0954000           push 0x4095c0
// 0040b465  68bcfbbf00           push 0xbffbbc
// 0040b46a  e82162ffff           call 0x401690
// 0040b46f  83c408               add esp, 8
// 0040b472  e909ddffff           jmp 0x409180
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
