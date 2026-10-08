// roc 2009-06 005f6470  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f6470
//
// 005f6470  6800f75e00           push 0x5ef700
// 005f6475  68eca4a400           push 0xa4a4ec
// 005f647a  e891b2e0ff           call 0x401710
// 005f647f  83c408               add esp, 8
// 005f6482  e91992ffff           jmp 0x5ef6a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
