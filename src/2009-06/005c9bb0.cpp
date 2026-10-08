// roc 2009-06 005c9bb0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9bb0
//
// 005c9bb0  68c0174000           push 0x4017c0
// 005c9bb5  683496a300           push 0xa39634
// 005c9bba  e8517be3ff           call 0x401710
// 005c9bbf  83c408               add esp, 8
// 005c9bc2  e99977e3ff           jmp 0x401360
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
