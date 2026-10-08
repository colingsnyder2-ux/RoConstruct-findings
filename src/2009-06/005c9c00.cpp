// roc 2009-06 005c9c00  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9c00
//
// 005c9c00  68d0174000           push 0x4017d0
// 005c9c05  683896a300           push 0xa39638
// 005c9c0a  e8017be3ff           call 0x401710
// 005c9c0f  83c408               add esp, 8
// 005c9c12  e9b977e3ff           jmp 0x4013d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
