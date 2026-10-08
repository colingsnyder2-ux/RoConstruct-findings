// roc 2009-06 0040abf0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040abf0
//
// 0040abf0  68c0954000           push 0x4095c0
// 0040abf5  681498a300           push 0xa39814
// 0040abfa  e8116bffff           call 0x401710
// 0040abff  83c408               add esp, 8
// 0040ac02  e989e4ffff           jmp 0x409090
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
