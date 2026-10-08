// roc 2010-06 005c4a90  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4a90
//
// 005c4a90  68b08a5b00           push 0x5b8ab0
// 005c4a95  68b882c100           push 0xc182b8
// 005c4a9a  e8f1cbe3ff           call 0x401690
// 005c4a9f  83c408               add esp, 8
// 005c4aa2  e9a93fffff           jmp 0x5b8a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
