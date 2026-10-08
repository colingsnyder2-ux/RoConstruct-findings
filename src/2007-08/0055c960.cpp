// roc 2007-08 0055c960  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055c960
//
// 0055c960  68c41f8c00           push 0x8c1fc4
// 0055c965  6850c95500           push 0x55c950
// 0055c96a  e8b18b1c00           call 0x725520
// 0055c96f  83c408               add esp, 8
// 0055c972  e959ffffff           jmp 0x55c8d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
