// roc 2007-08 005daed0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005daed0
//
// 005daed0  6824238c00           push 0x8c2324
// 005daed5  6860ed5500           push 0x55ed60
// 005daeda  e841a61400           call 0x725520
// 005daedf  83c408               add esp, 8
// 005daee2  e92938f8ff           jmp 0x55e710
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
