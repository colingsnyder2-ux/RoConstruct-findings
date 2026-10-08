// roc 2011-06 00708da0  unit: RBX::VArcHandles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00708da0
//
// 00708da0  6830145c00           push 0x5c1430
// 00708da5  6818e6cb00           push 0xcbe618
// 00708daa  e86188cfff           call 0x401610
// 00708daf  83c408               add esp, 8
// 00708db2  e92976ebff           jmp 0x5c03e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
