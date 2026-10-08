// roc 2011-06 005fe520  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005fe520
//
// 005fe520  68603d4200           push 0x423d60
// 005fe525  685025cb00           push 0xcb2550
// 005fe52a  e8e130e0ff           call 0x401610
// 005fe52f  83c408               add esp, 8
// 005fe532  e9a956e2ff           jmp 0x423be0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
