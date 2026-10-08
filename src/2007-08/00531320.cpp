// roc 2007-08 00531320  unit: RBX::VModelInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00531320
//
// 00531320  68bcae8b00           push 0x8baebc
// 00531325  6890354000           push 0x403590
// 0053132a  e8f1411f00           call 0x725520
// 0053132f  83c408               add esp, 8
// 00531332  e96912edff           jmp 0x4025a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
