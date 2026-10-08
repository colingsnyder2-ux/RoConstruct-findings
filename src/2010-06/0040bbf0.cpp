// roc 2010-06 0040bbf0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040bbf0
//
// 0040bbf0  68f0954000           push 0x4095f0
// 0040bbf5  68c8fbbf00           push 0xbffbc8
// 0040bbfa  e8915affff           call 0x401690
// 0040bbff  83c408               add esp, 8
// 0040bc02  e9c9d6ffff           jmp 0x4092d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
