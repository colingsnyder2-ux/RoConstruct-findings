// roc 2011-06 006fa070  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fa070
//
// 006fa070  6840135c00           push 0x5c1340
// 006fa075  68dce5cb00           push 0xcbe5dc
// 006fa07a  e89175d0ff           call 0x401610
// 006fa07f  83c408               add esp, 8
// 006fa082  e9c95cecff           jmp 0x5bfd50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
