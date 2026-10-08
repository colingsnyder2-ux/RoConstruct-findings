// roc 2010-06 0040ae00  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040ae00
//
// 0040ae00  68a0954000           push 0x4095a0
// 0040ae05  68b4fbbf00           push 0xbffbb4
// 0040ae0a  e88168ffff           call 0x401690
// 0040ae0f  83c408               add esp, 8
// 0040ae12  e989e2ffff           jmp 0x4090a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
