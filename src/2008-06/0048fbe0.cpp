// roc 2008-06 0048fbe0  unit: RBX::VPants::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fbe0
//
// 0048fbe0  68d0fb9600           push 0x96fbd0
// 0048fbe5  6800ab4800           push 0x48ab00
// 0048fbea  e841770c00           call 0x557330
// 0048fbef  83c408               add esp, 8
// 0048fbf2  e929a4ffff           jmp 0x48a020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
