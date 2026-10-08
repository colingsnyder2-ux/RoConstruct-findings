// roc 2010-06 0040b6d0  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040b6d0
//
// 0040b6d0  68d0954000           push 0x4095d0
// 0040b6d5  68c0fbbf00           push 0xbffbc0
// 0040b6da  e8b15fffff           call 0x401690
// 0040b6df  83c408               add esp, 8
// 0040b6e2  e909dbffff           jmp 0x4091f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
