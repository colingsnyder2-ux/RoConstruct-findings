// roc 2010-06 005fe650  unit: RBX::VLocalScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fe650
//
// 005fe650  68e0dd4100           push 0x41dde0
// 005fe655  68d407c000           push 0xc007d4
// 005fe65a  e83130e0ff           call 0x401690
// 005fe65f  83c408               add esp, 8
// 005fe662  e929f1e1ff           jmp 0x41d790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
