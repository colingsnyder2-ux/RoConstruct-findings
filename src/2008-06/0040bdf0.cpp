// roc 2008-06 0040bdf0  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bdf0
//
// 0040bdf0  6888c39600           push 0x96c388
// 0040bdf5  6800a04000           push 0x40a000
// 0040bdfa  e831b51400           call 0x557330
// 0040bdff  83c408               add esp, 8
// 0040be02  e909ddffff           jmp 0x409b10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
