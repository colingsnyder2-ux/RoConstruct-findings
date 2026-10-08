// roc 2010-06 006c2a30  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c2a30
//
// 006c2a30  6810c45a00           push 0x5ac410
// 006c2a35  68c4c1c000           push 0xc0c1c4
// 006c2a3a  e851ecd3ff           call 0x401690
// 006c2a3f  83c408               add esp, 8
// 006c2a42  e9f982eeff           jmp 0x5aad40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
