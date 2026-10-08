// roc 2008-06 005d18c0  unit: RBX::VBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d18c0
//
// 005d18c0  68bcfb9600           push 0x96fbbc
// 005d18c5  68b0aa4800           push 0x48aab0
// 005d18ca  e8615af8ff           call 0x557330
// 005d18cf  83c408               add esp, 8
// 005d18d2  e91985ebff           jmp 0x489df0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
