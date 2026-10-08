// roc 2010-06 005c49f0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c49f0
//
// 005c49f0  6850865b00           push 0x5b8650
// 005c49f5  689082c100           push 0xc18290
// 005c49fa  e891cce3ff           call 0x401690
// 005c49ff  83c408               add esp, 8
// 005c4a02  e9e93bffff           jmp 0x5b85f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
