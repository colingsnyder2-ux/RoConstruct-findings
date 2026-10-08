// roc 2008-06 0040c600  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c600
//
// 0040c600  6894c39600           push 0x96c394
// 0040c605  6830a04000           push 0x40a030
// 0040c60a  e821ad1400           call 0x557330
// 0040c60f  83c408               add esp, 8
// 0040c612  e949d6ffff           jmp 0x409c60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
