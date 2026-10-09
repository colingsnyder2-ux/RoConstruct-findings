// roc 2009-12 0040aaa0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040aaa0
//
// 0040aaa0  6840954000           push 0x409540
// 0040aaa5  680496b700           push 0xb79604
// 0040aaaa  e8816bffff           call 0x401630
// 0040aaaf  83c408               add esp, 8
// 0040aab2  e969e5ffff           jmp 0x409020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
