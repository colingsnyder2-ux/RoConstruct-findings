// roc 2010-06 005c3270  unit: RBX::N$1?sDoubleConstrainedValue::V?$ConstrainedValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c3270
//
// 005c3270  6820c75a00           push 0x5ac720
// 005c3275  6888c2c000           push 0xc0c288
// 005c327a  e811e4e3ff           call 0x401690
// 005c327f  83c408               add esp, 8
// 005c3282  e92990feff           jmp 0x5ac2b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
