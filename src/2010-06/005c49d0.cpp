// roc 2010-06 005c49d0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c49d0
//
// 005c49d0  68b0835b00           push 0x5b83b0
// 005c49d5  687882c100           push 0xc18278
// 005c49da  e8b1cce3ff           call 0x401690
// 005c49df  83c408               add esp, 8
// 005c49e2  e96939ffff           jmp 0x5b8350
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
