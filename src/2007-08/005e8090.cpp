// roc 2007-08 005e8090  unit: RBX::VExplosion::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8090
//
// 005e8090  68bc378c00           push 0x8c37bc
// 005e8095  6870dd5800           push 0x58dd70
// 005e809a  e881d41300           call 0x725520
// 005e809f  83c408               add esp, 8
// 005e80a2  e9a956faff           jmp 0x58d750
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
