// roc 2011-06 0065eea0  unit: RBX::VExplosion::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065eea0
//
// 0065eea0  68e0b54500           push 0x45b5e0
// 0065eea5  68a039cb00           push 0xcb39a0
// 0065eeaa  e86127daff           call 0x401610
// 0065eeaf  83c408               add esp, 8
// 0065eeb2  e999b4dfff           jmp 0x45a350
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
