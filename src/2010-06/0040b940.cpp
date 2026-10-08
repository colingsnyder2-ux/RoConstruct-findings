// roc 2010-06 0040b940  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040b940
//
// 0040b940  68e0954000           push 0x4095e0
// 0040b945  68c4fbbf00           push 0xbffbc4
// 0040b94a  e8415dffff           call 0x401690
// 0040b94f  83c408               add esp, 8
// 0040b952  e909d9ffff           jmp 0x409260
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
