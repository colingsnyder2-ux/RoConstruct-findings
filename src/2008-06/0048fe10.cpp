// roc 2008-06 0048fe10  unit: RBX::VShirt::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fe10
//
// 0048fe10  68d4fb9600           push 0x96fbd4
// 0048fe15  6810ab4800           push 0x48ab10
// 0048fe1a  e811750c00           call 0x557330
// 0048fe1f  83c408               add esp, 8
// 0048fe22  e969a2ffff           jmp 0x48a090
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
