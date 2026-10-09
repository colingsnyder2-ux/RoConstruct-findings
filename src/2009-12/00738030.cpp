// roc 2009-12 00738030  unit: RBX::VBodyForce::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00738030
//
// 00738030  68b0996400           push 0x6499b0
// 00738035  680060b800           push 0xb86000
// 0073803a  e8f195ccff           call 0x401630
// 0073803f  83c408               add esp, 8
// 00738042  e96907f1ff           jmp 0x6487b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
