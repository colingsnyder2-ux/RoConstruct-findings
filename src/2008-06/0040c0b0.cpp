// roc 2008-06 0040c0b0  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c0b0
//
// 0040c0b0  688cc39600           push 0x96c38c
// 0040c0b5  6810a04000           push 0x40a010
// 0040c0ba  e871b21400           call 0x557330
// 0040c0bf  83c408               add esp, 8
// 0040c0c2  e9b9daffff           jmp 0x409b80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
