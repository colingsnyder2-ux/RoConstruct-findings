// roc 2010-06 005c4a70  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4a70
//
// 005c4a70  68408a5b00           push 0x5b8a40
// 005c4a75  68b482c100           push 0xc182b4
// 005c4a7a  e811cce3ff           call 0x401690
// 005c4a7f  83c408               add esp, 8
// 005c4a82  e9593fffff           jmp 0x5b89e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
