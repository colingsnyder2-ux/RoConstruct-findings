// roc 2008-06 0060abc0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060abc0
//
// 0060abc0  68c0539700           push 0x9753c0
// 0060abc5  6890dd5700           push 0x57dd90
// 0060abca  e861c7f4ff           call 0x557330
// 0060abcf  83c408               add esp, 8
// 0060abd2  e9792bf7ff           jmp 0x57d750
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
