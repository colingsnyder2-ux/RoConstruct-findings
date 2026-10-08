// roc 2011-06 006f6350  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f6350
//
// 006f6350  68e0125c00           push 0x5c12e0
// 006f6355  68c4e5cb00           push 0xcbe5c4
// 006f635a  e8b1b2d0ff           call 0x401610
// 006f635f  83c408               add esp, 8
// 006f6362  e94997ecff           jmp 0x5bfab0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
