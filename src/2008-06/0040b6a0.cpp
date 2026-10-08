// roc 2008-06 0040b6a0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b6a0
//
// 0040b6a0  6880c39600           push 0x96c380
// 0040b6a5  68e09f4000           push 0x409fe0
// 0040b6aa  e881bc1400           call 0x557330
// 0040b6af  83c408               add esp, 8
// 0040b6b2  e979e3ffff           jmp 0x409a30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
