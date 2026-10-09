// roc 2009-12 0074cc10  unit: RBX::VArcHandles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0074cc10
//
// 0074cc10  68209a6400           push 0x649a20
// 0074cc15  681c60b800           push 0xb8601c
// 0074cc1a  e8114acbff           call 0x401630
// 0074cc1f  83c408               add esp, 8
// 0074cc22  e999beefff           jmp 0x648ac0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
