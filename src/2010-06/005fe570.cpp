// roc 2010-06 005fe570  unit: RBX::VScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fe570
//
// 005fe570  68d0dd4100           push 0x41ddd0
// 005fe575  68d007c000           push 0xc007d0
// 005fe57a  e81131e0ff           call 0x401690
// 005fe57f  83c408               add esp, 8
// 005fe582  e999f1e1ff           jmp 0x41d720
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
