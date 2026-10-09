// roc 2009-12 00742b50  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00742b50
//
// 00742b50  6840996400           push 0x649940
// 00742b55  68e45fb800           push 0xb85fe4
// 00742b5a  e8d1eacbff           call 0x401630
// 00742b5f  83c408               add esp, 8
// 00742b62  e93959f0ff           jmp 0x6484a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
