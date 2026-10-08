// roc 2010-06 0040b160  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040b160
//
// 0040b160  68b0954000           push 0x4095b0
// 0040b165  68b8fbbf00           push 0xbffbb8
// 0040b16a  e82165ffff           call 0x401690
// 0040b16f  83c408               add esp, 8
// 0040b172  e999dfffff           jmp 0x409110
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
