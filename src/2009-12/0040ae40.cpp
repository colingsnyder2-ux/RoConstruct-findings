// roc 2009-12 0040ae40  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040ae40
//
// 0040ae40  6850954000           push 0x409550
// 0040ae45  680896b700           push 0xb79608
// 0040ae4a  e8e167ffff           call 0x401630
// 0040ae4f  83c408               add esp, 8
// 0040ae52  e939e2ffff           jmp 0x409090
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
